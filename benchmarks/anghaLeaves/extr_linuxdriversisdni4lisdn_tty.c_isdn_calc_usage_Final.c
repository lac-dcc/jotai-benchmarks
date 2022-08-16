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

/* Variables and functions */
 int ISDN_USAGE_MODEM ; 

__attribute__((used)) static int
isdn_calc_usage(int si, int l2)
{
	int usg = ISDN_USAGE_MODEM;

#ifdef CONFIG_ISDN_AUDIO
	if (si == 1) {
		switch (l2) {
		case ISDN_PROTO_L2_MODEM:
			usg = ISDN_USAGE_MODEM;
			break;
#ifdef CONFIG_ISDN_TTY_FAX
		case ISDN_PROTO_L2_FAX:
			usg = ISDN_USAGE_FAX;
			break;
#endif
		case ISDN_PROTO_L2_TRANS:
		default:
			usg = ISDN_USAGE_VOICE;
			break;
		}
	}
#endif
	return (usg);
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
          int si = 100;
          int l2 = 100;
          int benchRet = isdn_calc_usage(si,l2);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int si = 255;
          int l2 = 255;
          int benchRet = isdn_calc_usage(si,l2);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int si = 10;
          int l2 = 10;
          int benchRet = isdn_calc_usage(si,l2);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
