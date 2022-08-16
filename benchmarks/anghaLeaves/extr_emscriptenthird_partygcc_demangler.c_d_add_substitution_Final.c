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
struct demangle_component {int dummy; } ;
struct d_info {size_t next_sub; size_t num_subs; struct demangle_component** subs; } ;

/* Variables and functions */

__attribute__((used)) static int
d_add_substitution (struct d_info *di, struct demangle_component *dc)
{
  if (dc == NULL)
    return 0;
  if (di->next_sub >= di->num_subs)
    return 0;
  di->subs[di->next_sub] = dc;
  ++di->next_sub;
  return 1;
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
          int _len_di0 = 1;
          struct d_info * di = (struct d_info *) malloc(_len_di0*sizeof(struct d_info));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
            di[_i0].next_sub = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].num_subs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_di__i0__subs0 = 1;
          di[_i0].subs = (struct demangle_component **) malloc(_len_di__i0__subs0*sizeof(struct demangle_component *));
          for(int _j0 = 0; _j0 < _len_di__i0__subs0; _j0++) {
            int _len_di__i0__subs1 = 1;
            di[_i0].subs[_j0] = (struct demangle_component *) malloc(_len_di__i0__subs1*sizeof(struct demangle_component));
            for(int _j1 = 0; _j1 < _len_di__i0__subs1; _j1++) {
              di[_i0].subs[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_dc0 = 1;
          struct demangle_component * dc = (struct demangle_component *) malloc(_len_dc0*sizeof(struct demangle_component));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
            dc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = d_add_substitution(di,dc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_di0; _aux++) {
          free(*(di[_aux].subs));
        free(di[_aux].subs);
          }
          free(di);
          free(dc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
