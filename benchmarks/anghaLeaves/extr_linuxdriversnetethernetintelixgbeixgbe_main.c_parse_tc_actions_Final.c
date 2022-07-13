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

/* Type definitions */
typedef  int /*<<< orphan*/  u8 ;
typedef  int /*<<< orphan*/  u64 ;
struct tcf_exts {int dummy; } ;
struct ixgbe_adapter {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int parse_tc_actions(struct ixgbe_adapter *adapter,
			    struct tcf_exts *exts, u64 *action, u8 *queue)
{
	return -EINVAL;
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
          int _len_adapter0 = 1;
          struct ixgbe_adapter * adapter = (struct ixgbe_adapter *) malloc(_len_adapter0*sizeof(struct ixgbe_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_exts0 = 1;
          struct tcf_exts * exts = (struct tcf_exts *) malloc(_len_exts0*sizeof(struct tcf_exts));
          for(int _i0 = 0; _i0 < _len_exts0; _i0++) {
            exts[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_action0 = 1;
          int * action = (int *) malloc(_len_action0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_action0; _i0++) {
            action[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_queue0 = 1;
          int * queue = (int *) malloc(_len_queue0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_queue0; _i0++) {
            queue[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_tc_actions(adapter,exts,action,queue);
          printf("%d\n", benchRet); 
          free(adapter);
          free(exts);
          free(action);
          free(queue);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_adapter0 = 65025;
          struct ixgbe_adapter * adapter = (struct ixgbe_adapter *) malloc(_len_adapter0*sizeof(struct ixgbe_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_exts0 = 65025;
          struct tcf_exts * exts = (struct tcf_exts *) malloc(_len_exts0*sizeof(struct tcf_exts));
          for(int _i0 = 0; _i0 < _len_exts0; _i0++) {
            exts[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_action0 = 65025;
          int * action = (int *) malloc(_len_action0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_action0; _i0++) {
            action[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_queue0 = 65025;
          int * queue = (int *) malloc(_len_queue0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_queue0; _i0++) {
            queue[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_tc_actions(adapter,exts,action,queue);
          printf("%d\n", benchRet); 
          free(adapter);
          free(exts);
          free(action);
          free(queue);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_adapter0 = 100;
          struct ixgbe_adapter * adapter = (struct ixgbe_adapter *) malloc(_len_adapter0*sizeof(struct ixgbe_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_exts0 = 100;
          struct tcf_exts * exts = (struct tcf_exts *) malloc(_len_exts0*sizeof(struct tcf_exts));
          for(int _i0 = 0; _i0 < _len_exts0; _i0++) {
            exts[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_action0 = 100;
          int * action = (int *) malloc(_len_action0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_action0; _i0++) {
            action[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_queue0 = 100;
          int * queue = (int *) malloc(_len_queue0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_queue0; _i0++) {
            queue[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_tc_actions(adapter,exts,action,queue);
          printf("%d\n", benchRet); 
          free(adapter);
          free(exts);
          free(action);
          free(queue);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
