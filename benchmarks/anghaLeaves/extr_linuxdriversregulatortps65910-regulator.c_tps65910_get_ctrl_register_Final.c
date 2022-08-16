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
 int EINVAL ; 
 int TPS65910_BBCH ; 
#define  TPS65910_REG_VAUX1 141 
#define  TPS65910_REG_VAUX2 140 
#define  TPS65910_REG_VAUX33 139 
#define  TPS65910_REG_VBB 138 
#define  TPS65910_REG_VDAC 137 
#define  TPS65910_REG_VDD1 136 
#define  TPS65910_REG_VDD2 135 
#define  TPS65910_REG_VDD3 134 
#define  TPS65910_REG_VDIG1 133 
#define  TPS65910_REG_VDIG2 132 
#define  TPS65910_REG_VIO 131 
#define  TPS65910_REG_VMMC 130 
#define  TPS65910_REG_VPLL 129 
#define  TPS65910_REG_VRTC 128 
 int TPS65910_VAUX1 ; 
 int TPS65910_VAUX2 ; 
 int TPS65910_VAUX33 ; 
 int TPS65910_VDAC ; 
 int TPS65910_VDD1 ; 
 int TPS65910_VDD2 ; 
 int TPS65910_VDD3 ; 
 int TPS65910_VDIG1 ; 
 int TPS65910_VDIG2 ; 
 int TPS65910_VIO ; 
 int TPS65910_VMMC ; 
 int TPS65910_VPLL ; 
 int TPS65910_VRTC ; 

__attribute__((used)) static int tps65910_get_ctrl_register(int id)
{
	switch (id) {
	case TPS65910_REG_VRTC:
		return TPS65910_VRTC;
	case TPS65910_REG_VIO:
		return TPS65910_VIO;
	case TPS65910_REG_VDD1:
		return TPS65910_VDD1;
	case TPS65910_REG_VDD2:
		return TPS65910_VDD2;
	case TPS65910_REG_VDD3:
		return TPS65910_VDD3;
	case TPS65910_REG_VDIG1:
		return TPS65910_VDIG1;
	case TPS65910_REG_VDIG2:
		return TPS65910_VDIG2;
	case TPS65910_REG_VPLL:
		return TPS65910_VPLL;
	case TPS65910_REG_VDAC:
		return TPS65910_VDAC;
	case TPS65910_REG_VAUX1:
		return TPS65910_VAUX1;
	case TPS65910_REG_VAUX2:
		return TPS65910_VAUX2;
	case TPS65910_REG_VAUX33:
		return TPS65910_VAUX33;
	case TPS65910_REG_VMMC:
		return TPS65910_VMMC;
	case TPS65910_REG_VBB:
		return TPS65910_BBCH;
	default:
		return -EINVAL;
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
          int id = 100;
          int benchRet = tps65910_get_ctrl_register(id);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int id = 255;
          int benchRet = tps65910_get_ctrl_register(id);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int id = 10;
          int benchRet = tps65910_get_ctrl_register(id);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
