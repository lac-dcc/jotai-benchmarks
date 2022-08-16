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
struct nfit_mem {struct acpi_nfit_memory_map* memdev_pmem; struct acpi_nfit_memory_map* memdev_dcr; } ;
struct acpi_nfit_memory_map {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline struct acpi_nfit_memory_map *__to_nfit_memdev(
		struct nfit_mem *nfit_mem)
{
	if (nfit_mem->memdev_dcr)
		return nfit_mem->memdev_dcr;
	return nfit_mem->memdev_pmem;
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
          int _len_nfit_mem0 = 1;
          struct nfit_mem * nfit_mem = (struct nfit_mem *) malloc(_len_nfit_mem0*sizeof(struct nfit_mem));
          for(int _i0 = 0; _i0 < _len_nfit_mem0; _i0++) {
              int _len_nfit_mem__i0__memdev_pmem0 = 1;
          nfit_mem[_i0].memdev_pmem = (struct acpi_nfit_memory_map *) malloc(_len_nfit_mem__i0__memdev_pmem0*sizeof(struct acpi_nfit_memory_map));
          for(int _j0 = 0; _j0 < _len_nfit_mem__i0__memdev_pmem0; _j0++) {
            nfit_mem[_i0].memdev_pmem->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nfit_mem__i0__memdev_dcr0 = 1;
          nfit_mem[_i0].memdev_dcr = (struct acpi_nfit_memory_map *) malloc(_len_nfit_mem__i0__memdev_dcr0*sizeof(struct acpi_nfit_memory_map));
          for(int _j0 = 0; _j0 < _len_nfit_mem__i0__memdev_dcr0; _j0++) {
            nfit_mem[_i0].memdev_dcr->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct acpi_nfit_memory_map * benchRet = __to_nfit_memdev(nfit_mem);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_nfit_mem0; _aux++) {
          free(nfit_mem[_aux].memdev_pmem);
          }
          for(int _aux = 0; _aux < _len_nfit_mem0; _aux++) {
          free(nfit_mem[_aux].memdev_dcr);
          }
          free(nfit_mem);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
