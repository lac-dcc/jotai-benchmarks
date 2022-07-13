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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int /*<<< orphan*/  tracing_map_cmp_fn_t ;
struct tracing_map {int n_fields; TYPE_1__* fields; } ;
struct TYPE_2__ {int /*<<< orphan*/  cmp_fn; } ;

/* Variables and functions */
 int EINVAL ; 
 int TRACING_MAP_FIELDS_MAX ; 

__attribute__((used)) static int tracing_map_add_field(struct tracing_map *map,
				 tracing_map_cmp_fn_t cmp_fn)
{
	int ret = -EINVAL;

	if (map->n_fields < TRACING_MAP_FIELDS_MAX) {
		ret = map->n_fields;
		map->fields[map->n_fields++].cmp_fn = cmp_fn;
	}

	return ret;
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
          int cmp_fn = 100;
          int _len_map0 = 1;
          struct tracing_map * map = (struct tracing_map *) malloc(_len_map0*sizeof(struct tracing_map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
            map[_i0].n_fields = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_map__i0__fields0 = 1;
          map[_i0].fields = (struct TYPE_2__ *) malloc(_len_map__i0__fields0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_map__i0__fields0; _j0++) {
            map[_i0].fields->cmp_fn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = tracing_map_add_field(map,cmp_fn);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_map0; _aux++) {
          free(map[_aux].fields);
          }
          free(map);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cmp_fn = 255;
          int _len_map0 = 65025;
          struct tracing_map * map = (struct tracing_map *) malloc(_len_map0*sizeof(struct tracing_map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
            map[_i0].n_fields = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_map__i0__fields0 = 1;
          map[_i0].fields = (struct TYPE_2__ *) malloc(_len_map__i0__fields0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_map__i0__fields0; _j0++) {
            map[_i0].fields->cmp_fn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = tracing_map_add_field(map,cmp_fn);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_map0; _aux++) {
          free(map[_aux].fields);
          }
          free(map);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cmp_fn = 10;
          int _len_map0 = 100;
          struct tracing_map * map = (struct tracing_map *) malloc(_len_map0*sizeof(struct tracing_map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
            map[_i0].n_fields = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_map__i0__fields0 = 1;
          map[_i0].fields = (struct TYPE_2__ *) malloc(_len_map__i0__fields0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_map__i0__fields0; _j0++) {
            map[_i0].fields->cmp_fn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = tracing_map_add_field(map,cmp_fn);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_map0; _aux++) {
          free(map[_aux].fields);
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
