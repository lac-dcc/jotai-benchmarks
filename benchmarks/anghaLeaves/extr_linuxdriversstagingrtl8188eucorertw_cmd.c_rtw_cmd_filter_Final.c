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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
struct drvextra_cmd_parm {scalar_t__ ec_id; } ;
struct cmd_priv {int /*<<< orphan*/  cmdthd_running; TYPE_3__* padapter; } ;
struct cmd_obj {scalar_t__ cmdcode; scalar_t__ parmbuf; } ;
struct TYPE_5__ {int /*<<< orphan*/  usbss_enable; } ;
struct TYPE_4__ {scalar_t__ bHWPwrPindetect; } ;
struct TYPE_6__ {int /*<<< orphan*/  hw_init_completed; TYPE_2__ registrypriv; TYPE_1__ pwrctrlpriv; } ;

/* Variables and functions */
 scalar_t__ POWER_SAVING_CTRL_WK_CID ; 
 int _FAIL ; 
 int _SUCCESS ; 
 scalar_t__ _SetChannelPlan_CMD_ ; 
 scalar_t__ _Set_Drv_Extra_CMD_ ; 

__attribute__((used)) static int rtw_cmd_filter(struct cmd_priv *pcmdpriv, struct cmd_obj *cmd_obj)
{
	u8 bAllow = false; /* set to true to allow enqueuing cmd when hw_init_completed is false */

	/* To decide allow or not */
	if ((pcmdpriv->padapter->pwrctrlpriv.bHWPwrPindetect) &&
	    (!pcmdpriv->padapter->registrypriv.usbss_enable)) {
		if (cmd_obj->cmdcode == _Set_Drv_Extra_CMD_) {
			struct drvextra_cmd_parm	*pdrvextra_cmd_parm = (struct drvextra_cmd_parm	*)cmd_obj->parmbuf;

			if (pdrvextra_cmd_parm->ec_id == POWER_SAVING_CTRL_WK_CID)
				bAllow = true;
		}
	}

	if (cmd_obj->cmdcode == _SetChannelPlan_CMD_)
		bAllow = true;

	if ((!pcmdpriv->padapter->hw_init_completed && !bAllow) ||
	    !pcmdpriv->cmdthd_running)	/* com_thread not running */
		return _FAIL;
	return _SUCCESS;
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
          int _len_pcmdpriv0 = 1;
          struct cmd_priv * pcmdpriv = (struct cmd_priv *) malloc(_len_pcmdpriv0*sizeof(struct cmd_priv));
          for(int _i0 = 0; _i0 < _len_pcmdpriv0; _i0++) {
            pcmdpriv[_i0].cmdthd_running = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pcmdpriv__i0__padapter0 = 1;
          pcmdpriv[_i0].padapter = (struct TYPE_6__ *) malloc(_len_pcmdpriv__i0__padapter0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_pcmdpriv__i0__padapter0; _j0++) {
            pcmdpriv[_i0].padapter->hw_init_completed = ((-2 * (next_i()%2)) + 1) * next_i();
        pcmdpriv[_i0].padapter->registrypriv.usbss_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        pcmdpriv[_i0].padapter->pwrctrlpriv.bHWPwrPindetect = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cmd_obj0 = 1;
          struct cmd_obj * cmd_obj = (struct cmd_obj *) malloc(_len_cmd_obj0*sizeof(struct cmd_obj));
          for(int _i0 = 0; _i0 < _len_cmd_obj0; _i0++) {
            cmd_obj[_i0].cmdcode = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_obj[_i0].parmbuf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rtw_cmd_filter(pcmdpriv,cmd_obj);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pcmdpriv0; _aux++) {
          free(pcmdpriv[_aux].padapter);
          }
          free(pcmdpriv);
          free(cmd_obj);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
