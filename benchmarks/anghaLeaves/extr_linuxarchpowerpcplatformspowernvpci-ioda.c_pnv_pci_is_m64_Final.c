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
struct resource {scalar_t__ start; } ;
struct TYPE_2__ {scalar_t__ m64_base; scalar_t__ m64_size; } ;
struct pnv_phb {TYPE_1__ ioda; } ;

/* Variables and functions */

__attribute__((used)) static inline bool pnv_pci_is_m64(struct pnv_phb *phb, struct resource *r)
{
	/*
	 * WARNING: We cannot rely on the resource flags. The Linux PCI
	 * allocation code sometimes decides to put a 64-bit prefetchable
	 * BAR in the 32-bit window, so we have to compare the addresses.
	 *
	 * For simplicity we only test resource start.
	 */
	return (r->start >= phb->ioda.m64_base &&
		r->start < (phb->ioda.m64_base + phb->ioda.m64_size));
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
          int _len_phb0 = 1;
          struct pnv_phb * phb = (struct pnv_phb *) malloc(_len_phb0*sizeof(struct pnv_phb));
          for(int _i0 = 0; _i0 < _len_phb0; _i0++) {
            phb[_i0].ioda.m64_base = ((-2 * (next_i()%2)) + 1) * next_i();
        phb[_i0].ioda.m64_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r0 = 1;
          struct resource * r = (struct resource *) malloc(_len_r0*sizeof(struct resource));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pnv_pci_is_m64(phb,r);
          printf("%d\n", benchRet); 
          free(phb);
          free(r);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
