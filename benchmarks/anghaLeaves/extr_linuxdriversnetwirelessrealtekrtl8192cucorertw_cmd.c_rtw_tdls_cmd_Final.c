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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u8 ;
struct mlme_priv {int dummy; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int dummy; } ;
struct TDLSoption_param {int dummy; } ;
struct TYPE_3__ {struct cmd_priv cmdpriv; struct mlme_priv mlmepriv; } ;
typedef  TYPE_1__ _adapter ;

/* Variables and functions */
 int /*<<< orphan*/  _SUCCESS ; 
 int /*<<< orphan*/  _func_enter_ ; 
 int /*<<< orphan*/  _func_exit_ ; 

u8 rtw_tdls_cmd(_adapter *padapter, u8 *addr, u8 option)
{
	struct	cmd_obj*	pcmdobj;
	struct	TDLSoption_param	*TDLSoption;
	struct 	mlme_priv *pmlmepriv = &padapter->mlmepriv;
	struct	cmd_priv   *pcmdpriv = &padapter->cmdpriv;

	u8	res=_SUCCESS;

_func_enter_;

#ifdef CONFIG_TDLS

	RT_TRACE(_module_rtl871x_cmd_c_, _drv_notice_, ("+rtw_set_tdls_cmd\n"));

	pcmdobj = (struct	cmd_obj*)rtw_zmalloc(sizeof(struct	cmd_obj));
	if(pcmdobj == NULL){
		res=_FAIL;
		goto exit;
	}

	TDLSoption= (struct TDLSoption_param *)rtw_zmalloc(sizeof(struct TDLSoption_param));
	if(TDLSoption == NULL) {
		rtw_mfree((u8 *)pcmdobj, sizeof(struct cmd_obj));
		res= _FAIL;
		goto exit;
	}

	_rtw_spinlock(&(padapter->tdlsinfo.cmd_lock));
	_rtw_memcpy(TDLSoption->addr, addr, 6);	
	TDLSoption->option = option;
	_rtw_spinunlock(&(padapter->tdlsinfo.cmd_lock));
	init_h2fwcmd_w_parm_no_rsp(pcmdobj, TDLSoption, GEN_CMD_CODE(_TDLS));
	res = rtw_enqueue_cmd(pcmdpriv, pcmdobj);

#endif	//CONFIG_TDLS
	
exit:


_func_exit_;	

	return res;
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
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
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

          int option = 100;
        
          int _len_padapter0 = 1;
          struct TYPE_3__ * padapter = (struct TYPE_3__ *) malloc(_len_padapter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
              padapter[_i0].cmdpriv.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          padapter[_i0].mlmepriv.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_addr0 = 1;
          int * addr = (int *) malloc(_len_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = rtw_tdls_cmd(padapter,addr,option);
          printf("%d\n", benchRet); 
          free(padapter);
          free(addr);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
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

          int option = 255;
        
          int _len_padapter0 = 65025;
          struct TYPE_3__ * padapter = (struct TYPE_3__ *) malloc(_len_padapter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
              padapter[_i0].cmdpriv.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          padapter[_i0].mlmepriv.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_addr0 = 65025;
          int * addr = (int *) malloc(_len_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = rtw_tdls_cmd(padapter,addr,option);
          printf("%d\n", benchRet); 
          free(padapter);
          free(addr);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
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

          int option = 10;
        
          int _len_padapter0 = 100;
          struct TYPE_3__ * padapter = (struct TYPE_3__ *) malloc(_len_padapter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
              padapter[_i0].cmdpriv.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          padapter[_i0].mlmepriv.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_addr0 = 100;
          int * addr = (int *) malloc(_len_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = rtw_tdls_cmd(padapter,addr,option);
          printf("%d\n", benchRet); 
          free(padapter);
          free(addr);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
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

          int option = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_padapter0 = 1;
          struct TYPE_3__ * padapter = (struct TYPE_3__ *) malloc(_len_padapter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
              padapter[_i0].cmdpriv.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          padapter[_i0].mlmepriv.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_addr0 = 1;
          int * addr = (int *) malloc(_len_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = rtw_tdls_cmd(padapter,addr,option);
          printf("%d\n", benchRet); 
          free(padapter);
          free(addr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
