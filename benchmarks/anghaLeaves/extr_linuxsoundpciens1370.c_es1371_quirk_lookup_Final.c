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
struct es1371_quirk {unsigned short vid; scalar_t__ did; scalar_t__ rev; } ;
struct ensoniq {scalar_t__ rev; TYPE_1__* pci; } ;
struct TYPE_2__ {unsigned short vendor; scalar_t__ device; } ;

/* Variables and functions */
 scalar_t__ PCI_ANY_ID ; 

__attribute__((used)) static int es1371_quirk_lookup(struct ensoniq *ensoniq,
				struct es1371_quirk *list)
{
	while (list->vid != (unsigned short)PCI_ANY_ID) {
		if (ensoniq->pci->vendor == list->vid &&
		    ensoniq->pci->device == list->did &&
		    ensoniq->rev == list->rev)
			return 1;
		list++;
	}
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
          int _len_ensoniq0 = 1;
          struct ensoniq * ensoniq = (struct ensoniq *) malloc(_len_ensoniq0*sizeof(struct ensoniq));
          for(int _i0 = 0; _i0 < _len_ensoniq0; _i0++) {
            ensoniq[_i0].rev = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ensoniq__i0__pci0 = 1;
          ensoniq[_i0].pci = (struct TYPE_2__ *) malloc(_len_ensoniq__i0__pci0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ensoniq__i0__pci0; _j0++) {
            ensoniq[_i0].pci->vendor = ((-2 * (next_i()%2)) + 1) * next_i();
        ensoniq[_i0].pci->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_list0 = 1;
          struct es1371_quirk * list = (struct es1371_quirk *) malloc(_len_list0*sizeof(struct es1371_quirk));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0].vid = ((-2 * (next_i()%2)) + 1) * next_i();
        list[_i0].did = ((-2 * (next_i()%2)) + 1) * next_i();
        list[_i0].rev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = es1371_quirk_lookup(ensoniq,list);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ensoniq0; _aux++) {
          free(ensoniq[_aux].pci);
          }
          free(ensoniq);
          free(list);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
