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

/* Variables and functions */

__attribute__((used)) static inline u8 ieee80211_SignalStrengthTranslate(
	u8  CurrSS
	)
{
	u8 RetSS;

	// Step 1. Scale mapping.
	if(CurrSS >= 71 && CurrSS <= 100)
	{
		RetSS = 90 + ((CurrSS - 70) / 3);
	}
	else if(CurrSS >= 41 && CurrSS <= 70)
	{
		RetSS = 78 + ((CurrSS - 40) / 3);
	}
	else if(CurrSS >= 31 && CurrSS <= 40)
	{
		RetSS = 66 + (CurrSS - 30);
	}
	else if(CurrSS >= 21 && CurrSS <= 30)
	{
		RetSS = 54 + (CurrSS - 20);
	}
	else if(CurrSS >= 5 && CurrSS <= 20)
	{
		RetSS = 42 + (((CurrSS - 5) * 2) / 3);
	}
	else if(CurrSS == 4)
	{
		RetSS = 36;
	}
	else if(CurrSS == 3)
	{
		RetSS = 27;
	}
	else if(CurrSS == 2)
	{
		RetSS = 18;
	}
	else if(CurrSS == 1)
	{
		RetSS = 9;
	}
	else
	{
		RetSS = CurrSS;
	}
	//RT_TRACE(COMP_DBG, DBG_LOUD, ("##### After Mapping:  LastSS: %d, CurrSS: %d, RetSS: %d\n", LastSS, CurrSS, RetSS));

	// Step 2. Smoothing.

	//RT_TRACE(COMP_DBG, DBG_LOUD, ("$$$$$ After Smoothing:  LastSS: %d, CurrSS: %d, RetSS: %d\n", LastSS, CurrSS, RetSS));

	return RetSS;
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
          int CurrSS = 100;
          int benchRet = ieee80211_SignalStrengthTranslate(CurrSS);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int CurrSS = 255;
          int benchRet = ieee80211_SignalStrengthTranslate(CurrSS);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int CurrSS = 10;
          int benchRet = ieee80211_SignalStrengthTranslate(CurrSS);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
