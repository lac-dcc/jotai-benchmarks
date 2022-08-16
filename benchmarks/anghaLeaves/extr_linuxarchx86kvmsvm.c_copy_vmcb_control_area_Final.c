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
struct vmcb_control_area {int /*<<< orphan*/  virt_ext; int /*<<< orphan*/  nested_cr3; int /*<<< orphan*/  event_inj_err; int /*<<< orphan*/  event_inj; int /*<<< orphan*/  nested_ctl; int /*<<< orphan*/  exit_int_info_err; int /*<<< orphan*/  exit_int_info; int /*<<< orphan*/  exit_info_2; int /*<<< orphan*/  exit_info_1; int /*<<< orphan*/  exit_code_hi; int /*<<< orphan*/  exit_code; int /*<<< orphan*/  int_state; int /*<<< orphan*/  int_vector; int /*<<< orphan*/  int_ctl; int /*<<< orphan*/  tlb_ctl; int /*<<< orphan*/  asid; int /*<<< orphan*/  tsc_offset; int /*<<< orphan*/  msrpm_base_pa; int /*<<< orphan*/  iopm_base_pa; int /*<<< orphan*/  intercept; int /*<<< orphan*/  intercept_exceptions; int /*<<< orphan*/  intercept_dr; int /*<<< orphan*/  intercept_cr; } ;
struct vmcb {struct vmcb_control_area control; } ;

/* Variables and functions */

__attribute__((used)) static inline void copy_vmcb_control_area(struct vmcb *dst_vmcb, struct vmcb *from_vmcb)
{
	struct vmcb_control_area *dst  = &dst_vmcb->control;
	struct vmcb_control_area *from = &from_vmcb->control;

	dst->intercept_cr         = from->intercept_cr;
	dst->intercept_dr         = from->intercept_dr;
	dst->intercept_exceptions = from->intercept_exceptions;
	dst->intercept            = from->intercept;
	dst->iopm_base_pa         = from->iopm_base_pa;
	dst->msrpm_base_pa        = from->msrpm_base_pa;
	dst->tsc_offset           = from->tsc_offset;
	dst->asid                 = from->asid;
	dst->tlb_ctl              = from->tlb_ctl;
	dst->int_ctl              = from->int_ctl;
	dst->int_vector           = from->int_vector;
	dst->int_state            = from->int_state;
	dst->exit_code            = from->exit_code;
	dst->exit_code_hi         = from->exit_code_hi;
	dst->exit_info_1          = from->exit_info_1;
	dst->exit_info_2          = from->exit_info_2;
	dst->exit_int_info        = from->exit_int_info;
	dst->exit_int_info_err    = from->exit_int_info_err;
	dst->nested_ctl           = from->nested_ctl;
	dst->event_inj            = from->event_inj;
	dst->event_inj_err        = from->event_inj_err;
	dst->nested_cr3           = from->nested_cr3;
	dst->virt_ext              = from->virt_ext;
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
          int _len_dst_vmcb0 = 1;
          struct vmcb * dst_vmcb = (struct vmcb *) malloc(_len_dst_vmcb0*sizeof(struct vmcb));
          for(int _i0 = 0; _i0 < _len_dst_vmcb0; _i0++) {
            dst_vmcb[_i0].control.virt_ext = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_vmcb[_i0].control.nested_cr3 = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_vmcb[_i0].control.event_inj_err = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_vmcb[_i0].control.event_inj = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_vmcb[_i0].control.nested_ctl = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_vmcb[_i0].control.exit_int_info_err = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_vmcb[_i0].control.exit_int_info = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_vmcb[_i0].control.exit_info_2 = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_vmcb[_i0].control.exit_info_1 = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_vmcb[_i0].control.exit_code_hi = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_vmcb[_i0].control.exit_code = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_vmcb[_i0].control.int_state = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_vmcb[_i0].control.int_vector = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_vmcb[_i0].control.int_ctl = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_vmcb[_i0].control.tlb_ctl = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_vmcb[_i0].control.asid = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_vmcb[_i0].control.tsc_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_vmcb[_i0].control.msrpm_base_pa = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_vmcb[_i0].control.iopm_base_pa = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_vmcb[_i0].control.intercept = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_vmcb[_i0].control.intercept_exceptions = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_vmcb[_i0].control.intercept_dr = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_vmcb[_i0].control.intercept_cr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_from_vmcb0 = 1;
          struct vmcb * from_vmcb = (struct vmcb *) malloc(_len_from_vmcb0*sizeof(struct vmcb));
          for(int _i0 = 0; _i0 < _len_from_vmcb0; _i0++) {
            from_vmcb[_i0].control.virt_ext = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].control.nested_cr3 = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].control.event_inj_err = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].control.event_inj = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].control.nested_ctl = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].control.exit_int_info_err = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].control.exit_int_info = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].control.exit_info_2 = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].control.exit_info_1 = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].control.exit_code_hi = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].control.exit_code = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].control.int_state = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].control.int_vector = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].control.int_ctl = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].control.tlb_ctl = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].control.asid = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].control.tsc_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].control.msrpm_base_pa = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].control.iopm_base_pa = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].control.intercept = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].control.intercept_exceptions = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].control.intercept_dr = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].control.intercept_cr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          copy_vmcb_control_area(dst_vmcb,from_vmcb);
          free(dst_vmcb);
          free(from_vmcb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
