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
typedef  int /*<<< orphan*/  u8 ;
typedef  int /*<<< orphan*/  u32 ;
struct phy_dm_struct {int dummy; } ;
typedef  enum odm_fw_config_type { ____Placeholder_odm_fw_config_type } odm_fw_config_type ;
typedef  enum hal_status { ____Placeholder_hal_status } hal_status ;

/* Variables and functions */
 int HAL_STATUS_SUCCESS ; 

enum hal_status
odm_config_fw_with_header_file(struct phy_dm_struct *dm,
			       enum odm_fw_config_type config_type,
			       u8 *p_firmware, u32 *size)
{
	return HAL_STATUS_SUCCESS;
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
          enum odm_fw_config_type config_type = 0;
          int _len_dm0 = 1;
          struct phy_dm_struct * dm = (struct phy_dm_struct *) malloc(_len_dm0*sizeof(struct phy_dm_struct));
          for(int _i0 = 0; _i0 < _len_dm0; _i0++) {
            dm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_firmware0 = 1;
          int * p_firmware = (int *) malloc(_len_p_firmware0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_firmware0; _i0++) {
            p_firmware[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_size0 = 1;
          int * size = (int *) malloc(_len_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum hal_status benchRet = odm_config_fw_with_header_file(dm,config_type,p_firmware,size);
          free(dm);
          free(p_firmware);
          free(size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
