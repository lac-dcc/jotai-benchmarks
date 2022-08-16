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
#define  RSI_BT_Q 130 
#define  RSI_COEX_Q 129 
 int RSI_COEX_Q_BT ; 
 int RSI_COEX_Q_COMMON ; 
 int RSI_COEX_Q_INVALID ; 
 int RSI_COEX_Q_WLAN ; 
#define  RSI_WLAN_Q 128 

__attribute__((used)) static inline int rsi_map_coex_q(u8 hal_queue)
{
	switch (hal_queue) {
	case RSI_COEX_Q:
		return RSI_COEX_Q_COMMON;
	case RSI_WLAN_Q:
		return RSI_COEX_Q_WLAN;
	case RSI_BT_Q:
		return RSI_COEX_Q_BT;
	}
	return RSI_COEX_Q_INVALID;
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
          int hal_queue = 100;
          int benchRet = rsi_map_coex_q(hal_queue);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int hal_queue = 255;
          int benchRet = rsi_map_coex_q(hal_queue);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int hal_queue = 10;
          int benchRet = rsi_map_coex_q(hal_queue);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
