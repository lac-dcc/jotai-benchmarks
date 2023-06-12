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
       3            empty\n\
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
struct sxgbe_tx_ctxt_desc {int vltag_valid; int vlan_tag; } ;

/* Variables and functions */

__attribute__((used)) static void sxgbe_tx_ctxt_desc_set_vlantag(struct sxgbe_tx_ctxt_desc *p,
					   int is_vlanvalid, int vlan_tag)
{
	if (is_vlanvalid) {
		p->vltag_valid = is_vlanvalid;
		p->vlan_tag = vlan_tag;
	}
}

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
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int is_vlanvalid = 100;
        
          int vlan_tag = 100;
        
          int _len_p0 = 1;
          struct sxgbe_tx_ctxt_desc * p = (struct sxgbe_tx_ctxt_desc *) malloc(_len_p0*sizeof(struct sxgbe_tx_ctxt_desc));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              p[_i0].vltag_valid = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].vlan_tag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          sxgbe_tx_ctxt_desc_set_vlantag(p,is_vlanvalid,vlan_tag);
          free(p);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int is_vlanvalid = 255;
        
          int vlan_tag = 255;
        
          int _len_p0 = 65025;
          struct sxgbe_tx_ctxt_desc * p = (struct sxgbe_tx_ctxt_desc *) malloc(_len_p0*sizeof(struct sxgbe_tx_ctxt_desc));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              p[_i0].vltag_valid = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].vlan_tag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          sxgbe_tx_ctxt_desc_set_vlantag(p,is_vlanvalid,vlan_tag);
          free(p);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int is_vlanvalid = 10;
        
          int vlan_tag = 10;
        
          int _len_p0 = 100;
          struct sxgbe_tx_ctxt_desc * p = (struct sxgbe_tx_ctxt_desc *) malloc(_len_p0*sizeof(struct sxgbe_tx_ctxt_desc));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              p[_i0].vltag_valid = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].vlan_tag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          sxgbe_tx_ctxt_desc_set_vlantag(p,is_vlanvalid,vlan_tag);
          free(p);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int is_vlanvalid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int vlan_tag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_p0 = 1;
          struct sxgbe_tx_ctxt_desc * p = (struct sxgbe_tx_ctxt_desc *) malloc(_len_p0*sizeof(struct sxgbe_tx_ctxt_desc));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              p[_i0].vltag_valid = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].vlan_tag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          sxgbe_tx_ctxt_desc_set_vlantag(p,is_vlanvalid,vlan_tag);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
