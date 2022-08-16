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
typedef  scalar_t__ u64 ;
typedef  scalar_t__ u32 ;
typedef  int /*<<< orphan*/  acpi_status ;

/* Variables and functions */
 scalar_t__ ACPI_UINT32_MAX ; 
 scalar_t__ ACPI_UINT64_MAX ; 
 int /*<<< orphan*/  AE_NUMERIC_OVERFLOW ; 
 int /*<<< orphan*/  AE_OK ; 
 int acpi_gbl_integer_bit_width ; 

__attribute__((used)) static acpi_status acpi_ut_strtoul_add64(u64 addend1, u32 digit, u64 *out_sum)
{
	u64 sum;

	/* Check for 64-bit overflow before the actual addition */

	if ((addend1 > 0) && (digit > (ACPI_UINT64_MAX - addend1))) {
		return (AE_NUMERIC_OVERFLOW);
	}

	sum = addend1 + digit;

	/* Check for 32-bit overflow if necessary */

	if ((acpi_gbl_integer_bit_width == 32) && (sum > ACPI_UINT32_MAX)) {
		return (AE_NUMERIC_OVERFLOW);
	}

	*out_sum = sum;
	return (AE_OK);
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
          long addend1 = 100;
          long digit = 100;
          int _len_out_sum0 = 1;
          long * out_sum = (long *) malloc(_len_out_sum0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_out_sum0; _i0++) {
            out_sum[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = acpi_ut_strtoul_add64(addend1,digit,out_sum);
          printf("%d\n", benchRet); 
          free(out_sum);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long addend1 = 10;
          long digit = 10;
          int _len_out_sum0 = 100;
          long * out_sum = (long *) malloc(_len_out_sum0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_out_sum0; _i0++) {
            out_sum[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = acpi_ut_strtoul_add64(addend1,digit,out_sum);
          printf("%d\n", benchRet); 
          free(out_sum);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
