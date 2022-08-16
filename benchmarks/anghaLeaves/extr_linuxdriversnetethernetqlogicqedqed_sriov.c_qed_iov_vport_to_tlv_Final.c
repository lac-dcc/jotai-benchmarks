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
typedef  int /*<<< orphan*/  u16 ;
struct qed_hwfn {int dummy; } ;
typedef  enum qed_iov_vport_update_flag { ____Placeholder_qed_iov_vport_update_flag } qed_iov_vport_update_flag ;

/* Variables and functions */
 int /*<<< orphan*/  CHANNEL_TLV_VPORT_UPDATE_ACCEPT_ANY_VLAN ; 
 int /*<<< orphan*/  CHANNEL_TLV_VPORT_UPDATE_ACCEPT_PARAM ; 
 int /*<<< orphan*/  CHANNEL_TLV_VPORT_UPDATE_ACTIVATE ; 
 int /*<<< orphan*/  CHANNEL_TLV_VPORT_UPDATE_MCAST ; 
 int /*<<< orphan*/  CHANNEL_TLV_VPORT_UPDATE_RSS ; 
 int /*<<< orphan*/  CHANNEL_TLV_VPORT_UPDATE_SGE_TPA ; 
 int /*<<< orphan*/  CHANNEL_TLV_VPORT_UPDATE_TX_SWITCH ; 
 int /*<<< orphan*/  CHANNEL_TLV_VPORT_UPDATE_VLAN_STRIP ; 
#define  QED_IOV_VP_UPDATE_ACCEPT_ANY_VLAN 135 
#define  QED_IOV_VP_UPDATE_ACCEPT_PARAM 134 
#define  QED_IOV_VP_UPDATE_ACTIVATE 133 
#define  QED_IOV_VP_UPDATE_MCAST 132 
#define  QED_IOV_VP_UPDATE_RSS 131 
#define  QED_IOV_VP_UPDATE_SGE_TPA 130 
#define  QED_IOV_VP_UPDATE_TX_SWITCH 129 
#define  QED_IOV_VP_UPDATE_VLAN_STRIP 128 

__attribute__((used)) static u16 qed_iov_vport_to_tlv(struct qed_hwfn *p_hwfn,
				enum qed_iov_vport_update_flag flag)
{
	switch (flag) {
	case QED_IOV_VP_UPDATE_ACTIVATE:
		return CHANNEL_TLV_VPORT_UPDATE_ACTIVATE;
	case QED_IOV_VP_UPDATE_VLAN_STRIP:
		return CHANNEL_TLV_VPORT_UPDATE_VLAN_STRIP;
	case QED_IOV_VP_UPDATE_TX_SWITCH:
		return CHANNEL_TLV_VPORT_UPDATE_TX_SWITCH;
	case QED_IOV_VP_UPDATE_MCAST:
		return CHANNEL_TLV_VPORT_UPDATE_MCAST;
	case QED_IOV_VP_UPDATE_ACCEPT_PARAM:
		return CHANNEL_TLV_VPORT_UPDATE_ACCEPT_PARAM;
	case QED_IOV_VP_UPDATE_RSS:
		return CHANNEL_TLV_VPORT_UPDATE_RSS;
	case QED_IOV_VP_UPDATE_ACCEPT_ANY_VLAN:
		return CHANNEL_TLV_VPORT_UPDATE_ACCEPT_ANY_VLAN;
	case QED_IOV_VP_UPDATE_SGE_TPA:
		return CHANNEL_TLV_VPORT_UPDATE_SGE_TPA;
	default:
		return 0;
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
          enum qed_iov_vport_update_flag flag = 0;
          int _len_p_hwfn0 = 1;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
            p_hwfn[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qed_iov_vport_to_tlv(p_hwfn,flag);
          printf("%d\n", benchRet); 
          free(p_hwfn);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum qed_iov_vport_update_flag flag = 0;
          int _len_p_hwfn0 = 100;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
            p_hwfn[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qed_iov_vport_to_tlv(p_hwfn,flag);
          printf("%d\n", benchRet); 
          free(p_hwfn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
