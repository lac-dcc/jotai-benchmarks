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
struct cfq_rb_root {int dummy; } ;
struct cfq_group {struct cfq_rb_root** service_trees; struct cfq_rb_root service_tree_idle; } ;
typedef  enum wl_type_t { ____Placeholder_wl_type_t } wl_type_t ;
typedef  enum wl_class_t { ____Placeholder_wl_class_t } wl_class_t ;

/* Variables and functions */
 int IDLE_WORKLOAD ; 

__attribute__((used)) static struct cfq_rb_root *st_for(struct cfq_group *cfqg,
					    enum wl_class_t class,
					    enum wl_type_t type)
{
	if (!cfqg)
		return NULL;

	if (class == IDLE_WORKLOAD)
		return &cfqg->service_tree_idle;

	return &cfqg->service_trees[class][type];
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
          enum wl_class_t class = 0;
          enum wl_type_t type = 0;
          int _len_cfqg0 = 1;
          struct cfq_group * cfqg = (struct cfq_group *) malloc(_len_cfqg0*sizeof(struct cfq_group));
          for(int _i0 = 0; _i0 < _len_cfqg0; _i0++) {
              int _len_cfqg__i0__service_trees0 = 1;
          cfqg[_i0].service_trees = (struct cfq_rb_root **) malloc(_len_cfqg__i0__service_trees0*sizeof(struct cfq_rb_root *));
          for(int _j0 = 0; _j0 < _len_cfqg__i0__service_trees0; _j0++) {
            int _len_cfqg__i0__service_trees1 = 1;
            cfqg[_i0].service_trees[_j0] = (struct cfq_rb_root *) malloc(_len_cfqg__i0__service_trees1*sizeof(struct cfq_rb_root));
            for(int _j1 = 0; _j1 < _len_cfqg__i0__service_trees1; _j1++) {
              cfqg[_i0].service_trees[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        cfqg[_i0].service_tree_idle.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct cfq_rb_root * benchRet = st_for(cfqg,class,type);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_cfqg0; _aux++) {
          free(*(cfqg[_aux].service_trees));
        free(cfqg[_aux].service_trees);
          }
          free(cfqg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
