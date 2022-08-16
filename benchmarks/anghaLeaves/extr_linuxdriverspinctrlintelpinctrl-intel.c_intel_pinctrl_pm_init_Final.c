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
struct intel_pinctrl {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int intel_pinctrl_pm_init(struct intel_pinctrl *pctrl)
{
#ifdef CONFIG_PM_SLEEP
	const struct intel_pinctrl_soc_data *soc = pctrl->soc;
	struct intel_community_context *communities;
	struct intel_pad_context *pads;
	int i;

	pads = devm_kcalloc(pctrl->dev, soc->npins, sizeof(*pads), GFP_KERNEL);
	if (!pads)
		return -ENOMEM;

	communities = devm_kcalloc(pctrl->dev, pctrl->ncommunities,
				   sizeof(*communities), GFP_KERNEL);
	if (!communities)
		return -ENOMEM;


	for (i = 0; i < pctrl->ncommunities; i++) {
		struct intel_community *community = &pctrl->communities[i];
		u32 *intmask;

		intmask = devm_kcalloc(pctrl->dev, community->ngpps,
				       sizeof(*intmask), GFP_KERNEL);
		if (!intmask)
			return -ENOMEM;

		communities[i].intmask = intmask;
	}

	pctrl->context.pads = pads;
	pctrl->context.communities = communities;
#endif

	return 0;
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
          int _len_pctrl0 = 1;
          struct intel_pinctrl * pctrl = (struct intel_pinctrl *) malloc(_len_pctrl0*sizeof(struct intel_pinctrl));
          for(int _i0 = 0; _i0 < _len_pctrl0; _i0++) {
            pctrl[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_pinctrl_pm_init(pctrl);
          printf("%d\n", benchRet); 
          free(pctrl);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_pctrl0 = 100;
          struct intel_pinctrl * pctrl = (struct intel_pinctrl *) malloc(_len_pctrl0*sizeof(struct intel_pinctrl));
          for(int _i0 = 0; _i0 < _len_pctrl0; _i0++) {
            pctrl[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_pinctrl_pm_init(pctrl);
          printf("%d\n", benchRet); 
          free(pctrl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
