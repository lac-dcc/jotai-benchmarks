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
struct TYPE_3__ {int RIR; int RDLR; int RDHR; int RDTR; } ;
typedef  TYPE_1__ CAN_FIFOMailBox_TypeDef ;

/* Variables and functions */
 int brake_prev ; 
 int controls_allowed ; 
 int ego_speed ; 
 int gas_interceptor_detected ; 
 int gas_interceptor_prev ; 
 int gas_interceptor_threshold ; 
 int gas_prev ; 
 int /*<<< orphan*/  honda_alt_brake_msg ; 

__attribute__((used)) static void honda_rx_hook(CAN_FIFOMailBox_TypeDef *to_push) {

  // sample speed
  if ((to_push->RIR>>21) == 0x158) {
    // first 2 bytes
    ego_speed = to_push->RDLR & 0xFFFF;
  }

  // state machine to enter and exit controls
  // 0x1A6 for the ILX, 0x296 for the Civic Touring
  if ((to_push->RIR>>21) == 0x1A6 || (to_push->RIR>>21) == 0x296) {
    int buttons = (to_push->RDLR & 0xE0) >> 5;
    if (buttons == 4 || buttons == 3) {
      controls_allowed = 1;
    } else if (buttons == 2) {
      controls_allowed = 0;
    }
  }

  // user brake signal on 0x17C reports applied brake from computer brake on accord
  // and crv, which prevents the usual brake safety from working correctly. these
  // cars have a signal on 0x1BE which only detects user's brake being applied so
  // in these cases, this is used instead.
  // most hondas: 0x17C bit 53
  // accord, crv: 0x1BE bit 4
  #define IS_USER_BRAKE_MSG(to_push) (!honda_alt_brake_msg ? to_push->RIR>>21 == 0x17C : to_push->RIR>>21 == 0x1BE)
  #define USER_BRAKE_VALUE(to_push)  (!honda_alt_brake_msg ? to_push->RDHR & 0x200000  : to_push->RDLR & 0x10)
  // exit controls on rising edge of brake press or on brake press when
  // speed > 0
  if (IS_USER_BRAKE_MSG(to_push)) {
    int brake = USER_BRAKE_VALUE(to_push);
    if (brake && (!(brake_prev) || ego_speed)) {
      controls_allowed = 0;
    }
    brake_prev = brake;
  }

  // exit controls on rising edge of gas press if interceptor (0x201 w/ len = 6)
  // length check because bosch hardware also uses this id (0x201 w/ len = 8)
  if ((to_push->RIR>>21) == 0x201 && (to_push->RDTR & 0xf) == 6) {
    gas_interceptor_detected = 1;
    int gas_interceptor = ((to_push->RDLR & 0xFF) << 8) | ((to_push->RDLR & 0xFF00) >> 8);
    if ((gas_interceptor > gas_interceptor_threshold) &&
        (gas_interceptor_prev <= gas_interceptor_threshold)) {
      controls_allowed = 0;
    }
    gas_interceptor_prev = gas_interceptor;
  }

  // exit controls on rising edge of gas press if no interceptor
  if (!gas_interceptor_detected) {
    if ((to_push->RIR>>21) == 0x17C) {
      int gas = to_push->RDLR & 0xFF;
      if (gas && !(gas_prev)) {
        controls_allowed = 0;
      }
      gas_prev = gas;
    }
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
        to_push[_i0].RDTR = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          honda_rx_hook(to_push);
          free(to_push);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
