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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u32 ;
struct bcm2835_i2c_dev {size_t debug_num; TYPE_1__* debug; int /*<<< orphan*/  msg_buf_remaining; scalar_t__ num_msgs; scalar_t__ debug_num_msgs; int /*<<< orphan*/  curr_msg; } ;
struct TYPE_2__ {int /*<<< orphan*/  status; int /*<<< orphan*/  remain; scalar_t__ msg_idx; int /*<<< orphan*/  msg; } ;

/* Variables and functions */
 size_t BCM2835_DEBUG_MAX ; 

__attribute__((used)) static inline void bcm2835_debug_add(struct bcm2835_i2c_dev *i2c_dev, u32 s)
{
	if (!i2c_dev->debug_num_msgs || i2c_dev->debug_num >= BCM2835_DEBUG_MAX)
		return;

	i2c_dev->debug[i2c_dev->debug_num].msg = i2c_dev->curr_msg;
	i2c_dev->debug[i2c_dev->debug_num].msg_idx =
				i2c_dev->debug_num_msgs - i2c_dev->num_msgs;
	i2c_dev->debug[i2c_dev->debug_num].remain = i2c_dev->msg_buf_remaining;
	i2c_dev->debug[i2c_dev->debug_num].status = s;
	i2c_dev->debug_num++;
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
          int s = 100;
          int _len_i2c_dev0 = 1;
          struct bcm2835_i2c_dev * i2c_dev = (struct bcm2835_i2c_dev *) malloc(_len_i2c_dev0*sizeof(struct bcm2835_i2c_dev));
          for(int _i0 = 0; _i0 < _len_i2c_dev0; _i0++) {
            i2c_dev[_i0].debug_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_i2c_dev__i0__debug0 = 1;
          i2c_dev[_i0].debug = (struct TYPE_2__ *) malloc(_len_i2c_dev__i0__debug0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_i2c_dev__i0__debug0; _j0++) {
            i2c_dev[_i0].debug->status = ((-2 * (next_i()%2)) + 1) * next_i();
        i2c_dev[_i0].debug->remain = ((-2 * (next_i()%2)) + 1) * next_i();
        i2c_dev[_i0].debug->msg_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        i2c_dev[_i0].debug->msg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        i2c_dev[_i0].msg_buf_remaining = ((-2 * (next_i()%2)) + 1) * next_i();
        i2c_dev[_i0].num_msgs = ((-2 * (next_i()%2)) + 1) * next_i();
        i2c_dev[_i0].debug_num_msgs = ((-2 * (next_i()%2)) + 1) * next_i();
        i2c_dev[_i0].curr_msg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bcm2835_debug_add(i2c_dev,s);
          for(int _aux = 0; _aux < _len_i2c_dev0; _aux++) {
          free(i2c_dev[_aux].debug);
          }
          free(i2c_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
