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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct vlapic {scalar_t__ esr_pending; struct LAPIC* apic_page; } ;
struct LAPIC {scalar_t__ esr; } ;

/* Variables and functions */

void
vlapic_esr_write_handler(struct vlapic *vlapic)
{
	struct LAPIC *lapic;
	
	lapic = vlapic->apic_page;
	lapic->esr = vlapic->esr_pending;
	vlapic->esr_pending = 0;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_vlapic0 = 65025;
          struct vlapic * vlapic = (struct vlapic *) malloc(_len_vlapic0*sizeof(struct vlapic));
          for(int _i0 = 0; _i0 < _len_vlapic0; _i0++) {
              vlapic[_i0].esr_pending = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vlapic__i0__apic_page0 = 1;
          vlapic[_i0].apic_page = (struct LAPIC *) malloc(_len_vlapic__i0__apic_page0*sizeof(struct LAPIC));
          for(int _j0 = 0; _j0 < _len_vlapic__i0__apic_page0; _j0++) {
              vlapic[_i0].apic_page->esr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          vlapic_esr_write_handler(vlapic);
          for(int _aux = 0; _aux < _len_vlapic0; _aux++) {
          free(vlapic[_aux].apic_page);
          }
          free(vlapic);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_vlapic0 = 100;
          struct vlapic * vlapic = (struct vlapic *) malloc(_len_vlapic0*sizeof(struct vlapic));
          for(int _i0 = 0; _i0 < _len_vlapic0; _i0++) {
              vlapic[_i0].esr_pending = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vlapic__i0__apic_page0 = 1;
          vlapic[_i0].apic_page = (struct LAPIC *) malloc(_len_vlapic__i0__apic_page0*sizeof(struct LAPIC));
          for(int _j0 = 0; _j0 < _len_vlapic__i0__apic_page0; _j0++) {
              vlapic[_i0].apic_page->esr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          vlapic_esr_write_handler(vlapic);
          for(int _aux = 0; _aux < _len_vlapic0; _aux++) {
          free(vlapic[_aux].apic_page);
          }
          free(vlapic);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_vlapic0 = 1;
          struct vlapic * vlapic = (struct vlapic *) malloc(_len_vlapic0*sizeof(struct vlapic));
          for(int _i0 = 0; _i0 < _len_vlapic0; _i0++) {
              vlapic[_i0].esr_pending = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vlapic__i0__apic_page0 = 1;
          vlapic[_i0].apic_page = (struct LAPIC *) malloc(_len_vlapic__i0__apic_page0*sizeof(struct LAPIC));
          for(int _j0 = 0; _j0 < _len_vlapic__i0__apic_page0; _j0++) {
              vlapic[_i0].apic_page->esr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          vlapic_esr_write_handler(vlapic);
          for(int _aux = 0; _aux < _len_vlapic0; _aux++) {
          free(vlapic[_aux].apic_page);
          }
          free(vlapic);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
