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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {scalar_t__ port_guid; } ;
struct rxe_dev {TYPE_1__ port; } ;
struct TYPE_6__ {scalar_t__ interface_id; } ;
struct TYPE_7__ {TYPE_2__ global; } ;
struct TYPE_8__ {TYPE_3__ dgid; } ;
struct rxe_av {TYPE_4__ grh; } ;

/* Variables and functions */

__attribute__((used)) static inline int addr_same(struct rxe_dev *rxe, struct rxe_av *av)
{
	return rxe->port.port_guid == av->grh.dgid.global.interface_id;
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
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
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

          int _len_rxe0 = 65025;
          struct rxe_dev * rxe = (struct rxe_dev *) malloc(_len_rxe0*sizeof(struct rxe_dev));
          for(int _i0 = 0; _i0 < _len_rxe0; _i0++) {
              rxe[_i0].port.port_guid = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_av0 = 65025;
          struct rxe_av * av = (struct rxe_av *) malloc(_len_av0*sizeof(struct rxe_av));
          for(int _i0 = 0; _i0 < _len_av0; _i0++) {
              av[_i0].grh.dgid.global.interface_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          int benchRet = addr_same(rxe,av);
          printf("%d\n", benchRet); 
          free(rxe);
          free(av);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
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

          int _len_rxe0 = 100;
          struct rxe_dev * rxe = (struct rxe_dev *) malloc(_len_rxe0*sizeof(struct rxe_dev));
          for(int _i0 = 0; _i0 < _len_rxe0; _i0++) {
              rxe[_i0].port.port_guid = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_av0 = 100;
          struct rxe_av * av = (struct rxe_av *) malloc(_len_av0*sizeof(struct rxe_av));
          for(int _i0 = 0; _i0 < _len_av0; _i0++) {
              av[_i0].grh.dgid.global.interface_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          int benchRet = addr_same(rxe,av);
          printf("%d\n", benchRet); 
          free(rxe);
          free(av);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
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

          int _len_rxe0 = 1;
          struct rxe_dev * rxe = (struct rxe_dev *) malloc(_len_rxe0*sizeof(struct rxe_dev));
          for(int _i0 = 0; _i0 < _len_rxe0; _i0++) {
              rxe[_i0].port.port_guid = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_av0 = 1;
          struct rxe_av * av = (struct rxe_av *) malloc(_len_av0*sizeof(struct rxe_av));
          for(int _i0 = 0; _i0 < _len_av0; _i0++) {
              av[_i0].grh.dgid.global.interface_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          int benchRet = addr_same(rxe,av);
          printf("%d\n", benchRet); 
          free(rxe);
          free(av);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
