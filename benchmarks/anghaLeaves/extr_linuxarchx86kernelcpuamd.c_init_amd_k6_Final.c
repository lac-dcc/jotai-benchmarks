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

__attribute__((used)) static void init_amd_k6(struct cpuinfo_x86 *c)
{
#ifdef CONFIG_X86_32
	u32 l, h;
	int mbytes = get_num_physpages() >> (20-PAGE_SHIFT);

	if (c->x86_model < 6) {
		/* Based on AMD doc 20734R - June 2000 */
		if (c->x86_model == 0) {
			clear_cpu_cap(c, X86_FEATURE_APIC);
			set_cpu_cap(c, X86_FEATURE_PGE);
		}
		return;
	}

	if (c->x86_model == 6 && c->x86_stepping == 1) {
		const int K6_BUG_LOOP = 1000000;
		int n;
		void (*f_vide)(void);
		u64 d, d2;

		pr_info("AMD K6 stepping B detected - ");

		/*
		 * It looks like AMD fixed the 2.6.2 bug and improved indirect
		 * calls at the same time.
		 */

		n = K6_BUG_LOOP;
		f_vide = vide;
		OPTIMIZER_HIDE_VAR(f_vide);
		d = rdtsc();
		while (n--)
			f_vide();
		d2 = rdtsc();
		d = d2-d;

		if (d > 20*K6_BUG_LOOP)
			pr_cont("system stability may be impaired when more than 32 MB are used.\n");
		else
			pr_cont("probably OK (after B9730xxxx).\n");
	}

	/* K6 with old style WHCR */
	if (c->x86_model < 8 ||
	   (c->x86_model == 8 && c->x86_stepping < 8)) {
		/* We can only write allocate on the low 508Mb */
		if (mbytes > 508)
			mbytes = 508;

		rdmsr(MSR_K6_WHCR, l, h);
		if ((l&0x0000FFFF) == 0) {
			unsigned long flags;
			l = (1<<0)|((mbytes/4)<<1);
			local_irq_save(flags);
			wbinvd();
			wrmsr(MSR_K6_WHCR, l, h);
			local_irq_restore(flags);
			pr_info("Enabling old style K6 write allocation for %d Mb\n",
				mbytes);
		}
		return;
	}

	if ((c->x86_model == 8 && c->x86_stepping > 7) ||
	     c->x86_model == 9 || c->x86_model == 13) {
		/* The more serious chips .. */

		if (mbytes > 4092)
			mbytes = 4092;

		rdmsr(MSR_K6_WHCR, l, h);
		if ((l&0xFFFF0000) == 0) {
			unsigned long flags;
			l = ((mbytes>>2)<<22)|(1<<16);
			local_irq_save(flags);
			wbinvd();
			wrmsr(MSR_K6_WHCR, l, h);
			local_irq_restore(flags);
			pr_info("Enabling new style K6 write allocation for %d Mb\n",
				mbytes);
		}

		return;
	}

	if (c->x86_model == 10) {
		/* AMD Geode LX is model 10 */
		/* placeholder for any needed mods */
		return;
	}
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
          init_amd_k6(c);
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
          init_amd_k6(c);
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
