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
typedef  scalar_t__ u8 ;
struct rtsx_chip {int dummy; } ;

/* Variables and functions */
#define  CURRENT_LIMIT_400 137 
 scalar_t__ CURRENT_LIMIT_400_MASK ; 
 scalar_t__ CURRENT_LIMIT_400_QUERY_SWITCH_OK ; 
 scalar_t__ CURRENT_LIMIT_400_SWITCH_BUSY ; 
#define  CURRENT_LIMIT_600 136 
 scalar_t__ CURRENT_LIMIT_600_MASK ; 
 scalar_t__ CURRENT_LIMIT_600_QUERY_SWITCH_OK ; 
 scalar_t__ CURRENT_LIMIT_600_SWITCH_BUSY ; 
#define  CURRENT_LIMIT_800 135 
 scalar_t__ CURRENT_LIMIT_800_MASK ; 
 scalar_t__ CURRENT_LIMIT_800_QUERY_SWITCH_OK ; 
 scalar_t__ CURRENT_LIMIT_800_SWITCH_BUSY ; 
 size_t DATA_STRUCTURE_VER_OFFSET ; 
 scalar_t__ DDR50_QUERY_SWITCH_OK ; 
#define  DDR50_SUPPORT 134 
 scalar_t__ DDR50_SUPPORT_MASK ; 
 scalar_t__ DDR50_SWITCH_BUSY ; 
#define  DRIVING_TYPE_A 133 
 scalar_t__ DRIVING_TYPE_A_MASK ; 
#define  DRIVING_TYPE_C 132 
 scalar_t__ DRIVING_TYPE_C_MASK ; 
#define  DRIVING_TYPE_D 131 
 scalar_t__ DRIVING_TYPE_D_MASK ; 
 int FUNCTION_GROUP1_CHECK_BUSY_OFFSET ; 
 int FUNCTION_GROUP1_QUERY_SWITCH_OFFSET ; 
 int FUNCTION_GROUP1_SUPPORT_OFFSET ; 
 int FUNCTION_GROUP3_CHECK_BUSY_OFFSET ; 
 int FUNCTION_GROUP3_QUERY_SWITCH_OFFSET ; 
 int FUNCTION_GROUP3_SUPPORT_OFFSET ; 
 int FUNCTION_GROUP4_CHECK_BUSY_OFFSET ; 
 int FUNCTION_GROUP4_QUERY_SWITCH_OFFSET ; 
 int FUNCTION_GROUP4_SUPPORT_OFFSET ; 
 scalar_t__ HS_QUERY_SWITCH_OK ; 
#define  HS_SUPPORT 130 
 scalar_t__ HS_SUPPORT_MASK ; 
 scalar_t__ HS_SWITCH_BUSY ; 
 scalar_t__ SDR104_QUERY_SWITCH_OK ; 
#define  SDR104_SUPPORT 129 
 scalar_t__ SDR104_SUPPORT_MASK ; 
 scalar_t__ SDR104_SWITCH_BUSY ; 
 scalar_t__ SDR50_QUERY_SWITCH_OK ; 
#define  SDR50_SUPPORT 128 
 scalar_t__ SDR50_SUPPORT_MASK ; 
 scalar_t__ SDR50_SWITCH_BUSY ; 
 scalar_t__ SD_FUNC_GROUP_1 ; 
 scalar_t__ SD_FUNC_GROUP_3 ; 
 scalar_t__ SD_FUNC_GROUP_4 ; 
 int STATUS_FAIL ; 
 int STATUS_SUCCESS ; 
 scalar_t__ TYPE_A_QUERY_SWITCH_OK ; 
 scalar_t__ TYPE_A_SWITCH_BUSY ; 
 scalar_t__ TYPE_C_QUERY_SWITCH_OK ; 
 scalar_t__ TYPE_C_SWITCH_BUSY ; 
 scalar_t__ TYPE_D_QUERY_SWITCH_OK ; 
 scalar_t__ TYPE_D_SWITCH_BUSY ; 

__attribute__((used)) static int sd_query_switch_result(struct rtsx_chip *chip, u8 func_group,
				  u8 func_to_switch, u8 *buf, int buf_len)
{
	u8 support_mask = 0, query_switch = 0, switch_busy = 0;
	int support_offset = 0, query_switch_offset = 0, check_busy_offset = 0;

	if (func_group == SD_FUNC_GROUP_1) {
		support_offset = FUNCTION_GROUP1_SUPPORT_OFFSET;
		query_switch_offset = FUNCTION_GROUP1_QUERY_SWITCH_OFFSET;
		check_busy_offset = FUNCTION_GROUP1_CHECK_BUSY_OFFSET;

		switch (func_to_switch) {
		case HS_SUPPORT:
			support_mask = HS_SUPPORT_MASK;
			query_switch = HS_QUERY_SWITCH_OK;
			switch_busy = HS_SWITCH_BUSY;
			break;

		case SDR50_SUPPORT:
			support_mask = SDR50_SUPPORT_MASK;
			query_switch = SDR50_QUERY_SWITCH_OK;
			switch_busy = SDR50_SWITCH_BUSY;
			break;

		case SDR104_SUPPORT:
			support_mask = SDR104_SUPPORT_MASK;
			query_switch = SDR104_QUERY_SWITCH_OK;
			switch_busy = SDR104_SWITCH_BUSY;
			break;

		case DDR50_SUPPORT:
			support_mask = DDR50_SUPPORT_MASK;
			query_switch = DDR50_QUERY_SWITCH_OK;
			switch_busy = DDR50_SWITCH_BUSY;
			break;

		default:
			return STATUS_FAIL;
		}
	} else if (func_group == SD_FUNC_GROUP_3) {
		support_offset = FUNCTION_GROUP3_SUPPORT_OFFSET;
		query_switch_offset = FUNCTION_GROUP3_QUERY_SWITCH_OFFSET;
		check_busy_offset = FUNCTION_GROUP3_CHECK_BUSY_OFFSET;

		switch (func_to_switch) {
		case DRIVING_TYPE_A:
			support_mask = DRIVING_TYPE_A_MASK;
			query_switch = TYPE_A_QUERY_SWITCH_OK;
			switch_busy = TYPE_A_SWITCH_BUSY;
			break;

		case DRIVING_TYPE_C:
			support_mask = DRIVING_TYPE_C_MASK;
			query_switch = TYPE_C_QUERY_SWITCH_OK;
			switch_busy = TYPE_C_SWITCH_BUSY;
			break;

		case DRIVING_TYPE_D:
			support_mask = DRIVING_TYPE_D_MASK;
			query_switch = TYPE_D_QUERY_SWITCH_OK;
			switch_busy = TYPE_D_SWITCH_BUSY;
			break;

		default:
			return STATUS_FAIL;
		}
	} else if (func_group == SD_FUNC_GROUP_4) {
		support_offset = FUNCTION_GROUP4_SUPPORT_OFFSET;
		query_switch_offset = FUNCTION_GROUP4_QUERY_SWITCH_OFFSET;
		check_busy_offset = FUNCTION_GROUP4_CHECK_BUSY_OFFSET;

		switch (func_to_switch) {
		case CURRENT_LIMIT_400:
			support_mask = CURRENT_LIMIT_400_MASK;
			query_switch = CURRENT_LIMIT_400_QUERY_SWITCH_OK;
			switch_busy = CURRENT_LIMIT_400_SWITCH_BUSY;
			break;

		case CURRENT_LIMIT_600:
			support_mask = CURRENT_LIMIT_600_MASK;
			query_switch = CURRENT_LIMIT_600_QUERY_SWITCH_OK;
			switch_busy = CURRENT_LIMIT_600_SWITCH_BUSY;
			break;

		case CURRENT_LIMIT_800:
			support_mask = CURRENT_LIMIT_800_MASK;
			query_switch = CURRENT_LIMIT_800_QUERY_SWITCH_OK;
			switch_busy = CURRENT_LIMIT_800_SWITCH_BUSY;
			break;

		default:
			return STATUS_FAIL;
		}
	} else {
		return STATUS_FAIL;
	}

	if (func_group == SD_FUNC_GROUP_1) {
		if (!(buf[support_offset] & support_mask) ||
		    ((buf[query_switch_offset] & 0x0F) != query_switch)) {
			return STATUS_FAIL;
		}
	}

	/* Check 'Busy Status' */
	if ((buf[DATA_STRUCTURE_VER_OFFSET] == 0x01) &&
	    ((buf[check_busy_offset] & switch_busy) == switch_busy)) {
		return STATUS_FAIL;
	}

	return STATUS_SUCCESS;
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
          long func_group = 100;
          long func_to_switch = 100;
          int buf_len = 100;
          int _len_chip0 = 1;
          struct rtsx_chip * chip = (struct rtsx_chip *) malloc(_len_chip0*sizeof(struct rtsx_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          long * buf = (long *) malloc(_len_buf0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sd_query_switch_result(chip,func_group,func_to_switch,buf,buf_len);
          printf("%d\n", benchRet); 
          free(chip);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
