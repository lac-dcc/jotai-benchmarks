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
typedef  int u_long ;
struct pcm_int_data {int bus_width; } ;
struct map_info {int pfow_base; struct pcm_int_data* fldrv_priv; } ;

/* Variables and functions */

__attribute__((used)) static inline u_long ow_reg_add(struct map_info *map, u_long offset)
{
	u_long val = 0;
	struct pcm_int_data *pcm_data = map->fldrv_priv;

	val = map->pfow_base + offset*pcm_data->bus_width;

	return val;
}


// ------------------------------------------------------------------------- //




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
          int offset = 100;
          int _len_map0 = 1;
          struct map_info * map = (struct map_info *) malloc(_len_map0*sizeof(struct map_info));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
            map[_i0].pfow_base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_map__i0__fldrv_priv0 = 1;
          map[_i0].fldrv_priv = (struct pcm_int_data *) malloc(_len_map__i0__fldrv_priv0*sizeof(struct pcm_int_data));
          for(int _j0 = 0; _j0 < _len_map__i0__fldrv_priv0; _j0++) {
            map[_i0].fldrv_priv->bus_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ow_reg_add(map,offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_map0; _aux++) {
          free(map[_aux].fldrv_priv);
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
