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
typedef  int u8 ;
struct ds1685_priv {scalar_t__ bcd_mode; } ;

/* Variables and functions */
 int EDOM ; 

__attribute__((used)) static inline int
ds1685_rtc_check_mday(struct ds1685_priv *rtc, u8 mday)
{
	if (rtc->bcd_mode) {
		if (mday < 0x01 || mday > 0x31 || (mday & 0x0f) > 0x09)
			return -EDOM;
	} else {
		if (mday < 1 || mday > 31)
			return -EDOM;
	}
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
          int mday = 100;
          int _len_rtc0 = 1;
          struct ds1685_priv * rtc = (struct ds1685_priv *) malloc(_len_rtc0*sizeof(struct ds1685_priv));
          for(int _i0 = 0; _i0 < _len_rtc0; _i0++) {
            rtc[_i0].bcd_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ds1685_rtc_check_mday(rtc,mday);
          printf("%d\n", benchRet); 
          free(rtc);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int mday = 10;
          int _len_rtc0 = 100;
          struct ds1685_priv * rtc = (struct ds1685_priv *) malloc(_len_rtc0*sizeof(struct ds1685_priv));
          for(int _i0 = 0; _i0 < _len_rtc0; _i0++) {
            rtc[_i0].bcd_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ds1685_rtc_check_mday(rtc,mday);
          printf("%d\n", benchRet); 
          free(rtc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
