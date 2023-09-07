#include <proc.h>
#include <elf.h>
#include "../include/ramdisk.h"

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif


#if defined(__ISA_AM_NATIVE__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_X86__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_RISCV64__)
# define EXPECT_TYPE EM_RISCV
#elif defined(__ISA_RISCV32__)
# define EXPECT_TYPE EM_RISCV
#elif defined(__ISA_MIPS32__)
# define EXPECT_TYPE EM_MIPS
#else
# error Unsupported ISA
#endif


extern uint8_t ramdisk_start;
extern uint8_t ramdisk_end;
#define RAMDISK_SIZE ((&ramdisk_end) - (&ramdisk_start)) //size of the ramdisk

void display_elf_header(Elf_Ehdr *elf_header);
void display_program_header(Elf_Phdr *program_header);


static uintptr_t loader(PCB *pcb, const char *filename) {

  unsigned char *data_begin_ptr = NULL;
  bool data_begin_flag = false;

  unsigned char *elf_file = (unsigned char *)malloc(sizeof(Elf64_Ehdr)); //maybe use too much size in this place

  printf("elf_file adress %x\n",elf_file);

  ramdisk_read((void *)elf_file,0,sizeof(Elf64_Ehdr));//read the elf file from the ramdisk 

  Elf_Ehdr *elf_header     = (Elf_Ehdr *)elf_file;  //the elf file header

  Elf_Phdr *program_header = (Elf_Phdr *)malloc(sizeof(Elf64_Phdr) * elf_header->e_phnum);

  ramdisk_read((void *)program_header, elf_header->e_phoff, sizeof(Elf64_Phdr) * elf_header->e_phnum);

  //Elf_Phdr *program_header = (Elf_Phdr *)(elf_file + elf_header->e_phoff);

  /*-------------Check The ELF File Header ------------------*/

    assert( *(uint32_t *)elf_header->e_ident == 0x464c457f );// ckeck the magic number
    assert(elf_header->e_machine == EXPECT_TYPE);

  /*------read the data through the program header----------*/
    display_elf_header(elf_header);

  for(int i = 0; i < elf_header->e_phnum ; i++){
      display_program_header((program_header + i));
      //when the type is PT_LOAD then load the data
      if((program_header + i)->p_type == PT_LOAD){
        unsigned char *current_ptr = (unsigned char *)(program_header + i)->p_vaddr;

        if(!data_begin_flag){
          data_begin_flag = true;
          data_begin_ptr = current_ptr;
        }

        ramdisk_read((void *)current_ptr,(program_header + i)->p_offset,(program_header + i)->p_memsz);//write the data to the mem 

        //reset the mem between the filesz and the memsize
        for(int n = 0; n < (program_header + i)->p_memsz - (program_header + i)->p_filesz ; n++){
            *(current_ptr + program_header->p_filesz + n) = 0;
        }

      }
  }

  printf("instruction : %x %x  \n",*(uint32_t*)data_begin_ptr,*((uint32_t*)data_begin_ptr + 1));
  printf("program entry: %x \n",elf_header->e_entry);
  //TODO();
  return (uintptr_t)elf_header->e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}



void display_elf_header(Elf_Ehdr *elf_header){
  printf("\n");
  printf("\n");

  printf("ELF Header: \n");
  printf("Magic: ");
  for(int i = 0; i < 16 ; i++){
    printf("%x   ",elf_header->e_ident[i]);
  }
  printf("\n");
  printf("Type:       %x\n",elf_header->e_type);
  printf("Machine:    %x\n",elf_header->e_machine);
  printf("Version:    %x\n",elf_header->e_version);
  printf("Entry:      %x\n",elf_header->e_entry);
  printf("PH_offset:  %x\n",elf_header->e_phoff);
  printf("SH_offset:  %x\n",elf_header->e_shoff);
  printf("Flags:      %x\n",elf_header->e_flags);
  printf("ELF Header Size:                   %x\n",elf_header->e_ehsize);
  printf("Program header table entry size:   %x\n",elf_header->e_phentsize);
  printf("Program header table entry count:  %x\n",elf_header->e_phnum);
  printf("Section header table entry size:   %x\n",elf_header->e_shentsize);
  printf("Section header table entry count:  %x\n",elf_header->e_shnum);
  printf("Section header string table index: %x\n",elf_header->e_shstrndx);

  printf("\n");
  printf("\n");


}

void display_program_header(Elf_Phdr *program_header){

  printf("\n");

  printf("Program Header:     \n");
  printf("Type:               %x\n",program_header->p_type);
  printf("Flags:              %x\n",program_header->p_flags);
  printf("Offset:             %x\n",program_header->p_offset);
  printf("Vaddr:              %x\n",program_header->p_vaddr);
  printf("Paddr:              %x\n",program_header->p_paddr);
  printf("File Size:          %x\n",program_header->p_filesz);
  printf("Mem Size:           %x\n",program_header->p_memsz);
  printf("Alignment:          %x\n",program_header->p_align);

  printf("\n");

}

