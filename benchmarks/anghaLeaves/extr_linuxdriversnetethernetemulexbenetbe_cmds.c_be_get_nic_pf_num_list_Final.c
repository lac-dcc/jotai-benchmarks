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
       0            empty\n\
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
typedef  int u32 ;
typedef  scalar_t__ u16 ;
struct be_res_desc_hdr {scalar_t__ desc_type; int desc_len; } ;
struct be_pcie_res_desc {scalar_t__ pf_type; scalar_t__ pf_num; scalar_t__ pf_state; } ;

/* Variables and functions */
 scalar_t__ MISSION_NIC ; 
 scalar_t__ MISSION_RDMA ; 
 scalar_t__ PCIE_RESOURCE_DESC_TYPE_V0 ; 
 scalar_t__ PCIE_RESOURCE_DESC_TYPE_V1 ; 
 int RESOURCE_DESC_SIZE_V0 ; 

__attribute__((used)) static u16 be_get_nic_pf_num_list(u8 *buf, u32 desc_count, u16 *nic_pf_nums)
{
	struct be_res_desc_hdr *hdr = (struct be_res_desc_hdr *)buf;
	struct be_pcie_res_desc *pcie = NULL;
	int i;
	u16 nic_pf_count = 0;

	for (i = 0; i < desc_count; i++) {
		if (hdr->desc_type == PCIE_RESOURCE_DESC_TYPE_V0 ||
		    hdr->desc_type == PCIE_RESOURCE_DESC_TYPE_V1) {
			pcie = (struct be_pcie_res_desc *)hdr;
			if (pcie->pf_state && (pcie->pf_type == MISSION_NIC ||
					       pcie->pf_type == MISSION_RDMA)) {
				nic_pf_nums[nic_pf_count++] = pcie->pf_num;
			}
		}

		hdr->desc_len = hdr->desc_len ? : RESOURCE_DESC_SIZE_V0;
		hdr = (void *)hdr + hdr->desc_len;
	}
	return nic_pf_count;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          int desc_count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_buf0 = 1;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_nic_pf_nums0 = 1;
          long * nic_pf_nums = (long *) malloc(_len_nic_pf_nums0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_nic_pf_nums0; _i0++) {
            nic_pf_nums[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          long benchRet = be_get_nic_pf_num_list(buf,desc_count,nic_pf_nums);
          printf("%ld\n", benchRet); 
          free(buf);
          free(nic_pf_nums);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
