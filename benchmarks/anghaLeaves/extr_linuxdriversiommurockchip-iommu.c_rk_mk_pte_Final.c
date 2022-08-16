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
typedef  int phys_addr_t ;

/* Variables and functions */
 int IOMMU_READ ; 
 int IOMMU_WRITE ; 
 int RK_PTE_PAGE_ADDRESS_MASK ; 
 int RK_PTE_PAGE_READABLE ; 
 int RK_PTE_PAGE_VALID ; 
 int RK_PTE_PAGE_WRITABLE ; 

__attribute__((used)) static u32 rk_mk_pte(phys_addr_t page, int prot)
{
	u32 flags = 0;
	flags |= (prot & IOMMU_READ) ? RK_PTE_PAGE_READABLE : 0;
	flags |= (prot & IOMMU_WRITE) ? RK_PTE_PAGE_WRITABLE : 0;
	page &= RK_PTE_PAGE_ADDRESS_MASK;
	return page | flags | RK_PTE_PAGE_VALID;
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
          int page = 100;
          int prot = 100;
          int benchRet = rk_mk_pte(page,prot);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int page = 255;
          int prot = 255;
          int benchRet = rk_mk_pte(page,prot);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int page = 10;
          int prot = 10;
          int benchRet = rk_mk_pte(page,prot);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
