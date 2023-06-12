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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ minimum; } ;
struct TYPE_3__ {TYPE_2__ io; } ;
struct acpi_resource {scalar_t__ type; TYPE_1__ data; } ;
struct acpi_ec {scalar_t__ data_addr; scalar_t__ command_addr; } ;
typedef  int /*<<< orphan*/  acpi_status ;

/* Variables and functions */
 scalar_t__ ACPI_RESOURCE_TYPE_IO ; 
 int /*<<< orphan*/  AE_CTRL_TERMINATE ; 
 int /*<<< orphan*/  AE_OK ; 

__attribute__((used)) static acpi_status
ec_parse_io_ports(struct acpi_resource *resource, void *context)
{
	struct acpi_ec *ec = context;

	if (resource->type != ACPI_RESOURCE_TYPE_IO)
		return AE_OK;

	/*
	 * The first address region returned is the data port, and
	 * the second address region returned is the status/command
	 * port.
	 */
	if (ec->data_addr == 0)
		ec->data_addr = resource->data.io.minimum;
	else if (ec->command_addr == 0)
		ec->command_addr = resource->data.io.minimum;
	else
		return AE_CTRL_TERMINATE;

	return AE_OK;
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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_resource0 = 65025;
          struct acpi_resource * resource = (struct acpi_resource *) malloc(_len_resource0*sizeof(struct acpi_resource));
          for(int _i0 = 0; _i0 < _len_resource0; _i0++) {
              resource[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          resource[_i0].data.io.minimum = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          void * context;
        
          int benchRet = ec_parse_io_ports(resource,context);
          printf("%d\n", benchRet); 
          free(resource);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_resource0 = 100;
          struct acpi_resource * resource = (struct acpi_resource *) malloc(_len_resource0*sizeof(struct acpi_resource));
          for(int _i0 = 0; _i0 < _len_resource0; _i0++) {
              resource[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          resource[_i0].data.io.minimum = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          void * context;
        
          int benchRet = ec_parse_io_ports(resource,context);
          printf("%d\n", benchRet); 
          free(resource);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_resource0 = 1;
          struct acpi_resource * resource = (struct acpi_resource *) malloc(_len_resource0*sizeof(struct acpi_resource));
          for(int _i0 = 0; _i0 < _len_resource0; _i0++) {
              resource[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          resource[_i0].data.io.minimum = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          void * context;
        
          int benchRet = ec_parse_io_ports(resource,context);
          printf("%d\n", benchRet); 
          free(resource);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
