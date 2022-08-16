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
typedef  int /*<<< orphan*/  u8 ;
typedef  int /*<<< orphan*/  _adapter ;

/* Variables and functions */
 int /*<<< orphan*/  _TRUE ; 

u8 rtw_access_ctrl(_adapter *padapter, u8 *mac_addr)
{
	u8 res = _TRUE;
#ifdef  CONFIG_AP_MODE
	_irqL irqL;
	_list	*plist, *phead;
	struct rtw_wlan_acl_node *paclnode;
	u8 match = _FALSE;
	struct sta_priv *pstapriv = &padapter->stapriv;
	struct wlan_acl_pool *pacl_list = &pstapriv->acl_list;
	_queue	*pacl_node_q =&pacl_list->acl_node_q;
	
	_enter_critical_bh(&(pacl_node_q->lock), &irqL);
	phead = get_list_head(pacl_node_q);
	plist = get_next(phead);		
	while ((rtw_end_of_queue_search(phead, plist)) == _FALSE)
	{
		paclnode = LIST_CONTAINOR(plist, struct rtw_wlan_acl_node, list);
		plist = get_next(plist);

		if(_rtw_memcmp(paclnode->addr, mac_addr, ETH_ALEN))
		{
			if(paclnode->valid == _TRUE)
			{
				match = _TRUE;
				break;
			}
		}		
	}	
	_exit_critical_bh(&(pacl_node_q->lock), &irqL);
	

	if(pacl_list->mode == 1)//accept unless in deny list
	{
		res = (match == _TRUE) ?  _FALSE:_TRUE;
	}	
	else if(pacl_list->mode == 2)//deny unless in accept list
	{
		res = (match == _TRUE) ?  _TRUE:_FALSE;
	}
	else
	{
		 res = _TRUE;
	}		
	
#endif

	return res;

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
          int * padapter = (int *) malloc(_len_padapter0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
            padapter[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mac_addr0 = 1;
          int * mac_addr = (int *) malloc(_len_mac_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mac_addr0; _i0++) {
            mac_addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rtw_access_ctrl(padapter,mac_addr);
          printf("%d\n", benchRet); 
          free(padapter);
          free(mac_addr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
