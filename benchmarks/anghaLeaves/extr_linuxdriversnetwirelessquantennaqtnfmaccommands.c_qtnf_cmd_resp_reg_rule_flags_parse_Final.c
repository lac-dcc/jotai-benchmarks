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
typedef  int u32 ;

/* Variables and functions */
 int NL80211_RRF_AUTO_BW ; 
 int NL80211_RRF_DFS ; 
 int NL80211_RRF_IR_CONCURRENT ; 
 int NL80211_RRF_NO_160MHZ ; 
 int NL80211_RRF_NO_80MHZ ; 
 int NL80211_RRF_NO_CCK ; 
 int NL80211_RRF_NO_HT40MINUS ; 
 int NL80211_RRF_NO_HT40PLUS ; 
 int NL80211_RRF_NO_INDOOR ; 
 int NL80211_RRF_NO_IR ; 
 int NL80211_RRF_NO_OFDM ; 
 int NL80211_RRF_NO_OUTDOOR ; 
 int NL80211_RRF_PTMP_ONLY ; 
 int NL80211_RRF_PTP_ONLY ; 
 int QLINK_RRF_AUTO_BW ; 
 int QLINK_RRF_DFS ; 
 int QLINK_RRF_IR_CONCURRENT ; 
 int QLINK_RRF_NO_160MHZ ; 
 int QLINK_RRF_NO_80MHZ ; 
 int QLINK_RRF_NO_CCK ; 
 int QLINK_RRF_NO_HT40MINUS ; 
 int QLINK_RRF_NO_HT40PLUS ; 
 int QLINK_RRF_NO_INDOOR ; 
 int QLINK_RRF_NO_IR ; 
 int QLINK_RRF_NO_OFDM ; 
 int QLINK_RRF_NO_OUTDOOR ; 
 int QLINK_RRF_PTMP_ONLY ; 
 int QLINK_RRF_PTP_ONLY ; 

__attribute__((used)) static u32 qtnf_cmd_resp_reg_rule_flags_parse(u32 qflags)
{
	u32 flags = 0;

	if (qflags & QLINK_RRF_NO_OFDM)
		flags |= NL80211_RRF_NO_OFDM;

	if (qflags & QLINK_RRF_NO_CCK)
		flags |= NL80211_RRF_NO_CCK;

	if (qflags & QLINK_RRF_NO_INDOOR)
		flags |= NL80211_RRF_NO_INDOOR;

	if (qflags & QLINK_RRF_NO_OUTDOOR)
		flags |= NL80211_RRF_NO_OUTDOOR;

	if (qflags & QLINK_RRF_DFS)
		flags |= NL80211_RRF_DFS;

	if (qflags & QLINK_RRF_PTP_ONLY)
		flags |= NL80211_RRF_PTP_ONLY;

	if (qflags & QLINK_RRF_PTMP_ONLY)
		flags |= NL80211_RRF_PTMP_ONLY;

	if (qflags & QLINK_RRF_NO_IR)
		flags |= NL80211_RRF_NO_IR;

	if (qflags & QLINK_RRF_AUTO_BW)
		flags |= NL80211_RRF_AUTO_BW;

	if (qflags & QLINK_RRF_IR_CONCURRENT)
		flags |= NL80211_RRF_IR_CONCURRENT;

	if (qflags & QLINK_RRF_NO_HT40MINUS)
		flags |= NL80211_RRF_NO_HT40MINUS;

	if (qflags & QLINK_RRF_NO_HT40PLUS)
		flags |= NL80211_RRF_NO_HT40PLUS;

	if (qflags & QLINK_RRF_NO_80MHZ)
		flags |= NL80211_RRF_NO_80MHZ;

	if (qflags & QLINK_RRF_NO_160MHZ)
		flags |= NL80211_RRF_NO_160MHZ;

	return flags;
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
          int qflags = 100;
          int benchRet = qtnf_cmd_resp_reg_rule_flags_parse(qflags);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int qflags = 255;
          int benchRet = qtnf_cmd_resp_reg_rule_flags_parse(qflags);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int qflags = 10;
          int benchRet = qtnf_cmd_resp_reg_rule_flags_parse(qflags);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
