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
typedef  size_t u32 ;
struct isci_port {scalar_t__* phy_table; } ;

/* Variables and functions */
 size_t SCI_MAX_PHYS ; 

__attribute__((used)) static u32 sci_port_get_phys(struct isci_port *iport)
{
	u32 index;
	u32 mask;

	mask = 0;
	for (index = 0; index < SCI_MAX_PHYS; index++)
		if (iport->phy_table[index])
			mask |= (1 << index);

	return mask;
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
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
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
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_iport0 = 65025;
          struct isci_port * iport = (struct isci_port *) malloc(_len_iport0*sizeof(struct isci_port));
          for(int _i0 = 0; _i0 < _len_iport0; _i0++) {
              int _len_iport__i0__phy_table0 = 1;
          iport[_i0].phy_table = (long *) malloc(_len_iport__i0__phy_table0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_iport__i0__phy_table0; _j0++) {
            iport[_i0].phy_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          unsigned long benchRet = sci_port_get_phys(iport);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_iport0; _aux++) {
          free(iport[_aux].phy_table);
          }
          free(iport);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
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
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_iport0 = 100;
          struct isci_port * iport = (struct isci_port *) malloc(_len_iport0*sizeof(struct isci_port));
          for(int _i0 = 0; _i0 < _len_iport0; _i0++) {
              int _len_iport__i0__phy_table0 = 1;
          iport[_i0].phy_table = (long *) malloc(_len_iport__i0__phy_table0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_iport__i0__phy_table0; _j0++) {
            iport[_i0].phy_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          unsigned long benchRet = sci_port_get_phys(iport);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_iport0; _aux++) {
          free(iport[_aux].phy_table);
          }
          free(iport);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
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
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_iport0 = 1;
          struct isci_port * iport = (struct isci_port *) malloc(_len_iport0*sizeof(struct isci_port));
          for(int _i0 = 0; _i0 < _len_iport0; _i0++) {
              int _len_iport__i0__phy_table0 = 1;
          iport[_i0].phy_table = (long *) malloc(_len_iport__i0__phy_table0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_iport__i0__phy_table0; _j0++) {
            iport[_i0].phy_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          unsigned long benchRet = sci_port_get_phys(iport);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_iport0; _aux++) {
          free(iport[_aux].phy_table);
          }
          free(iport);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
