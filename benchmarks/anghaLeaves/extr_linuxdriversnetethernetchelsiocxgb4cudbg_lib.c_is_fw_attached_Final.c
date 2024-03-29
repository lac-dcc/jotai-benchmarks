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
struct cudbg_init {struct adapter* adap; } ;
struct adapter {int flags; scalar_t__ use_bd; } ;

/* Variables and functions */
 int FW_OK ; 

__attribute__((used)) static int is_fw_attached(struct cudbg_init *pdbg_init)
{
	struct adapter *padap = pdbg_init->adap;

	if (!(padap->flags & FW_OK) || padap->use_bd)
		return 0;

	return 1;
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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_pdbg_init0 = 65025;
          struct cudbg_init * pdbg_init = (struct cudbg_init *) malloc(_len_pdbg_init0*sizeof(struct cudbg_init));
          for(int _i0 = 0; _i0 < _len_pdbg_init0; _i0++) {
              int _len_pdbg_init__i0__adap0 = 1;
          pdbg_init[_i0].adap = (struct adapter *) malloc(_len_pdbg_init__i0__adap0*sizeof(struct adapter));
          for(int _j0 = 0; _j0 < _len_pdbg_init__i0__adap0; _j0++) {
              pdbg_init[_i0].adap->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          pdbg_init[_i0].adap->use_bd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = is_fw_attached(pdbg_init);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pdbg_init0; _aux++) {
          free(pdbg_init[_aux].adap);
          }
          free(pdbg_init);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_pdbg_init0 = 100;
          struct cudbg_init * pdbg_init = (struct cudbg_init *) malloc(_len_pdbg_init0*sizeof(struct cudbg_init));
          for(int _i0 = 0; _i0 < _len_pdbg_init0; _i0++) {
              int _len_pdbg_init__i0__adap0 = 1;
          pdbg_init[_i0].adap = (struct adapter *) malloc(_len_pdbg_init__i0__adap0*sizeof(struct adapter));
          for(int _j0 = 0; _j0 < _len_pdbg_init__i0__adap0; _j0++) {
              pdbg_init[_i0].adap->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          pdbg_init[_i0].adap->use_bd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = is_fw_attached(pdbg_init);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pdbg_init0; _aux++) {
          free(pdbg_init[_aux].adap);
          }
          free(pdbg_init);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_pdbg_init0 = 1;
          struct cudbg_init * pdbg_init = (struct cudbg_init *) malloc(_len_pdbg_init0*sizeof(struct cudbg_init));
          for(int _i0 = 0; _i0 < _len_pdbg_init0; _i0++) {
              int _len_pdbg_init__i0__adap0 = 1;
          pdbg_init[_i0].adap = (struct adapter *) malloc(_len_pdbg_init__i0__adap0*sizeof(struct adapter));
          for(int _j0 = 0; _j0 < _len_pdbg_init__i0__adap0; _j0++) {
              pdbg_init[_i0].adap->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          pdbg_init[_i0].adap->use_bd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = is_fw_attached(pdbg_init);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pdbg_init0; _aux++) {
          free(pdbg_init[_aux].adap);
          }
          free(pdbg_init);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
