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
typedef  int /*<<< orphan*/  u8 ;
typedef  int /*<<< orphan*/  u16 ;
struct pvr2_hdw {int dummy; } ;

/* Variables and functions */
 int EIO ; 

__attribute__((used)) static int i2c_black_hole(struct pvr2_hdw *hdw,
			   u8 i2c_addr,u8 *wdata,u16 wlen,u8 *rdata,u16 rlen)
{
	return -EIO;
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
          int i2c_addr = 100;
          int wlen = 100;
          int rlen = 100;
          int _len_hdw0 = 1;
          struct pvr2_hdw * hdw = (struct pvr2_hdw *) malloc(_len_hdw0*sizeof(struct pvr2_hdw));
          for(int _i0 = 0; _i0 < _len_hdw0; _i0++) {
            hdw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wdata0 = 1;
          int * wdata = (int *) malloc(_len_wdata0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_wdata0; _i0++) {
            wdata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rdata0 = 1;
          int * rdata = (int *) malloc(_len_rdata0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rdata0; _i0++) {
            rdata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = i2c_black_hole(hdw,i2c_addr,wdata,wlen,rdata,rlen);
          printf("%d\n", benchRet); 
          free(hdw);
          free(wdata);
          free(rdata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
