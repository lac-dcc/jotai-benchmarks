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
struct max14577_muic_info {int irq_adc; int irq_chg; } ;

/* Variables and functions */
#define  MAX14577_IRQ_INT1_ADC 135 
#define  MAX14577_IRQ_INT1_ADCERR 134 
#define  MAX14577_IRQ_INT1_ADCLOW 133 
#define  MAX14577_IRQ_INT2_CHGDETRUN 132 
#define  MAX14577_IRQ_INT2_CHGTYP 131 
#define  MAX14577_IRQ_INT2_DBCHG 130 
#define  MAX14577_IRQ_INT2_DCDTMR 129 
#define  MAX14577_IRQ_INT2_VBVOLT 128 

__attribute__((used)) static int max14577_parse_irq(struct max14577_muic_info *info, int irq_type)
{
	switch (irq_type) {
	case MAX14577_IRQ_INT1_ADC:
	case MAX14577_IRQ_INT1_ADCLOW:
	case MAX14577_IRQ_INT1_ADCERR:
		/*
		 * Handle all of accessory except for
		 * type of charger accessory.
		 */
		info->irq_adc = true;
		return 1;
	case MAX14577_IRQ_INT2_CHGTYP:
	case MAX14577_IRQ_INT2_CHGDETRUN:
	case MAX14577_IRQ_INT2_DCDTMR:
	case MAX14577_IRQ_INT2_DBCHG:
	case MAX14577_IRQ_INT2_VBVOLT:
		/* Handle charger accessory */
		info->irq_chg = true;
		return 1;
	default:
		return 0;
	}
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
          int irq_type = 100;
          int _len_info0 = 1;
          struct max14577_muic_info * info = (struct max14577_muic_info *) malloc(_len_info0*sizeof(struct max14577_muic_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].irq_adc = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].irq_chg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = max14577_parse_irq(info,irq_type);
          printf("%d\n", benchRet); 
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
