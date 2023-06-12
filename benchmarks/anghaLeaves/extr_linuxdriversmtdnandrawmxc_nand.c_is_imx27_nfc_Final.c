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
struct mxc_nand_host {int /*<<< orphan*/ * devtype_data; } ;

/* Variables and functions */
 int /*<<< orphan*/  imx27_nand_devtype_data ; 

__attribute__((used)) static inline int is_imx27_nfc(struct mxc_nand_host *host)
{
	return host->devtype_data == &imx27_nand_devtype_data;
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
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int _len_host0 = 65025;
          struct mxc_nand_host * host = (struct mxc_nand_host *) malloc(_len_host0*sizeof(struct mxc_nand_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__devtype_data0 = 1;
          host[_i0].devtype_data = (int *) malloc(_len_host__i0__devtype_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__devtype_data0; _j0++) {
            host[_i0].devtype_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = is_imx27_nfc(host);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].devtype_data);
          }
          free(host);
        
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
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int _len_host0 = 100;
          struct mxc_nand_host * host = (struct mxc_nand_host *) malloc(_len_host0*sizeof(struct mxc_nand_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__devtype_data0 = 1;
          host[_i0].devtype_data = (int *) malloc(_len_host__i0__devtype_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__devtype_data0; _j0++) {
            host[_i0].devtype_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = is_imx27_nfc(host);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].devtype_data);
          }
          free(host);
        
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
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int _len_host0 = 1;
          struct mxc_nand_host * host = (struct mxc_nand_host *) malloc(_len_host0*sizeof(struct mxc_nand_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__devtype_data0 = 1;
          host[_i0].devtype_data = (int *) malloc(_len_host__i0__devtype_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__devtype_data0; _j0++) {
            host[_i0].devtype_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = is_imx27_nfc(host);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].devtype_data);
          }
          free(host);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
