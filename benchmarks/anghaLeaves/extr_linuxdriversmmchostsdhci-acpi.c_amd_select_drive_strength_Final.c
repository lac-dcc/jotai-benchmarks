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

/* Type definitions */
struct mmc_card {int dummy; } ;

/* Variables and functions */
 int MMC_SET_DRIVER_TYPE_A ; 

__attribute__((used)) static int amd_select_drive_strength(struct mmc_card *card,
				     unsigned int max_dtr, int host_drv,
				     int card_drv, int *drv_type)
{
	return MMC_SET_DRIVER_TYPE_A;
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
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          unsigned int max_dtr = 100;
        
          int host_drv = 100;
        
          int card_drv = 100;
        
          int _len_card0 = 1;
          struct mmc_card * card = (struct mmc_card *) malloc(_len_card0*sizeof(struct mmc_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
              card[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_drv_type0 = 1;
          int * drv_type = (int *) malloc(_len_drv_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_drv_type0; _i0++) {
            drv_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = amd_select_drive_strength(card,max_dtr,host_drv,card_drv,drv_type);
          printf("%d\n", benchRet); 
          free(card);
          free(drv_type);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          unsigned int max_dtr = 255;
        
          int host_drv = 255;
        
          int card_drv = 255;
        
          int _len_card0 = 65025;
          struct mmc_card * card = (struct mmc_card *) malloc(_len_card0*sizeof(struct mmc_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
              card[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_drv_type0 = 65025;
          int * drv_type = (int *) malloc(_len_drv_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_drv_type0; _i0++) {
            drv_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = amd_select_drive_strength(card,max_dtr,host_drv,card_drv,drv_type);
          printf("%d\n", benchRet); 
          free(card);
          free(drv_type);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          unsigned int max_dtr = 10;
        
          int host_drv = 10;
        
          int card_drv = 10;
        
          int _len_card0 = 100;
          struct mmc_card * card = (struct mmc_card *) malloc(_len_card0*sizeof(struct mmc_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
              card[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_drv_type0 = 100;
          int * drv_type = (int *) malloc(_len_drv_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_drv_type0; _i0++) {
            drv_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = amd_select_drive_strength(card,max_dtr,host_drv,card_drv,drv_type);
          printf("%d\n", benchRet); 
          free(card);
          free(drv_type);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          unsigned int max_dtr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int host_drv = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int card_drv = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_card0 = 1;
          struct mmc_card * card = (struct mmc_card *) malloc(_len_card0*sizeof(struct mmc_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
              card[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_drv_type0 = 1;
          int * drv_type = (int *) malloc(_len_drv_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_drv_type0; _i0++) {
            drv_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = amd_select_drive_strength(card,max_dtr,host_drv,card_drv,drv_type);
          printf("%d\n", benchRet); 
          free(card);
          free(drv_type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
