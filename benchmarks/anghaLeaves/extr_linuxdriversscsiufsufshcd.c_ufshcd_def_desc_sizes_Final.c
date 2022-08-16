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
struct TYPE_2__ {int /*<<< orphan*/  hlth_desc; int /*<<< orphan*/  geom_desc; int /*<<< orphan*/  unit_desc; int /*<<< orphan*/  conf_desc; int /*<<< orphan*/  interc_desc; int /*<<< orphan*/  pwr_desc; int /*<<< orphan*/  dev_desc; } ;
struct ufs_hba {TYPE_1__ desc_size; } ;

/* Variables and functions */
 int /*<<< orphan*/  QUERY_DESC_CONFIGURATION_DEF_SIZE ; 
 int /*<<< orphan*/  QUERY_DESC_DEVICE_DEF_SIZE ; 
 int /*<<< orphan*/  QUERY_DESC_GEOMETRY_DEF_SIZE ; 
 int /*<<< orphan*/  QUERY_DESC_HEALTH_DEF_SIZE ; 
 int /*<<< orphan*/  QUERY_DESC_INTERCONNECT_DEF_SIZE ; 
 int /*<<< orphan*/  QUERY_DESC_POWER_DEF_SIZE ; 
 int /*<<< orphan*/  QUERY_DESC_UNIT_DEF_SIZE ; 

__attribute__((used)) static void ufshcd_def_desc_sizes(struct ufs_hba *hba)
{
	hba->desc_size.dev_desc = QUERY_DESC_DEVICE_DEF_SIZE;
	hba->desc_size.pwr_desc = QUERY_DESC_POWER_DEF_SIZE;
	hba->desc_size.interc_desc = QUERY_DESC_INTERCONNECT_DEF_SIZE;
	hba->desc_size.conf_desc = QUERY_DESC_CONFIGURATION_DEF_SIZE;
	hba->desc_size.unit_desc = QUERY_DESC_UNIT_DEF_SIZE;
	hba->desc_size.geom_desc = QUERY_DESC_GEOMETRY_DEF_SIZE;
	hba->desc_size.hlth_desc = QUERY_DESC_HEALTH_DEF_SIZE;
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
          int _len_hba0 = 1;
          struct ufs_hba * hba = (struct ufs_hba *) malloc(_len_hba0*sizeof(struct ufs_hba));
          for(int _i0 = 0; _i0 < _len_hba0; _i0++) {
            hba[_i0].desc_size.hlth_desc = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].desc_size.geom_desc = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].desc_size.unit_desc = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].desc_size.conf_desc = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].desc_size.interc_desc = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].desc_size.pwr_desc = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].desc_size.dev_desc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ufshcd_def_desc_sizes(hba);
          free(hba);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
