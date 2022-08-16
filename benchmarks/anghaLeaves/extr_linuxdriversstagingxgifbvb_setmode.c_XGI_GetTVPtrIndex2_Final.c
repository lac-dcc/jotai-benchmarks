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
struct vb_device_info {int TVInfo; int VBType; int VBInfo; } ;

/* Variables and functions */
 int NTSC1024x768 ; 
 int SetInSlaveMode ; 
 int TVSetPAL ; 
 int TVSetPALM ; 
 int TVSetPALN ; 
 int TVSimuMode ; 
 int VB_SIS301B ; 
 int VB_SIS301LV ; 
 int VB_SIS302B ; 
 int VB_SIS302LV ; 
 int VB_XGI301C ; 

__attribute__((used)) static void XGI_GetTVPtrIndex2(unsigned short *tempbx,
			       unsigned char *tempcl,
			       unsigned char *tempch,
			       struct vb_device_info *pVBInfo)
{
	*tempbx = 0;
	*tempcl = 0;
	*tempch = 0;

	if (pVBInfo->TVInfo & TVSetPAL)
		*tempbx = 1;

	if (pVBInfo->TVInfo & TVSetPALM)
		*tempbx = 2;

	if (pVBInfo->TVInfo & TVSetPALN)
		*tempbx = 3;

	if (pVBInfo->TVInfo & NTSC1024x768) {
		*tempbx = 4;
		if (pVBInfo->TVInfo & TVSetPALM)
			*tempbx = 5;
	}

	if (pVBInfo->VBType & (VB_SIS301B | VB_SIS302B | VB_SIS301LV
			| VB_SIS302LV | VB_XGI301C)) {
		if (!(pVBInfo->VBInfo & SetInSlaveMode) || (pVBInfo->TVInfo
				& TVSimuMode)) {
			*tempbx += 8;
			*tempcl += 1;
		}
	}

	if (pVBInfo->VBType & (VB_SIS301B | VB_SIS302B | VB_SIS301LV
			| VB_SIS302LV | VB_XGI301C))
		(*tempch)++;
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
          int _len_tempbx0 = 1;
          unsigned short * tempbx = (unsigned short *) malloc(_len_tempbx0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_tempbx0; _i0++) {
            tempbx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tempcl0 = 1;
          unsigned char * tempcl = (unsigned char *) malloc(_len_tempcl0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_tempcl0; _i0++) {
            tempcl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tempch0 = 1;
          unsigned char * tempch = (unsigned char *) malloc(_len_tempch0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_tempch0; _i0++) {
            tempch[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pVBInfo0 = 1;
          struct vb_device_info * pVBInfo = (struct vb_device_info *) malloc(_len_pVBInfo0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_pVBInfo0; _i0++) {
            pVBInfo[_i0].TVInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VBType = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          XGI_GetTVPtrIndex2(tempbx,tempcl,tempch,pVBInfo);
          free(tempbx);
          free(tempcl);
          free(tempch);
          free(pVBInfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
