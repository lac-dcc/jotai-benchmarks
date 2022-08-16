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
 int DC_IRQ_SOURCE_VUPDATE1 ; 
 int DC_IRQ_SOURCE_VUPDATE2 ; 
 int DC_IRQ_SOURCE_VUPDATE3 ; 
 int DC_IRQ_SOURCE_VUPDATE4 ; 
 int DC_IRQ_SOURCE_VUPDATE5 ; 
 int DC_IRQ_SOURCE_VUPDATE6 ; 
#define  VISLANDS30_IV_EXTID_HOTPLUG_DETECT_A 158 
#define  VISLANDS30_IV_EXTID_HOTPLUG_DETECT_B 157 
#define  VISLANDS30_IV_EXTID_HOTPLUG_DETECT_C 156 
#define  VISLANDS30_IV_EXTID_HOTPLUG_DETECT_D 155 
#define  VISLANDS30_IV_EXTID_HOTPLUG_DETECT_E 154 
#define  VISLANDS30_IV_EXTID_HOTPLUG_DETECT_F 153 
#define  VISLANDS30_IV_EXTID_HPD_RX_A 152 
#define  VISLANDS30_IV_EXTID_HPD_RX_B 151 
#define  VISLANDS30_IV_EXTID_HPD_RX_C 150 
#define  VISLANDS30_IV_EXTID_HPD_RX_D 149 
#define  VISLANDS30_IV_EXTID_HPD_RX_E 148 
#define  VISLANDS30_IV_EXTID_HPD_RX_F 147 
#define  VISLANDS30_IV_SRCID_D1_GRPH_PFLIP 146 
#define  VISLANDS30_IV_SRCID_D1_VERTICAL_INTERRUPT0 145 
#define  VISLANDS30_IV_SRCID_D1_V_UPDATE_INT 144 
#define  VISLANDS30_IV_SRCID_D2_GRPH_PFLIP 143 
#define  VISLANDS30_IV_SRCID_D2_VERTICAL_INTERRUPT0 142 
#define  VISLANDS30_IV_SRCID_D2_V_UPDATE_INT 141 
#define  VISLANDS30_IV_SRCID_D3_GRPH_PFLIP 140 
#define  VISLANDS30_IV_SRCID_D3_VERTICAL_INTERRUPT0 139 
#define  VISLANDS30_IV_SRCID_D3_V_UPDATE_INT 138 
#define  VISLANDS30_IV_SRCID_D4_GRPH_PFLIP 137 
#define  VISLANDS30_IV_SRCID_D4_VERTICAL_INTERRUPT0 136 
#define  VISLANDS30_IV_SRCID_D4_V_UPDATE_INT 135 
#define  VISLANDS30_IV_SRCID_D5_GRPH_PFLIP 134 
#define  VISLANDS30_IV_SRCID_D5_VERTICAL_INTERRUPT0 133 
#define  VISLANDS30_IV_SRCID_D5_V_UPDATE_INT 132 
#define  VISLANDS30_IV_SRCID_D6_GRPH_PFLIP 131 
#define  VISLANDS30_IV_SRCID_D6_VERTICAL_INTERRUPT0 130 
#define  VISLANDS30_IV_SRCID_D6_V_UPDATE_INT 129 
#define  VISLANDS30_IV_SRCID_HOTPLUG_DETECT_A 128 

enum dc_irq_source to_dal_irq_source_dce110(
		struct irq_service *irq_service,
		uint32_t src_id,
		uint32_t ext_id)
{
	switch (src_id) {
	case VISLANDS30_IV_SRCID_D1_VERTICAL_INTERRUPT0:
		return DC_IRQ_SOURCE_VBLANK1;
	case VISLANDS30_IV_SRCID_D2_VERTICAL_INTERRUPT0:
		return DC_IRQ_SOURCE_VBLANK2;
	case VISLANDS30_IV_SRCID_D3_VERTICAL_INTERRUPT0:
		return DC_IRQ_SOURCE_VBLANK3;
	case VISLANDS30_IV_SRCID_D4_VERTICAL_INTERRUPT0:
		return DC_IRQ_SOURCE_VBLANK4;
	case VISLANDS30_IV_SRCID_D5_VERTICAL_INTERRUPT0:
		return DC_IRQ_SOURCE_VBLANK5;
	case VISLANDS30_IV_SRCID_D6_VERTICAL_INTERRUPT0:
		return DC_IRQ_SOURCE_VBLANK6;
	case VISLANDS30_IV_SRCID_D1_V_UPDATE_INT:
		return DC_IRQ_SOURCE_VUPDATE1;
	case VISLANDS30_IV_SRCID_D2_V_UPDATE_INT:
		return DC_IRQ_SOURCE_VUPDATE2;
	case VISLANDS30_IV_SRCID_D3_V_UPDATE_INT:
		return DC_IRQ_SOURCE_VUPDATE3;
	case VISLANDS30_IV_SRCID_D4_V_UPDATE_INT:
		return DC_IRQ_SOURCE_VUPDATE4;
	case VISLANDS30_IV_SRCID_D5_V_UPDATE_INT:
		return DC_IRQ_SOURCE_VUPDATE5;
	case VISLANDS30_IV_SRCID_D6_V_UPDATE_INT:
		return DC_IRQ_SOURCE_VUPDATE6;
	case VISLANDS30_IV_SRCID_D1_GRPH_PFLIP:
		return DC_IRQ_SOURCE_PFLIP1;
	case VISLANDS30_IV_SRCID_D2_GRPH_PFLIP:
		return DC_IRQ_SOURCE_PFLIP2;
	case VISLANDS30_IV_SRCID_D3_GRPH_PFLIP:
		return DC_IRQ_SOURCE_PFLIP3;
	case VISLANDS30_IV_SRCID_D4_GRPH_PFLIP:
		return DC_IRQ_SOURCE_PFLIP4;
	case VISLANDS30_IV_SRCID_D5_GRPH_PFLIP:
		return DC_IRQ_SOURCE_PFLIP5;
	case VISLANDS30_IV_SRCID_D6_GRPH_PFLIP:
		return DC_IRQ_SOURCE_PFLIP6;

	case VISLANDS30_IV_SRCID_HOTPLUG_DETECT_A:
		/* generic src_id for all HPD and HPDRX interrupts */
		switch (ext_id) {
		case VISLANDS30_IV_EXTID_HOTPLUG_DETECT_A:
			return DC_IRQ_SOURCE_HPD1;
		case VISLANDS30_IV_EXTID_HOTPLUG_DETECT_B:
			return DC_IRQ_SOURCE_HPD2;
		case VISLANDS30_IV_EXTID_HOTPLUG_DETECT_C:
			return DC_IRQ_SOURCE_HPD3;
		case VISLANDS30_IV_EXTID_HOTPLUG_DETECT_D:
			return DC_IRQ_SOURCE_HPD4;
		case VISLANDS30_IV_EXTID_HOTPLUG_DETECT_E:
			return DC_IRQ_SOURCE_HPD5;
		case VISLANDS30_IV_EXTID_HOTPLUG_DETECT_F:
			return DC_IRQ_SOURCE_HPD6;
		case VISLANDS30_IV_EXTID_HPD_RX_A:
			return DC_IRQ_SOURCE_HPD1RX;
		case VISLANDS30_IV_EXTID_HPD_RX_B:
			return DC_IRQ_SOURCE_HPD2RX;
		case VISLANDS30_IV_EXTID_HPD_RX_C:
			return DC_IRQ_SOURCE_HPD3RX;
		case VISLANDS30_IV_EXTID_HPD_RX_D:
			return DC_IRQ_SOURCE_HPD4RX;
		case VISLANDS30_IV_EXTID_HPD_RX_E:
			return DC_IRQ_SOURCE_HPD5RX;
		case VISLANDS30_IV_EXTID_HPD_RX_F:
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
          enum dc_irq_source benchRet = to_dal_irq_source_dce110(irq_service,src_id,ext_id);
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
          enum dc_irq_source benchRet = to_dal_irq_source_dce110(irq_service,src_id,ext_id);
          free(irq_service);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
