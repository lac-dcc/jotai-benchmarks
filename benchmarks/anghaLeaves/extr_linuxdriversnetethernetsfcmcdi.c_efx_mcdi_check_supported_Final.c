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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct efx_nic {TYPE_1__* type; } ;
struct TYPE_2__ {int mcdi_max_ver; } ;

/* Variables and functions */
 int EINVAL ; 
 int EMSGSIZE ; 
 size_t MCDI_CTL_SDU_LEN_MAX_V1 ; 
 size_t MCDI_CTL_SDU_LEN_MAX_V2 ; 
 unsigned int MC_CMD_CMD_SPACE_ESCAPE_7 ; 

__attribute__((used)) static int
efx_mcdi_check_supported(struct efx_nic *efx, unsigned int cmd, size_t inlen)
{
	if (efx->type->mcdi_max_ver < 0 ||
	     (efx->type->mcdi_max_ver < 2 &&
	      cmd > MC_CMD_CMD_SPACE_ESCAPE_7))
		return -EINVAL;

	if (inlen > MCDI_CTL_SDU_LEN_MAX_V2 ||
	    (efx->type->mcdi_max_ver < 2 &&
	     inlen > MCDI_CTL_SDU_LEN_MAX_V1))
		return -EMSGSIZE;

	return 0;
}

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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int cmd = 100;
        
          unsigned long inlen = 100;
        
          int _len_efx0 = 1;
          struct efx_nic * efx = (struct efx_nic *) malloc(_len_efx0*sizeof(struct efx_nic));
          for(int _i0 = 0; _i0 < _len_efx0; _i0++) {
              int _len_efx__i0__type0 = 1;
          efx[_i0].type = (struct TYPE_2__ *) malloc(_len_efx__i0__type0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_efx__i0__type0; _j0++) {
              efx[_i0].type->mcdi_max_ver = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = efx_mcdi_check_supported(efx,cmd,inlen);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_efx0; _aux++) {
          free(efx[_aux].type);
          }
          free(efx);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int cmd = 255;
        
          unsigned long inlen = 255;
        
          int _len_efx0 = 65025;
          struct efx_nic * efx = (struct efx_nic *) malloc(_len_efx0*sizeof(struct efx_nic));
          for(int _i0 = 0; _i0 < _len_efx0; _i0++) {
              int _len_efx__i0__type0 = 1;
          efx[_i0].type = (struct TYPE_2__ *) malloc(_len_efx__i0__type0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_efx__i0__type0; _j0++) {
              efx[_i0].type->mcdi_max_ver = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = efx_mcdi_check_supported(efx,cmd,inlen);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_efx0; _aux++) {
          free(efx[_aux].type);
          }
          free(efx);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int cmd = 10;
        
          unsigned long inlen = 10;
        
          int _len_efx0 = 100;
          struct efx_nic * efx = (struct efx_nic *) malloc(_len_efx0*sizeof(struct efx_nic));
          for(int _i0 = 0; _i0 < _len_efx0; _i0++) {
              int _len_efx__i0__type0 = 1;
          efx[_i0].type = (struct TYPE_2__ *) malloc(_len_efx__i0__type0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_efx__i0__type0; _j0++) {
              efx[_i0].type->mcdi_max_ver = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = efx_mcdi_check_supported(efx,cmd,inlen);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_efx0; _aux++) {
          free(efx[_aux].type);
          }
          free(efx);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int cmd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned long inlen = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_efx0 = 1;
          struct efx_nic * efx = (struct efx_nic *) malloc(_len_efx0*sizeof(struct efx_nic));
          for(int _i0 = 0; _i0 < _len_efx0; _i0++) {
              int _len_efx__i0__type0 = 1;
          efx[_i0].type = (struct TYPE_2__ *) malloc(_len_efx__i0__type0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_efx__i0__type0; _j0++) {
              efx[_i0].type->mcdi_max_ver = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = efx_mcdi_check_supported(efx,cmd,inlen);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_efx0; _aux++) {
          free(efx[_aux].type);
          }
          free(efx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
