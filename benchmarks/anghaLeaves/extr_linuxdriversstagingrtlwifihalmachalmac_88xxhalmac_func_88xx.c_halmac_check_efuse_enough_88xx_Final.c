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
typedef  int u8 ;
typedef  int u32 ;
typedef  int u16 ;
struct halmac_pg_efuse_info {int efuse_map_size; } ;
struct TYPE_2__ {int efuse_size; } ;
struct halmac_adapter {int efuse_end; TYPE_1__ hw_config_info; } ;
typedef  enum halmac_ret_status { ____Placeholder_halmac_ret_status } halmac_ret_status ;

/* Variables and functions */
 int HALMAC_PROTECTED_EFUSE_SIZE_88XX ; 
 int HALMAC_RET_EFUSE_NOT_ENOUGH ; 
 int HALMAC_RET_SUCCESS ; 

__attribute__((used)) static enum halmac_ret_status
halmac_check_efuse_enough_88xx(struct halmac_adapter *halmac_adapter,
			       struct halmac_pg_efuse_info *pg_efuse_info,
			       u8 *eeprom_mask_updated)
{
	u8 pre_word_enb, word_enb;
	u8 pg_efuse_header, pg_efuse_header2;
	u8 pg_block;
	u16 i, j;
	u32 efuse_end;
	u32 tmp_eeprom_offset, pg_efuse_num = 0;

	efuse_end = halmac_adapter->efuse_end;

	for (i = 0; i < pg_efuse_info->efuse_map_size; i = i + 8) {
		tmp_eeprom_offset = i;

		if ((tmp_eeprom_offset & 7) > 0) {
			pre_word_enb =
				(*(eeprom_mask_updated + (i >> 4)) & 0x0F);
			word_enb = pre_word_enb ^ 0x0F;
		} else {
			pre_word_enb = (*(eeprom_mask_updated + (i >> 4)) >> 4);
			word_enb = pre_word_enb ^ 0x0F;
		}

		pg_block = (u8)(tmp_eeprom_offset >> 3);

		if (pre_word_enb > 0) {
			if (tmp_eeprom_offset > 0x7f) {
				pg_efuse_header =
					(((pg_block & 0x07) << 5) & 0xE0) |
					0x0F;
				pg_efuse_header2 = (u8)(
					((pg_block & 0x78) << 1) + word_enb);
			} else {
				pg_efuse_header =
					(u8)((pg_block << 4) + word_enb);
			}

			if (tmp_eeprom_offset > 0x7f) {
				pg_efuse_num++;
				pg_efuse_num++;
				efuse_end = efuse_end + 2;
				for (j = 0; j < 4; j++) {
					if (((pre_word_enb >> j) & 0x1) > 0) {
						pg_efuse_num++;
						pg_efuse_num++;
						efuse_end = efuse_end + 2;
					}
				}
			} else {
				pg_efuse_num++;
				efuse_end = efuse_end + 1;
				for (j = 0; j < 4; j++) {
					if (((pre_word_enb >> j) & 0x1) > 0) {
						pg_efuse_num++;
						pg_efuse_num++;
						efuse_end = efuse_end + 2;
					}
				}
			}
		}
	}

	if (halmac_adapter->hw_config_info.efuse_size <=
	    (pg_efuse_num + HALMAC_PROTECTED_EFUSE_SIZE_88XX +
	     halmac_adapter->efuse_end))
		return HALMAC_RET_EFUSE_NOT_ENOUGH;

	return HALMAC_RET_SUCCESS;
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
          int _len_halmac_adapter0 = 1;
          struct halmac_adapter * halmac_adapter = (struct halmac_adapter *) malloc(_len_halmac_adapter0*sizeof(struct halmac_adapter));
          for(int _i0 = 0; _i0 < _len_halmac_adapter0; _i0++) {
            halmac_adapter[_i0].efuse_end = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.efuse_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pg_efuse_info0 = 1;
          struct halmac_pg_efuse_info * pg_efuse_info = (struct halmac_pg_efuse_info *) malloc(_len_pg_efuse_info0*sizeof(struct halmac_pg_efuse_info));
          for(int _i0 = 0; _i0 < _len_pg_efuse_info0; _i0++) {
            pg_efuse_info[_i0].efuse_map_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_eeprom_mask_updated0 = 1;
          int * eeprom_mask_updated = (int *) malloc(_len_eeprom_mask_updated0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_eeprom_mask_updated0; _i0++) {
            eeprom_mask_updated[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum halmac_ret_status benchRet = halmac_check_efuse_enough_88xx(halmac_adapter,pg_efuse_info,eeprom_mask_updated);
          free(halmac_adapter);
          free(pg_efuse_info);
          free(eeprom_mask_updated);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
