// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */

/* Type definitions */
typedef  scalar_t__ u64 ;
struct map {scalar_t__ pgoff; scalar_t__ start; } ;

/* Variables and functions */

__attribute__((used)) static inline u64 map__map_ip(struct map *map, u64 ip)
{
	return ip - map->start + map->pgoff;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          long ip = 100;
        
          int _len_map0 = 1;
          struct map * map = (struct map *) malloc(_len_map0*sizeof(struct map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
              map[_i0].pgoff = ((-2 * (next_i()%2)) + 1) * next_i();
          map[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          long benchRet = map__map_ip(map,ip);
          printf("%ld\n", benchRet); 
          free(map);
        
        break;
    }
    // big-arr
    case 1:
    {
          long ip = 255;
        
          int _len_map0 = 65025;
          struct map * map = (struct map *) malloc(_len_map0*sizeof(struct map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
              map[_i0].pgoff = ((-2 * (next_i()%2)) + 1) * next_i();
          map[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          long benchRet = map__map_ip(map,ip);
          printf("%ld\n", benchRet); 
          free(map);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long ip = 10;
        
          int _len_map0 = 100;
          struct map * map = (struct map *) malloc(_len_map0*sizeof(struct map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
              map[_i0].pgoff = ((-2 * (next_i()%2)) + 1) * next_i();
          map[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          long benchRet = map__map_ip(map,ip);
          printf("%ld\n", benchRet); 
          free(map);
        
        break;
    }
    // empty
    case 3:
    {
          long ip = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_map0 = 1;
          struct map * map = (struct map *) malloc(_len_map0*sizeof(struct map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
              map[_i0].pgoff = ((-2 * (next_i()%2)) + 1) * next_i();
          map[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          long benchRet = map__map_ip(map,ip);
          printf("%ld\n", benchRet); 
          free(map);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
