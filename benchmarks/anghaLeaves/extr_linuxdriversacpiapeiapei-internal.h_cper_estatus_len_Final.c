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
typedef  scalar_t__ u32 ;
struct acpi_hest_generic_status {scalar_t__ data_length; scalar_t__ raw_data_length; scalar_t__ raw_data_offset; } ;

/* Variables and functions */

__attribute__((used)) static inline u32 cper_estatus_len(struct acpi_hest_generic_status *estatus)
{
	if (estatus->raw_data_length)
		return estatus->raw_data_offset + \
			estatus->raw_data_length;
	else
		return sizeof(*estatus) + estatus->data_length;
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
          int _len_estatus0 = 65025;
          struct acpi_hest_generic_status * estatus = (struct acpi_hest_generic_status *) malloc(_len_estatus0*sizeof(struct acpi_hest_generic_status));
          for(int _i0 = 0; _i0 < _len_estatus0; _i0++) {
              estatus[_i0].data_length = ((-2 * (next_i()%2)) + 1) * next_i();
          estatus[_i0].raw_data_length = ((-2 * (next_i()%2)) + 1) * next_i();
          estatus[_i0].raw_data_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          long benchRet = cper_estatus_len(estatus);
          printf("%ld\n", benchRet); 
          free(estatus);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_estatus0 = 100;
          struct acpi_hest_generic_status * estatus = (struct acpi_hest_generic_status *) malloc(_len_estatus0*sizeof(struct acpi_hest_generic_status));
          for(int _i0 = 0; _i0 < _len_estatus0; _i0++) {
              estatus[_i0].data_length = ((-2 * (next_i()%2)) + 1) * next_i();
          estatus[_i0].raw_data_length = ((-2 * (next_i()%2)) + 1) * next_i();
          estatus[_i0].raw_data_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          long benchRet = cper_estatus_len(estatus);
          printf("%ld\n", benchRet); 
          free(estatus);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_estatus0 = 1;
          struct acpi_hest_generic_status * estatus = (struct acpi_hest_generic_status *) malloc(_len_estatus0*sizeof(struct acpi_hest_generic_status));
          for(int _i0 = 0; _i0 < _len_estatus0; _i0++) {
              estatus[_i0].data_length = ((-2 * (next_i()%2)) + 1) * next_i();
          estatus[_i0].raw_data_length = ((-2 * (next_i()%2)) + 1) * next_i();
          estatus[_i0].raw_data_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          long benchRet = cper_estatus_len(estatus);
          printf("%ld\n", benchRet); 
          free(estatus);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
