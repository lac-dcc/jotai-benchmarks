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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct sway_container {TYPE_2__* workspace; TYPE_1__* parent; } ;
typedef  enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;
struct TYPE_4__ {int layout; } ;
struct TYPE_3__ {int layout; } ;

/* Variables and functions */
 int L_NONE ; 

enum sway_container_layout container_parent_layout(struct sway_container *con) {
	if (con->parent) {
		return con->parent->layout;
	}
	if (con->workspace) {
		return con->workspace->layout;
	}
	return L_NONE;
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
          int _len_con0 = 1;
          struct sway_container * con = (struct sway_container *) malloc(_len_con0*sizeof(struct sway_container));
          for(int _i0 = 0; _i0 < _len_con0; _i0++) {
              int _len_con__i0__workspace0 = 1;
          con[_i0].workspace = (struct TYPE_4__ *) malloc(_len_con__i0__workspace0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_con__i0__workspace0; _j0++) {
            con[_i0].workspace->layout = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_con__i0__parent0 = 1;
          con[_i0].parent = (struct TYPE_3__ *) malloc(_len_con__i0__parent0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_con__i0__parent0; _j0++) {
            con[_i0].parent->layout = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum sway_container_layout benchRet = container_parent_layout(con);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_con0; _aux++) {
          free(con[_aux].workspace);
          }
          for(int _aux = 0; _aux < _len_con0; _aux++) {
          free(con[_aux].parent);
          }
          free(con);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_con0 = 65025;
          struct sway_container * con = (struct sway_container *) malloc(_len_con0*sizeof(struct sway_container));
          for(int _i0 = 0; _i0 < _len_con0; _i0++) {
              int _len_con__i0__workspace0 = 1;
          con[_i0].workspace = (struct TYPE_4__ *) malloc(_len_con__i0__workspace0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_con__i0__workspace0; _j0++) {
            con[_i0].workspace->layout = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_con__i0__parent0 = 1;
          con[_i0].parent = (struct TYPE_3__ *) malloc(_len_con__i0__parent0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_con__i0__parent0; _j0++) {
            con[_i0].parent->layout = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum sway_container_layout benchRet = container_parent_layout(con);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_con0; _aux++) {
          free(con[_aux].workspace);
          }
          for(int _aux = 0; _aux < _len_con0; _aux++) {
          free(con[_aux].parent);
          }
          free(con);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_con0 = 100;
          struct sway_container * con = (struct sway_container *) malloc(_len_con0*sizeof(struct sway_container));
          for(int _i0 = 0; _i0 < _len_con0; _i0++) {
              int _len_con__i0__workspace0 = 1;
          con[_i0].workspace = (struct TYPE_4__ *) malloc(_len_con__i0__workspace0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_con__i0__workspace0; _j0++) {
            con[_i0].workspace->layout = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_con__i0__parent0 = 1;
          con[_i0].parent = (struct TYPE_3__ *) malloc(_len_con__i0__parent0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_con__i0__parent0; _j0++) {
            con[_i0].parent->layout = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum sway_container_layout benchRet = container_parent_layout(con);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_con0; _aux++) {
          free(con[_aux].workspace);
          }
          for(int _aux = 0; _aux < _len_con0; _aux++) {
          free(con[_aux].parent);
          }
          free(con);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
