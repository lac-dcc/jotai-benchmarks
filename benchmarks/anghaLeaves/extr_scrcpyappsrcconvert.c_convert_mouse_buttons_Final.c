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
typedef  int uint32_t ;
typedef  enum android_motionevent_buttons { ____Placeholder_android_motionevent_buttons } android_motionevent_buttons ;

/* Variables and functions */
 int AMOTION_EVENT_BUTTON_BACK ; 
 int AMOTION_EVENT_BUTTON_FORWARD ; 
 int AMOTION_EVENT_BUTTON_PRIMARY ; 
 int AMOTION_EVENT_BUTTON_SECONDARY ; 
 int AMOTION_EVENT_BUTTON_TERTIARY ; 
 int SDL_BUTTON_LMASK ; 
 int SDL_BUTTON_MMASK ; 
 int SDL_BUTTON_RMASK ; 
 int SDL_BUTTON_X1 ; 
 int SDL_BUTTON_X2 ; 

__attribute__((used)) static enum android_motionevent_buttons
convert_mouse_buttons(uint32_t state) {
    enum android_motionevent_buttons buttons = 0;
    if (state & SDL_BUTTON_LMASK) {
        buttons |= AMOTION_EVENT_BUTTON_PRIMARY;
    }
    if (state & SDL_BUTTON_RMASK) {
        buttons |= AMOTION_EVENT_BUTTON_SECONDARY;
    }
    if (state & SDL_BUTTON_MMASK) {
        buttons |= AMOTION_EVENT_BUTTON_TERTIARY;
    }
    if (state & SDL_BUTTON_X1) {
        buttons |= AMOTION_EVENT_BUTTON_BACK;
    }
    if (state & SDL_BUTTON_X2) {
        buttons |= AMOTION_EVENT_BUTTON_FORWARD;
    }
    return buttons;
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
          int state = 100;
          enum android_motionevent_buttons benchRet = convert_mouse_buttons(state);
        
        break;
    }
    // big-arr
    case 1:
    {
          int state = 255;
          enum android_motionevent_buttons benchRet = convert_mouse_buttons(state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int state = 10;
          enum android_motionevent_buttons benchRet = convert_mouse_buttons(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
