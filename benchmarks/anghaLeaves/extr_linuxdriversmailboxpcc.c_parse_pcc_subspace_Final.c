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
       0            big-arr\n\
       1            big-arr-10x\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct acpi_subtable_header {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct acpi_pcct_subspace {TYPE_1__ header; } ;

/* Variables and functions */
 scalar_t__ ACPI_PCCT_TYPE_RESERVED ; 
 int EINVAL ; 

__attribute__((used)) static int parse_pcc_subspace(struct acpi_subtable_header *header,
		const unsigned long end)
{
	struct acpi_pcct_subspace *ss = (struct acpi_pcct_subspace *) header;

	if (ss->header.type < ACPI_PCCT_TYPE_RESERVED)
		return 0;

	return -EINVAL;
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

    // big-arr
    case 0:
    {
          const unsigned long end = 255;
          int _len_header0 = 65025;
          struct acpi_subtable_header * header = (struct acpi_subtable_header *) malloc(_len_header0*sizeof(struct acpi_subtable_header));
          for(int _i0 = 0; _i0 < _len_header0; _i0++) {
            header[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_pcc_subspace(header,end);
          printf("%d\n", benchRet); 
          free(header);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          const unsigned long end = 10;
          int _len_header0 = 100;
          struct acpi_subtable_header * header = (struct acpi_subtable_header *) malloc(_len_header0*sizeof(struct acpi_subtable_header));
          for(int _i0 = 0; _i0 < _len_header0; _i0++) {
            header[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_pcc_subspace(header,end);
          printf("%d\n", benchRet); 
          free(header);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
