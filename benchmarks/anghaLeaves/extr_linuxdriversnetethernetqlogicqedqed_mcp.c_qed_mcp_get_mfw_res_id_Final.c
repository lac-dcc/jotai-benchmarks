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
typedef  enum resource_id_enum { ____Placeholder_resource_id_enum } resource_id_enum ;
typedef  enum qed_resources { ____Placeholder_qed_resources } qed_resources ;

/* Variables and functions */
#define  QED_BDQ 141 
#define  QED_CMDQS_CQS 140 
#define  QED_ILT 139 
#define  QED_L2_QUEUE 138 
#define  QED_LL2_QUEUE 137 
#define  QED_MAC 136 
#define  QED_PQ 135 
#define  QED_RDMA_CNQ_RAM 134 
#define  QED_RDMA_STATS_QUEUE 133 
#define  QED_RL 132 
#define  QED_RSS_ENG 131 
#define  QED_SB 130 
#define  QED_VLAN 129 
#define  QED_VPORT 128 
 int RESOURCE_BDQ_E ; 
 int RESOURCE_CQS_E ; 
 int RESOURCE_ILT_E ; 
 int RESOURCE_LL2_QUEUE_E ; 
 int RESOURCE_NUM_INVALID ; 
 int RESOURCE_NUM_L2_QUEUE_E ; 
 int RESOURCE_NUM_PQ_E ; 
 int RESOURCE_NUM_RL_E ; 
 int RESOURCE_NUM_RSS_ENGINES_E ; 
 int RESOURCE_NUM_SB_E ; 
 int RESOURCE_NUM_VPORT_E ; 
 int RESOURCE_RDMA_STATS_QUEUE_E ; 
 int RESOURCE_VFC_FILTER_E ; 

__attribute__((used)) static enum resource_id_enum qed_mcp_get_mfw_res_id(enum qed_resources res_id)
{
	enum resource_id_enum mfw_res_id = RESOURCE_NUM_INVALID;

	switch (res_id) {
	case QED_SB:
		mfw_res_id = RESOURCE_NUM_SB_E;
		break;
	case QED_L2_QUEUE:
		mfw_res_id = RESOURCE_NUM_L2_QUEUE_E;
		break;
	case QED_VPORT:
		mfw_res_id = RESOURCE_NUM_VPORT_E;
		break;
	case QED_RSS_ENG:
		mfw_res_id = RESOURCE_NUM_RSS_ENGINES_E;
		break;
	case QED_PQ:
		mfw_res_id = RESOURCE_NUM_PQ_E;
		break;
	case QED_RL:
		mfw_res_id = RESOURCE_NUM_RL_E;
		break;
	case QED_MAC:
	case QED_VLAN:
		/* Each VFC resource can accommodate both a MAC and a VLAN */
		mfw_res_id = RESOURCE_VFC_FILTER_E;
		break;
	case QED_ILT:
		mfw_res_id = RESOURCE_ILT_E;
		break;
	case QED_LL2_QUEUE:
		mfw_res_id = RESOURCE_LL2_QUEUE_E;
		break;
	case QED_RDMA_CNQ_RAM:
	case QED_CMDQS_CQS:
		/* CNQ/CMDQS are the same resource */
		mfw_res_id = RESOURCE_CQS_E;
		break;
	case QED_RDMA_STATS_QUEUE:
		mfw_res_id = RESOURCE_RDMA_STATS_QUEUE_E;
		break;
	case QED_BDQ:
		mfw_res_id = RESOURCE_BDQ_E;
		break;
	default:
		break;
	}

	return mfw_res_id;
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
          enum qed_resources res_id = 0;
          enum resource_id_enum benchRet = qed_mcp_get_mfw_res_id(res_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
