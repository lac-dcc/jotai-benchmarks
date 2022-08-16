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
struct seq_file {int dummy; } ;
struct cpuinfo_x86 {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void show_cpuinfo_core(struct seq_file *m, struct cpuinfo_x86 *c,
			      unsigned int cpu)
{
#ifdef CONFIG_SMP
	seq_printf(m, "physical id\t: %d\n", c->phys_proc_id);
	seq_printf(m, "siblings\t: %d\n",
		   cpumask_weight(topology_core_cpumask(cpu)));
	seq_printf(m, "core id\t\t: %d\n", c->cpu_core_id);
	seq_printf(m, "cpu cores\t: %d\n", c->booted_cores);
	seq_printf(m, "apicid\t\t: %d\n", c->apicid);
	seq_printf(m, "initial apicid\t: %d\n", c->initial_apicid);
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
          unsigned int cpu = 100;
          int _len_m0 = 1;
          struct seq_file * m = (struct seq_file *) malloc(_len_m0*sizeof(struct seq_file));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c0 = 1;
          struct cpuinfo_x86 * c = (struct cpuinfo_x86 *) malloc(_len_c0*sizeof(struct cpuinfo_x86));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          show_cpuinfo_core(m,c,cpu);
          free(m);
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
