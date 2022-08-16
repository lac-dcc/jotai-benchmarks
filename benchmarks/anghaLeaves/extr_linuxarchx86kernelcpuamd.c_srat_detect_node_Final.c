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
       1            big-arr-10x\n\
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
struct cpuinfo_x86 {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void srat_detect_node(struct cpuinfo_x86 *c)
{
#ifdef CONFIG_NUMA
	int cpu = smp_processor_id();
	int node;
	unsigned apicid = c->apicid;

	node = numa_cpu_node(cpu);
	if (node == NUMA_NO_NODE)
		node = per_cpu(cpu_llc_id, cpu);

	/*
	 * On multi-fabric platform (e.g. Numascale NumaChip) a
	 * platform-specific handler needs to be called to fixup some
	 * IDs of the CPU.
	 */
	if (x86_cpuinit.fixup_cpu_id)
		x86_cpuinit.fixup_cpu_id(c, node);

	if (!node_online(node)) {
		/*
		 * Two possibilities here:
		 *
		 * - The CPU is missing memory and no node was created.  In
		 *   that case try picking one from a nearby CPU.
		 *
		 * - The APIC IDs differ from the HyperTransport node IDs
		 *   which the K8 northbridge parsing fills in.  Assume
		 *   they are all increased by a constant offset, but in
		 *   the same order as the HT nodeids.  If that doesn't
		 *   result in a usable node fall back to the path for the
		 *   previous case.
		 *
		 * This workaround operates directly on the mapping between
		 * APIC ID and NUMA node, assuming certain relationship
		 * between APIC ID, HT node ID and NUMA topology.  As going
		 * through CPU mapping may alter the outcome, directly
		 * access __apicid_to_node[].
		 */
		int ht_nodeid = c->initial_apicid;

		if (__apicid_to_node[ht_nodeid] != NUMA_NO_NODE)
			node = __apicid_to_node[ht_nodeid];
		/* Pick a nearby node */
		if (!node_online(node))
			node = nearby_node(apicid);
	}
	numa_set_node(cpu, node);
#endif
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
          int _len_c0 = 1;
          struct cpuinfo_x86 * c = (struct cpuinfo_x86 *) malloc(_len_c0*sizeof(struct cpuinfo_x86));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          srat_detect_node(c);
          free(c);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_c0 = 100;
          struct cpuinfo_x86 * c = (struct cpuinfo_x86 *) malloc(_len_c0*sizeof(struct cpuinfo_x86));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          srat_detect_node(c);
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
