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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int /*<<< orphan*/  uint16_t ;
typedef  int /*<<< orphan*/  USBH_StatusTypeDef ;
typedef  int /*<<< orphan*/  USBH_HandleTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  USBH_OK ; 

USBH_StatusTypeDef   USBH_LL_OpenPipe (USBH_HandleTypeDef *phost, 
                                      uint8_t pipe_num,
                                      uint8_t epnum,                                      
                                      uint8_t dev_address,
                                      uint8_t speed,
                                      uint8_t ep_type,
                                      uint16_t mps)
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
          int pipe_num = 100;
          int epnum = 100;
          int dev_address = 100;
          int speed = 100;
          int ep_type = 100;
          int mps = 100;
          int _len_phost0 = 1;
          int * phost = (int *) malloc(_len_phost0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
            phost[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = USBH_LL_OpenPipe(phost,pipe_num,epnum,dev_address,speed,ep_type,mps);
          printf("%d\n", benchRet); 
          free(phost);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int pipe_num = 10;
          int epnum = 10;
          int dev_address = 10;
          int speed = 10;
          int ep_type = 10;
          int mps = 10;
          int _len_phost0 = 100;
          int * phost = (int *) malloc(_len_phost0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
            phost[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = USBH_LL_OpenPipe(phost,pipe_num,epnum,dev_address,speed,ep_type,mps);
          printf("%d\n", benchRet); 
          free(phost);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
