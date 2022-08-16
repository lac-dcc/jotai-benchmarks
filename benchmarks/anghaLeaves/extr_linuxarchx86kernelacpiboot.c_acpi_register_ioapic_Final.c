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
typedef  int /*<<< orphan*/  u64 ;
typedef  int /*<<< orphan*/  u32 ;
typedef  int /*<<< orphan*/  acpi_handle ;

/* Variables and functions */
 int ENOSYS ; 

int acpi_register_ioapic(acpi_handle handle, u64 phys_addr, u32 gsi_base)
{
	int ret = -ENOSYS;
#ifdef CONFIG_ACPI_HOTPLUG_IOAPIC
	int ioapic_id;
	u64 addr;
	struct ioapic_domain_cfg cfg = {
		.type = IOAPIC_DOMAIN_DYNAMIC,
		.ops = &mp_ioapic_irqdomain_ops,
	};

	ioapic_id = acpi_get_ioapic_id(handle, gsi_base, &addr);
	if (ioapic_id < 0) {
		unsigned long long uid;
		acpi_status status;

		status = acpi_evaluate_integer(handle, METHOD_NAME__UID,
					       NULL, &uid);
		if (ACPI_FAILURE(status)) {
			acpi_handle_warn(handle, "failed to get IOAPIC ID.\n");
			return -EINVAL;
		}
		ioapic_id = (int)uid;
	}

	mutex_lock(&acpi_ioapic_lock);
	ret  = mp_register_ioapic(ioapic_id, phys_addr, gsi_base, &cfg);
	mutex_unlock(&acpi_ioapic_lock);
#endif

	return ret;
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
          int handle = 100;
          int phys_addr = 100;
          int gsi_base = 100;
          int benchRet = acpi_register_ioapic(handle,phys_addr,gsi_base);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int handle = 255;
          int phys_addr = 255;
          int gsi_base = 255;
          int benchRet = acpi_register_ioapic(handle,phys_addr,gsi_base);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int handle = 10;
          int phys_addr = 10;
          int gsi_base = 10;
          int benchRet = acpi_register_ioapic(handle,phys_addr,gsi_base);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
