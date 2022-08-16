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
typedef  int uint32_t ;
struct irq_service {int dummy; } ;
typedef  enum dc_irq_source { ____Placeholder_dc_irq_source } dc_irq_source ;

/* Variables and functions */
#define  DCN_1_0__CTXID__DC_HPD1_INT 152 
#define  DCN_1_0__CTXID__DC_HPD1_RX_INT 151 
#define  DCN_1_0__CTXID__DC_HPD2_INT 150 
#define  DCN_1_0__CTXID__DC_HPD2_RX_INT 149 
#define  DCN_1_0__CTXID__DC_HPD3_INT 148 
#define  DCN_1_0__CTXID__DC_HPD3_RX_INT 147 
#define  DCN_1_0__CTXID__DC_HPD4_INT 146 
#define  DCN_1_0__CTXID__DC_HPD4_RX_INT 145 
#define  DCN_1_0__CTXID__DC_HPD5_INT 144 
#define  DCN_1_0__CTXID__DC_HPD5_RX_INT 143 
#define  DCN_1_0__CTXID__DC_HPD6_INT 142 
#define  DCN_1_0__CTXID__DC_HPD6_RX_INT 141 
#define  DCN_1_0__SRCID__DC_D1_OTG_VSTARTUP 140 
#define  DCN_1_0__SRCID__DC_D2_OTG_VSTARTUP 139 
#define  DCN_1_0__SRCID__DC_D3_OTG_VSTARTUP 138 
#define  DCN_1_0__SRCID__DC_D4_OTG_VSTARTUP 137 
#define  DCN_1_0__SRCID__DC_D5_OTG_VSTARTUP 136 
#define  DCN_1_0__SRCID__DC_D6_OTG_VSTARTUP 135 
#define  DCN_1_0__SRCID__DC_HPD1_INT 134 
#define  DCN_1_0__SRCID__HUBP0_FLIP_INTERRUPT 133 
#define  DCN_1_0__SRCID__HUBP1_FLIP_INTERRUPT 132 
#define  DCN_1_0__SRCID__HUBP2_FLIP_INTERRUPT 131 
#define  DCN_1_0__SRCID__HUBP3_FLIP_INTERRUPT 130 
#define  DCN_1_0__SRCID__HUBP4_FLIP_INTERRUPT 129 
#define  DCN_1_0__SRCID__HUBP5_FLIP_INTERRUPT 128 
 int DC_IRQ_SOURCE_HPD1 ; 
 int DC_IRQ_SOURCE_HPD1RX ; 
 int DC_IRQ_SOURCE_HPD2 ; 
 int DC_IRQ_SOURCE_HPD2RX ; 
 int DC_IRQ_SOURCE_HPD3 ; 
 int DC_IRQ_SOURCE_HPD3RX ; 
 int DC_IRQ_SOURCE_HPD4 ; 
 int DC_IRQ_SOURCE_HPD4RX ; 
 int DC_IRQ_SOURCE_HPD5 ; 
 int DC_IRQ_SOURCE_HPD5RX ; 
 int DC_IRQ_SOURCE_HPD6 ; 
 int DC_IRQ_SOURCE_HPD6RX ; 
 int DC_IRQ_SOURCE_INVALID ; 
 int DC_IRQ_SOURCE_PFLIP1 ; 
 int DC_IRQ_SOURCE_PFLIP2 ; 
 int DC_IRQ_SOURCE_PFLIP3 ; 
 int DC_IRQ_SOURCE_PFLIP4 ; 
 int DC_IRQ_SOURCE_PFLIP5 ; 
 int DC_IRQ_SOURCE_PFLIP6 ; 
 int DC_IRQ_SOURCE_VBLANK1 ; 
 int DC_IRQ_SOURCE_VBLANK2 ; 
 int DC_IRQ_SOURCE_VBLANK3 ; 
 int DC_IRQ_SOURCE_VBLANK4 ; 
 int DC_IRQ_SOURCE_VBLANK5 ; 
 int DC_IRQ_SOURCE_VBLANK6 ; 

enum dc_irq_source to_dal_irq_source_dcn10(
		struct irq_service *irq_service,
		uint32_t src_id,
		uint32_t ext_id)
{
	switch (src_id) {
	case DCN_1_0__SRCID__DC_D1_OTG_VSTARTUP:
		return DC_IRQ_SOURCE_VBLANK1;
	case DCN_1_0__SRCID__DC_D2_OTG_VSTARTUP:
		return DC_IRQ_SOURCE_VBLANK2;
	case DCN_1_0__SRCID__DC_D3_OTG_VSTARTUP:
		return DC_IRQ_SOURCE_VBLANK3;
	case DCN_1_0__SRCID__DC_D4_OTG_VSTARTUP:
		return DC_IRQ_SOURCE_VBLANK4;
	case DCN_1_0__SRCID__DC_D5_OTG_VSTARTUP:
		return DC_IRQ_SOURCE_VBLANK5;
	case DCN_1_0__SRCID__DC_D6_OTG_VSTARTUP:
		return DC_IRQ_SOURCE_VBLANK6;
	case DCN_1_0__SRCID__HUBP0_FLIP_INTERRUPT:
		return DC_IRQ_SOURCE_PFLIP1;
	case DCN_1_0__SRCID__HUBP1_FLIP_INTERRUPT:
		return DC_IRQ_SOURCE_PFLIP2;
	case DCN_1_0__SRCID__HUBP2_FLIP_INTERRUPT:
		return DC_IRQ_SOURCE_PFLIP3;
	case DCN_1_0__SRCID__HUBP3_FLIP_INTERRUPT:
		return DC_IRQ_SOURCE_PFLIP4;
	case DCN_1_0__SRCID__HUBP4_FLIP_INTERRUPT:
		return DC_IRQ_SOURCE_PFLIP5;
	case DCN_1_0__SRCID__HUBP5_FLIP_INTERRUPT:
		return DC_IRQ_SOURCE_PFLIP6;

	case DCN_1_0__SRCID__DC_HPD1_INT:
		/* generic src_id for all HPD and HPDRX interrupts */
		switch (ext_id) {
		case DCN_1_0__CTXID__DC_HPD1_INT:
			return DC_IRQ_SOURCE_HPD1;
		case DCN_1_0__CTXID__DC_HPD2_INT:
			return DC_IRQ_SOURCE_HPD2;
		case DCN_1_0__CTXID__DC_HPD3_INT:
			return DC_IRQ_SOURCE_HPD3;
		case DCN_1_0__CTXID__DC_HPD4_INT:
			return DC_IRQ_SOURCE_HPD4;
		case DCN_1_0__CTXID__DC_HPD5_INT:
			return DC_IRQ_SOURCE_HPD5;
		case DCN_1_0__CTXID__DC_HPD6_INT:
			return DC_IRQ_SOURCE_HPD6;
		case DCN_1_0__CTXID__DC_HPD1_RX_INT:
			return DC_IRQ_SOURCE_HPD1RX;
		case DCN_1_0__CTXID__DC_HPD2_RX_INT:
			return DC_IRQ_SOURCE_HPD2RX;
		case DCN_1_0__CTXID__DC_HPD3_RX_INT:
			return DC_IRQ_SOURCE_HPD3RX;
		case DCN_1_0__CTXID__DC_HPD4_RX_INT:
			return DC_IRQ_SOURCE_HPD4RX;
		case DCN_1_0__CTXID__DC_HPD5_RX_INT:
			return DC_IRQ_SOURCE_HPD5RX;
		case DCN_1_0__CTXID__DC_HPD6_RX_INT:
			return DC_IRQ_SOURCE_HPD6RX;
		default:
			return DC_IRQ_SOURCE_INVALID;
		}
		break;

	default:
		return DC_IRQ_SOURCE_INVALID;
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
          int src_id = 100;
          int ext_id = 100;
          int _len_irq_service0 = 1;
          struct irq_service * irq_service = (struct irq_service *) malloc(_len_irq_service0*sizeof(struct irq_service));
          for(int _i0 = 0; _i0 < _len_irq_service0; _i0++) {
            irq_service[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum dc_irq_source benchRet = to_dal_irq_source_dcn10(irq_service,src_id,ext_id);
          free(irq_service);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int src_id = 10;
          int ext_id = 10;
          int _len_irq_service0 = 100;
          struct irq_service * irq_service = (struct irq_service *) malloc(_len_irq_service0*sizeof(struct irq_service));
          for(int _i0 = 0; _i0 < _len_irq_service0; _i0++) {
            irq_service[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum dc_irq_source benchRet = to_dal_irq_source_dcn10(irq_service,src_id,ext_id);
          free(irq_service);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
