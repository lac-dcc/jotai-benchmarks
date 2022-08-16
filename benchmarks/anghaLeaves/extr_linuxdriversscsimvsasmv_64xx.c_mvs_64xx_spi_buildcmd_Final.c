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
typedef  scalar_t__ u8 ;
typedef  int u32 ;
struct mvs_info {int dummy; } ;

/* Variables and functions */
 int MV_MAX_U32 ; 

__attribute__((used)) static int mvs_64xx_spi_buildcmd(struct mvs_info *mvi,
			u32      *dwCmd,
			u8       cmd,
			u8       read,
			u8       length,
			u32      addr
			)
{
	u32  dwTmp;

	dwTmp = ((u32)cmd << 24) | ((u32)length << 19);
	if (read)
		dwTmp |= 1U<<23;

	if (addr != MV_MAX_U32) {
		dwTmp |= 1U<<22;
		dwTmp |= (addr & 0x0003FFFF);
	}

	*dwCmd = dwTmp;
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
          long cmd = 100;
          long read = 100;
          long length = 100;
          int addr = 100;
          int _len_mvi0 = 1;
          struct mvs_info * mvi = (struct mvs_info *) malloc(_len_mvi0*sizeof(struct mvs_info));
          for(int _i0 = 0; _i0 < _len_mvi0; _i0++) {
            mvi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dwCmd0 = 1;
          int * dwCmd = (int *) malloc(_len_dwCmd0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dwCmd0; _i0++) {
            dwCmd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mvs_64xx_spi_buildcmd(mvi,dwCmd,cmd,read,length,addr);
          printf("%d\n", benchRet); 
          free(mvi);
          free(dwCmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
