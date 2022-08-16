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
typedef  scalar_t__ u32 ;
struct pkt_attrib {int nr_frags; scalar_t__ last_txcmdsz; int ampdu_en; void* vcs_mode; scalar_t__ ht_en; scalar_t__ cts2self; scalar_t__ rtsen; } ;
struct xmit_frame {struct pkt_attrib attrib; } ;
struct mlme_ext_info {scalar_t__ assoc_AP_vendor; int HT_protection; } ;
struct mlme_ext_priv {scalar_t__ cur_wireless_mode; scalar_t__ cur_bwmode; struct mlme_ext_info mlmext_info; } ;
struct TYPE_6__ {scalar_t__ rts_thresh; scalar_t__ wifi_spec; } ;
struct TYPE_5__ {scalar_t__ dot11PrivacyAlgrthm; } ;
struct TYPE_4__ {scalar_t__ frag_len; } ;
struct adapter {int driver_vcs_en; void* driver_vcs_type; TYPE_3__ registrypriv; TYPE_2__ securitypriv; TYPE_1__ xmitpriv; struct mlme_ext_priv mlmeextpriv; } ;

/* Variables and functions */
 void* CTS_TO_SELF ; 
 scalar_t__ HT_IOT_PEER_ATHEROS ; 
 void* NONE_VCS ; 
 void* RTS_CTS ; 
 scalar_t__ WIRELESS_11_24N ; 
 scalar_t__ _AES_ ; 

__attribute__((used)) static void update_attrib_vcs_info(struct adapter *padapter, struct xmit_frame *pxmitframe)
{
	u32 sz;
	struct pkt_attrib	*pattrib = &pxmitframe->attrib;
	/* struct sta_info *psta = pattrib->psta; */
	struct mlme_ext_priv *pmlmeext = &(padapter->mlmeextpriv);
	struct mlme_ext_info *pmlmeinfo = &(pmlmeext->mlmext_info);

	if (pattrib->nr_frags != 1)
		sz = padapter->xmitpriv.frag_len;
	else /* no frag */
		sz = pattrib->last_txcmdsz;

	/*  (1) RTS_Threshold is compared to the MPDU, not MSDU. */
	/*  (2) If there are more than one frag in  this MSDU, only the first frag uses protection frame. */
	/* 		Other fragments are protected by previous fragment. */
	/* 		So we only need to check the length of first fragment. */
	if (pmlmeext->cur_wireless_mode < WIRELESS_11_24N  || padapter->registrypriv.wifi_spec) {
		if (sz > padapter->registrypriv.rts_thresh)
			pattrib->vcs_mode = RTS_CTS;
		else{
			if (pattrib->rtsen)
				pattrib->vcs_mode = RTS_CTS;
			else if (pattrib->cts2self)
				pattrib->vcs_mode = CTS_TO_SELF;
			else
				pattrib->vcs_mode = NONE_VCS;
		}
	} else{
		while (true) {
			/* IOT action */
			if ((pmlmeinfo->assoc_AP_vendor == HT_IOT_PEER_ATHEROS) && (pattrib->ampdu_en == true) &&
				(padapter->securitypriv.dot11PrivacyAlgrthm == _AES_)) {
				pattrib->vcs_mode = CTS_TO_SELF;
				break;
			}


			/* check ERP protection */
			if (pattrib->rtsen || pattrib->cts2self) {
				if (pattrib->rtsen)
					pattrib->vcs_mode = RTS_CTS;
				else if (pattrib->cts2self)
					pattrib->vcs_mode = CTS_TO_SELF;

				break;
			}

			/* check HT op mode */
			if (pattrib->ht_en) {
				u8 HTOpMode = pmlmeinfo->HT_protection;
				if ((pmlmeext->cur_bwmode && (HTOpMode == 2 || HTOpMode == 3)) ||
					(!pmlmeext->cur_bwmode && HTOpMode == 3)) {
					pattrib->vcs_mode = RTS_CTS;
					break;
				}
			}

			/* check rts */
			if (sz > padapter->registrypriv.rts_thresh) {
				pattrib->vcs_mode = RTS_CTS;
				break;
			}

			/* to do list: check MIMO power save condition. */

			/* check AMPDU aggregation for TXOP */
			if (pattrib->ampdu_en == true) {
				pattrib->vcs_mode = RTS_CTS;
				break;
			}

			pattrib->vcs_mode = NONE_VCS;
			break;
		}
	}

	/* for debug : force driver control vrtl_carrier_sense. */
	if (padapter->driver_vcs_en == 1)
		pattrib->vcs_mode = padapter->driver_vcs_type;
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
          int _len_padapter0 = 1;
          struct adapter * padapter = (struct adapter *) malloc(_len_padapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
            padapter[_i0].driver_vcs_en = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].registrypriv.rts_thresh = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].registrypriv.wifi_spec = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].securitypriv.dot11PrivacyAlgrthm = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].xmitpriv.frag_len = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].mlmeextpriv.cur_wireless_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].mlmeextpriv.cur_bwmode = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].mlmeextpriv.mlmext_info.assoc_AP_vendor = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].mlmeextpriv.mlmext_info.HT_protection = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pxmitframe0 = 1;
          struct xmit_frame * pxmitframe = (struct xmit_frame *) malloc(_len_pxmitframe0*sizeof(struct xmit_frame));
          for(int _i0 = 0; _i0 < _len_pxmitframe0; _i0++) {
            pxmitframe[_i0].attrib.nr_frags = ((-2 * (next_i()%2)) + 1) * next_i();
        pxmitframe[_i0].attrib.last_txcmdsz = ((-2 * (next_i()%2)) + 1) * next_i();
        pxmitframe[_i0].attrib.ampdu_en = ((-2 * (next_i()%2)) + 1) * next_i();
        pxmitframe[_i0].attrib.ht_en = ((-2 * (next_i()%2)) + 1) * next_i();
        pxmitframe[_i0].attrib.cts2self = ((-2 * (next_i()%2)) + 1) * next_i();
        pxmitframe[_i0].attrib.rtsen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_attrib_vcs_info(padapter,pxmitframe);
          free(padapter);
          free(pxmitframe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
