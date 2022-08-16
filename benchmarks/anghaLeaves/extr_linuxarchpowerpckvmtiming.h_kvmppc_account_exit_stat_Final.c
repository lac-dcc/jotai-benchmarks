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
struct TYPE_2__ {int /*<<< orphan*/  gdbell_exits; int /*<<< orphan*/  dbell_exits; int /*<<< orphan*/  signal_exits; int /*<<< orphan*/  itlb_virt_miss_exits; int /*<<< orphan*/  itlb_real_miss_exits; int /*<<< orphan*/  mmio_exits; int /*<<< orphan*/  dtlb_virt_miss_exits; int /*<<< orphan*/  dtlb_real_miss_exits; int /*<<< orphan*/  syscall_exits; int /*<<< orphan*/  isi_exits; int /*<<< orphan*/  dsi_exits; int /*<<< orphan*/  emulated_inst_exits; int /*<<< orphan*/  dec_exits; int /*<<< orphan*/  ext_intr_exits; } ;
struct kvm_vcpu {TYPE_1__ stat; } ;

/* Variables and functions */
#define  DBELL_EXITS 141 
#define  DEC_EXITS 140 
#define  DSI_EXITS 139 
#define  DTLB_REAL_MISS_EXITS 138 
#define  DTLB_VIRT_MISS_EXITS 137 
#define  EMULATED_INST_EXITS 136 
#define  EXT_INTR_EXITS 135 
#define  GDBELL_EXITS 134 
#define  ISI_EXITS 133 
#define  ITLB_REAL_MISS_EXITS 132 
#define  ITLB_VIRT_MISS_EXITS 131 
#define  MMIO_EXITS 130 
#define  SIGNAL_EXITS 129 
#define  SYSCALL_EXITS 128 

__attribute__((used)) static inline void kvmppc_account_exit_stat(struct kvm_vcpu *vcpu, int type)
{
	/* type has to be known at build time for optimization */

	/* The BUILD_BUG_ON below breaks in funny ways, commented out
	 * for now ... -BenH
	BUILD_BUG_ON(!__builtin_constant_p(type));
	*/
	switch (type) {
	case EXT_INTR_EXITS:
		vcpu->stat.ext_intr_exits++;
		break;
	case DEC_EXITS:
		vcpu->stat.dec_exits++;
		break;
	case EMULATED_INST_EXITS:
		vcpu->stat.emulated_inst_exits++;
		break;
	case DSI_EXITS:
		vcpu->stat.dsi_exits++;
		break;
	case ISI_EXITS:
		vcpu->stat.isi_exits++;
		break;
	case SYSCALL_EXITS:
		vcpu->stat.syscall_exits++;
		break;
	case DTLB_REAL_MISS_EXITS:
		vcpu->stat.dtlb_real_miss_exits++;
		break;
	case DTLB_VIRT_MISS_EXITS:
		vcpu->stat.dtlb_virt_miss_exits++;
		break;
	case MMIO_EXITS:
		vcpu->stat.mmio_exits++;
		break;
	case ITLB_REAL_MISS_EXITS:
		vcpu->stat.itlb_real_miss_exits++;
		break;
	case ITLB_VIRT_MISS_EXITS:
		vcpu->stat.itlb_virt_miss_exits++;
		break;
	case SIGNAL_EXITS:
		vcpu->stat.signal_exits++;
		break;
	case DBELL_EXITS:
		vcpu->stat.dbell_exits++;
		break;
	case GDBELL_EXITS:
		vcpu->stat.gdbell_exits++;
		break;
	}
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
          int type = 100;
          int _len_vcpu0 = 1;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
            vcpu[_i0].stat.gdbell_exits = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].stat.dbell_exits = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].stat.signal_exits = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].stat.itlb_virt_miss_exits = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].stat.itlb_real_miss_exits = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].stat.mmio_exits = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].stat.dtlb_virt_miss_exits = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].stat.dtlb_real_miss_exits = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].stat.syscall_exits = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].stat.isi_exits = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].stat.dsi_exits = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].stat.emulated_inst_exits = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].stat.dec_exits = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].stat.ext_intr_exits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kvmppc_account_exit_stat(vcpu,type);
          free(vcpu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
