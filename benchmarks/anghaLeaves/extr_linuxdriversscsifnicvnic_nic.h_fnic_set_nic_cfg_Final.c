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
typedef  int u8 ;
typedef  int u32 ;

/* Variables and functions */
 int NIC_CFG_IG_VLAN_STRIP_EN_MASK_FIELD ; 
 int NIC_CFG_IG_VLAN_STRIP_EN_SHIFT ; 
 int NIC_CFG_RSS_BASE_CPU_MASK_FIELD ; 
 int NIC_CFG_RSS_BASE_CPU_SHIFT ; 
 int NIC_CFG_RSS_DEFAULT_CPU_MASK_FIELD ; 
 int NIC_CFG_RSS_ENABLE_MASK_FIELD ; 
 int NIC_CFG_RSS_ENABLE_SHIFT ; 
 int NIC_CFG_RSS_HASH_BITS_MASK_FIELD ; 
 int NIC_CFG_RSS_HASH_BITS_SHIFT ; 
 int NIC_CFG_RSS_HASH_TYPE_MASK_FIELD ; 
 int NIC_CFG_RSS_HASH_TYPE_SHIFT ; 
 int NIC_CFG_TSO_IPID_SPLIT_EN_MASK_FIELD ; 
 int NIC_CFG_TSO_IPID_SPLIT_EN_SHIFT ; 

__attribute__((used)) static inline void vnic_set_nic_cfg(u32 *nic_cfg,
	u8 rss_default_cpu, u8 rss_hash_type,
	u8 rss_hash_bits, u8 rss_base_cpu,
	u8 rss_enable, u8 tso_ipid_split_en,
	u8 ig_vlan_strip_en)
{
	*nic_cfg = (rss_default_cpu & NIC_CFG_RSS_DEFAULT_CPU_MASK_FIELD) |
		((rss_hash_type & NIC_CFG_RSS_HASH_TYPE_MASK_FIELD)
			<< NIC_CFG_RSS_HASH_TYPE_SHIFT) |
		((rss_hash_bits & NIC_CFG_RSS_HASH_BITS_MASK_FIELD)
			<< NIC_CFG_RSS_HASH_BITS_SHIFT) |
		((rss_base_cpu & NIC_CFG_RSS_BASE_CPU_MASK_FIELD)
			<< NIC_CFG_RSS_BASE_CPU_SHIFT) |
		((rss_enable & NIC_CFG_RSS_ENABLE_MASK_FIELD)
			<< NIC_CFG_RSS_ENABLE_SHIFT) |
		((tso_ipid_split_en & NIC_CFG_TSO_IPID_SPLIT_EN_MASK_FIELD)
			<< NIC_CFG_TSO_IPID_SPLIT_EN_SHIFT) |
		((ig_vlan_strip_en & NIC_CFG_IG_VLAN_STRIP_EN_MASK_FIELD)
			<< NIC_CFG_IG_VLAN_STRIP_EN_SHIFT);
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
          int rss_default_cpu = 100;
          int rss_hash_type = 100;
          int rss_hash_bits = 100;
          int rss_base_cpu = 100;
          int rss_enable = 100;
          int tso_ipid_split_en = 100;
          int ig_vlan_strip_en = 100;
          int _len_nic_cfg0 = 1;
          int * nic_cfg = (int *) malloc(_len_nic_cfg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nic_cfg0; _i0++) {
            nic_cfg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vnic_set_nic_cfg(nic_cfg,rss_default_cpu,rss_hash_type,rss_hash_bits,rss_base_cpu,rss_enable,tso_ipid_split_en,ig_vlan_strip_en);
          free(nic_cfg);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int rss_default_cpu = 10;
          int rss_hash_type = 10;
          int rss_hash_bits = 10;
          int rss_base_cpu = 10;
          int rss_enable = 10;
          int tso_ipid_split_en = 10;
          int ig_vlan_strip_en = 10;
          int _len_nic_cfg0 = 100;
          int * nic_cfg = (int *) malloc(_len_nic_cfg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nic_cfg0; _i0++) {
            nic_cfg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vnic_set_nic_cfg(nic_cfg,rss_default_cpu,rss_hash_type,rss_hash_bits,rss_base_cpu,rss_enable,tso_ipid_split_en,ig_vlan_strip_en);
          free(nic_cfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
