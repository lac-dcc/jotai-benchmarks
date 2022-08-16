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
struct isp_device {int dummy; } ;

/* Variables and functions */
 int ENODEV ; 

__attribute__((used)) static int isp_attach_iommu(struct isp_device *isp)
{
#ifdef CONFIG_ARM_DMA_USE_IOMMU
	struct dma_iommu_mapping *mapping;
	int ret;

	/*
	 * Create the ARM mapping, used by the ARM DMA mapping core to allocate
	 * VAs. This will allocate a corresponding IOMMU domain.
	 */
	mapping = arm_iommu_create_mapping(&platform_bus_type, SZ_1G, SZ_2G);
	if (IS_ERR(mapping)) {
		dev_err(isp->dev, "failed to create ARM IOMMU mapping\n");
		return PTR_ERR(mapping);
	}

	isp->mapping = mapping;

	/* Attach the ARM VA mapping to the device. */
	ret = arm_iommu_attach_device(isp->dev, mapping);
	if (ret < 0) {
		dev_err(isp->dev, "failed to attach device to VA mapping\n");
		goto error;
	}

	return 0;

error:
	arm_iommu_release_mapping(isp->mapping);
	isp->mapping = NULL;
	return ret;
#else
	return -ENODEV;
#endif
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
          int _len_isp0 = 1;
          struct isp_device * isp = (struct isp_device *) malloc(_len_isp0*sizeof(struct isp_device));
          for(int _i0 = 0; _i0 < _len_isp0; _i0++) {
            isp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = isp_attach_iommu(isp);
          printf("%d\n", benchRet); 
          free(isp);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_isp0 = 100;
          struct isp_device * isp = (struct isp_device *) malloc(_len_isp0*sizeof(struct isp_device));
          for(int _i0 = 0; _i0 < _len_isp0; _i0++) {
            isp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = isp_attach_iommu(isp);
          printf("%d\n", benchRet); 
          free(isp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
