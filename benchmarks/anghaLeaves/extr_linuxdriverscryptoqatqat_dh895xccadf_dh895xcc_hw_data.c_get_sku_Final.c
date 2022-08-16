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
struct adf_hw_device_data {int fuses; } ;
typedef  enum dev_sku_info { ____Placeholder_dev_sku_info } dev_sku_info ;

/* Variables and functions */
#define  ADF_DH895XCC_FUSECTL_SKU_1 131 
#define  ADF_DH895XCC_FUSECTL_SKU_2 130 
#define  ADF_DH895XCC_FUSECTL_SKU_3 129 
#define  ADF_DH895XCC_FUSECTL_SKU_4 128 
 int ADF_DH895XCC_FUSECTL_SKU_MASK ; 
 int ADF_DH895XCC_FUSECTL_SKU_SHIFT ; 
 int DEV_SKU_1 ; 
 int DEV_SKU_2 ; 
 int DEV_SKU_3 ; 
 int DEV_SKU_4 ; 
 int DEV_SKU_UNKNOWN ; 

__attribute__((used)) static enum dev_sku_info get_sku(struct adf_hw_device_data *self)
{
	int sku = (self->fuses & ADF_DH895XCC_FUSECTL_SKU_MASK)
	    >> ADF_DH895XCC_FUSECTL_SKU_SHIFT;

	switch (sku) {
	case ADF_DH895XCC_FUSECTL_SKU_1:
		return DEV_SKU_1;
	case ADF_DH895XCC_FUSECTL_SKU_2:
		return DEV_SKU_2;
	case ADF_DH895XCC_FUSECTL_SKU_3:
		return DEV_SKU_3;
	case ADF_DH895XCC_FUSECTL_SKU_4:
		return DEV_SKU_4;
	default:
		return DEV_SKU_UNKNOWN;
	}
	return DEV_SKU_UNKNOWN;
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
          int _len_self0 = 1;
          struct adf_hw_device_data * self = (struct adf_hw_device_data *) malloc(_len_self0*sizeof(struct adf_hw_device_data));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
            self[_i0].fuses = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum dev_sku_info benchRet = get_sku(self);
          free(self);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_self0 = 100;
          struct adf_hw_device_data * self = (struct adf_hw_device_data *) malloc(_len_self0*sizeof(struct adf_hw_device_data));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
            self[_i0].fuses = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum dev_sku_info benchRet = get_sku(self);
          free(self);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
