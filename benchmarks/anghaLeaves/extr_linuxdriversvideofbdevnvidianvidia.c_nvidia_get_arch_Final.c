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
typedef  int /*<<< orphan*/  u32 ;
struct nvidia_par {int Chipset; } ;
struct fb_info {struct nvidia_par* par; } ;

/* Variables and functions */
 int /*<<< orphan*/  NV_ARCH_04 ; 
 int /*<<< orphan*/  NV_ARCH_10 ; 
 int /*<<< orphan*/  NV_ARCH_20 ; 
 int /*<<< orphan*/  NV_ARCH_30 ; 
 int /*<<< orphan*/  NV_ARCH_40 ; 

__attribute__((used)) static u32 nvidia_get_arch(struct fb_info *info)
{
	struct nvidia_par *par = info->par;
	u32 arch = 0;

	switch (par->Chipset & 0x0ff0) {
	case 0x0100:		/* GeForce 256 */
	case 0x0110:		/* GeForce2 MX */
	case 0x0150:		/* GeForce2 */
	case 0x0170:		/* GeForce4 MX */
	case 0x0180:		/* GeForce4 MX (8x AGP) */
	case 0x01A0:		/* nForce */
	case 0x01F0:		/* nForce2 */
		arch = NV_ARCH_10;
		break;
	case 0x0200:		/* GeForce3 */
	case 0x0250:		/* GeForce4 Ti */
	case 0x0280:		/* GeForce4 Ti (8x AGP) */
		arch = NV_ARCH_20;
		break;
	case 0x0300:		/* GeForceFX 5800 */
	case 0x0310:		/* GeForceFX 5600 */
	case 0x0320:		/* GeForceFX 5200 */
	case 0x0330:		/* GeForceFX 5900 */
	case 0x0340:		/* GeForceFX 5700 */
		arch = NV_ARCH_30;
		break;
	case 0x0040:		/* GeForce 6800 */
	case 0x00C0:		/* GeForce 6800 */
	case 0x0120:		/* GeForce 6800 */
	case 0x0140:		/* GeForce 6600 */
	case 0x0160:		/* GeForce 6200 */
	case 0x01D0:		/* GeForce 7200, 7300, 7400 */
	case 0x0090:		/* GeForce 7800 */
	case 0x0210:		/* GeForce 6800 */
	case 0x0220:		/* GeForce 6200 */
	case 0x0240:		/* GeForce 6100 */
	case 0x0290:		/* GeForce 7900 */
	case 0x0390:		/* GeForce 7600 */
	case 0x03D0:
		arch = NV_ARCH_40;
		break;
	case 0x0020:		/* TNT, TNT2 */
		arch = NV_ARCH_04;
		break;
	default:		/* unknown architecture */
		break;
	}

	return arch;
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
          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__par0 = 1;
          info[_i0].par = (struct nvidia_par *) malloc(_len_info__i0__par0*sizeof(struct nvidia_par));
          for(int _j0 = 0; _j0 < _len_info__i0__par0; _j0++) {
            info[_i0].par->Chipset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = nvidia_get_arch(info);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].par);
          }
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
