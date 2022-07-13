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
struct bnx2x_queue_sp_obj {int state; } ;
struct bnx2x {int dummy; } ;

/* Variables and functions */
 int BNX2X_Q_LOGICAL_STATE_ACTIVE ; 
 int BNX2X_Q_LOGICAL_STATE_STOPPED ; 
#define  BNX2X_Q_STATE_ACTIVE 136 
#define  BNX2X_Q_STATE_FLRED 135 
#define  BNX2X_Q_STATE_INACTIVE 134 
#define  BNX2X_Q_STATE_INITIALIZED 133 
#define  BNX2X_Q_STATE_MCOS_TERMINATED 132 
#define  BNX2X_Q_STATE_MULTI_COS 131 
#define  BNX2X_Q_STATE_RESET 130 
#define  BNX2X_Q_STATE_STOPPED 129 
#define  BNX2X_Q_STATE_TERMINATED 128 
 int EINVAL ; 

int bnx2x_get_q_logical_state(struct bnx2x *bp,
			       struct bnx2x_queue_sp_obj *obj)
{
	switch (obj->state) {
	case BNX2X_Q_STATE_ACTIVE:
	case BNX2X_Q_STATE_MULTI_COS:
		return BNX2X_Q_LOGICAL_STATE_ACTIVE;
	case BNX2X_Q_STATE_RESET:
	case BNX2X_Q_STATE_INITIALIZED:
	case BNX2X_Q_STATE_MCOS_TERMINATED:
	case BNX2X_Q_STATE_INACTIVE:
	case BNX2X_Q_STATE_STOPPED:
	case BNX2X_Q_STATE_TERMINATED:
	case BNX2X_Q_STATE_FLRED:
		return BNX2X_Q_LOGICAL_STATE_STOPPED;
	default:
		return -EINVAL;
	}
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
          int _len_bp0 = 1;
          struct bnx2x * bp = (struct bnx2x *) malloc(_len_bp0*sizeof(struct bnx2x));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_obj0 = 1;
          struct bnx2x_queue_sp_obj * obj = (struct bnx2x_queue_sp_obj *) malloc(_len_obj0*sizeof(struct bnx2x_queue_sp_obj));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bnx2x_get_q_logical_state(bp,obj);
          printf("%d\n", benchRet); 
          free(bp);
          free(obj);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bp0 = 65025;
          struct bnx2x * bp = (struct bnx2x *) malloc(_len_bp0*sizeof(struct bnx2x));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_obj0 = 65025;
          struct bnx2x_queue_sp_obj * obj = (struct bnx2x_queue_sp_obj *) malloc(_len_obj0*sizeof(struct bnx2x_queue_sp_obj));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bnx2x_get_q_logical_state(bp,obj);
          printf("%d\n", benchRet); 
          free(bp);
          free(obj);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bp0 = 100;
          struct bnx2x * bp = (struct bnx2x *) malloc(_len_bp0*sizeof(struct bnx2x));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_obj0 = 100;
          struct bnx2x_queue_sp_obj * obj = (struct bnx2x_queue_sp_obj *) malloc(_len_obj0*sizeof(struct bnx2x_queue_sp_obj));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bnx2x_get_q_logical_state(bp,obj);
          printf("%d\n", benchRet); 
          free(bp);
          free(obj);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
