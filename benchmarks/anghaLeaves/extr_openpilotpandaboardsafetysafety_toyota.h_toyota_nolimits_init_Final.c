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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  int16_t ;

/* Variables and functions */
 scalar_t__ controls_allowed ; 
 scalar_t__ toyota_actuation_limits ; 
 scalar_t__ toyota_camera_forwarded ; 
 int /*<<< orphan*/  toyota_dbc_eps_torque_factor ; 
 scalar_t__ toyota_giraffe_switch_1 ; 

__attribute__((used)) static void toyota_nolimits_init(int16_t param) {
  controls_allowed = 0;
  toyota_actuation_limits = 0;
  toyota_giraffe_switch_1 = 0;
  toyota_camera_forwarded = 0;
  toyota_dbc_eps_torque_factor = param;
  #ifdef PANDA
    lline_relay_release();
  #endif
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
          int param = 100;
          toyota_nolimits_init(param);
        
        break;
    }
    // big-arr
    case 1:
    {
          int param = 255;
          toyota_nolimits_init(param);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int param = 10;
          toyota_nolimits_init(param);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
