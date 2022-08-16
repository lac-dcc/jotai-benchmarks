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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  prefix; int /*<<< orphan*/  stop; int /*<<< orphan*/  extcall; int /*<<< orphan*/  ext; int /*<<< orphan*/  pgm; int /*<<< orphan*/  mchk; } ;
struct kvm_s390_local_interrupt {TYPE_2__ irq; } ;
struct TYPE_3__ {int /*<<< orphan*/  prefix; int /*<<< orphan*/  stop; int /*<<< orphan*/  extcall; int /*<<< orphan*/  ext; int /*<<< orphan*/  pgm; int /*<<< orphan*/  mchk; } ;
struct kvm_s390_irq {TYPE_1__ u; int /*<<< orphan*/  type; } ;

/* Variables and functions */
#define  IRQ_PEND_EXT_CLOCK_COMP 137 
#define  IRQ_PEND_EXT_CPU_TIMER 136 
#define  IRQ_PEND_EXT_EXTERNAL 135 
#define  IRQ_PEND_MCHK_EX 134 
#define  IRQ_PEND_MCHK_REP 133 
#define  IRQ_PEND_PFAULT_INIT 132 
#define  IRQ_PEND_PROG 131 
#define  IRQ_PEND_RESTART 130 
#define  IRQ_PEND_SET_PREFIX 129 
#define  IRQ_PEND_SIGP_STOP 128 
 int /*<<< orphan*/  KVM_S390_INT_CLOCK_COMP ; 
 int /*<<< orphan*/  KVM_S390_INT_CPU_TIMER ; 
 int /*<<< orphan*/  KVM_S390_INT_EXTERNAL_CALL ; 
 int /*<<< orphan*/  KVM_S390_INT_PFAULT_INIT ; 
 int /*<<< orphan*/  KVM_S390_MCHK ; 
 int /*<<< orphan*/  KVM_S390_PROGRAM_INT ; 
 int /*<<< orphan*/  KVM_S390_RESTART ; 
 int /*<<< orphan*/  KVM_S390_SIGP_SET_PREFIX ; 
 int /*<<< orphan*/  KVM_S390_SIGP_STOP ; 

__attribute__((used)) static void store_local_irq(struct kvm_s390_local_interrupt *li,
			    struct kvm_s390_irq *irq,
			    unsigned long irq_type)
{
	switch (irq_type) {
	case IRQ_PEND_MCHK_EX:
	case IRQ_PEND_MCHK_REP:
		irq->type = KVM_S390_MCHK;
		irq->u.mchk = li->irq.mchk;
		break;
	case IRQ_PEND_PROG:
		irq->type = KVM_S390_PROGRAM_INT;
		irq->u.pgm = li->irq.pgm;
		break;
	case IRQ_PEND_PFAULT_INIT:
		irq->type = KVM_S390_INT_PFAULT_INIT;
		irq->u.ext = li->irq.ext;
		break;
	case IRQ_PEND_EXT_EXTERNAL:
		irq->type = KVM_S390_INT_EXTERNAL_CALL;
		irq->u.extcall = li->irq.extcall;
		break;
	case IRQ_PEND_EXT_CLOCK_COMP:
		irq->type = KVM_S390_INT_CLOCK_COMP;
		break;
	case IRQ_PEND_EXT_CPU_TIMER:
		irq->type = KVM_S390_INT_CPU_TIMER;
		break;
	case IRQ_PEND_SIGP_STOP:
		irq->type = KVM_S390_SIGP_STOP;
		irq->u.stop = li->irq.stop;
		break;
	case IRQ_PEND_RESTART:
		irq->type = KVM_S390_RESTART;
		break;
	case IRQ_PEND_SET_PREFIX:
		irq->type = KVM_S390_SIGP_SET_PREFIX;
		irq->u.prefix = li->irq.prefix;
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
          unsigned long irq_type = 100;
          int _len_li0 = 1;
          struct kvm_s390_local_interrupt * li = (struct kvm_s390_local_interrupt *) malloc(_len_li0*sizeof(struct kvm_s390_local_interrupt));
          for(int _i0 = 0; _i0 < _len_li0; _i0++) {
            li[_i0].irq.prefix = ((-2 * (next_i()%2)) + 1) * next_i();
        li[_i0].irq.stop = ((-2 * (next_i()%2)) + 1) * next_i();
        li[_i0].irq.extcall = ((-2 * (next_i()%2)) + 1) * next_i();
        li[_i0].irq.ext = ((-2 * (next_i()%2)) + 1) * next_i();
        li[_i0].irq.pgm = ((-2 * (next_i()%2)) + 1) * next_i();
        li[_i0].irq.mchk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_irq0 = 1;
          struct kvm_s390_irq * irq = (struct kvm_s390_irq *) malloc(_len_irq0*sizeof(struct kvm_s390_irq));
          for(int _i0 = 0; _i0 < _len_irq0; _i0++) {
            irq[_i0].u.prefix = ((-2 * (next_i()%2)) + 1) * next_i();
        irq[_i0].u.stop = ((-2 * (next_i()%2)) + 1) * next_i();
        irq[_i0].u.extcall = ((-2 * (next_i()%2)) + 1) * next_i();
        irq[_i0].u.ext = ((-2 * (next_i()%2)) + 1) * next_i();
        irq[_i0].u.pgm = ((-2 * (next_i()%2)) + 1) * next_i();
        irq[_i0].u.mchk = ((-2 * (next_i()%2)) + 1) * next_i();
        irq[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          store_local_irq(li,irq,irq_type);
          free(li);
          free(irq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
