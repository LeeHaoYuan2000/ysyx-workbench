#include "../difftest.h"

typedef void(*io_callback_t)(u_int32_t, int, bool);
u_int8_t* new_space(int size);

typedef struct {
  const char *name;
  // we treat ioaddr_t as paddr_t here
  u_int64_t low;
  u_int64_t high;
  void *space;
  io_callback_t callback;
} IOMap;

 inline bool map_inside(IOMap *map, u_int64_t addr) {//make sure the addr is in the map address range
  return (addr >= map->low && addr <= map->high);
}

 inline int find_mapid_by_addr(IOMap *maps, int size, u_int64_t addr) {
  int i;
  for (i = 0; i < size; i ++) {
    if (map_inside(maps + i, addr)) {
      //difftest_skip_ref();
      return i;
    }
  }
  return -1;
}

void add_pio_map(const char *name, u_int64_t addr,
        void *space, u_int32_t len, io_callback_t callback);
void add_mmio_map(const char *name, u_int64_t addr,
        void *space, u_int32_t len, io_callback_t callback);

u_int64_t map_read(u_int64_t addr, int len, IOMap *map);
void map_write(u_int64_t addr, int len, u_int64_t data, IOMap *map);

void init_map();
