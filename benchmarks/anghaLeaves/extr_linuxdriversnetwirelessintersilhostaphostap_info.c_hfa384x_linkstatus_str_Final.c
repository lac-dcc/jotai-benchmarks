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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int u16 ;

/* Variables and functions */
#define  HFA384X_LINKSTATUS_AP_CHANGE 133 
#define  HFA384X_LINKSTATUS_AP_IN_RANGE 132 
#define  HFA384X_LINKSTATUS_AP_OUT_OF_RANGE 131 
#define  HFA384X_LINKSTATUS_ASSOC_FAILED 130 
#define  HFA384X_LINKSTATUS_CONNECTED 129 
#define  HFA384X_LINKSTATUS_DISCONNECTED 128 

__attribute__((used)) static const char* hfa384x_linkstatus_str(u16 linkstatus)
{
	switch (linkstatus) {
	case HFA384X_LINKSTATUS_CONNECTED:
		return "Connected";
	case HFA384X_LINKSTATUS_DISCONNECTED:
		return "Disconnected";
	case HFA384X_LINKSTATUS_AP_CHANGE:
		return "Access point change";
	case HFA384X_LINKSTATUS_AP_OUT_OF_RANGE:
		return "Access point out of range";
	case HFA384X_LINKSTATUS_AP_IN_RANGE:
		return "Access point in range";
	case HFA384X_LINKSTATUS_ASSOC_FAILED:
		return "Association failed";
	default:
		return "Unknown";
	}
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
          int linkstatus = 100;
          const char * benchRet = hfa384x_linkstatus_str(linkstatus);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int linkstatus = 255;
          const char * benchRet = hfa384x_linkstatus_str(linkstatus);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int linkstatus = 10;
          const char * benchRet = hfa384x_linkstatus_str(linkstatus);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
