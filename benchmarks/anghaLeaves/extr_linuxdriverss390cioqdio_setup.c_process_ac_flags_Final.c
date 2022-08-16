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
struct TYPE_2__ {int input; int output; int sync; int sync_after_ai; int sync_out_after_pci; } ;
struct qdio_irq {TYPE_1__ siga_flag; } ;

/* Variables and functions */
 unsigned char AC1_AUTOMATIC_SYNC_ON_OUT_PCI ; 
 unsigned char AC1_AUTOMATIC_SYNC_ON_THININT ; 
 unsigned char AC1_SIGA_INPUT_NEEDED ; 
 unsigned char AC1_SIGA_OUTPUT_NEEDED ; 
 unsigned char AC1_SIGA_SYNC_NEEDED ; 

__attribute__((used)) static void process_ac_flags(struct qdio_irq *irq_ptr, unsigned char qdioac)
{
	if (qdioac & AC1_SIGA_INPUT_NEEDED)
		irq_ptr->siga_flag.input = 1;
	if (qdioac & AC1_SIGA_OUTPUT_NEEDED)
		irq_ptr->siga_flag.output = 1;
	if (qdioac & AC1_SIGA_SYNC_NEEDED)
		irq_ptr->siga_flag.sync = 1;
	if (!(qdioac & AC1_AUTOMATIC_SYNC_ON_THININT))
		irq_ptr->siga_flag.sync_after_ai = 1;
	if (!(qdioac & AC1_AUTOMATIC_SYNC_ON_OUT_PCI))
		irq_ptr->siga_flag.sync_out_after_pci = 1;
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
          unsigned char qdioac = 100;
          int _len_irq_ptr0 = 1;
          struct qdio_irq * irq_ptr = (struct qdio_irq *) malloc(_len_irq_ptr0*sizeof(struct qdio_irq));
          for(int _i0 = 0; _i0 < _len_irq_ptr0; _i0++) {
            irq_ptr[_i0].siga_flag.input = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr[_i0].siga_flag.output = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr[_i0].siga_flag.sync = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr[_i0].siga_flag.sync_after_ai = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr[_i0].siga_flag.sync_out_after_pci = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          process_ac_flags(irq_ptr,qdioac);
          free(irq_ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
