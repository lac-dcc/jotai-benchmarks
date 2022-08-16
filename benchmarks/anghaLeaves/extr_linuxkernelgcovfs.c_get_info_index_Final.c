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
struct gcov_node {int num_loaded; struct gcov_info** loaded_info; } ;
struct gcov_info {int dummy; } ;

/* Variables and functions */
 int ENOENT ; 

__attribute__((used)) static int get_info_index(struct gcov_node *node, struct gcov_info *info)
{
	int i;

	for (i = 0; i < node->num_loaded; i++) {
		if (node->loaded_info[i] == info)
			return i;
	}
	return -ENOENT;
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
          int _len_node0 = 1;
          struct gcov_node * node = (struct gcov_node *) malloc(_len_node0*sizeof(struct gcov_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].num_loaded = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_node__i0__loaded_info0 = 1;
          node[_i0].loaded_info = (struct gcov_info **) malloc(_len_node__i0__loaded_info0*sizeof(struct gcov_info *));
          for(int _j0 = 0; _j0 < _len_node__i0__loaded_info0; _j0++) {
            int _len_node__i0__loaded_info1 = 1;
            node[_i0].loaded_info[_j0] = (struct gcov_info *) malloc(_len_node__i0__loaded_info1*sizeof(struct gcov_info));
            for(int _j1 = 0; _j1 < _len_node__i0__loaded_info1; _j1++) {
              node[_i0].loaded_info[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_info0 = 1;
          struct gcov_info * info = (struct gcov_info *) malloc(_len_info0*sizeof(struct gcov_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_info_index(node,info);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_node0; _aux++) {
          free(*(node[_aux].loaded_info));
        free(node[_aux].loaded_info);
          }
          free(node);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
