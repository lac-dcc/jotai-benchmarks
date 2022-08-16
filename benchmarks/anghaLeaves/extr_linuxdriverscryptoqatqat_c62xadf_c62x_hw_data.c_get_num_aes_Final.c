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
typedef  int u32 ;
struct adf_hw_device_data {int ae_mask; } ;

/* Variables and functions */
 int ADF_C62X_MAX_ACCELENGINES ; 

__attribute__((used)) static u32 get_num_aes(struct adf_hw_device_data *self)
{
	u32 i, ctr = 0;

	if (!self || !self->ae_mask)
		return 0;

	for (i = 0; i < ADF_C62X_MAX_ACCELENGINES; i++) {
		if (self->ae_mask & (1 << i))
			ctr++;
	}
	return ctr;
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
            self[_i0].ae_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_num_aes(self);
          printf("%d\n", benchRet); 
          free(self);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_self0 = 100;
          struct adf_hw_device_data * self = (struct adf_hw_device_data *) malloc(_len_self0*sizeof(struct adf_hw_device_data));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
            self[_i0].ae_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_num_aes(self);
          printf("%d\n", benchRet); 
          free(self);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
