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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  reg_errcode_t ;
struct TYPE_5__ {int idx; } ;
struct TYPE_6__ {scalar_t__ type; int opt_subexp; TYPE_1__ opr; } ;
struct TYPE_7__ {TYPE_2__ token; } ;
typedef  TYPE_3__ bin_tree_t ;

/* Variables and functions */
 int /*<<< orphan*/  REG_NOERROR ; 
 scalar_t__ SUBEXP ; 

__attribute__((used)) static reg_errcode_t
mark_opt_subexp (void *extra, bin_tree_t *node)
{
  int idx = (int) (long) extra;
  if (node->token.type == SUBEXP && node->token.opr.idx == idx)
    node->token.opt_subexp = 1;

  return REG_NOERROR;
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
          void * extra;
          int _len_node0 = 1;
          struct TYPE_7__ * node = (struct TYPE_7__ *) malloc(_len_node0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].token.type = ((-2 * (next_i()%2)) + 1) * next_i();
        node[_i0].token.opt_subexp = ((-2 * (next_i()%2)) + 1) * next_i();
        node[_i0].token.opr.idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mark_opt_subexp(extra,node);
          printf("%d\n", benchRet); 
          free(node);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * extra;
          int _len_node0 = 65025;
          struct TYPE_7__ * node = (struct TYPE_7__ *) malloc(_len_node0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].token.type = ((-2 * (next_i()%2)) + 1) * next_i();
        node[_i0].token.opt_subexp = ((-2 * (next_i()%2)) + 1) * next_i();
        node[_i0].token.opr.idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mark_opt_subexp(extra,node);
          printf("%d\n", benchRet); 
          free(node);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * extra;
          int _len_node0 = 100;
          struct TYPE_7__ * node = (struct TYPE_7__ *) malloc(_len_node0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].token.type = ((-2 * (next_i()%2)) + 1) * next_i();
        node[_i0].token.opt_subexp = ((-2 * (next_i()%2)) + 1) * next_i();
        node[_i0].token.opr.idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mark_opt_subexp(extra,node);
          printf("%d\n", benchRet); 
          free(node);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
