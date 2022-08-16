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
struct kvm_vcpu {int dummy; } ;
struct kvm_mmu {int direct_map; int nx; int /*<<< orphan*/  shadow_root_level; scalar_t__ root_level; int /*<<< orphan*/  update_pte; int /*<<< orphan*/  invlpg; int /*<<< orphan*/  sync_page; int /*<<< orphan*/  gva_to_gpa; int /*<<< orphan*/  page_fault; } ;

/* Variables and functions */
 int /*<<< orphan*/  PT32E_ROOT_LEVEL ; 
 int /*<<< orphan*/  nonpaging_gva_to_gpa ; 
 int /*<<< orphan*/  nonpaging_invlpg ; 
 int /*<<< orphan*/  nonpaging_page_fault ; 
 int /*<<< orphan*/  nonpaging_sync_page ; 
 int /*<<< orphan*/  nonpaging_update_pte ; 

__attribute__((used)) static void nonpaging_init_context(struct kvm_vcpu *vcpu,
				   struct kvm_mmu *context)
{
	context->page_fault = nonpaging_page_fault;
	context->gva_to_gpa = nonpaging_gva_to_gpa;
	context->sync_page = nonpaging_sync_page;
	context->invlpg = nonpaging_invlpg;
	context->update_pte = nonpaging_update_pte;
	context->root_level = 0;
	context->shadow_root_level = PT32E_ROOT_LEVEL;
	context->direct_map = true;
	context->nx = false;
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
          int _len_vcpu0 = 1;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
            vcpu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_context0 = 1;
          struct kvm_mmu * context = (struct kvm_mmu *) malloc(_len_context0*sizeof(struct kvm_mmu));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            context[_i0].direct_map = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].nx = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].shadow_root_level = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].root_level = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].update_pte = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].invlpg = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].sync_page = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].gva_to_gpa = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].page_fault = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nonpaging_init_context(vcpu,context);
          free(vcpu);
          free(context);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
