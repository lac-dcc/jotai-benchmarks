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
struct device_queue_manager_asic_ops {int /*<<< orphan*/  init_sdma_vm; int /*<<< orphan*/  update_qpd; int /*<<< orphan*/  set_cache_memory_policy; } ;

/* Variables and functions */
 int /*<<< orphan*/  init_sdma_vm_tonga ; 
 int /*<<< orphan*/  set_cache_memory_policy_vi_tonga ; 
 int /*<<< orphan*/  update_qpd_vi_tonga ; 

void device_queue_manager_init_vi_tonga(
		struct device_queue_manager_asic_ops *asic_ops)
{
	asic_ops->set_cache_memory_policy = set_cache_memory_policy_vi_tonga;
	asic_ops->update_qpd = update_qpd_vi_tonga;
	asic_ops->init_sdma_vm = init_sdma_vm_tonga;
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
          int _len_asic_ops0 = 1;
          struct device_queue_manager_asic_ops * asic_ops = (struct device_queue_manager_asic_ops *) malloc(_len_asic_ops0*sizeof(struct device_queue_manager_asic_ops));
          for(int _i0 = 0; _i0 < _len_asic_ops0; _i0++) {
            asic_ops[_i0].init_sdma_vm = ((-2 * (next_i()%2)) + 1) * next_i();
        asic_ops[_i0].update_qpd = ((-2 * (next_i()%2)) + 1) * next_i();
        asic_ops[_i0].set_cache_memory_policy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          device_queue_manager_init_vi_tonga(asic_ops);
          free(asic_ops);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
