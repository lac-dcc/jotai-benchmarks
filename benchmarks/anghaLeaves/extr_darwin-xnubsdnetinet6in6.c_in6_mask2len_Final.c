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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  int u_char ;
struct in6_addr {int dummy; } ;

/* Variables and functions */

int
in6_mask2len(struct in6_addr *mask, u_char *lim0)
{
	int x = 0, y;
	u_char *lim = lim0, *p;

	/* ignore the scope_id part */
	if (lim0 == NULL || lim0 - (u_char *)mask > sizeof (*mask))
		lim = (u_char *)mask + sizeof (*mask);
	for (p = (u_char *)mask; p < lim; x++, p++) {
		if (*p != 0xff)
			break;
	}
	y = 0;
	if (p < lim) {
		for (y = 0; y < 8; y++) {
			if ((*p & (0x80 >> y)) == 0)
				break;
		}
	}

	/*
	 * when the limit pointer is given, do a stricter check on the
	 * remaining bits.
	 */
	if (p < lim) {
		if (y != 0 && (*p & (0x00ff >> y)) != 0)
			return (-1);
		for (p = p + 1; p < lim; p++)
			if (*p != 0)
				return (-1);
	}

	return (x * 8 + y);
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 69
          // dynamic_instructions_O0 : 80
          // ------------------------------- 
          // static_instructions_O1 : 36
          // dynamic_instructions_O1 : 40
          // ------------------------------- 
          // static_instructions_O2 : 26
          // dynamic_instructions_O2 : 26
          // ------------------------------- 
          // static_instructions_O3 : 26
          // dynamic_instructions_O3 : 26
          // ------------------------------- 
          // static_instructions_Ofast : 26
          // dynamic_instructions_Ofast : 26
          // ------------------------------- 
          // static_instructions_Os : 31
          // dynamic_instructions_Os : 35
          // ------------------------------- 
          // static_instructions_Oz : 36
          // dynamic_instructions_Oz : 42
          // ------------------------------- 

          int _len_mask0 = 65025;
          struct in6_addr * mask = (struct in6_addr *) malloc(_len_mask0*sizeof(struct in6_addr));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
              mask[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_lim00 = 65025;
          int * lim0 = (int *) malloc(_len_lim00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lim00; _i0++) {
            lim0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = in6_mask2len(mask,lim0);
          printf("%d\n", benchRet); 
          free(mask);
          free(lim0);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 69
          // dynamic_instructions_O0 : 80
          // ------------------------------- 
          // static_instructions_O1 : 36
          // dynamic_instructions_O1 : 40
          // ------------------------------- 
          // static_instructions_O2 : 26
          // dynamic_instructions_O2 : 26
          // ------------------------------- 
          // static_instructions_O3 : 26
          // dynamic_instructions_O3 : 26
          // ------------------------------- 
          // static_instructions_Ofast : 26
          // dynamic_instructions_Ofast : 26
          // ------------------------------- 
          // static_instructions_Os : 31
          // dynamic_instructions_Os : 35
          // ------------------------------- 
          // static_instructions_Oz : 36
          // dynamic_instructions_Oz : 42
          // ------------------------------- 

          int _len_mask0 = 100;
          struct in6_addr * mask = (struct in6_addr *) malloc(_len_mask0*sizeof(struct in6_addr));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
              mask[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_lim00 = 100;
          int * lim0 = (int *) malloc(_len_lim00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lim00; _i0++) {
            lim0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = in6_mask2len(mask,lim0);
          printf("%d\n", benchRet); 
          free(mask);
          free(lim0);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 69
          // dynamic_instructions_O0 : 80
          // ------------------------------- 
          // static_instructions_O1 : 36
          // dynamic_instructions_O1 : 40
          // ------------------------------- 
          // static_instructions_O2 : 26
          // dynamic_instructions_O2 : 26
          // ------------------------------- 
          // static_instructions_O3 : 26
          // dynamic_instructions_O3 : 26
          // ------------------------------- 
          // static_instructions_Ofast : 26
          // dynamic_instructions_Ofast : 26
          // ------------------------------- 
          // static_instructions_Os : 31
          // dynamic_instructions_Os : 35
          // ------------------------------- 
          // static_instructions_Oz : 36
          // dynamic_instructions_Oz : 42
          // ------------------------------- 

          int _len_mask0 = 1;
          struct in6_addr * mask = (struct in6_addr *) malloc(_len_mask0*sizeof(struct in6_addr));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
              mask[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_lim00 = 1;
          int * lim0 = (int *) malloc(_len_lim00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lim00; _i0++) {
            lim0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = in6_mask2len(mask,lim0);
          printf("%d\n", benchRet); 
          free(mask);
          free(lim0);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
