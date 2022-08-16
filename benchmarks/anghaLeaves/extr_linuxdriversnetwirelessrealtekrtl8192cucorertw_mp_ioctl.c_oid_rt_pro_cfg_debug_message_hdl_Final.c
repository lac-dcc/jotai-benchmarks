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
struct oid_par_priv {int dummy; } ;
typedef  int /*<<< orphan*/  NDIS_STATUS ;

/* Variables and functions */

NDIS_STATUS oid_rt_pro_cfg_debug_message_hdl(struct oid_par_priv *poid_par_priv)
{
#if 0
	PADAPTER	Adapter = (PADAPTER)(poid_par_priv->adapter_context);

	NDIS_STATUS	status = NDIS_STATUS_SUCCESS;

	PCFG_DBG_MSG_STRUCT pdbg_msg;

_func_enter_;

//	RT_TRACE(0xffffffffff,_drv_alert_,("===> oid_rt_pro_cfg_debug_message_hdl.\n"));

#if 0//#ifdef CONFIG_DEBUG_RTL871X

	pdbg_msg = (PCFG_DBG_MSG_STRUCT)(poid_par_priv->information_buf);

	if (poid_par_priv->type_of_oid == SET_OID) {
		RT_TRACE(0xffffffffff, _drv_alert_,
			 ("===>Set level :0x%08x, H32:0x%08x L32:0x%08x\n",
			  pdbg_msg->DebugLevel, pdbg_msg->DebugComponent_H32, pdbg_msg->DebugComponent_L32));

		GlobalDebugLevel = pdbg_msg->DebugLevel;
		GlobalDebugComponents = (pdbg_msg->DebugComponent_H32 << 32) | pdbg_msg->DebugComponent_L32;
		RT_TRACE(0xffffffffff, _drv_alert_,
			 ("===> Set level :0x%08x, component:0x%016x\n",
			  GlobalDebugLevel, (u32)GlobalDebugComponents));
	} else {
		pdbg_msg->DebugLevel = GlobalDebugLevel;
		pdbg_msg->DebugComponent_H32 = (u32)(GlobalDebugComponents >> 32);
		pdbg_msg->DebugComponent_L32 = (u32)GlobalDebugComponents;
		*poid_par_priv->bytes_rw = poid_par_priv->information_buf_len;

		RT_TRACE(0xffffffffff, _drv_alert_,
			 ("===>Query level:0x%08x H32:0x%08x L32:0x%08x\n",
			  (u32)pdbg_msg->DebugLevel, (u32)pdbg_msg->DebugComponent_H32, (u32)pdbg_msg->DebugComponent_L32));
	}

#endif

_func_exit_;

	return status;
#else
	return 0;
#endif
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
          int _len_poid_par_priv0 = 1;
          struct oid_par_priv * poid_par_priv = (struct oid_par_priv *) malloc(_len_poid_par_priv0*sizeof(struct oid_par_priv));
          for(int _i0 = 0; _i0 < _len_poid_par_priv0; _i0++) {
            poid_par_priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = oid_rt_pro_cfg_debug_message_hdl(poid_par_priv);
          printf("%d\n", benchRet); 
          free(poid_par_priv);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_poid_par_priv0 = 100;
          struct oid_par_priv * poid_par_priv = (struct oid_par_priv *) malloc(_len_poid_par_priv0*sizeof(struct oid_par_priv));
          for(int _i0 = 0; _i0 < _len_poid_par_priv0; _i0++) {
            poid_par_priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = oid_rt_pro_cfg_debug_message_hdl(poid_par_priv);
          printf("%d\n", benchRet); 
          free(poid_par_priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
