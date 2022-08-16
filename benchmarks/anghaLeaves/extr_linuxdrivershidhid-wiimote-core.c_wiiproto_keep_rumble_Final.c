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
struct TYPE_2__ {int flags; } ;
struct wiimote_data {TYPE_1__ state; } ;
typedef  int __u8 ;

/* Variables and functions */
 int WIIPROTO_FLAG_RUMBLE ; 

__attribute__((used)) static inline void wiiproto_keep_rumble(struct wiimote_data *wdata, __u8 *cmd1)
{
	if (wdata->state.flags & WIIPROTO_FLAG_RUMBLE)
		*cmd1 |= 0x01;
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
          int _len_wdata0 = 1;
          struct wiimote_data * wdata = (struct wiimote_data *) malloc(_len_wdata0*sizeof(struct wiimote_data));
          for(int _i0 = 0; _i0 < _len_wdata0; _i0++) {
            wdata[_i0].state.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd10 = 1;
          int * cmd1 = (int *) malloc(_len_cmd10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cmd10; _i0++) {
            cmd1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wiiproto_keep_rumble(wdata,cmd1);
          free(wdata);
          free(cmd1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
