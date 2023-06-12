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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct srpt_send_ioctx {int state; } ;
typedef  enum srpt_command_state { ____Placeholder_srpt_command_state } srpt_command_state ;

/* Variables and functions */
 int SRPT_STATE_DONE ; 

__attribute__((used)) static enum srpt_command_state srpt_set_cmd_state(struct srpt_send_ioctx *ioctx,
						  enum srpt_command_state new)
{
	enum srpt_command_state previous;

	previous = ioctx->state;
	if (previous != SRPT_STATE_DONE)
		ioctx->state = new;

	return previous;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          enum srpt_command_state new = 0;
        
          int _len_ioctx0 = 65025;
          struct srpt_send_ioctx * ioctx = (struct srpt_send_ioctx *) malloc(_len_ioctx0*sizeof(struct srpt_send_ioctx));
          for(int _i0 = 0; _i0 < _len_ioctx0; _i0++) {
              ioctx[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          enum srpt_command_state benchRet = srpt_set_cmd_state(ioctx,new);
          free(ioctx);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          enum srpt_command_state new = 0;
        
          int _len_ioctx0 = 100;
          struct srpt_send_ioctx * ioctx = (struct srpt_send_ioctx *) malloc(_len_ioctx0*sizeof(struct srpt_send_ioctx));
          for(int _i0 = 0; _i0 < _len_ioctx0; _i0++) {
              ioctx[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          enum srpt_command_state benchRet = srpt_set_cmd_state(ioctx,new);
          free(ioctx);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          enum srpt_command_state new = 0;
        
          int _len_ioctx0 = 1;
          struct srpt_send_ioctx * ioctx = (struct srpt_send_ioctx *) malloc(_len_ioctx0*sizeof(struct srpt_send_ioctx));
          for(int _i0 = 0; _i0 < _len_ioctx0; _i0++) {
              ioctx[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          enum srpt_command_state benchRet = srpt_set_cmd_state(ioctx,new);
          free(ioctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
