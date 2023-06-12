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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {size_t zeroth_band; size_t* bands; scalar_t__ next_band; } ;
typedef  TYPE_1__ shadow_map_t ;
typedef  scalar_t__ boolean_t ;
typedef  size_t band_number_t ;

/* Variables and functions */
 size_t BAND_ZERO ; 
 scalar_t__ FALSE ; 
 scalar_t__ TRUE ; 

__attribute__((used)) static boolean_t
shadow_map_mapped_band(shadow_map_t * map, band_number_t band,
		       boolean_t map_it, band_number_t * mapped_band)
{
    boolean_t		is_mapped = FALSE;

    if (band == map->zeroth_band) {
	*mapped_band = BAND_ZERO;
	is_mapped = TRUE;
    }
    else {
	*mapped_band = map->bands[band];
	if (*mapped_band == BAND_ZERO) {
	    if (map_it) {
		/* grow the file */
		if (map->next_band == 0) {
		    /* remember the zero'th band */
		    map->zeroth_band = band;
		}
		*mapped_band = map->bands[band] = map->next_band++;
		is_mapped = TRUE;
	    }
	}
	else {
	    is_mapped = TRUE;
	}
    }
    return (is_mapped);
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
          unsigned long band = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long map_it = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_map0 = 1;
          struct TYPE_3__ * map = (struct TYPE_3__ *) malloc(_len_map0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
              map[_i0].zeroth_band = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_map__i0__bands0 = 1;
          map[_i0].bands = (unsigned long *) malloc(_len_map__i0__bands0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_map__i0__bands0; _j0++) {
            map[_i0].bands[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          map[_i0].next_band = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_mapped_band0 = 1;
          unsigned long * mapped_band = (unsigned long *) malloc(_len_mapped_band0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_mapped_band0; _i0++) {
            mapped_band[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          long benchRet = shadow_map_mapped_band(map,band,map_it,mapped_band);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_map0; _aux++) {
          free(map[_aux].bands);
          }
          free(map);
          free(mapped_band);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
