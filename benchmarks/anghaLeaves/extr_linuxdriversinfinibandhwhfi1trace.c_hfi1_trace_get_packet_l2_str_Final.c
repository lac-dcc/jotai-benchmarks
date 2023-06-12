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
typedef  int u8 ;

/* Variables and functions */

const char *hfi1_trace_get_packet_l2_str(u8 l2)
{
	switch (l2) {
	case 0:
		return "0";
	case 1:
		return "1";
	case 2:
		return "16B";
	case 3:
		return "9B";
	}
	return "";
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
          int l2 = 100;
        
          const char * benchRet = hfi1_trace_get_packet_l2_str(l2);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int l2 = 255;
        
          const char * benchRet = hfi1_trace_get_packet_l2_str(l2);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int l2 = 10;
        
          const char * benchRet = hfi1_trace_get_packet_l2_str(l2);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // empty
    case 3:
    {
          int l2 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          const char * benchRet = hfi1_trace_get_packet_l2_str(l2);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
