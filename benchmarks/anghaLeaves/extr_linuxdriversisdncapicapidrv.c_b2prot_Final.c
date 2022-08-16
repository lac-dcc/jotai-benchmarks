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
typedef  int u32 ;

/* Variables and functions */
#define  ISDN_PROTO_L2_FAX 137 
#define  ISDN_PROTO_L2_HDLC 136 
#define  ISDN_PROTO_L2_MODEM 135 
#define  ISDN_PROTO_L2_TRANS 134 
#define  ISDN_PROTO_L2_V11019 133 
#define  ISDN_PROTO_L2_V11038 132 
#define  ISDN_PROTO_L2_V11096 131 
#define  ISDN_PROTO_L2_X75BUI 130 
#define  ISDN_PROTO_L2_X75I 129 
#define  ISDN_PROTO_L2_X75UI 128 

__attribute__((used)) static inline u32 b2prot(int l2, int l3)
{
	switch (l2) {
	case ISDN_PROTO_L2_X75I:
	case ISDN_PROTO_L2_X75UI:
	case ISDN_PROTO_L2_X75BUI:
	default:
		return 0;
	case ISDN_PROTO_L2_HDLC:
	case ISDN_PROTO_L2_TRANS:
	case ISDN_PROTO_L2_V11096:
	case ISDN_PROTO_L2_V11019:
	case ISDN_PROTO_L2_V11038:
	case ISDN_PROTO_L2_MODEM:
		return 1;
	case ISDN_PROTO_L2_FAX:
		return 4;
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
          int l2 = 100;
          int l3 = 100;
          int benchRet = b2prot(l2,l3);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int l2 = 255;
          int l3 = 255;
          int benchRet = b2prot(l2,l3);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int l2 = 10;
          int l3 = 10;
          int benchRet = b2prot(l2,l3);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
