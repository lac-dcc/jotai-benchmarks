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
       0            empty\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  size_t u16 ;
struct selinux_map {size_t size; TYPE_1__* mapping; } ;
struct TYPE_2__ {size_t value; } ;

/* Variables and functions */

__attribute__((used)) static u16 unmap_class(struct selinux_map *map, u16 tclass)
{
	if (tclass < map->size)
		return map->mapping[tclass].value;

	return tclass;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          unsigned long tclass = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_map0 = 1;
          struct selinux_map * map = (struct selinux_map *) malloc(_len_map0*sizeof(struct selinux_map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
              map[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_map__i0__mapping0 = 1;
          map[_i0].mapping = (struct TYPE_2__ *) malloc(_len_map__i0__mapping0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_map__i0__mapping0; _j0++) {
              map[_i0].mapping->value = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned long benchRet = unmap_class(map,tclass);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_map0; _aux++) {
          free(map[_aux].mapping);
          }
          free(map);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
