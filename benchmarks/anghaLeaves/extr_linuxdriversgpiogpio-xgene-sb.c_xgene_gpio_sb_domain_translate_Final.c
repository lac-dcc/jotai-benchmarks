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
struct xgene_gpio_sb {scalar_t__ nirq; } ;
struct irq_fwspec {int param_count; scalar_t__* param; } ;
struct irq_domain {struct xgene_gpio_sb* host_data; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int xgene_gpio_sb_domain_translate(struct irq_domain *d,
		struct irq_fwspec *fwspec,
		unsigned long *hwirq,
		unsigned int *type)
{
	struct xgene_gpio_sb *priv = d->host_data;

	if ((fwspec->param_count != 2) ||
		(fwspec->param[0] >= priv->nirq))
		return -EINVAL;
	*hwirq = fwspec->param[0];
	*type = fwspec->param[1];
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
          int _len_d0 = 1;
          struct irq_domain * d = (struct irq_domain *) malloc(_len_d0*sizeof(struct irq_domain));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
              int _len_d__i0__host_data0 = 1;
          d[_i0].host_data = (struct xgene_gpio_sb *) malloc(_len_d__i0__host_data0*sizeof(struct xgene_gpio_sb));
          for(int _j0 = 0; _j0 < _len_d__i0__host_data0; _j0++) {
            d[_i0].host_data->nirq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_fwspec0 = 1;
          struct irq_fwspec * fwspec = (struct irq_fwspec *) malloc(_len_fwspec0*sizeof(struct irq_fwspec));
          for(int _i0 = 0; _i0 < _len_fwspec0; _i0++) {
            fwspec[_i0].param_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fwspec__i0__param0 = 1;
          fwspec[_i0].param = (long *) malloc(_len_fwspec__i0__param0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_fwspec__i0__param0; _j0++) {
            fwspec[_i0].param[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_hwirq0 = 1;
          unsigned long * hwirq = (unsigned long *) malloc(_len_hwirq0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_hwirq0; _i0++) {
            hwirq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_type0 = 1;
          unsigned int * type = (unsigned int *) malloc(_len_type0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xgene_gpio_sb_domain_translate(d,fwspec,hwirq,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(d[_aux].host_data);
          }
          free(d);
          for(int _aux = 0; _aux < _len_fwspec0; _aux++) {
          free(fwspec[_aux].param);
          }
          free(fwspec);
          free(hwirq);
          free(type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
