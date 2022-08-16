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
typedef  int /*<<< orphan*/  u8 ;
typedef  int /*<<< orphan*/  PADAPTER ;

/* Variables and functions */

__attribute__((used)) static void hw_var_set_mlme_disconnect(PADAPTER Adapter, u8 variable, u8* val)
{
#ifdef CONFIG_CONCURRENT_MODE
	HAL_DATA_TYPE	*pHalData = GET_HAL_DATA(Adapter);
	PADAPTER pbuddy_adapter = Adapter->pbuddy_adapter;

				
	if(check_buddy_mlmeinfo_state(Adapter, _HW_STATE_NOLINK_))	
		rtw_write16(Adapter, REG_RXFLTMAP2, 0x00);
	

	if(Adapter->iface_type == IFACE_PORT1)
	{
		int i;
		u8 reg_bcn_ctrl_1;

	   	// a.Driver set 0x422 bit 6 =0
		rtw_write8(Adapter, REG_FWHW_TXQ_CTRL+2, (pHalData->RegFwHwTxQCtrl) & (~BIT6));
		pHalData->RegFwHwTxQCtrl &= (~BIT6);


#ifdef CONFIG_BEACON_DISABLE_OFFLOAD
		u8 reg_bcn_disable_cnt = rtw_read8(Adapter, REG_FW_BCN_DIS_CNT);
		DBG_871X("%s()-%d: reg_bcn_disable_cnt=%02x\n", __FUNCTION__, __LINE__, reg_bcn_disable_cnt);
	   	
		reg_bcn_ctrl_1 = rtw_read8(Adapter, REG_BCN_CTRL_1); 
		DBG_871X("%s()-%d: reg_bcn_ctrl_1=%02x\n", __FUNCTION__, __LINE__, reg_bcn_ctrl_1);

	   	// b. driver set h2c cmd
	   	rtl8192c_dis_beacon_fun_cmd(Adapter);	   
	 
		/*
			// FW Job for port 0
			
		   c. 8051 set nettype to ap
		   d. 8051 check dma_int
		   e. 8051 set nettype to no_link
		   f.8051 dis_tsf_update   0x550 bit 4
		   g.8051 reset  beacon function test count   0x553 bit0.
		   h.8051 disable beacon function   0x550  bit3
		   i. 8051 sent ready to driver

	 	*/
	 	
	 	// The worst case is 100 + 15 ms
		rtw_msleep_os(120);
		
		for (i=0; i< 10; i++) {
			reg_bcn_ctrl_1 = rtw_read8(Adapter, REG_BCN_CTRL_1); 
			if ( (reg_bcn_ctrl_1 & BIT(3)) == 0 ) {
				//DBG_871X("%s()-%d: BEACON_DISABLE_OFFLOAD finished! reg=%02x\n", __FUNCTION__, __LINE__, reg);
				break;
			}
			DBG_871X("%s()-%d: BEACON_DISABLE_OFFLOAD not finished! REG_BCN_CTRL_1=%02x\n", __FUNCTION__, __LINE__, reg_bcn_ctrl_1);
			DBG_871X("%s()-%d: reg_bcn_disable_cnt=%02x\n", __FUNCTION__, __LINE__, rtw_read8(Adapter, REG_FW_BCN_DIS_CNT));
			DBG_871X("%s()-%d: REG_BCN_CTRL=%02x\n", __FUNCTION__, __LINE__, rtw_read8(Adapter, REG_BCN_CTRL));
			DBG_871X("%s()-%d: FWISR=%08x\n", __FUNCTION__, __LINE__, rtw_read32(Adapter, REG_FWISR));
			rtw_msleep_os(100);
		}
		DBG_871X("%s()-%d: reg_bcn_disable_cnt=%02x\n", __FUNCTION__, __LINE__, rtw_read8(Adapter, REG_FW_BCN_DIS_CNT));
		DBG_871X("%s()-%d: reg_bcn_ctrl_1=%02x\n", __FUNCTION__, __LINE__, reg_bcn_ctrl_1);

#else   // CONFIG_BEACON_DISABLE_OFFLOAD

		//disable update TSF1
		rtw_write8(Adapter, REG_BCN_CTRL_1, rtw_read8(Adapter, REG_BCN_CTRL_1)|BIT(4));

		//reset TSF1
		rtw_write8(Adapter, REG_DUAL_TSF_RST, BIT(1));

		// disable Port1's beacon function
		rtw_write8(Adapter, REG_BCN_CTRL_1, rtw_read8(Adapter, REG_BCN_CTRL_1)&(~BIT(3)));

#endif  // CONFIG_BEACON_DISABLE_OFFLOAD
	 	
		// j, Driver set 0x422 bit 6 =1
		rtw_write8(Adapter, REG_FWHW_TXQ_CTRL+2, (pHalData->RegFwHwTxQCtrl) | BIT6);
		pHalData->RegFwHwTxQCtrl |= BIT6;

		// k. re_download beacon pkt 
		if(check_buddy_mlmeinfo_state(Adapter, WIFI_FW_AP_STATE))	
			set_tx_beacon_cmd(pbuddy_adapter);
		   

	}
	else	// (Adapter->iface_type == IFACE_PORT1)
	{
		//disable update TSF
		rtw_write8(Adapter, REG_BCN_CTRL, rtw_read8(Adapter, REG_BCN_CTRL)|BIT(4));

		//reset TSF
		rtw_write8(Adapter, REG_DUAL_TSF_RST, BIT(0));

		// Can't disable Port0's beacon function due to it is used by RA
	}
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
          int Adapter = 100;
          int variable = 100;
          int _len_val0 = 1;
          int * val = (int *) malloc(_len_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hw_var_set_mlme_disconnect(Adapter,variable,val);
          free(val);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int Adapter = 10;
          int variable = 10;
          int _len_val0 = 100;
          int * val = (int *) malloc(_len_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hw_var_set_mlme_disconnect(Adapter,variable,val);
          free(val);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
