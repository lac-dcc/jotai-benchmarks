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

/* Type definitions */
typedef  int uint32_t ;
struct mdp5_interface {scalar_t__ type; scalar_t__ mode; int num; } ;
struct mdp5_hw_mixer {int pp; } ;

/* Variables and functions */
 scalar_t__ INTF_DSI ; 
 scalar_t__ INTF_WB ; 
 scalar_t__ MDP5_INTF_DSI_MODE_COMMAND ; 
 int MDP5_IRQ_INTF0_VSYNC ; 
 int MDP5_IRQ_INTF1_VSYNC ; 
 int MDP5_IRQ_INTF2_VSYNC ; 
 int MDP5_IRQ_INTF3_VSYNC ; 
 int MDP5_IRQ_PING_PONG_0_RD_PTR ; 
 int MDP5_IRQ_WB_2_DONE ; 

__attribute__((used)) static inline uint32_t intf2vblank(struct mdp5_hw_mixer *mixer,
				   struct mdp5_interface *intf)
{
	/*
	 * In case of DSI Command Mode, the Ping Pong's read pointer IRQ
	 * acts as a Vblank signal. The Ping Pong buffer used is bound to
	 * layer mixer.
	 */

	if ((intf->type == INTF_DSI) &&
			(intf->mode == MDP5_INTF_DSI_MODE_COMMAND))
		return MDP5_IRQ_PING_PONG_0_RD_PTR << mixer->pp;

	if (intf->type == INTF_WB)
		return MDP5_IRQ_WB_2_DONE;

	switch (intf->num) {
	case 0:  return MDP5_IRQ_INTF0_VSYNC;
	case 1:  return MDP5_IRQ_INTF1_VSYNC;
	case 2:  return MDP5_IRQ_INTF2_VSYNC;
	case 3:  return MDP5_IRQ_INTF3_VSYNC;
	default: return 0;
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
          int _len_mixer0 = 1;
          struct mdp5_hw_mixer * mixer = (struct mdp5_hw_mixer *) malloc(_len_mixer0*sizeof(struct mdp5_hw_mixer));
          for(int _i0 = 0; _i0 < _len_mixer0; _i0++) {
            mixer[_i0].pp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_intf0 = 1;
          struct mdp5_interface * intf = (struct mdp5_interface *) malloc(_len_intf0*sizeof(struct mdp5_interface));
          for(int _i0 = 0; _i0 < _len_intf0; _i0++) {
            intf[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        intf[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        intf[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intf2vblank(mixer,intf);
          printf("%d\n", benchRet); 
          free(mixer);
          free(intf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
