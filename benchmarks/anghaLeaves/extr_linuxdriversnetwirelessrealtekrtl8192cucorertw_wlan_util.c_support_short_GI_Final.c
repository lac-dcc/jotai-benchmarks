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
struct mlme_ext_info {scalar_t__ assoc_AP_vendor; int /*<<< orphan*/  HT_enable; } ;
struct mlme_ext_priv {int cur_bwmode; struct mlme_ext_info mlmext_info; } ;
struct TYPE_5__ {int HT_caps_info; } ;
struct TYPE_6__ {TYPE_1__ HT_cap_element; } ;
struct HT_caps_element {TYPE_2__ u; } ;
struct TYPE_7__ {struct mlme_ext_priv mlmeextpriv; } ;
typedef  TYPE_3__ _adapter ;

/* Variables and functions */
 int HT_CHANNEL_WIDTH_40 ; 
 int _FAIL ; 
 int _SUCCESS ; 
 scalar_t__ ralinkAP ; 

int support_short_GI(_adapter *padapter, struct HT_caps_element *pHT_caps)
{
	unsigned char					bit_offset;
	struct mlme_ext_priv	*pmlmeext = &padapter->mlmeextpriv;
	struct mlme_ext_info	*pmlmeinfo = &(pmlmeext->mlmext_info);
	
	if (!(pmlmeinfo->HT_enable))
		return _FAIL;
	
	if ((pmlmeinfo->assoc_AP_vendor == ralinkAP))
		return _FAIL;
		
	bit_offset = (pmlmeext->cur_bwmode & HT_CHANNEL_WIDTH_40)? 6: 5;
	
	if (pHT_caps->u.HT_cap_element.HT_caps_info & (0x1 << bit_offset))
	{
		return _SUCCESS;
	}
	else
	{
		return _FAIL;
	}		
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
          struct TYPE_7__ * padapter = (struct TYPE_7__ *) malloc(_len_padapter0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
            padapter[_i0].mlmeextpriv.cur_bwmode = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].mlmeextpriv.mlmext_info.assoc_AP_vendor = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].mlmeextpriv.mlmext_info.HT_enable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHT_caps0 = 1;
          struct HT_caps_element * pHT_caps = (struct HT_caps_element *) malloc(_len_pHT_caps0*sizeof(struct HT_caps_element));
          for(int _i0 = 0; _i0 < _len_pHT_caps0; _i0++) {
            pHT_caps[_i0].u.HT_cap_element.HT_caps_info = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = support_short_GI(padapter,pHT_caps);
          printf("%d\n", benchRet); 
          free(padapter);
          free(pHT_caps);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
