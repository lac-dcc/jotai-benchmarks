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

NDIS_STATUS oid_rt_pro_encryption_ctrl_hdl(struct oid_par_priv *poid_par_priv)
{
#if 0
	PADAPTER	Adapter = (PADAPTER)(poid_par_priv->adapter_context);
	struct security_priv *psecuritypriv = &Adapter->securitypriv;

	NDIS_STATUS	status = NDIS_STATUS_SUCCESS;

	ENCRY_CTRL_STATE encry_mode;


	*poid_par_priv->bytes_needed = sizeof(u8);
	if (poid_par_priv->information_buf_len < *poid_par_priv->bytes_needed)
		return NDIS_STATUS_INVALID_LENGTH;

	if (poid_par_priv->type_of_oid == SET_OID)
	{
		encry_mode = *((u8*)poid_par_priv->information_buf);
		switch (encry_mode)
		{
			case HW_CONTROL:
				#if 0
				Adapter->registrypriv.software_decrypt=_FALSE;
				Adapter->registrypriv.software_encrypt=_FALSE;
				#else
				psecuritypriv->sw_decrypt = _FALSE;
				psecuritypriv->sw_encrypt = _FALSE;
				#endif
				break;
			case SW_CONTROL:
				#if 0
				Adapter->registrypriv.software_decrypt=_TRUE;
				Adapter->registrypriv.software_encrypt=_TRUE;
				#else
				psecuritypriv->sw_decrypt = _TRUE;
				psecuritypriv->sw_encrypt = _TRUE;
				#endif
				break;
			case HW_ENCRY_SW_DECRY:
				#if 0
				Adapter->registrypriv.software_decrypt=_TRUE;
				Adapter->registrypriv.software_encrypt=_FALSE;
				#else
				psecuritypriv->sw_decrypt = _TRUE;
				psecuritypriv->sw_encrypt = _FALSE;
				#endif
				break;
			case SW_ENCRY_HW_DECRY:
				#if 0
				Adapter->registrypriv.software_decrypt=_FALSE;
				Adapter->registrypriv.software_encrypt=_TRUE;
				#else
				psecuritypriv->sw_decrypt = _FALSE;
				psecuritypriv->sw_encrypt = _TRUE;
				#endif
				break;
		}

		RT_TRACE(_module_rtl871x_ioctl_c_, _drv_notice_,
			 ("-oid_rt_pro_encryption_ctrl_hdl: SET encry_mode=0x%x sw_encrypt=0x%x sw_decrypt=0x%x\n",
			  encry_mode, psecuritypriv->sw_encrypt, psecuritypriv->sw_decrypt));
	}
	else {
		#if 0
		if (Adapter->registrypriv.software_encrypt == _FALSE) {
			if (Adapter->registrypriv.software_decrypt == _FALSE)
				encry_mode = HW_CONTROL;
			else
				encry_mode = HW_ENCRY_SW_DECRY;
		}
		else {
			if (Adapter->registrypriv.software_decrypt == _FALSE)
				encry_mode = SW_ENCRY_HW_DECRY;
			else
				encry_mode = SW_CONTROL;
		}
		#else

		if ((psecuritypriv->sw_encrypt == _FALSE) && (psecuritypriv->sw_decrypt == _FALSE))
			encry_mode = HW_CONTROL;
		else if ((psecuritypriv->sw_encrypt == _FALSE) && (psecuritypriv->sw_decrypt == _TRUE))
			encry_mode = HW_ENCRY_SW_DECRY;
		else if ((psecuritypriv->sw_encrypt == _TRUE) && (psecuritypriv->sw_decrypt == _FALSE))
			encry_mode = SW_ENCRY_HW_DECRY;
		else if ((psecuritypriv->sw_encrypt == _TRUE) && (psecuritypriv->sw_decrypt == _TRUE))
			encry_mode = SW_CONTROL;

		#endif

		*(u8*)poid_par_priv->information_buf =  encry_mode;
		*poid_par_priv->bytes_rw = poid_par_priv->information_buf_len;

		RT_TRACE(_module_mp_, _drv_notice_,
			 ("-oid_rt_pro_encryption_ctrl_hdl: QUERY encry_mode=0x%x\n",
			  encry_mode));
	}

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
          int benchRet = oid_rt_pro_encryption_ctrl_hdl(poid_par_priv);
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
          int benchRet = oid_rt_pro_encryption_ctrl_hdl(poid_par_priv);
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
