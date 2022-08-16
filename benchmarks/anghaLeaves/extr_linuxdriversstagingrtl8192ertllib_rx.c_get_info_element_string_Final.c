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
typedef  int u16 ;

/* Variables and functions */
#define  MFIE_TYPE_CF_SET 153 
#define  MFIE_TYPE_CHALLENGE 152 
#define  MFIE_TYPE_COUNTRY 151 
#define  MFIE_TYPE_CSA 150 
#define  MFIE_TYPE_DS_SET 149 
#define  MFIE_TYPE_FH_SET 148 
#define  MFIE_TYPE_GENERIC 147 
#define  MFIE_TYPE_HOP_PARAMS 146 
#define  MFIE_TYPE_HOP_TABLE 145 
#define  MFIE_TYPE_IBSS_DFS 144 
#define  MFIE_TYPE_IBSS_SET 143 
#define  MFIE_TYPE_MEASURE_REPORT 142 
#define  MFIE_TYPE_MEASURE_REQUEST 141 
#define  MFIE_TYPE_POWER_CAPABILITY 140 
#define  MFIE_TYPE_POWER_CONSTRAINT 139 
#define  MFIE_TYPE_QOS_PARAMETER 138 
#define  MFIE_TYPE_QUIET 137 
#define  MFIE_TYPE_RATES 136 
#define  MFIE_TYPE_RATES_EX 135 
#define  MFIE_TYPE_REQUEST 134 
#define  MFIE_TYPE_RSN 133 
#define  MFIE_TYPE_SSID 132 
#define  MFIE_TYPE_SUPP_CHANNELS 131 
#define  MFIE_TYPE_TIM 130 
#define  MFIE_TYPE_TPC_REPORT 129 
#define  MFIE_TYPE_TPC_REQUEST 128 

__attribute__((used)) static const char *get_info_element_string(u16 id)
{
	switch (id) {
	case MFIE_TYPE_SSID:
		return "SSID";
	case MFIE_TYPE_RATES:
		return "RATES";
	case MFIE_TYPE_FH_SET:
		return "FH_SET";
	case MFIE_TYPE_DS_SET:
		return "DS_SET";
	case MFIE_TYPE_CF_SET:
		return "CF_SET";
	case MFIE_TYPE_TIM:
		return "TIM";
	case MFIE_TYPE_IBSS_SET:
		return "IBSS_SET";
	case MFIE_TYPE_COUNTRY:
		return "COUNTRY";
	case MFIE_TYPE_HOP_PARAMS:
		return "HOP_PARAMS";
	case MFIE_TYPE_HOP_TABLE:
		return "HOP_TABLE";
	case MFIE_TYPE_REQUEST:
		return "REQUEST";
	case MFIE_TYPE_CHALLENGE:
		return "CHALLENGE";
	case MFIE_TYPE_POWER_CONSTRAINT:
		return "POWER_CONSTRAINT";
	case MFIE_TYPE_POWER_CAPABILITY:
		return "POWER_CAPABILITY";
	case MFIE_TYPE_TPC_REQUEST:
		return "TPC_REQUEST";
	case MFIE_TYPE_TPC_REPORT:
		return "TPC_REPORT";
	case MFIE_TYPE_SUPP_CHANNELS:
		return "SUPP_CHANNELS";
	case MFIE_TYPE_CSA:
		return "CSA";
	case MFIE_TYPE_MEASURE_REQUEST:
		return "MEASURE_REQUEST";
	case MFIE_TYPE_MEASURE_REPORT:
		return "MEASURE_REPORT";
	case MFIE_TYPE_QUIET:
		return "QUIET";
	case MFIE_TYPE_IBSS_DFS:
		return "IBSS_DFS";
	case MFIE_TYPE_RSN:
		return "RSN";
	case MFIE_TYPE_RATES_EX:
		return "RATES_EX";
	case MFIE_TYPE_GENERIC:
		return "GENERIC";
	case MFIE_TYPE_QOS_PARAMETER:
		return "QOS_PARAMETER";
	default:
		return "UNKNOWN";
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
          int id = 100;
          const char * benchRet = get_info_element_string(id);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int id = 255;
          const char * benchRet = get_info_element_string(id);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int id = 10;
          const char * benchRet = get_info_element_string(id);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
