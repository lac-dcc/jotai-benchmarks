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
typedef  int u32 ;

/* Variables and functions */
#define  LCD_PANEL_ID0_640X480 140 
#define  LCD_PANEL_ID1_800X600 139 
#define  LCD_PANEL_ID2_1024X768 138 
#define  LCD_PANEL_ID3_1280X768 137 
#define  LCD_PANEL_ID4_1280X1024 136 
#define  LCD_PANEL_ID5_1400X1050 135 
#define  LCD_PANEL_ID6_1600X1200 134 
#define  LCD_PANEL_ID7_1366X768 133 
#define  LCD_PANEL_ID8_1024X600 132 
#define  LCD_PANEL_ID9_1280X800 131 
#define  LCD_PANEL_IDA_800X480 130 
#define  LCD_PANEL_IDB_1360X768 129 
#define  LCD_PANEL_IDC_480X640 128 
 int viafb_lcd_panel_id ; 

bool viafb_lcd_get_support_expand_state(u32 xres, u32 yres)
{
	unsigned int support_state = 0;

	switch (viafb_lcd_panel_id) {
	case LCD_PANEL_ID0_640X480:
		if ((xres < 640) && (yres < 480))
			support_state = true;
		break;

	case LCD_PANEL_ID1_800X600:
		if ((xres < 800) && (yres < 600))
			support_state = true;
		break;

	case LCD_PANEL_ID2_1024X768:
		if ((xres < 1024) && (yres < 768))
			support_state = true;
		break;

	case LCD_PANEL_ID3_1280X768:
		if ((xres < 1280) && (yres < 768))
			support_state = true;
		break;

	case LCD_PANEL_ID4_1280X1024:
		if ((xres < 1280) && (yres < 1024))
			support_state = true;
		break;

	case LCD_PANEL_ID5_1400X1050:
		if ((xres < 1400) && (yres < 1050))
			support_state = true;
		break;

	case LCD_PANEL_ID6_1600X1200:
		if ((xres < 1600) && (yres < 1200))
			support_state = true;
		break;

	case LCD_PANEL_ID7_1366X768:
		if ((xres < 1366) && (yres < 768))
			support_state = true;
		break;

	case LCD_PANEL_ID8_1024X600:
		if ((xres < 1024) && (yres < 600))
			support_state = true;
		break;

	case LCD_PANEL_ID9_1280X800:
		if ((xres < 1280) && (yres < 800))
			support_state = true;
		break;

	case LCD_PANEL_IDA_800X480:
		if ((xres < 800) && (yres < 480))
			support_state = true;
		break;

	case LCD_PANEL_IDB_1360X768:
		if ((xres < 1360) && (yres < 768))
			support_state = true;
		break;

	case LCD_PANEL_IDC_480X640:
		if ((xres < 480) && (yres < 640))
			support_state = true;
		break;

	default:
		support_state = false;
		break;
	}

	return support_state;
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
          int xres = 100;
          int yres = 100;
          int benchRet = viafb_lcd_get_support_expand_state(xres,yres);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int xres = 255;
          int yres = 255;
          int benchRet = viafb_lcd_get_support_expand_state(xres,yres);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int xres = 10;
          int yres = 10;
          int benchRet = viafb_lcd_get_support_expand_state(xres,yres);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
