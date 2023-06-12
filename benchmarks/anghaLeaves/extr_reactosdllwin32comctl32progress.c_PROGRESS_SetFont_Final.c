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
       3            empty\n\
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
struct TYPE_3__ {int /*<<< orphan*/  Font; } ;
typedef  TYPE_1__ PROGRESS_INFO ;
typedef  int /*<<< orphan*/  HFONT ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */

__attribute__((used)) static HFONT PROGRESS_SetFont (PROGRESS_INFO *infoPtr, HFONT hFont, BOOL bRedraw)
{
    HFONT hOldFont = infoPtr->Font;
    infoPtr->Font = hFont;
    /* Since infoPtr->Font is not used, there is no need for repaint */
    return hOldFont;
}

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
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int hFont = 100;
        
          int bRedraw = 100;
        
          int _len_infoPtr0 = 1;
          struct TYPE_3__ * infoPtr = (struct TYPE_3__ *) malloc(_len_infoPtr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_infoPtr0; _i0++) {
              infoPtr[_i0].Font = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = PROGRESS_SetFont(infoPtr,hFont,bRedraw);
          printf("%d\n", benchRet); 
          free(infoPtr);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int hFont = 255;
        
          int bRedraw = 255;
        
          int _len_infoPtr0 = 65025;
          struct TYPE_3__ * infoPtr = (struct TYPE_3__ *) malloc(_len_infoPtr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_infoPtr0; _i0++) {
              infoPtr[_i0].Font = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = PROGRESS_SetFont(infoPtr,hFont,bRedraw);
          printf("%d\n", benchRet); 
          free(infoPtr);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int hFont = 10;
        
          int bRedraw = 10;
        
          int _len_infoPtr0 = 100;
          struct TYPE_3__ * infoPtr = (struct TYPE_3__ *) malloc(_len_infoPtr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_infoPtr0; _i0++) {
              infoPtr[_i0].Font = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = PROGRESS_SetFont(infoPtr,hFont,bRedraw);
          printf("%d\n", benchRet); 
          free(infoPtr);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int hFont = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int bRedraw = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_infoPtr0 = 1;
          struct TYPE_3__ * infoPtr = (struct TYPE_3__ *) malloc(_len_infoPtr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_infoPtr0; _i0++) {
              infoPtr[_i0].Font = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = PROGRESS_SetFont(infoPtr,hFont,bRedraw);
          printf("%d\n", benchRet); 
          free(infoPtr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
