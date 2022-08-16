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
 size_t SIZE_T_MAX ; 
 size_t SOTCIX_AV ; 
 size_t SOTCIX_BE ; 
 size_t SOTCIX_BK ; 
 size_t SOTCIX_BK_SYS ; 
 size_t SOTCIX_CTL ; 
 size_t SOTCIX_OAM ; 
 size_t SOTCIX_RD ; 
 size_t SOTCIX_RV ; 
 size_t SOTCIX_VI ; 
 size_t SOTCIX_VO ; 
#define  SO_TC_AV 140 
#define  SO_TC_BE 139 
#define  SO_TC_BK 138 
#define  SO_TC_BK_SYS 137 
#define  SO_TC_CTL 136 
#define  SO_TC_OAM 135 
#define  SO_TC_RD 134 
#define  SO_TC_RV 133 
#define  SO_TC_VI 132 
#define  SO_TC_VO 131 
#define  _SO_TC_BK 130 
#define  _SO_TC_VI 129 
#define  _SO_TC_VO 128 

__attribute__((used)) static size_t
sotc_index(int sotc)
{
	switch (sotc) {
		case SO_TC_BK_SYS:
			return (SOTCIX_BK_SYS);
		case _SO_TC_BK:
		case SO_TC_BK:
			return (SOTCIX_BK);

		case SO_TC_BE:
			return (SOTCIX_BE);
		case SO_TC_RD:
			return (SOTCIX_RD);
		case SO_TC_OAM:
			return (SOTCIX_OAM);

		case SO_TC_AV:
			return (SOTCIX_AV);
		case SO_TC_RV:
			return (SOTCIX_RV);
		case _SO_TC_VI:
		case SO_TC_VI:
			return (SOTCIX_VI);

		case _SO_TC_VO:
		case SO_TC_VO:
			return (SOTCIX_VO);
		case SO_TC_CTL:
			return (SOTCIX_CTL);

		default:
			break;
	}
	/*
	 * Unknown traffic class value
	 */
	return (SIZE_T_MAX);
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
          int sotc = 100;
          unsigned long benchRet = sotc_index(sotc);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int sotc = 255;
          unsigned long benchRet = sotc_index(sotc);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sotc = 10;
          unsigned long benchRet = sotc_index(sotc);
          printf("%lu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
