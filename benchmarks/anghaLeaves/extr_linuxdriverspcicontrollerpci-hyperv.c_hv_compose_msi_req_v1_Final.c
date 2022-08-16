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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u8 ;
typedef  int u32 ;
struct TYPE_6__ {int vector_count; int /*<<< orphan*/  cpu_mask; int /*<<< orphan*/  delivery_mode; int /*<<< orphan*/  vector; } ;
struct TYPE_5__ {int slot; } ;
struct TYPE_4__ {int /*<<< orphan*/  type; } ;
struct pci_create_interrupt {TYPE_3__ int_desc; TYPE_2__ wslot; TYPE_1__ message_type; } ;
struct cpumask {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  CPU_AFFINITY_ALL ; 
 int /*<<< orphan*/  PCI_CREATE_INTERRUPT_MESSAGE ; 
 int /*<<< orphan*/  dest_Fixed ; 

__attribute__((used)) static u32 hv_compose_msi_req_v1(
	struct pci_create_interrupt *int_pkt, struct cpumask *affinity,
	u32 slot, u8 vector)
{
	int_pkt->message_type.type = PCI_CREATE_INTERRUPT_MESSAGE;
	int_pkt->wslot.slot = slot;
	int_pkt->int_desc.vector = vector;
	int_pkt->int_desc.vector_count = 1;
	int_pkt->int_desc.delivery_mode = dest_Fixed;

	/*
	 * Create MSI w/ dummy vCPU set, overwritten by subsequent retarget in
	 * hv_irq_unmask().
	 */
	int_pkt->int_desc.cpu_mask = CPU_AFFINITY_ALL;

	return sizeof(*int_pkt);
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
          int slot = 100;
          int vector = 100;
          int _len_int_pkt0 = 1;
          struct pci_create_interrupt * int_pkt = (struct pci_create_interrupt *) malloc(_len_int_pkt0*sizeof(struct pci_create_interrupt));
          for(int _i0 = 0; _i0 < _len_int_pkt0; _i0++) {
            int_pkt[_i0].int_desc.vector_count = ((-2 * (next_i()%2)) + 1) * next_i();
        int_pkt[_i0].int_desc.cpu_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        int_pkt[_i0].int_desc.delivery_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        int_pkt[_i0].int_desc.vector = ((-2 * (next_i()%2)) + 1) * next_i();
        int_pkt[_i0].wslot.slot = ((-2 * (next_i()%2)) + 1) * next_i();
        int_pkt[_i0].message_type.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_affinity0 = 1;
          struct cpumask * affinity = (struct cpumask *) malloc(_len_affinity0*sizeof(struct cpumask));
          for(int _i0 = 0; _i0 < _len_affinity0; _i0++) {
            affinity[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hv_compose_msi_req_v1(int_pkt,affinity,slot,vector);
          printf("%d\n", benchRet); 
          free(int_pkt);
          free(affinity);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
