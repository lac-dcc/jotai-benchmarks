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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct acpi_resource_gpio {scalar_t__ connection_type; } ;
struct TYPE_2__ {struct acpi_resource_gpio gpio; } ;
struct acpi_resource {scalar_t__ type; TYPE_1__ data; } ;

/* Variables and functions */
 scalar_t__ ACPI_RESOURCE_GPIO_TYPE_INT ; 
 scalar_t__ ACPI_RESOURCE_TYPE_GPIO ; 

bool acpi_gpio_get_irq_resource(struct acpi_resource *ares,
				struct acpi_resource_gpio **agpio)
{
	struct acpi_resource_gpio *gpio;

	if (ares->type != ACPI_RESOURCE_TYPE_GPIO)
		return false;

	gpio = &ares->data.gpio;
	if (gpio->connection_type != ACPI_RESOURCE_GPIO_TYPE_INT)
		return false;

	*agpio = gpio;
	return true;
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
          int _len_ares0 = 1;
          struct acpi_resource * ares = (struct acpi_resource *) malloc(_len_ares0*sizeof(struct acpi_resource));
          for(int _i0 = 0; _i0 < _len_ares0; _i0++) {
            ares[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        ares[_i0].data.gpio.connection_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_agpio0 = 1;
          struct acpi_resource_gpio ** agpio = (struct acpi_resource_gpio **) malloc(_len_agpio0*sizeof(struct acpi_resource_gpio *));
          for(int _i0 = 0; _i0 < _len_agpio0; _i0++) {
            int _len_agpio1 = 1;
            agpio[_i0] = (struct acpi_resource_gpio *) malloc(_len_agpio1*sizeof(struct acpi_resource_gpio));
            for(int _i1 = 0; _i1 < _len_agpio1; _i1++) {
              agpio[_i0][_i1].connection_type = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = acpi_gpio_get_irq_resource(ares,agpio);
          printf("%d\n", benchRet); 
          free(ares);
          for(int i1 = 0; i1 < _len_agpio0; i1++) {
            int _len_agpio1 = 1;
              free(agpio[i1]);
          }
          free(agpio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
