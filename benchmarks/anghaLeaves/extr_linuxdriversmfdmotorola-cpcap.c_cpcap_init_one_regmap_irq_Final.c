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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct regmap_irq {unsigned int reg_offset; unsigned int mask; } ;
struct cpcap_ddata {TYPE_1__* regmap_conf; } ;
struct TYPE_2__ {unsigned int val_bits; unsigned int reg_stride; } ;

/* Variables and functions */

__attribute__((used)) static void cpcap_init_one_regmap_irq(struct cpcap_ddata *cpcap,
				      struct regmap_irq *rirq,
				      int irq_base, int irq)
{
	unsigned int reg_offset;
	unsigned int bit, mask;

	reg_offset = irq - irq_base;
	reg_offset /= cpcap->regmap_conf->val_bits;
	reg_offset *= cpcap->regmap_conf->reg_stride;

	bit = irq % cpcap->regmap_conf->val_bits;
	mask = (1 << bit);

	rirq->reg_offset = reg_offset;
	rirq->mask = mask;
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

    // big-arr-10x
    case 0:
    {
          int irq_base = 10;
          int irq = 10;
          int _len_cpcap0 = 100;
          struct cpcap_ddata * cpcap = (struct cpcap_ddata *) malloc(_len_cpcap0*sizeof(struct cpcap_ddata));
          for(int _i0 = 0; _i0 < _len_cpcap0; _i0++) {
              int _len_cpcap__i0__regmap_conf0 = 1;
          cpcap[_i0].regmap_conf = (struct TYPE_2__ *) malloc(_len_cpcap__i0__regmap_conf0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cpcap__i0__regmap_conf0; _j0++) {
            cpcap[_i0].regmap_conf->val_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        cpcap[_i0].regmap_conf->reg_stride = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rirq0 = 100;
          struct regmap_irq * rirq = (struct regmap_irq *) malloc(_len_rirq0*sizeof(struct regmap_irq));
          for(int _i0 = 0; _i0 < _len_rirq0; _i0++) {
            rirq[_i0].reg_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        rirq[_i0].mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cpcap_init_one_regmap_irq(cpcap,rirq,irq_base,irq);
          for(int _aux = 0; _aux < _len_cpcap0; _aux++) {
          free(cpcap[_aux].regmap_conf);
          }
          free(cpcap);
          free(rirq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
