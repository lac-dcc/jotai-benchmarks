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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  void* u8 ;
typedef  int /*<<< orphan*/  u64 ;
typedef  int /*<<< orphan*/  u16 ;
struct kvm_vcpu {TYPE_2__* run; } ;
struct TYPE_3__ {int /*<<< orphan*/  sel2; void* sel1; void* fc; void* ar; int /*<<< orphan*/  addr; } ;
struct TYPE_4__ {TYPE_1__ s390_stsi; int /*<<< orphan*/  exit_reason; } ;

/* Variables and functions */
 int /*<<< orphan*/  KVM_EXIT_S390_STSI ; 

__attribute__((used)) static void insert_stsi_usr_data(struct kvm_vcpu *vcpu, u64 addr, u8 ar,
				 u8 fc, u8 sel1, u16 sel2)
{
	vcpu->run->exit_reason = KVM_EXIT_S390_STSI;
	vcpu->run->s390_stsi.addr = addr;
	vcpu->run->s390_stsi.ar = ar;
	vcpu->run->s390_stsi.fc = fc;
	vcpu->run->s390_stsi.sel1 = sel1;
	vcpu->run->s390_stsi.sel2 = sel2;
}

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
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 34
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int addr = 100;
        
          int sel2 = 100;
        
          int _len_vcpu0 = 1;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
              int _len_vcpu__i0__run0 = 1;
          vcpu[_i0].run = (struct TYPE_4__ *) malloc(_len_vcpu__i0__run0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__run0; _j0++) {
              vcpu[_i0].run->s390_stsi.sel2 = ((-2 * (next_i()%2)) + 1) * next_i();
          vcpu[_i0].run->s390_stsi.addr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          vcpu[_i0].run->exit_reason = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          void * ar;
        
          void * fc;
        
          void * sel1;
        
          insert_stsi_usr_data(vcpu,addr,ar,fc,sel1,sel2);
          for(int _aux = 0; _aux < _len_vcpu0; _aux++) {
          free(vcpu[_aux].run);
          }
          free(vcpu);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 34
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int addr = 255;
        
          int sel2 = 255;
        
          int _len_vcpu0 = 65025;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
              int _len_vcpu__i0__run0 = 1;
          vcpu[_i0].run = (struct TYPE_4__ *) malloc(_len_vcpu__i0__run0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__run0; _j0++) {
              vcpu[_i0].run->s390_stsi.sel2 = ((-2 * (next_i()%2)) + 1) * next_i();
          vcpu[_i0].run->s390_stsi.addr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          vcpu[_i0].run->exit_reason = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          void * ar;
        
          void * fc;
        
          void * sel1;
        
          insert_stsi_usr_data(vcpu,addr,ar,fc,sel1,sel2);
          for(int _aux = 0; _aux < _len_vcpu0; _aux++) {
          free(vcpu[_aux].run);
          }
          free(vcpu);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 34
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int addr = 10;
        
          int sel2 = 10;
        
          int _len_vcpu0 = 100;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
              int _len_vcpu__i0__run0 = 1;
          vcpu[_i0].run = (struct TYPE_4__ *) malloc(_len_vcpu__i0__run0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__run0; _j0++) {
              vcpu[_i0].run->s390_stsi.sel2 = ((-2 * (next_i()%2)) + 1) * next_i();
          vcpu[_i0].run->s390_stsi.addr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          vcpu[_i0].run->exit_reason = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          void * ar;
        
          void * fc;
        
          void * sel1;
        
          insert_stsi_usr_data(vcpu,addr,ar,fc,sel1,sel2);
          for(int _aux = 0; _aux < _len_vcpu0; _aux++) {
          free(vcpu[_aux].run);
          }
          free(vcpu);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 34
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int addr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int sel2 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_vcpu0 = 1;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
              int _len_vcpu__i0__run0 = 1;
          vcpu[_i0].run = (struct TYPE_4__ *) malloc(_len_vcpu__i0__run0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__run0; _j0++) {
              vcpu[_i0].run->s390_stsi.sel2 = ((-2 * (next_i()%2)) + 1) * next_i();
          vcpu[_i0].run->s390_stsi.addr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          vcpu[_i0].run->exit_reason = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          void * ar;
        
          void * fc;
        
          void * sel1;
        
          insert_stsi_usr_data(vcpu,addr,ar,fc,sel1,sel2);
          for(int _aux = 0; _aux < _len_vcpu0; _aux++) {
          free(vcpu[_aux].run);
          }
          free(vcpu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
