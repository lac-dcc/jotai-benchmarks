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
struct TYPE_3__ {int /*<<< orphan*/  EA_ResetInput; int /*<<< orphan*/  EA_EndRegular; int /*<<< orphan*/  EA_GetInput; int /*<<< orphan*/  EA_View; int /*<<< orphan*/  EA_Move; int /*<<< orphan*/  EA_DelayedJump; int /*<<< orphan*/  EA_Jump; int /*<<< orphan*/  EA_SelectWeapon; int /*<<< orphan*/  EA_MoveRight; int /*<<< orphan*/  EA_MoveLeft; int /*<<< orphan*/  EA_MoveBack; int /*<<< orphan*/  EA_MoveForward; int /*<<< orphan*/  EA_MoveDown; int /*<<< orphan*/  EA_MoveUp; int /*<<< orphan*/  EA_Crouch; int /*<<< orphan*/  EA_Respawn; int /*<<< orphan*/  EA_Use; int /*<<< orphan*/  EA_Attack; int /*<<< orphan*/  EA_Talk; int /*<<< orphan*/  EA_Gesture; int /*<<< orphan*/  EA_Action; int /*<<< orphan*/  EA_SayTeam; int /*<<< orphan*/  EA_Say; int /*<<< orphan*/  EA_Command; } ;
typedef  TYPE_1__ ea_export_t ;

/* Variables and functions */
 int /*<<< orphan*/  EA_Action ; 
 int /*<<< orphan*/  EA_Attack ; 
 int /*<<< orphan*/  EA_Command ; 
 int /*<<< orphan*/  EA_Crouch ; 
 int /*<<< orphan*/  EA_DelayedJump ; 
 int /*<<< orphan*/  EA_EndRegular ; 
 int /*<<< orphan*/  EA_Gesture ; 
 int /*<<< orphan*/  EA_GetInput ; 
 int /*<<< orphan*/  EA_Jump ; 
 int /*<<< orphan*/  EA_Move ; 
 int /*<<< orphan*/  EA_MoveBack ; 
 int /*<<< orphan*/  EA_MoveDown ; 
 int /*<<< orphan*/  EA_MoveForward ; 
 int /*<<< orphan*/  EA_MoveLeft ; 
 int /*<<< orphan*/  EA_MoveRight ; 
 int /*<<< orphan*/  EA_MoveUp ; 
 int /*<<< orphan*/  EA_ResetInput ; 
 int /*<<< orphan*/  EA_Respawn ; 
 int /*<<< orphan*/  EA_Say ; 
 int /*<<< orphan*/  EA_SayTeam ; 
 int /*<<< orphan*/  EA_SelectWeapon ; 
 int /*<<< orphan*/  EA_Talk ; 
 int /*<<< orphan*/  EA_Use ; 
 int /*<<< orphan*/  EA_View ; 

__attribute__((used)) static void Init_EA_Export( ea_export_t *ea ) {
	//ClientCommand elementary actions
	ea->EA_Command = EA_Command;
	ea->EA_Say = EA_Say;
	ea->EA_SayTeam = EA_SayTeam;

	ea->EA_Action = EA_Action;
	ea->EA_Gesture = EA_Gesture;
	ea->EA_Talk = EA_Talk;
	ea->EA_Attack = EA_Attack;
	ea->EA_Use = EA_Use;
	ea->EA_Respawn = EA_Respawn;
	ea->EA_Crouch = EA_Crouch;
	ea->EA_MoveUp = EA_MoveUp;
	ea->EA_MoveDown = EA_MoveDown;
	ea->EA_MoveForward = EA_MoveForward;
	ea->EA_MoveBack = EA_MoveBack;
	ea->EA_MoveLeft = EA_MoveLeft;
	ea->EA_MoveRight = EA_MoveRight;

	ea->EA_SelectWeapon = EA_SelectWeapon;
	ea->EA_Jump = EA_Jump;
	ea->EA_DelayedJump = EA_DelayedJump;
	ea->EA_Move = EA_Move;
	ea->EA_View = EA_View;
	ea->EA_GetInput = EA_GetInput;
	ea->EA_EndRegular = EA_EndRegular;
	ea->EA_ResetInput = EA_ResetInput;
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
          int _len_ea0 = 1;
          struct TYPE_3__ * ea = (struct TYPE_3__ *) malloc(_len_ea0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ea0; _i0++) {
            ea[_i0].EA_ResetInput = ((-2 * (next_i()%2)) + 1) * next_i();
        ea[_i0].EA_EndRegular = ((-2 * (next_i()%2)) + 1) * next_i();
        ea[_i0].EA_GetInput = ((-2 * (next_i()%2)) + 1) * next_i();
        ea[_i0].EA_View = ((-2 * (next_i()%2)) + 1) * next_i();
        ea[_i0].EA_Move = ((-2 * (next_i()%2)) + 1) * next_i();
        ea[_i0].EA_DelayedJump = ((-2 * (next_i()%2)) + 1) * next_i();
        ea[_i0].EA_Jump = ((-2 * (next_i()%2)) + 1) * next_i();
        ea[_i0].EA_SelectWeapon = ((-2 * (next_i()%2)) + 1) * next_i();
        ea[_i0].EA_MoveRight = ((-2 * (next_i()%2)) + 1) * next_i();
        ea[_i0].EA_MoveLeft = ((-2 * (next_i()%2)) + 1) * next_i();
        ea[_i0].EA_MoveBack = ((-2 * (next_i()%2)) + 1) * next_i();
        ea[_i0].EA_MoveForward = ((-2 * (next_i()%2)) + 1) * next_i();
        ea[_i0].EA_MoveDown = ((-2 * (next_i()%2)) + 1) * next_i();
        ea[_i0].EA_MoveUp = ((-2 * (next_i()%2)) + 1) * next_i();
        ea[_i0].EA_Crouch = ((-2 * (next_i()%2)) + 1) * next_i();
        ea[_i0].EA_Respawn = ((-2 * (next_i()%2)) + 1) * next_i();
        ea[_i0].EA_Use = ((-2 * (next_i()%2)) + 1) * next_i();
        ea[_i0].EA_Attack = ((-2 * (next_i()%2)) + 1) * next_i();
        ea[_i0].EA_Talk = ((-2 * (next_i()%2)) + 1) * next_i();
        ea[_i0].EA_Gesture = ((-2 * (next_i()%2)) + 1) * next_i();
        ea[_i0].EA_Action = ((-2 * (next_i()%2)) + 1) * next_i();
        ea[_i0].EA_SayTeam = ((-2 * (next_i()%2)) + 1) * next_i();
        ea[_i0].EA_Say = ((-2 * (next_i()%2)) + 1) * next_i();
        ea[_i0].EA_Command = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          Init_EA_Export(ea);
          free(ea);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
