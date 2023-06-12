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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u64 ;
struct TYPE_3__ {unsigned int cclk; } ;
struct TYPE_4__ {TYPE_1__ vpd; } ;
struct adapter {TYPE_2__ params; } ;

/* Variables and functions */

__attribute__((used)) static u64 chan_rate(struct adapter *adap, unsigned int bytes256)
{
	u64 v = bytes256 * adap->params.vpd.cclk;

	return v * 62 + v / 2;
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
          unsigned int bytes256 = 100;
        
          int _len_adap0 = 1;
          struct adapter * adap = (struct adapter *) malloc(_len_adap0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adap0; _i0++) {
              adap[_i0].params.vpd.cclk = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = chan_rate(adap,bytes256);
          printf("%d\n", benchRet); 
          free(adap);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int bytes256 = 255;
        
          int _len_adap0 = 65025;
          struct adapter * adap = (struct adapter *) malloc(_len_adap0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adap0; _i0++) {
              adap[_i0].params.vpd.cclk = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = chan_rate(adap,bytes256);
          printf("%d\n", benchRet); 
          free(adap);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int bytes256 = 10;
        
          int _len_adap0 = 100;
          struct adapter * adap = (struct adapter *) malloc(_len_adap0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adap0; _i0++) {
              adap[_i0].params.vpd.cclk = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = chan_rate(adap,bytes256);
          printf("%d\n", benchRet); 
          free(adap);
        
        break;
    }
    // empty
    case 3:
    {
          unsigned int bytes256 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_adap0 = 1;
          struct adapter * adap = (struct adapter *) malloc(_len_adap0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adap0; _i0++) {
              adap[_i0].params.vpd.cclk = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = chan_rate(adap,bytes256);
          printf("%d\n", benchRet); 
          free(adap);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
