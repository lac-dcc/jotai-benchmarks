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

/* Variables and functions */
 int BTN_TOOL_AIRBRUSH ; 
 int BTN_TOOL_BRUSH ; 
 int BTN_TOOL_LENS ; 
 int BTN_TOOL_MOUSE ; 
 int BTN_TOOL_PEN ; 
 int BTN_TOOL_PENCIL ; 
 int BTN_TOOL_RUBBER ; 

__attribute__((used)) static int wacom_intuos_get_tool_type(int tool_id)
{
	int tool_type;

	switch (tool_id) {
	case 0x812: /* Inking pen */
	case 0x801: /* Intuos3 Inking pen */
	case 0x12802: /* Intuos4/5 Inking Pen */
	case 0x012:
		tool_type = BTN_TOOL_PENCIL;
		break;

	case 0x822: /* Pen */
	case 0x842:
	case 0x852:
	case 0x823: /* Intuos3 Grip Pen */
	case 0x813: /* Intuos3 Classic Pen */
	case 0x885: /* Intuos3 Marker Pen */
	case 0x802: /* Intuos4/5 13HD/24HD General Pen */
	case 0x804: /* Intuos4/5 13HD/24HD Marker Pen */
	case 0x8e2: /* IntuosHT2 pen */
	case 0x022:
	case 0x10804: /* Intuos4/5 13HD/24HD Art Pen */
	case 0x14802: /* Intuos4/5 13HD/24HD Classic Pen */
	case 0x16802: /* Cintiq 13HD Pro Pen */
	case 0x18802: /* DTH2242 Pen */
	case 0x10802: /* Intuos4/5 13HD/24HD General Pen */
		tool_type = BTN_TOOL_PEN;
		break;

	case 0x832: /* Stroke pen */
	case 0x032:
		tool_type = BTN_TOOL_BRUSH;
		break;

	case 0x007: /* Mouse 4D and 2D */
	case 0x09c:
	case 0x094:
	case 0x017: /* Intuos3 2D Mouse */
	case 0x806: /* Intuos4 Mouse */
		tool_type = BTN_TOOL_MOUSE;
		break;

	case 0x096: /* Lens cursor */
	case 0x097: /* Intuos3 Lens cursor */
	case 0x006: /* Intuos4 Lens cursor */
		tool_type = BTN_TOOL_LENS;
		break;

	case 0x82a: /* Eraser */
	case 0x84a:
	case 0x85a:
	case 0x91a:
	case 0xd1a:
	case 0x0fa:
	case 0x82b: /* Intuos3 Grip Pen Eraser */
	case 0x81b: /* Intuos3 Classic Pen Eraser */
	case 0x91b: /* Intuos3 Airbrush Eraser */
	case 0x80c: /* Intuos4/5 13HD/24HD Marker Pen Eraser */
	case 0x80a: /* Intuos4/5 13HD/24HD General Pen Eraser */
	case 0x90a: /* Intuos4/5 13HD/24HD Airbrush Eraser */
	case 0x1480a: /* Intuos4/5 13HD/24HD Classic Pen Eraser */
	case 0x1090a: /* Intuos4/5 13HD/24HD Airbrush Eraser */
	case 0x1080c: /* Intuos4/5 13HD/24HD Art Pen Eraser */
	case 0x1680a: /* Cintiq 13HD Pro Pen Eraser */
	case 0x1880a: /* DTH2242 Eraser */
	case 0x1080a: /* Intuos4/5 13HD/24HD General Pen Eraser */
		tool_type = BTN_TOOL_RUBBER;
		break;

	case 0xd12:
	case 0x912:
	case 0x112:
	case 0x913: /* Intuos3 Airbrush */
	case 0x902: /* Intuos4/5 13HD/24HD Airbrush */
	case 0x10902: /* Intuos4/5 13HD/24HD Airbrush */
		tool_type = BTN_TOOL_AIRBRUSH;
		break;

	default: /* Unknown tool */
		tool_type = BTN_TOOL_PEN;
		break;
	}
	return tool_type;
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
          int tool_id = 100;
          int benchRet = wacom_intuos_get_tool_type(tool_id);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int tool_id = 255;
          int benchRet = wacom_intuos_get_tool_type(tool_id);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tool_id = 10;
          int benchRet = wacom_intuos_get_tool_type(tool_id);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
