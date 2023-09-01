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

extern uint8_t ramdisk_start;
extern uint8_t ramdisk_end;
#define RAMDISK_SIZE ((&ramdisk_end) - (&ramdisk_start)) //size of the ramdisk

void display_elf_header(Elf_Ehdr *elf_header);

static uintptr_t loader(PCB *pcb, const char *filename) {

  unsigned char elf_file[RAMDISK_SIZE];

  ramdisk_read((void *)elf_file,0,RAMDISK_SIZE);//read the elf file from the ramdisk 

  Elf_Ehdr *elf_header     = (Elf_Ehdr *)elf_file;
  Elf_Phdr *program_header = (Elf_Phdr *)(elf_file + elf_header->e_phoff);

  long int program_filesize = program_header->p_filesz;
  long int program_memsize  = program_header->p_memsz;
  unsigned long int program_Vaddr = program_header->p_vaddr;
  long int program_offset = program_header->p_offset;

  unsigned char *program = (char *)malloc(program_header->p_memsz);//

  ramdisk_read((void *)program, program_header->p_offset, program_header->p_memsz);

  display_elf_header(elf_header);

  printf("program addr = %x \n", program);
  printf("instruction = %x \n",*(uintptr_t*)program);

  //TODO();
  return (uintptr_t)program;
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

