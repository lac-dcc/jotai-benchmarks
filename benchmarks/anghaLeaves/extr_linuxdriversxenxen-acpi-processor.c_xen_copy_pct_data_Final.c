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
struct xen_pct_register {int /*<<< orphan*/  address; int /*<<< orphan*/  reserved; int /*<<< orphan*/  bit_offset; int /*<<< orphan*/  bit_width; int /*<<< orphan*/  space_id; int /*<<< orphan*/  length; int /*<<< orphan*/  descriptor; } ;
struct acpi_pct_register {int /*<<< orphan*/  address; int /*<<< orphan*/  reserved; int /*<<< orphan*/  bit_offset; int /*<<< orphan*/  bit_width; int /*<<< orphan*/  space_id; int /*<<< orphan*/  length; int /*<<< orphan*/  descriptor; } ;

/* Variables and functions */

__attribute__((used)) static int xen_copy_pct_data(struct acpi_pct_register *pct,
			     struct xen_pct_register *dst_pct)
{
	/* It would be nice if you could just do 'memcpy(pct, dst_pct') but
	 * sadly the Xen structure did not have the proper padding so the
	 * descriptor field takes two (dst_pct) bytes instead of one (pct).
	 */
	dst_pct->descriptor = pct->descriptor;
	dst_pct->length = pct->length;
	dst_pct->space_id = pct->space_id;
	dst_pct->bit_width = pct->bit_width;
	dst_pct->bit_offset = pct->bit_offset;
	dst_pct->reserved = pct->reserved;
	dst_pct->address = pct->address;
	return 0;
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
          int _len_pct0 = 1;
          struct acpi_pct_register * pct = (struct acpi_pct_register *) malloc(_len_pct0*sizeof(struct acpi_pct_register));
          for(int _i0 = 0; _i0 < _len_pct0; _i0++) {
            pct[_i0].address = ((-2 * (next_i()%2)) + 1) * next_i();
        pct[_i0].reserved = ((-2 * (next_i()%2)) + 1) * next_i();
        pct[_i0].bit_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        pct[_i0].bit_width = ((-2 * (next_i()%2)) + 1) * next_i();
        pct[_i0].space_id = ((-2 * (next_i()%2)) + 1) * next_i();
        pct[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        pct[_i0].descriptor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst_pct0 = 1;
          struct xen_pct_register * dst_pct = (struct xen_pct_register *) malloc(_len_dst_pct0*sizeof(struct xen_pct_register));
          for(int _i0 = 0; _i0 < _len_dst_pct0; _i0++) {
            dst_pct[_i0].address = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_pct[_i0].reserved = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_pct[_i0].bit_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_pct[_i0].bit_width = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_pct[_i0].space_id = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_pct[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_pct[_i0].descriptor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xen_copy_pct_data(pct,dst_pct);
          printf("%d\n", benchRet); 
          free(pct);
          free(dst_pct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
