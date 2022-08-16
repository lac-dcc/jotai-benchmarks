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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ fmt; } ;
struct arm_lpae_io_pgtable {TYPE_1__ iop; } ;
typedef  int arm_lpae_iopte ;

/* Variables and functions */
 scalar_t__ ARM_32_LPAE_S1 ; 
 scalar_t__ ARM_64_LPAE_S1 ; 
 int ARM_LPAE_MAIR_ATTR_IDX_CACHE ; 
 int ARM_LPAE_MAIR_ATTR_IDX_DEV ; 
 int ARM_LPAE_PTE_AP_RDONLY ; 
 int ARM_LPAE_PTE_AP_UNPRIV ; 
 int ARM_LPAE_PTE_ATTRINDX_SHIFT ; 
 int ARM_LPAE_PTE_HAP_FAULT ; 
 int ARM_LPAE_PTE_HAP_READ ; 
 int ARM_LPAE_PTE_HAP_WRITE ; 
 int ARM_LPAE_PTE_MEMATTR_DEV ; 
 int ARM_LPAE_PTE_MEMATTR_NC ; 
 int ARM_LPAE_PTE_MEMATTR_OIWB ; 
 int ARM_LPAE_PTE_XN ; 
 int ARM_LPAE_PTE_nG ; 
 int IOMMU_CACHE ; 
 int IOMMU_MMIO ; 
 int IOMMU_NOEXEC ; 
 int IOMMU_PRIV ; 
 int IOMMU_READ ; 
 int IOMMU_WRITE ; 

__attribute__((used)) static arm_lpae_iopte arm_lpae_prot_to_pte(struct arm_lpae_io_pgtable *data,
					   int prot)
{
	arm_lpae_iopte pte;

	if (data->iop.fmt == ARM_64_LPAE_S1 ||
	    data->iop.fmt == ARM_32_LPAE_S1) {
		pte = ARM_LPAE_PTE_nG;

		if (!(prot & IOMMU_WRITE) && (prot & IOMMU_READ))
			pte |= ARM_LPAE_PTE_AP_RDONLY;

		if (!(prot & IOMMU_PRIV))
			pte |= ARM_LPAE_PTE_AP_UNPRIV;

		if (prot & IOMMU_MMIO)
			pte |= (ARM_LPAE_MAIR_ATTR_IDX_DEV
				<< ARM_LPAE_PTE_ATTRINDX_SHIFT);
		else if (prot & IOMMU_CACHE)
			pte |= (ARM_LPAE_MAIR_ATTR_IDX_CACHE
				<< ARM_LPAE_PTE_ATTRINDX_SHIFT);
	} else {
		pte = ARM_LPAE_PTE_HAP_FAULT;
		if (prot & IOMMU_READ)
			pte |= ARM_LPAE_PTE_HAP_READ;
		if (prot & IOMMU_WRITE)
			pte |= ARM_LPAE_PTE_HAP_WRITE;
		if (prot & IOMMU_MMIO)
			pte |= ARM_LPAE_PTE_MEMATTR_DEV;
		else if (prot & IOMMU_CACHE)
			pte |= ARM_LPAE_PTE_MEMATTR_OIWB;
		else
			pte |= ARM_LPAE_PTE_MEMATTR_NC;
	}

	if (prot & IOMMU_NOEXEC)
		pte |= ARM_LPAE_PTE_XN;

	return pte;
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
          int prot = 100;
          int _len_data0 = 1;
          struct arm_lpae_io_pgtable * data = (struct arm_lpae_io_pgtable *) malloc(_len_data0*sizeof(struct arm_lpae_io_pgtable));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].iop.fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = arm_lpae_prot_to_pte(data,prot);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int prot = 10;
          int _len_data0 = 100;
          struct arm_lpae_io_pgtable * data = (struct arm_lpae_io_pgtable *) malloc(_len_data0*sizeof(struct arm_lpae_io_pgtable));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].iop.fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = arm_lpae_prot_to_pte(data,prot);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
