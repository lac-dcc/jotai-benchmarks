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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
 unsigned short* ModeIndex_1024x576 ; 
 unsigned short* ModeIndex_1024x768 ; 
 unsigned short* ModeIndex_1280x1024 ; 
 unsigned short* ModeIndex_1280x720 ; 
 unsigned short* ModeIndex_320x200 ; 
 unsigned short* ModeIndex_320x240 ; 
 unsigned short* ModeIndex_400x300 ; 
 unsigned short* ModeIndex_512x384 ; 
 unsigned short* ModeIndex_640x400 ; 
 unsigned short* ModeIndex_640x480 ; 
 unsigned short* ModeIndex_720x480 ; 
 unsigned short* ModeIndex_720x576 ; 
 unsigned short* ModeIndex_768x576 ; 
 unsigned short* ModeIndex_800x480 ; 
 unsigned short* ModeIndex_800x600 ; 
 unsigned short* ModeIndex_960x600 ; 
 int SIS_315_VGA ; 
 unsigned int TV_HIVISION ; 
 unsigned int TV_PAL ; 
 unsigned int TV_PALM ; 
 unsigned int TV_YPBPR ; 
 unsigned int TV_YPBPR1080I ; 
 unsigned int TV_YPBPR750P ; 
 unsigned int VB2_30xBLV ; 
 unsigned int VB2_CHRONTEL ; 
 unsigned int VB2_SISTVBRIDGE ; 

unsigned short
SiS_GetModeID_TV(int VGAEngine, unsigned int VBFlags, int HDisplay, int VDisplay, int Depth,
			unsigned int VBFlags2)
{
   unsigned short ModeIndex = 0;

   if(VBFlags2 & VB2_CHRONTEL) {

      switch(HDisplay)
      {
	case 512:
	     if(VGAEngine == SIS_315_VGA) {
		if(VDisplay == 384) ModeIndex = ModeIndex_512x384[Depth];
	     }
	     break;
	case 640:
	     if(VDisplay == 480)      ModeIndex = ModeIndex_640x480[Depth];
	     else if(VDisplay == 400) ModeIndex = ModeIndex_640x400[Depth];
	     break;
	case 800:
	     if(VDisplay == 600) ModeIndex = ModeIndex_800x600[Depth];
	     break;
	case 1024:
	     if(VGAEngine == SIS_315_VGA) {
		if(VDisplay == 768) ModeIndex = ModeIndex_1024x768[Depth];
	     }
	     break;
      }

   } else if(VBFlags2 & VB2_SISTVBRIDGE) {

      switch(HDisplay)
      {
	case 320:
	     if(VDisplay == 200)      ModeIndex = ModeIndex_320x200[Depth];
	     else if(VDisplay == 240) ModeIndex = ModeIndex_320x240[Depth];
	     break;
	case 400:
	     if(VDisplay == 300) ModeIndex = ModeIndex_400x300[Depth];
	     break;
	case 512:
	     if( ((VBFlags & TV_YPBPR) && (VBFlags & (TV_YPBPR750P | TV_YPBPR1080I))) ||
		 (VBFlags & TV_HIVISION) 					      ||
		 ((!(VBFlags & (TV_YPBPR | TV_PALM))) && (VBFlags & TV_PAL)) ) {
		if(VDisplay == 384) ModeIndex = ModeIndex_512x384[Depth];
	     }
	     break;
	case 640:
	     if(VDisplay == 480)      ModeIndex = ModeIndex_640x480[Depth];
	     else if(VDisplay == 400) ModeIndex = ModeIndex_640x400[Depth];
	     break;
	case 720:
	     if((!(VBFlags & TV_HIVISION)) && (!((VBFlags & TV_YPBPR) && (VBFlags & TV_YPBPR1080I)))) {
		if(VDisplay == 480) {
		   ModeIndex = ModeIndex_720x480[Depth];
		} else if(VDisplay == 576) {
		   if( ((VBFlags & TV_YPBPR) && (VBFlags & TV_YPBPR750P)) ||
		       ((!(VBFlags & (TV_YPBPR | TV_PALM))) && (VBFlags & TV_PAL)) )
		      ModeIndex = ModeIndex_720x576[Depth];
		}
	     }
             break;
	case 768:
	     if((!(VBFlags & TV_HIVISION)) && (!((VBFlags & TV_YPBPR) && (VBFlags & TV_YPBPR1080I)))) {
		if( ((VBFlags & TV_YPBPR) && (VBFlags & TV_YPBPR750P)) ||
		    ((!(VBFlags & (TV_YPBPR | TV_PALM))) && (VBFlags & TV_PAL)) ) {
		   if(VDisplay == 576) ModeIndex = ModeIndex_768x576[Depth];
		}
             }
	     break;
	case 800:
	     if(VDisplay == 600) ModeIndex = ModeIndex_800x600[Depth];
	     else if(VDisplay == 480) {
		if(!((VBFlags & TV_YPBPR) && (VBFlags & TV_YPBPR750P))) {
		   ModeIndex = ModeIndex_800x480[Depth];
		}
	     }
	     break;
	case 960:
	     if(VGAEngine == SIS_315_VGA) {
		if(VDisplay == 600) {
		   if((VBFlags & TV_HIVISION) || ((VBFlags & TV_YPBPR) && (VBFlags & TV_YPBPR1080I))) {
		      ModeIndex = ModeIndex_960x600[Depth];
		   }
		}
	     }
	     break;
	case 1024:
	     if(VDisplay == 768) {
		if(VBFlags2 & VB2_30xBLV) {
		   ModeIndex = ModeIndex_1024x768[Depth];
		}
	     } else if(VDisplay == 576) {
		if( (VBFlags & TV_HIVISION) ||
		    ((VBFlags & TV_YPBPR) && (VBFlags & TV_YPBPR1080I)) ||
		    ((VBFlags2 & VB2_30xBLV) &&
		     ((!(VBFlags & (TV_YPBPR | TV_PALM))) && (VBFlags & TV_PAL))) ) {
		   ModeIndex = ModeIndex_1024x576[Depth];
		}
	     }
	     break;
	case 1280:
	     if(VDisplay == 720) {
		if((VBFlags & TV_HIVISION) ||
		   ((VBFlags & TV_YPBPR) && (VBFlags & (TV_YPBPR1080I | TV_YPBPR750P)))) {
		   ModeIndex = ModeIndex_1280x720[Depth];
		}
	     } else if(VDisplay == 1024) {
		if((VBFlags & TV_HIVISION) ||
		   ((VBFlags & TV_YPBPR) && (VBFlags & TV_YPBPR1080I))) {
		   ModeIndex = ModeIndex_1280x1024[Depth];
		}
	     }
	     break;
      }
   }
   return ModeIndex;
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
          int VGAEngine = 100;
          unsigned int VBFlags = 100;
          int HDisplay = 100;
          int VDisplay = 100;
          int Depth = 100;
          unsigned int VBFlags2 = 100;
          unsigned short benchRet = SiS_GetModeID_TV(VGAEngine,VBFlags,HDisplay,VDisplay,Depth,VBFlags2);
          printf("%hu\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int VGAEngine = 255;
          unsigned int VBFlags = 255;
          int HDisplay = 255;
          int VDisplay = 255;
          int Depth = 255;
          unsigned int VBFlags2 = 255;
          unsigned short benchRet = SiS_GetModeID_TV(VGAEngine,VBFlags,HDisplay,VDisplay,Depth,VBFlags2);
          printf("%hu\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int VGAEngine = 10;
          unsigned int VBFlags = 10;
          int HDisplay = 10;
          int VDisplay = 10;
          int Depth = 10;
          unsigned int VBFlags2 = 10;
          unsigned short benchRet = SiS_GetModeID_TV(VGAEngine,VBFlags,HDisplay,VDisplay,Depth,VBFlags2);
          printf("%hu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
