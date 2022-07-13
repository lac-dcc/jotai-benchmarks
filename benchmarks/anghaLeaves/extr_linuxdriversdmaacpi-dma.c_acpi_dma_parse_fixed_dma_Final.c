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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct acpi_resource_fixed_dma {int /*<<< orphan*/  request_lines; int /*<<< orphan*/  channels; } ;
struct TYPE_3__ {struct acpi_resource_fixed_dma fixed_dma; } ;
struct acpi_resource {scalar_t__ type; TYPE_1__ data; } ;
struct TYPE_4__ {int /*<<< orphan*/  slave_id; int /*<<< orphan*/  chan_id; } ;
struct acpi_dma_parser_data {scalar_t__ index; TYPE_2__ dma_spec; int /*<<< orphan*/  n; } ;

/* Variables and functions */
 scalar_t__ ACPI_RESOURCE_TYPE_FIXED_DMA ; 

__attribute__((used)) static int acpi_dma_parse_fixed_dma(struct acpi_resource *res, void *data)
{
	struct acpi_dma_parser_data *pdata = data;

	if (res->type == ACPI_RESOURCE_TYPE_FIXED_DMA) {
		struct acpi_resource_fixed_dma *dma = &res->data.fixed_dma;

		if (pdata->n++ == pdata->index) {
			pdata->dma_spec.chan_id = dma->channels;
			pdata->dma_spec.slave_id = dma->request_lines;
		}
	}

	/* Tell the ACPI core to skip this resource */
	return 1;
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
          int _len_res0 = 1;
          struct acpi_resource * res = (struct acpi_resource *) malloc(_len_res0*sizeof(struct acpi_resource));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        res[_i0].data.fixed_dma.request_lines = ((-2 * (next_i()%2)) + 1) * next_i();
        res[_i0].data.fixed_dma.channels = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = acpi_dma_parse_fixed_dma(res,data);
          printf("%d\n", benchRet); 
          free(res);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_res0 = 65025;
          struct acpi_resource * res = (struct acpi_resource *) malloc(_len_res0*sizeof(struct acpi_resource));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        res[_i0].data.fixed_dma.request_lines = ((-2 * (next_i()%2)) + 1) * next_i();
        res[_i0].data.fixed_dma.channels = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = acpi_dma_parse_fixed_dma(res,data);
          printf("%d\n", benchRet); 
          free(res);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_res0 = 100;
          struct acpi_resource * res = (struct acpi_resource *) malloc(_len_res0*sizeof(struct acpi_resource));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        res[_i0].data.fixed_dma.request_lines = ((-2 * (next_i()%2)) + 1) * next_i();
        res[_i0].data.fixed_dma.channels = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = acpi_dma_parse_fixed_dma(res,data);
          printf("%d\n", benchRet); 
          free(res);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
