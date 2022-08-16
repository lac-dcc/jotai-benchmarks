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
typedef  enum ath10k_htc_svc_id { ____Placeholder_ath10k_htc_svc_id } ath10k_htc_svc_id ;

/* Variables and functions */
#define  ATH10K_HTC_SVC_ID_HTT_DATA2_MSG 141 
#define  ATH10K_HTC_SVC_ID_HTT_DATA3_MSG 140 
#define  ATH10K_HTC_SVC_ID_HTT_DATA_MSG 139 
#define  ATH10K_HTC_SVC_ID_HTT_LOG_MSG 138 
#define  ATH10K_HTC_SVC_ID_NMI_CONTROL 137 
#define  ATH10K_HTC_SVC_ID_NMI_DATA 136 
#define  ATH10K_HTC_SVC_ID_RESERVED 135 
#define  ATH10K_HTC_SVC_ID_RSVD_CTRL 134 
#define  ATH10K_HTC_SVC_ID_TEST_RAW_STREAMS 133 
#define  ATH10K_HTC_SVC_ID_WMI_CONTROL 132 
#define  ATH10K_HTC_SVC_ID_WMI_DATA_BE 131 
#define  ATH10K_HTC_SVC_ID_WMI_DATA_BK 130 
#define  ATH10K_HTC_SVC_ID_WMI_DATA_VI 129 
#define  ATH10K_HTC_SVC_ID_WMI_DATA_VO 128 

__attribute__((used)) static const char *htc_service_name(enum ath10k_htc_svc_id id)
{
	switch (id) {
	case ATH10K_HTC_SVC_ID_RESERVED:
		return "Reserved";
	case ATH10K_HTC_SVC_ID_RSVD_CTRL:
		return "Control";
	case ATH10K_HTC_SVC_ID_WMI_CONTROL:
		return "WMI";
	case ATH10K_HTC_SVC_ID_WMI_DATA_BE:
		return "DATA BE";
	case ATH10K_HTC_SVC_ID_WMI_DATA_BK:
		return "DATA BK";
	case ATH10K_HTC_SVC_ID_WMI_DATA_VI:
		return "DATA VI";
	case ATH10K_HTC_SVC_ID_WMI_DATA_VO:
		return "DATA VO";
	case ATH10K_HTC_SVC_ID_NMI_CONTROL:
		return "NMI Control";
	case ATH10K_HTC_SVC_ID_NMI_DATA:
		return "NMI Data";
	case ATH10K_HTC_SVC_ID_HTT_DATA_MSG:
		return "HTT Data";
	case ATH10K_HTC_SVC_ID_HTT_DATA2_MSG:
		return "HTT Data";
	case ATH10K_HTC_SVC_ID_HTT_DATA3_MSG:
		return "HTT Data";
	case ATH10K_HTC_SVC_ID_TEST_RAW_STREAMS:
		return "RAW";
	case ATH10K_HTC_SVC_ID_HTT_LOG_MSG:
		return "PKTLOG";
	}

	return "Unknown";
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
          enum ath10k_htc_svc_id id = 0;
          const char * benchRet = htc_service_name(id);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
