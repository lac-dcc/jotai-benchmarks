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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int dev_desc; int pwr_desc; int geom_desc; int conf_desc; int unit_desc; int interc_desc; int hlth_desc; } ;
struct ufs_hba {TYPE_1__ desc_size; } ;
typedef  enum desc_idn { ____Placeholder_desc_idn } desc_idn ;

/* Variables and functions */
 int EINVAL ; 
#define  QUERY_DESC_IDN_CONFIGURATION 137 
#define  QUERY_DESC_IDN_DEVICE 136 
#define  QUERY_DESC_IDN_GEOMETRY 135 
#define  QUERY_DESC_IDN_HEALTH 134 
#define  QUERY_DESC_IDN_INTERCONNECT 133 
#define  QUERY_DESC_IDN_POWER 132 
#define  QUERY_DESC_IDN_RFU_0 131 
#define  QUERY_DESC_IDN_RFU_1 130 
#define  QUERY_DESC_IDN_STRING 129 
#define  QUERY_DESC_IDN_UNIT 128 
 int QUERY_DESC_MAX_SIZE ; 

int ufshcd_map_desc_id_to_length(struct ufs_hba *hba,
	enum desc_idn desc_id, int *desc_len)
{
	switch (desc_id) {
	case QUERY_DESC_IDN_DEVICE:
		*desc_len = hba->desc_size.dev_desc;
		break;
	case QUERY_DESC_IDN_POWER:
		*desc_len = hba->desc_size.pwr_desc;
		break;
	case QUERY_DESC_IDN_GEOMETRY:
		*desc_len = hba->desc_size.geom_desc;
		break;
	case QUERY_DESC_IDN_CONFIGURATION:
		*desc_len = hba->desc_size.conf_desc;
		break;
	case QUERY_DESC_IDN_UNIT:
		*desc_len = hba->desc_size.unit_desc;
		break;
	case QUERY_DESC_IDN_INTERCONNECT:
		*desc_len = hba->desc_size.interc_desc;
		break;
	case QUERY_DESC_IDN_STRING:
		*desc_len = QUERY_DESC_MAX_SIZE;
		break;
	case QUERY_DESC_IDN_HEALTH:
		*desc_len = hba->desc_size.hlth_desc;
		break;
	case QUERY_DESC_IDN_RFU_0:
	case QUERY_DESC_IDN_RFU_1:
		*desc_len = 0;
		break;
	default:
		*desc_len = 0;
		return -EINVAL;
	}
	return 0;
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
          enum desc_idn desc_id = 0;
          int _len_hba0 = 1;
          struct ufs_hba * hba = (struct ufs_hba *) malloc(_len_hba0*sizeof(struct ufs_hba));
          for(int _i0 = 0; _i0 < _len_hba0; _i0++) {
            hba[_i0].desc_size.dev_desc = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].desc_size.pwr_desc = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].desc_size.geom_desc = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].desc_size.conf_desc = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].desc_size.unit_desc = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].desc_size.interc_desc = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].desc_size.hlth_desc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_desc_len0 = 1;
          int * desc_len = (int *) malloc(_len_desc_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_desc_len0; _i0++) {
            desc_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ufshcd_map_desc_id_to_length(hba,desc_id,desc_len);
          printf("%d\n", benchRet); 
          free(hba);
          free(desc_len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
