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
typedef  enum fw_port_type { ____Placeholder_fw_port_type } fw_port_type ;
typedef  enum fw_port_module_type { ____Placeholder_fw_port_module_type } fw_port_module_type ;

/* Variables and functions */
 int FW_PORT_MOD_TYPE_ER ; 
 int FW_PORT_MOD_TYPE_LR ; 
 int FW_PORT_MOD_TYPE_LRM ; 
 int FW_PORT_MOD_TYPE_SR ; 
 int FW_PORT_MOD_TYPE_TWINAX_ACTIVE ; 
 int FW_PORT_MOD_TYPE_TWINAX_PASSIVE ; 
 int FW_PORT_TYPE_BT_SGMII ; 
 int FW_PORT_TYPE_BT_XAUI ; 
 int FW_PORT_TYPE_BT_XFI ; 
 int FW_PORT_TYPE_CR2_QSFP ; 
 int FW_PORT_TYPE_CR4_QSFP ; 
 int FW_PORT_TYPE_CR_QSFP ; 
 int FW_PORT_TYPE_FIBER_XAUI ; 
 int FW_PORT_TYPE_FIBER_XFI ; 
 int FW_PORT_TYPE_KR4_100G ; 
 int FW_PORT_TYPE_KR_SFP28 ; 
 int FW_PORT_TYPE_KR_XLAUI ; 
 int FW_PORT_TYPE_QSA ; 
 int FW_PORT_TYPE_QSFP ; 
 int FW_PORT_TYPE_QSFP_10G ; 
 int FW_PORT_TYPE_SFP ; 
 int FW_PORT_TYPE_SFP28 ; 
 int PORT_DA ; 
 int PORT_FIBRE ; 
 int PORT_NONE ; 
 int PORT_OTHER ; 
 int PORT_TP ; 

__attribute__((used)) static int from_fw_port_mod_type(enum fw_port_type port_type,
				 enum fw_port_module_type mod_type)
{
	if (port_type == FW_PORT_TYPE_BT_SGMII ||
	    port_type == FW_PORT_TYPE_BT_XFI ||
	    port_type == FW_PORT_TYPE_BT_XAUI) {
		return PORT_TP;
	} else if (port_type == FW_PORT_TYPE_FIBER_XFI ||
		   port_type == FW_PORT_TYPE_FIBER_XAUI) {
		return PORT_FIBRE;
	} else if (port_type == FW_PORT_TYPE_SFP ||
		   port_type == FW_PORT_TYPE_QSFP_10G ||
		   port_type == FW_PORT_TYPE_QSA ||
		   port_type == FW_PORT_TYPE_QSFP ||
		   port_type == FW_PORT_TYPE_CR4_QSFP ||
		   port_type == FW_PORT_TYPE_CR_QSFP ||
		   port_type == FW_PORT_TYPE_CR2_QSFP ||
		   port_type == FW_PORT_TYPE_SFP28) {
		if (mod_type == FW_PORT_MOD_TYPE_LR ||
		    mod_type == FW_PORT_MOD_TYPE_SR ||
		    mod_type == FW_PORT_MOD_TYPE_ER ||
		    mod_type == FW_PORT_MOD_TYPE_LRM)
			return PORT_FIBRE;
		else if (mod_type == FW_PORT_MOD_TYPE_TWINAX_PASSIVE ||
			 mod_type == FW_PORT_MOD_TYPE_TWINAX_ACTIVE)
			return PORT_DA;
		else
			return PORT_OTHER;
	} else if (port_type == FW_PORT_TYPE_KR4_100G ||
		   port_type == FW_PORT_TYPE_KR_SFP28 ||
		   port_type == FW_PORT_TYPE_KR_XLAUI) {
		return PORT_NONE;
	}

	return PORT_OTHER;
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
          enum fw_port_type port_type = 0;
          enum fw_port_module_type mod_type = 0;
          int benchRet = from_fw_port_mod_type(port_type,mod_type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
