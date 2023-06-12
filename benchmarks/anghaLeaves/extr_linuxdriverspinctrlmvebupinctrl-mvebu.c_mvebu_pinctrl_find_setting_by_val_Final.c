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
       0            empty\n\
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
struct mvebu_pinctrl_group {unsigned int num_settings; struct mvebu_mpp_ctrl_setting* settings; } ;
struct mvebu_pinctrl {int variant; } ;
struct mvebu_mpp_ctrl_setting {unsigned long val; int variant; } ;

/* Variables and functions */

__attribute__((used)) static struct mvebu_mpp_ctrl_setting *mvebu_pinctrl_find_setting_by_val(
	struct mvebu_pinctrl *pctl, struct mvebu_pinctrl_group *grp,
	unsigned long config)
{
	unsigned n;
	for (n = 0; n < grp->num_settings; n++) {
		if (config == grp->settings[n].val) {
			if (!pctl->variant || (pctl->variant &
					       grp->settings[n].variant))
				return &grp->settings[n];
		}
	}
	return NULL;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          unsigned long config = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pctl0 = 1;
          struct mvebu_pinctrl * pctl = (struct mvebu_pinctrl *) malloc(_len_pctl0*sizeof(struct mvebu_pinctrl));
          for(int _i0 = 0; _i0 < _len_pctl0; _i0++) {
              pctl[_i0].variant = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_grp0 = 1;
          struct mvebu_pinctrl_group * grp = (struct mvebu_pinctrl_group *) malloc(_len_grp0*sizeof(struct mvebu_pinctrl_group));
          for(int _i0 = 0; _i0 < _len_grp0; _i0++) {
              grp[_i0].num_settings = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_grp__i0__settings0 = 1;
          grp[_i0].settings = (struct mvebu_mpp_ctrl_setting *) malloc(_len_grp__i0__settings0*sizeof(struct mvebu_mpp_ctrl_setting));
          for(int _j0 = 0; _j0 < _len_grp__i0__settings0; _j0++) {
              grp[_i0].settings->val = ((-2 * (next_i()%2)) + 1) * next_i();
          grp[_i0].settings->variant = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct mvebu_mpp_ctrl_setting * benchRet = mvebu_pinctrl_find_setting_by_val(pctl,grp,config);
          printf("%lu\n", (*benchRet).val);
          printf("%d\n", (*benchRet).variant);
          free(pctl);
          for(int _aux = 0; _aux < _len_grp0; _aux++) {
          free(grp[_aux].settings);
          }
          free(grp);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
