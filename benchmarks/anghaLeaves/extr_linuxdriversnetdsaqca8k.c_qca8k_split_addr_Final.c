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
typedef  int u32 ;
typedef  int u16 ;

/* Variables and functions */

__attribute__((used)) static void
qca8k_split_addr(u32 regaddr, u16 *r1, u16 *r2, u16 *page)
{
	regaddr >>= 1;
	*r1 = regaddr & 0x1e;

	regaddr >>= 5;
	*r2 = regaddr & 0x7;

	regaddr >>= 3;
	*page = regaddr & 0x3ff;
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
          int regaddr = 100;
          int _len_r10 = 1;
          int * r1 = (int *) malloc(_len_r10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r10; _i0++) {
            r1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r20 = 1;
          int * r2 = (int *) malloc(_len_r20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r20; _i0++) {
            r2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_page0 = 1;
          int * page = (int *) malloc(_len_page0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
            page[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qca8k_split_addr(regaddr,r1,r2,page);
          free(r1);
          free(r2);
          free(page);
        
        break;
    }
    // big-arr
    case 1:
    {
          int regaddr = 255;
          int _len_r10 = 65025;
          int * r1 = (int *) malloc(_len_r10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r10; _i0++) {
            r1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r20 = 65025;
          int * r2 = (int *) malloc(_len_r20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r20; _i0++) {
            r2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_page0 = 65025;
          int * page = (int *) malloc(_len_page0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
            page[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qca8k_split_addr(regaddr,r1,r2,page);
          free(r1);
          free(r2);
          free(page);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int regaddr = 10;
          int _len_r10 = 100;
          int * r1 = (int *) malloc(_len_r10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r10; _i0++) {
            r1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r20 = 100;
          int * r2 = (int *) malloc(_len_r20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r20; _i0++) {
            r2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_page0 = 100;
          int * page = (int *) malloc(_len_page0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
            page[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qca8k_split_addr(regaddr,r1,r2,page);
          free(r1);
          free(r2);
          free(page);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
