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
struct byt_rt5651_acpi_resource_data {int /*<<< orphan*/  gpio_count; int /*<<< orphan*/  gpio_int_idx; } ;
struct TYPE_3__ {scalar_t__ connection_type; } ;
struct TYPE_4__ {TYPE_1__ gpio; } ;
struct acpi_resource {scalar_t__ type; TYPE_2__ data; } ;

/* Variables and functions */
 scalar_t__ ACPI_RESOURCE_GPIO_TYPE_INT ; 
 scalar_t__ ACPI_RESOURCE_TYPE_GPIO ; 

__attribute__((used)) static int snd_byt_rt5651_acpi_resource(struct acpi_resource *ares, void *arg)
{
	struct byt_rt5651_acpi_resource_data *data = arg;

	if (ares->type != ACPI_RESOURCE_TYPE_GPIO)
		return 0;

	if (ares->data.gpio.connection_type == ACPI_RESOURCE_GPIO_TYPE_INT)
		data->gpio_int_idx = data->gpio_count;

	data->gpio_count++;
	return 0;
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
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_ares0 = 65025;
          struct acpi_resource * ares = (struct acpi_resource *) malloc(_len_ares0*sizeof(struct acpi_resource));
          for(int _i0 = 0; _i0 < _len_ares0; _i0++) {
              ares[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          ares[_i0].data.gpio.connection_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          void * arg;
        
          int benchRet = snd_byt_rt5651_acpi_resource(ares,arg);
          printf("%d\n", benchRet); 
          free(ares);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_ares0 = 100;
          struct acpi_resource * ares = (struct acpi_resource *) malloc(_len_ares0*sizeof(struct acpi_resource));
          for(int _i0 = 0; _i0 < _len_ares0; _i0++) {
              ares[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          ares[_i0].data.gpio.connection_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          void * arg;
        
          int benchRet = snd_byt_rt5651_acpi_resource(ares,arg);
          printf("%d\n", benchRet); 
          free(ares);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_ares0 = 1;
          struct acpi_resource * ares = (struct acpi_resource *) malloc(_len_ares0*sizeof(struct acpi_resource));
          for(int _i0 = 0; _i0 < _len_ares0; _i0++) {
              ares[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          ares[_i0].data.gpio.connection_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          void * arg;
        
          int benchRet = snd_byt_rt5651_acpi_resource(ares,arg);
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
