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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  size_t uint32_t ;
typedef  int /*<<< orphan*/  USBH_StatusTypeDef ;
struct TYPE_6__ {int /*<<< orphan*/  speed; int /*<<< orphan*/  address; scalar_t__* Data; } ;
struct TYPE_5__ {scalar_t__ errorcount; int /*<<< orphan*/  pipe_size; int /*<<< orphan*/  state; } ;
struct TYPE_7__ {TYPE_2__ device; TYPE_1__ Control; scalar_t__ Timer; int /*<<< orphan*/  RequestState; int /*<<< orphan*/  EnumState; int /*<<< orphan*/  gState; scalar_t__* Pipes; } ;
typedef  TYPE_3__ USBH_HandleTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  CMD_SEND ; 
 int /*<<< orphan*/  CTRL_SETUP ; 
 int /*<<< orphan*/  ENUM_IDLE ; 
 int /*<<< orphan*/  HOST_IDLE ; 
 int /*<<< orphan*/  USBH_ADDRESS_DEFAULT ; 
 size_t USBH_MAX_DATA_BUFFER ; 
 size_t USBH_MAX_PIPES_NBR ; 
 int /*<<< orphan*/  USBH_MPS_DEFAULT ; 
 int /*<<< orphan*/  USBH_OK ; 
 int /*<<< orphan*/  USBH_SPEED_FULL ; 

__attribute__((used)) static USBH_StatusTypeDef  DeInitStateMachine(USBH_HandleTypeDef *phost)
{
  uint32_t i = 0;

  /* Clear Pipes flags*/
  for ( ; i < USBH_MAX_PIPES_NBR; i++)
  {
    phost->Pipes[i] = 0;
  }
  
  for(i = 0; i< USBH_MAX_DATA_BUFFER; i++)
  {
    phost->device.Data[i] = 0;
  }
  
  phost->gState = HOST_IDLE;
  phost->EnumState = ENUM_IDLE;
  phost->RequestState = CMD_SEND;
  phost->Timer = 0;  
  
  phost->Control.state = CTRL_SETUP;
  phost->Control.pipe_size = USBH_MPS_DEFAULT;  
  phost->Control.errorcount = 0;
  
  phost->device.address = USBH_ADDRESS_DEFAULT;
  phost->device.speed   = USBH_SPEED_FULL;
  
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
          int _len_phost0 = 1;
          struct TYPE_7__ * phost = (struct TYPE_7__ *) malloc(_len_phost0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
            phost[_i0].device.speed = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].device.address = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phost__i0__device_Data0 = 1;
          phost[_i0].device.Data = (long *) malloc(_len_phost__i0__device_Data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_phost__i0__device_Data0; _j0++) {
            phost[_i0].device.Data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phost[_i0].Control.errorcount = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].Control.pipe_size = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].Control.state = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].Timer = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].RequestState = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].EnumState = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].gState = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phost__i0__Pipes0 = 1;
          phost[_i0].Pipes = (long *) malloc(_len_phost__i0__Pipes0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_phost__i0__Pipes0; _j0++) {
            phost[_i0].Pipes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = DeInitStateMachine(phost);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_phost0; _aux++) {
          free(phost[_aux].Pipes);
          }
          free(phost);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
