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
       1            big-arr-10x\n\
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
struct vb_device_info {unsigned short VBInfo; } ;

/* Variables and functions */
 unsigned short DisableCRT2Display ; 
 unsigned short SetCRT2ToDualEdge ; 
 unsigned short SetSimuScanMode ; 
 unsigned short SwitchCRT2 ; 

__attribute__((used)) static unsigned char XGI_IsLCDON(struct vb_device_info *pVBInfo)
{
	unsigned short tempax;

	tempax = pVBInfo->VBInfo;
	if (tempax & SetCRT2ToDualEdge)
		return 0;
	else if (tempax & (DisableCRT2Display | SwitchCRT2 | SetSimuScanMode))
		return 1;

	return 0;
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
          int _len_pVBInfo0 = 1;
          struct vb_device_info * pVBInfo = (struct vb_device_info *) malloc(_len_pVBInfo0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_pVBInfo0; _i0++) {
            pVBInfo[_i0].VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char benchRet = XGI_IsLCDON(pVBInfo);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(pVBInfo);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_pVBInfo0 = 100;
          struct vb_device_info * pVBInfo = (struct vb_device_info *) malloc(_len_pVBInfo0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_pVBInfo0; _i0++) {
            pVBInfo[_i0].VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char benchRet = XGI_IsLCDON(pVBInfo);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(pVBInfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
