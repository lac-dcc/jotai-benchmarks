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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int RIR; int RDLR; int RDHR; } ;
typedef  TYPE_1__ CAN_FIFOMailBox_TypeDef ;

/* Variables and functions */
 int controls_allowed ; 
 int ford_brake_prev ; 
 int ford_gas_prev ; 
 int ford_is_moving ; 

__attribute__((used)) static void ford_rx_hook(CAN_FIFOMailBox_TypeDef *to_push) {

  if ((to_push->RIR>>21) == 0x217) {
    // wheel speeds are 14 bits every 16
    ford_is_moving = 0xFCFF & (to_push->RDLR | (to_push->RDLR >> 16) |
                               to_push->RDHR | (to_push->RDHR >> 16));
  }

  // state machine to enter and exit controls
  if ((to_push->RIR>>21) == 0x83) {
    int cancel = ((to_push->RDLR >> 8) & 0x1);
    int set_or_resume = (to_push->RDLR >> 28) & 0x3;
    if (cancel) {
      controls_allowed = 0;
    } else if (set_or_resume) {
      controls_allowed = 1;
    }
  }

  // exit controls on rising edge of brake press or on brake press when
  // speed > 0
  if ((to_push->RIR>>21) == 0x165) {
    int brake = to_push->RDLR & 0x20;
    if (brake && (!(ford_brake_prev) || ford_is_moving)) {
      controls_allowed = 0;
    }
    ford_brake_prev = brake;
  }

  // exit controls on rising edge of gas press
  if ((to_push->RIR>>21) == 0x204) {
    int gas = to_push->RDLR & 0xFF03;
    if (gas && !(ford_gas_prev)) {
      controls_allowed = 0;
    }
    ford_gas_prev = gas;
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
          int _len_to_push0 = 1;
          struct TYPE_3__ * to_push = (struct TYPE_3__ *) malloc(_len_to_push0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_to_push0; _i0++) {
            to_push[_i0].RIR = ((-2 * (next_i()%2)) + 1) * next_i();
        to_push[_i0].RDLR = ((-2 * (next_i()%2)) + 1) * next_i();
        to_push[_i0].RDHR = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ford_rx_hook(to_push);
          free(to_push);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
