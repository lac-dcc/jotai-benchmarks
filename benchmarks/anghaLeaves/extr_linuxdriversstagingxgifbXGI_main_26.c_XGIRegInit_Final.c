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

/* Type definitions */
struct vb_device_info {unsigned long P3c4; unsigned long P3d4; unsigned long P3c0; unsigned long P3ce; unsigned long P3c2; unsigned long P3cc; unsigned long P3ca; unsigned long P3c6; unsigned long P3c7; unsigned long P3c8; unsigned long P3c9; unsigned long P3da; void* Part5Port; void* Part4Port; scalar_t__ Part3Port; scalar_t__ Part2Port; scalar_t__ Part1Port; scalar_t__ Part0Port; } ;

/* Variables and functions */
 scalar_t__ SIS_CRT2_PORT_04 ; 
 scalar_t__ SIS_CRT2_PORT_10 ; 
 scalar_t__ SIS_CRT2_PORT_12 ; 
 void* SIS_CRT2_PORT_14 ; 
 scalar_t__ XGI_CRT2_PORT_00 ; 

void XGIRegInit(struct vb_device_info *XGI_Pr, unsigned long BaseAddr)
{
	XGI_Pr->P3c4 = BaseAddr + 0x14;
	XGI_Pr->P3d4 = BaseAddr + 0x24;
	XGI_Pr->P3c0 = BaseAddr + 0x10;
	XGI_Pr->P3ce = BaseAddr + 0x1e;
	XGI_Pr->P3c2 = BaseAddr + 0x12;
	XGI_Pr->P3cc = BaseAddr + 0x1c;
	XGI_Pr->P3ca = BaseAddr + 0x1a;
	XGI_Pr->P3c6 = BaseAddr + 0x16;
	XGI_Pr->P3c7 = BaseAddr + 0x17;
	XGI_Pr->P3c8 = BaseAddr + 0x18;
	XGI_Pr->P3c9 = BaseAddr + 0x19;
	XGI_Pr->P3da = BaseAddr + 0x2A;
	XGI_Pr->Part0Port = BaseAddr + XGI_CRT2_PORT_00;
	/* Digital video interface registers (LCD) */
	XGI_Pr->Part1Port = BaseAddr + SIS_CRT2_PORT_04;
	/* 301 TV Encoder registers */
	XGI_Pr->Part2Port = BaseAddr + SIS_CRT2_PORT_10;
	/* 301 Macrovision registers */
	XGI_Pr->Part3Port = BaseAddr + SIS_CRT2_PORT_12;
	/* 301 VGA2 (and LCD) registers */
	XGI_Pr->Part4Port = BaseAddr + SIS_CRT2_PORT_14;
	/* 301 palette address port registers */
	XGI_Pr->Part5Port = BaseAddr + SIS_CRT2_PORT_14 + 2;
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
          // static_instructions_O0 : 79
          // dynamic_instructions_O0 : 79
          // ------------------------------- 
          // static_instructions_O1 : 45
          // dynamic_instructions_O1 : 45
          // ------------------------------- 
          // static_instructions_O2 : 40
          // dynamic_instructions_O2 : 40
          // ------------------------------- 
          // static_instructions_O3 : 40
          // dynamic_instructions_O3 : 40
          // ------------------------------- 
          // static_instructions_Ofast : 40
          // dynamic_instructions_Ofast : 40
          // ------------------------------- 
          // static_instructions_Os : 40
          // dynamic_instructions_Os : 40
          // ------------------------------- 
          // static_instructions_Oz : 40
          // dynamic_instructions_Oz : 40
          // ------------------------------- 

          unsigned long BaseAddr = 100;
        
          int _len_XGI_Pr0 = 1;
          struct vb_device_info * XGI_Pr = (struct vb_device_info *) malloc(_len_XGI_Pr0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_XGI_Pr0; _i0++) {
              XGI_Pr[_i0].P3c4 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3d4 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3c0 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3ce = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3c2 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3cc = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3ca = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3c6 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3c7 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3c8 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3c9 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3da = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].Part3Port = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].Part2Port = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].Part1Port = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].Part0Port = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          XGIRegInit(XGI_Pr,BaseAddr);
          free(XGI_Pr);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 79
          // dynamic_instructions_O0 : 79
          // ------------------------------- 
          // static_instructions_O1 : 45
          // dynamic_instructions_O1 : 45
          // ------------------------------- 
          // static_instructions_O2 : 40
          // dynamic_instructions_O2 : 40
          // ------------------------------- 
          // static_instructions_O3 : 40
          // dynamic_instructions_O3 : 40
          // ------------------------------- 
          // static_instructions_Ofast : 40
          // dynamic_instructions_Ofast : 40
          // ------------------------------- 
          // static_instructions_Os : 40
          // dynamic_instructions_Os : 40
          // ------------------------------- 
          // static_instructions_Oz : 40
          // dynamic_instructions_Oz : 40
          // ------------------------------- 

          unsigned long BaseAddr = 255;
        
          int _len_XGI_Pr0 = 65025;
          struct vb_device_info * XGI_Pr = (struct vb_device_info *) malloc(_len_XGI_Pr0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_XGI_Pr0; _i0++) {
              XGI_Pr[_i0].P3c4 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3d4 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3c0 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3ce = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3c2 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3cc = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3ca = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3c6 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3c7 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3c8 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3c9 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3da = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].Part3Port = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].Part2Port = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].Part1Port = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].Part0Port = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          XGIRegInit(XGI_Pr,BaseAddr);
          free(XGI_Pr);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 79
          // dynamic_instructions_O0 : 79
          // ------------------------------- 
          // static_instructions_O1 : 45
          // dynamic_instructions_O1 : 45
          // ------------------------------- 
          // static_instructions_O2 : 40
          // dynamic_instructions_O2 : 40
          // ------------------------------- 
          // static_instructions_O3 : 40
          // dynamic_instructions_O3 : 40
          // ------------------------------- 
          // static_instructions_Ofast : 40
          // dynamic_instructions_Ofast : 40
          // ------------------------------- 
          // static_instructions_Os : 40
          // dynamic_instructions_Os : 40
          // ------------------------------- 
          // static_instructions_Oz : 40
          // dynamic_instructions_Oz : 40
          // ------------------------------- 

          unsigned long BaseAddr = 10;
        
          int _len_XGI_Pr0 = 100;
          struct vb_device_info * XGI_Pr = (struct vb_device_info *) malloc(_len_XGI_Pr0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_XGI_Pr0; _i0++) {
              XGI_Pr[_i0].P3c4 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3d4 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3c0 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3ce = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3c2 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3cc = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3ca = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3c6 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3c7 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3c8 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3c9 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3da = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].Part3Port = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].Part2Port = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].Part1Port = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].Part0Port = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          XGIRegInit(XGI_Pr,BaseAddr);
          free(XGI_Pr);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 79
          // dynamic_instructions_O0 : 79
          // ------------------------------- 
          // static_instructions_O1 : 45
          // dynamic_instructions_O1 : 45
          // ------------------------------- 
          // static_instructions_O2 : 40
          // dynamic_instructions_O2 : 40
          // ------------------------------- 
          // static_instructions_O3 : 40
          // dynamic_instructions_O3 : 40
          // ------------------------------- 
          // static_instructions_Ofast : 40
          // dynamic_instructions_Ofast : 40
          // ------------------------------- 
          // static_instructions_Os : 40
          // dynamic_instructions_Os : 40
          // ------------------------------- 
          // static_instructions_Oz : 40
          // dynamic_instructions_Oz : 40
          // ------------------------------- 

          unsigned long BaseAddr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_XGI_Pr0 = 1;
          struct vb_device_info * XGI_Pr = (struct vb_device_info *) malloc(_len_XGI_Pr0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_XGI_Pr0; _i0++) {
              XGI_Pr[_i0].P3c4 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3d4 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3c0 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3ce = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3c2 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3cc = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3ca = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3c6 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3c7 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3c8 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3c9 = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].P3da = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].Part3Port = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].Part2Port = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].Part1Port = ((-2 * (next_i()%2)) + 1) * next_i();
          XGI_Pr[_i0].Part0Port = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          XGIRegInit(XGI_Pr,BaseAddr);
          free(XGI_Pr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
