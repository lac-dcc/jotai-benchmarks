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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct qlcnic_adapter {int /*<<< orphan*/  max_rds_rings; int /*<<< orphan*/  num_txd; int /*<<< orphan*/  max_jumbo_rxd; int /*<<< orphan*/  num_jumbo_rxd; int /*<<< orphan*/  max_rxd; int /*<<< orphan*/  num_rxd; } ;

/* Variables and functions */
 int /*<<< orphan*/  MAX_CMD_DESCRIPTORS ; 
 int /*<<< orphan*/  MAX_JUMBO_RCV_DESCRIPTORS_10G ; 
 int /*<<< orphan*/  MAX_RCV_DESCRIPTORS_10G ; 
 int /*<<< orphan*/  MAX_RDS_RINGS ; 
 int /*<<< orphan*/  QLC_DEFAULT_JUMBO_RCV_DESCRIPTORS_SRIOV_VF ; 
 int /*<<< orphan*/  QLC_DEFAULT_RCV_DESCRIPTORS_SRIOV_VF ; 

__attribute__((used)) static void qlcnic_sriov_vf_cfg_buff_desc(struct qlcnic_adapter *adapter)
{
	adapter->num_rxd = QLC_DEFAULT_RCV_DESCRIPTORS_SRIOV_VF;
	adapter->max_rxd = MAX_RCV_DESCRIPTORS_10G;
	adapter->num_jumbo_rxd = QLC_DEFAULT_JUMBO_RCV_DESCRIPTORS_SRIOV_VF;
	adapter->max_jumbo_rxd = MAX_JUMBO_RCV_DESCRIPTORS_10G;
	adapter->num_txd = MAX_CMD_DESCRIPTORS;
	adapter->max_rds_rings = MAX_RDS_RINGS;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int _len_adapter0 = 65025;
          struct qlcnic_adapter * adapter = (struct qlcnic_adapter *) malloc(_len_adapter0*sizeof(struct qlcnic_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              adapter[_i0].max_rds_rings = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].num_txd = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].max_jumbo_rxd = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].num_jumbo_rxd = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].max_rxd = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].num_rxd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          qlcnic_sriov_vf_cfg_buff_desc(adapter);
          free(adapter);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int _len_adapter0 = 100;
          struct qlcnic_adapter * adapter = (struct qlcnic_adapter *) malloc(_len_adapter0*sizeof(struct qlcnic_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              adapter[_i0].max_rds_rings = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].num_txd = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].max_jumbo_rxd = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].num_jumbo_rxd = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].max_rxd = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].num_rxd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          qlcnic_sriov_vf_cfg_buff_desc(adapter);
          free(adapter);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int _len_adapter0 = 1;
          struct qlcnic_adapter * adapter = (struct qlcnic_adapter *) malloc(_len_adapter0*sizeof(struct qlcnic_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              adapter[_i0].max_rds_rings = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].num_txd = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].max_jumbo_rxd = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].num_jumbo_rxd = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].max_rxd = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].num_rxd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          qlcnic_sriov_vf_cfg_buff_desc(adapter);
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
