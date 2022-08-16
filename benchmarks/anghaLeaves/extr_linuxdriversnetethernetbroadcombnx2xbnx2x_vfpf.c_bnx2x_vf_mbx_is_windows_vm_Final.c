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
struct TYPE_4__ {int vf_os; } ;
struct TYPE_3__ {int num_mc_filters; } ;
struct vfpf_acquire_tlv {TYPE_2__ vfdev_info; TYPE_1__ resc_request; int /*<<< orphan*/  bulletin_addr; } ;
struct bnx2x {int dummy; } ;

/* Variables and functions */
 int VF_OS_MASK ; 
 int VF_OS_WINDOWS ; 

__attribute__((used)) static bool bnx2x_vf_mbx_is_windows_vm(struct bnx2x *bp,
				       struct vfpf_acquire_tlv *acquire)
{
	/* Windows driver does one of three things:
	 * 1. Old driver doesn't have bulletin board address set.
	 * 2. 'Middle' driver sends mc_num == 32.
	 * 3. New driver sets the OS field.
	 */
	if (!acquire->bulletin_addr ||
	    acquire->resc_request.num_mc_filters == 32 ||
	    ((acquire->vfdev_info.vf_os & VF_OS_MASK) ==
	     VF_OS_WINDOWS))
		return true;

	return false;
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
          int _len_bp0 = 1;
          struct bnx2x * bp = (struct bnx2x *) malloc(_len_bp0*sizeof(struct bnx2x));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_acquire0 = 1;
          struct vfpf_acquire_tlv * acquire = (struct vfpf_acquire_tlv *) malloc(_len_acquire0*sizeof(struct vfpf_acquire_tlv));
          for(int _i0 = 0; _i0 < _len_acquire0; _i0++) {
            acquire[_i0].vfdev_info.vf_os = ((-2 * (next_i()%2)) + 1) * next_i();
        acquire[_i0].resc_request.num_mc_filters = ((-2 * (next_i()%2)) + 1) * next_i();
        acquire[_i0].bulletin_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bnx2x_vf_mbx_is_windows_vm(bp,acquire);
          printf("%d\n", benchRet); 
          free(bp);
          free(acquire);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
