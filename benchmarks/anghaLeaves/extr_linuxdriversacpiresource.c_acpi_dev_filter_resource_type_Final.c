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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/  resource_type; } ;
struct TYPE_4__ {TYPE_1__ address; } ;
struct acpi_resource {int type; TYPE_2__ data; } ;

/* Variables and functions */
 int /*<<< orphan*/  ACPI_BUS_NUMBER_RANGE ; 
 int /*<<< orphan*/  ACPI_IO_RANGE ; 
 int /*<<< orphan*/  ACPI_MEMORY_RANGE ; 
#define  ACPI_RESOURCE_TYPE_ADDRESS16 141 
#define  ACPI_RESOURCE_TYPE_ADDRESS32 140 
#define  ACPI_RESOURCE_TYPE_ADDRESS64 139 
#define  ACPI_RESOURCE_TYPE_DMA 138 
#define  ACPI_RESOURCE_TYPE_EXTENDED_ADDRESS64 137 
#define  ACPI_RESOURCE_TYPE_EXTENDED_IRQ 136 
#define  ACPI_RESOURCE_TYPE_FIXED_DMA 135 
#define  ACPI_RESOURCE_TYPE_FIXED_IO 134 
#define  ACPI_RESOURCE_TYPE_FIXED_MEMORY32 133 
#define  ACPI_RESOURCE_TYPE_GENERIC_REGISTER 132 
#define  ACPI_RESOURCE_TYPE_IO 131 
#define  ACPI_RESOURCE_TYPE_IRQ 130 
#define  ACPI_RESOURCE_TYPE_MEMORY24 129 
#define  ACPI_RESOURCE_TYPE_MEMORY32 128 
 unsigned long IORESOURCE_BUS ; 
 unsigned long IORESOURCE_DMA ; 
 unsigned long IORESOURCE_IO ; 
 unsigned long IORESOURCE_IRQ ; 
 unsigned long IORESOURCE_MEM ; 
 unsigned long IORESOURCE_REG ; 

int acpi_dev_filter_resource_type(struct acpi_resource *ares,
				  unsigned long types)
{
	unsigned long type = 0;

	switch (ares->type) {
	case ACPI_RESOURCE_TYPE_MEMORY24:
	case ACPI_RESOURCE_TYPE_MEMORY32:
	case ACPI_RESOURCE_TYPE_FIXED_MEMORY32:
		type = IORESOURCE_MEM;
		break;
	case ACPI_RESOURCE_TYPE_IO:
	case ACPI_RESOURCE_TYPE_FIXED_IO:
		type = IORESOURCE_IO;
		break;
	case ACPI_RESOURCE_TYPE_IRQ:
	case ACPI_RESOURCE_TYPE_EXTENDED_IRQ:
		type = IORESOURCE_IRQ;
		break;
	case ACPI_RESOURCE_TYPE_DMA:
	case ACPI_RESOURCE_TYPE_FIXED_DMA:
		type = IORESOURCE_DMA;
		break;
	case ACPI_RESOURCE_TYPE_GENERIC_REGISTER:
		type = IORESOURCE_REG;
		break;
	case ACPI_RESOURCE_TYPE_ADDRESS16:
	case ACPI_RESOURCE_TYPE_ADDRESS32:
	case ACPI_RESOURCE_TYPE_ADDRESS64:
	case ACPI_RESOURCE_TYPE_EXTENDED_ADDRESS64:
		if (ares->data.address.resource_type == ACPI_MEMORY_RANGE)
			type = IORESOURCE_MEM;
		else if (ares->data.address.resource_type == ACPI_IO_RANGE)
			type = IORESOURCE_IO;
		else if (ares->data.address.resource_type ==
			 ACPI_BUS_NUMBER_RANGE)
			type = IORESOURCE_BUS;
		break;
	default:
		break;
	}

	return (type & types) ? 0 : 1;
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
          unsigned long types = 100;
          int _len_ares0 = 1;
          struct acpi_resource * ares = (struct acpi_resource *) malloc(_len_ares0*sizeof(struct acpi_resource));
          for(int _i0 = 0; _i0 < _len_ares0; _i0++) {
            ares[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        ares[_i0].data.address.resource_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = acpi_dev_filter_resource_type(ares,types);
          printf("%d\n", benchRet); 
          free(ares);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
