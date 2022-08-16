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
struct perf_env {int nr_cpus_avail; } ;
struct cpu_map {int nr; int* map; } ;

/* Variables and functions */

__attribute__((used)) static inline int perf_env__get_cpu(struct perf_env *env, struct cpu_map *map, int idx)
{
	int cpu;

	if (idx > map->nr)
		return -1;

	cpu = map->map[idx];

	if (cpu >= env->nr_cpus_avail)
		return -1;

	return cpu;
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
          int idx = 100;
          int _len_env0 = 1;
          struct perf_env * env = (struct perf_env *) malloc(_len_env0*sizeof(struct perf_env));
          for(int _i0 = 0; _i0 < _len_env0; _i0++) {
            env[_i0].nr_cpus_avail = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_map0 = 1;
          struct cpu_map * map = (struct cpu_map *) malloc(_len_map0*sizeof(struct cpu_map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
            map[_i0].nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_map__i0__map0 = 1;
          map[_i0].map = (int *) malloc(_len_map__i0__map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_map__i0__map0; _j0++) {
            map[_i0].map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = perf_env__get_cpu(env,map,idx);
          printf("%d\n", benchRet); 
          free(env);
          for(int _aux = 0; _aux < _len_map0; _aux++) {
          free(map[_aux].map);
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
