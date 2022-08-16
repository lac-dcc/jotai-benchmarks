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
       1            big-arr-10x\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int int32_t ;
struct TYPE_3__ {int RIR; } ;
typedef  TYPE_1__ CAN_FIFOMailBox_TypeDef ;

/* Variables and functions */

__attribute__((used)) static int subaru_fwd_hook(int bus_num, CAN_FIFOMailBox_TypeDef *to_fwd) {

  // shifts bits 29 > 11
  int32_t addr = to_fwd->RIR >> 21;

  // forward CAN 0 > 1
  if (bus_num == 0) {

    return 2; // ES CAN
  }
  // forward CAN 1 > 0, except ES_LKAS
  else if (bus_num == 2) {

    // outback 2015
    if (addr == 0x164) {
      return -1;
    }
    // global platform
    if (addr == 0x122) {
      return -1;
    }
    // ES Distance
    if (addr == 545) {
      return -1;
    }

    return 0; // Main CAN
  }

  // fallback to do not forward
  return -1;
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
          int bus_num = 100;
          int _len_to_fwd0 = 1;
          struct TYPE_3__ * to_fwd = (struct TYPE_3__ *) malloc(_len_to_fwd0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_to_fwd0; _i0++) {
            to_fwd[_i0].RIR = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = subaru_fwd_hook(bus_num,to_fwd);
          printf("%d\n", benchRet); 
          free(to_fwd);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int bus_num = 10;
          int _len_to_fwd0 = 100;
          struct TYPE_3__ * to_fwd = (struct TYPE_3__ *) malloc(_len_to_fwd0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_to_fwd0; _i0++) {
            to_fwd[_i0].RIR = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = subaru_fwd_hook(bus_num,to_fwd);
          printf("%d\n", benchRet); 
          free(to_fwd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
