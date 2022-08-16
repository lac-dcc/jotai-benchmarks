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
typedef  int u64 ;
struct kvmppc_slb {int base_page_size; } ;

/* Variables and functions */
#define  MMU_PAGE_16M 129 
#define  MMU_PAGE_64K 128 

__attribute__((used)) static int decode_pagesize(struct kvmppc_slb *slbe, u64 r)
{
	switch (slbe->base_page_size) {
	case MMU_PAGE_64K:
		if ((r & 0xf000) == 0x1000)
			return MMU_PAGE_64K;
		break;
	case MMU_PAGE_16M:
		if ((r & 0xff000) == 0)
			return MMU_PAGE_16M;
		break;
	}
	return -1;
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
          int r = 100;
          int _len_slbe0 = 1;
          struct kvmppc_slb * slbe = (struct kvmppc_slb *) malloc(_len_slbe0*sizeof(struct kvmppc_slb));
          for(int _i0 = 0; _i0 < _len_slbe0; _i0++) {
            slbe[_i0].base_page_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = decode_pagesize(slbe,r);
          printf("%d\n", benchRet); 
          free(slbe);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int r = 10;
          int _len_slbe0 = 100;
          struct kvmppc_slb * slbe = (struct kvmppc_slb *) malloc(_len_slbe0*sizeof(struct kvmppc_slb));
          for(int _i0 = 0; _i0 < _len_slbe0; _i0++) {
            slbe[_i0].base_page_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = decode_pagesize(slbe,r);
          printf("%d\n", benchRet); 
          free(slbe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
