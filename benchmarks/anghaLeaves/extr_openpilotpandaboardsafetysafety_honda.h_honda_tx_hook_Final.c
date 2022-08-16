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
struct TYPE_3__ {int RIR; int RDLR; int RDTR; } ;
typedef  TYPE_1__ CAN_FIFOMailBox_TypeDef ;

/* Variables and functions */
 scalar_t__ bosch_hardware ; 
 scalar_t__ brake_prev ; 
 scalar_t__ controls_allowed ; 
 scalar_t__ ego_speed ; 
 scalar_t__ gas_interceptor_prev ; 
 scalar_t__ gas_interceptor_threshold ; 
 scalar_t__ gas_prev ; 

__attribute__((used)) static int honda_tx_hook(CAN_FIFOMailBox_TypeDef *to_send) {

  // disallow actuator commands if gas or brake (with vehicle moving) are pressed
  // and the the latching controls_allowed flag is True
  int pedal_pressed = gas_prev || (gas_interceptor_prev > gas_interceptor_threshold) ||
                      (brake_prev && ego_speed);
  int current_controls_allowed = controls_allowed && !(pedal_pressed);

  // BRAKE: safety check
  if ((to_send->RIR>>21) == 0x1FA) {
    if (current_controls_allowed) {
      if ((to_send->RDLR & 0xFFFFFF3F) != to_send->RDLR) return 0;
    } else {
      if ((to_send->RDLR & 0xFFFF0000) != to_send->RDLR) return 0;
    }
  }

  // STEER: safety check
  if ((to_send->RIR>>21) == 0xE4 || (to_send->RIR>>21) == 0x194) {
    if (current_controls_allowed) {
      // all messages are fine here
    } else {
      if ((to_send->RDLR & 0xFFFF0000) != to_send->RDLR) return 0;
    }
  }

  // GAS: safety check
  if ((to_send->RIR>>21) == 0x200) {
    if (current_controls_allowed) {
      // all messages are fine here
    } else {
      if ((to_send->RDLR & 0xFFFF0000) != to_send->RDLR) return 0;
    }
  }

  // FORCE CANCEL: safety check only relevant when spamming the cancel button in Bosch HW
  // ensuring that only the cancel button press is sent (VAL 2) when controls are off.
  // This avoids unintended engagements while still allowing resume spam
  if (((to_send->RIR>>21) == 0x296) && bosch_hardware &&
      !current_controls_allowed && ((to_send->RDTR >> 4) & 0xFF) == 0) {
    if (((to_send->RDLR >> 5) & 0x7) != 2) return 0;
  }

  // 1 allows the message through
  return true;
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
          int _len_to_send0 = 1;
          struct TYPE_3__ * to_send = (struct TYPE_3__ *) malloc(_len_to_send0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_to_send0; _i0++) {
            to_send[_i0].RIR = ((-2 * (next_i()%2)) + 1) * next_i();
        to_send[_i0].RDLR = ((-2 * (next_i()%2)) + 1) * next_i();
        to_send[_i0].RDTR = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = honda_tx_hook(to_send);
          printf("%d\n", benchRet); 
          free(to_send);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
