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
struct qib_flash {int if_length; int if_csum; } ;

/* Variables and functions */

__attribute__((used)) static u8 flash_csum(struct qib_flash *ifp, int adjust)
{
	u8 *ip = (u8 *) ifp;
	u8 csum = 0, len;

	/*
	 * Limit length checksummed to max length of actual data.
	 * Checksum of erased eeprom will still be bad, but we avoid
	 * reading past the end of the buffer we were passed.
	 */
	len = ifp->if_length;
	if (len > sizeof(struct qib_flash))
		len = sizeof(struct qib_flash);
	while (len--)
		csum += *ip++;
	csum -= ifp->if_csum;
	csum = ~csum;
	if (adjust)
		ifp->if_csum = csum;

	return csum;
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
          int adjust = 255;
        
          int _len_ifp0 = 65025;
          struct qib_flash * ifp = (struct qib_flash *) malloc(_len_ifp0*sizeof(struct qib_flash));
          for(int _i0 = 0; _i0 < _len_ifp0; _i0++) {
              ifp[_i0].if_length = ((-2 * (next_i()%2)) + 1) * next_i();
          ifp[_i0].if_csum = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = flash_csum(ifp,adjust);
          printf("%d\n", benchRet); 
          free(ifp);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int adjust = 10;
        
          int _len_ifp0 = 100;
          struct qib_flash * ifp = (struct qib_flash *) malloc(_len_ifp0*sizeof(struct qib_flash));
          for(int _i0 = 0; _i0 < _len_ifp0; _i0++) {
              ifp[_i0].if_length = ((-2 * (next_i()%2)) + 1) * next_i();
          ifp[_i0].if_csum = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = flash_csum(ifp,adjust);
          printf("%d\n", benchRet); 
          free(ifp);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
