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
typedef  struct TYPE_14__   TYPE_6__ ;
typedef  struct TYPE_13__   TYPE_5__ ;
typedef  struct TYPE_12__   TYPE_4__ ;
typedef  struct TYPE_11__   TYPE_3__ ;
typedef  struct TYPE_10__   TYPE_2__ ;
typedef  struct TYPE_9__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  USBH_StatusTypeDef ;
struct TYPE_12__ {TYPE_1__* pActiveClass; } ;
typedef  TYPE_4__ USBH_HandleTypeDef ;
struct TYPE_10__ {int /*<<< orphan*/  param5; int /*<<< orphan*/  param4; int /*<<< orphan*/  param3; int /*<<< orphan*/  param2; int /*<<< orphan*/  param1; int /*<<< orphan*/  trans_id; int /*<<< orphan*/  code; } ;
struct TYPE_11__ {TYPE_2__ resp_container; int /*<<< orphan*/  session_id; } ;
struct TYPE_14__ {TYPE_3__ ptp; } ;
struct TYPE_13__ {int /*<<< orphan*/  Param5; int /*<<< orphan*/  Param4; int /*<<< orphan*/  Param3; int /*<<< orphan*/  Param2; int /*<<< orphan*/  Param1; int /*<<< orphan*/  Transaction_ID; int /*<<< orphan*/  SessionID; int /*<<< orphan*/  Code; } ;
struct TYPE_9__ {TYPE_6__* pData; } ;
typedef  TYPE_5__ PTP_ContainerTypedef ;
typedef  TYPE_6__ MTP_HandleTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  USBH_OK ; 

USBH_StatusTypeDef USBH_PTP_GetResponse (USBH_HandleTypeDef *phost, PTP_ContainerTypedef  *resp)
{
  USBH_StatusTypeDef            status = USBH_OK; 
  MTP_HandleTypeDef             *MTP_Handle =  phost->pActiveClass->pData; 
      
  /* build an appropriate PTPContainer */
  resp->Code = MTP_Handle->ptp.resp_container.code;
  resp->SessionID = MTP_Handle->ptp.session_id;
  resp->Transaction_ID = MTP_Handle->ptp.resp_container.trans_id;
  resp->Param1 = MTP_Handle->ptp.resp_container.param1;
  resp->Param2 = MTP_Handle->ptp.resp_container.param2;
  resp->Param3 = MTP_Handle->ptp.resp_container.param3;
  resp->Param4 = MTP_Handle->ptp.resp_container.param4;
  resp->Param5 = MTP_Handle->ptp.resp_container.param5;
  
  return status;
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
          struct TYPE_12__ * phost = (struct TYPE_12__ *) malloc(_len_phost0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_phost0; _i0++) {
              int _len_phost__i0__pActiveClass0 = 1;
          phost[_i0].pActiveClass = (struct TYPE_9__ *) malloc(_len_phost__i0__pActiveClass0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass0; _j0++) {
              int _len_phost__i0__pActiveClass_pData0 = 1;
          phost[_i0].pActiveClass->pData = (struct TYPE_14__ *) malloc(_len_phost__i0__pActiveClass_pData0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_phost__i0__pActiveClass_pData0; _j0++) {
            phost[_i0].pActiveClass->pData->ptp.resp_container.param5 = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->ptp.resp_container.param4 = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->ptp.resp_container.param3 = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->ptp.resp_container.param2 = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->ptp.resp_container.param1 = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->ptp.resp_container.trans_id = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->ptp.resp_container.code = ((-2 * (next_i()%2)) + 1) * next_i();
        phost[_i0].pActiveClass->pData->ptp.session_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_resp0 = 1;
          struct TYPE_13__ * resp = (struct TYPE_13__ *) malloc(_len_resp0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_resp0; _i0++) {
            resp[_i0].Param5 = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].Param4 = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].Param3 = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].Param2 = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].Param1 = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].Transaction_ID = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].SessionID = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].Code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = USBH_PTP_GetResponse(phost,resp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_phost0; _aux++) {
          free(phost[_aux].pActiveClass);
          }
          free(phost);
          free(resp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
