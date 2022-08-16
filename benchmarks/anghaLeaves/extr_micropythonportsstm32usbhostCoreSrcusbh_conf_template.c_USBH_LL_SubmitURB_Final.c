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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int /*<<< orphan*/  uint16_t ;
typedef  int /*<<< orphan*/  USBH_StatusTypeDef ;
typedef  int /*<<< orphan*/  USBH_HandleTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  USBH_OK ; 

USBH_StatusTypeDef   USBH_LL_SubmitURB  (USBH_HandleTypeDef *phost, 
                                            uint8_t pipe, 
                                            uint8_t direction ,
                                            uint8_t ep_type,  
                                            uint8_t token, 
                                            uint8_t* pbuff, 
                                            uint16_t length,
                                            uint8_t do_ping ) 
{

  return USBH_OK;   
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
          int pipe = 100;
          int direction = 100;
          int ep_type = 100;
          int token = 100;
          int length = 100;
          int do_ping = 100;
          int _len_phost0 = 1;
          int * phost = (int *) malloc(_len_phost0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
            phost[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pbuff0 = 1;
          int * pbuff = (int *) malloc(_len_pbuff0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pbuff0; _i0++) {
            pbuff[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = USBH_LL_SubmitURB(phost,pipe,direction,ep_type,token,pbuff,length,do_ping);
          printf("%d\n", benchRet); 
          free(phost);
          free(pbuff);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
