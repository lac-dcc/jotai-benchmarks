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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_12__   TYPE_6__ ;
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_12__ {int reference; int use_pre_saw; void* standard; } ;
struct TYPE_11__ {int max_output_level; int speed; int top; int cut_off_current; scalar_t__ min_output_level; void* ctrl_mode; void* standard; } ;
struct TYPE_10__ {int reference; int use_pre_saw; void* standard; } ;
struct TYPE_9__ {int max_output_level; int speed; int top; int cut_off_current; scalar_t__ min_output_level; void* ctrl_mode; void* standard; } ;
struct TYPE_8__ {int max_output_level; int speed; int top; scalar_t__ min_output_level; void* ctrl_mode; void* standard; } ;
struct TYPE_7__ {int max_output_level; int speed; int top; scalar_t__ min_output_level; void* ctrl_mode; void* standard; } ;
struct drxj_data {int qam_pga_cfg; int vsb_pga_cfg; TYPE_6__ vsb_pre_saw_cfg; TYPE_5__ vsb_rf_agc_cfg; TYPE_4__ qam_pre_saw_cfg; TYPE_3__ qam_rf_agc_cfg; TYPE_2__ vsb_if_agc_cfg; TYPE_1__ qam_if_agc_cfg; scalar_t__ has_lna; } ;

/* Variables and functions */
 void* DRX_AGC_CTRL_AUTO ; 
 void* DRX_AGC_CTRL_OFF ; 
 void* DRX_STANDARD_8VSB ; 
 void* DRX_STANDARD_ITU_B ; 

__attribute__((used)) static void drxj_reset_mode(struct drxj_data *ext_attr)
{
	/* Initialize default AFE configuration for QAM */
	if (ext_attr->has_lna) {
		/* IF AGC off, PGA active */
#ifndef DRXJ_VSB_ONLY
		ext_attr->qam_if_agc_cfg.standard = DRX_STANDARD_ITU_B;
		ext_attr->qam_if_agc_cfg.ctrl_mode = DRX_AGC_CTRL_OFF;
		ext_attr->qam_pga_cfg = 140 + (11 * 13);
#endif
		ext_attr->vsb_if_agc_cfg.standard = DRX_STANDARD_8VSB;
		ext_attr->vsb_if_agc_cfg.ctrl_mode = DRX_AGC_CTRL_OFF;
		ext_attr->vsb_pga_cfg = 140 + (11 * 13);
	} else {
		/* IF AGC on, PGA not active */
#ifndef DRXJ_VSB_ONLY
		ext_attr->qam_if_agc_cfg.standard = DRX_STANDARD_ITU_B;
		ext_attr->qam_if_agc_cfg.ctrl_mode = DRX_AGC_CTRL_AUTO;
		ext_attr->qam_if_agc_cfg.min_output_level = 0;
		ext_attr->qam_if_agc_cfg.max_output_level = 0x7FFF;
		ext_attr->qam_if_agc_cfg.speed = 3;
		ext_attr->qam_if_agc_cfg.top = 1297;
		ext_attr->qam_pga_cfg = 140;
#endif
		ext_attr->vsb_if_agc_cfg.standard = DRX_STANDARD_8VSB;
		ext_attr->vsb_if_agc_cfg.ctrl_mode = DRX_AGC_CTRL_AUTO;
		ext_attr->vsb_if_agc_cfg.min_output_level = 0;
		ext_attr->vsb_if_agc_cfg.max_output_level = 0x7FFF;
		ext_attr->vsb_if_agc_cfg.speed = 3;
		ext_attr->vsb_if_agc_cfg.top = 1024;
		ext_attr->vsb_pga_cfg = 140;
	}
	/* TODO: remove min_output_level and max_output_level for both QAM and VSB after */
	/* mc has not used them */
#ifndef DRXJ_VSB_ONLY
	ext_attr->qam_rf_agc_cfg.standard = DRX_STANDARD_ITU_B;
	ext_attr->qam_rf_agc_cfg.ctrl_mode = DRX_AGC_CTRL_AUTO;
	ext_attr->qam_rf_agc_cfg.min_output_level = 0;
	ext_attr->qam_rf_agc_cfg.max_output_level = 0x7FFF;
	ext_attr->qam_rf_agc_cfg.speed = 3;
	ext_attr->qam_rf_agc_cfg.top = 9500;
	ext_attr->qam_rf_agc_cfg.cut_off_current = 4000;
	ext_attr->qam_pre_saw_cfg.standard = DRX_STANDARD_ITU_B;
	ext_attr->qam_pre_saw_cfg.reference = 0x07;
	ext_attr->qam_pre_saw_cfg.use_pre_saw = true;
#endif
	/* Initialize default AFE configuration for VSB */
	ext_attr->vsb_rf_agc_cfg.standard = DRX_STANDARD_8VSB;
	ext_attr->vsb_rf_agc_cfg.ctrl_mode = DRX_AGC_CTRL_AUTO;
	ext_attr->vsb_rf_agc_cfg.min_output_level = 0;
	ext_attr->vsb_rf_agc_cfg.max_output_level = 0x7FFF;
	ext_attr->vsb_rf_agc_cfg.speed = 3;
	ext_attr->vsb_rf_agc_cfg.top = 9500;
	ext_attr->vsb_rf_agc_cfg.cut_off_current = 4000;
	ext_attr->vsb_pre_saw_cfg.standard = DRX_STANDARD_8VSB;
	ext_attr->vsb_pre_saw_cfg.reference = 0x07;
	ext_attr->vsb_pre_saw_cfg.use_pre_saw = true;
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

    // big-arr
    case 0:
    {
          int _len_ext_attr0 = 1;
          struct drxj_data * ext_attr = (struct drxj_data *) malloc(_len_ext_attr0*sizeof(struct drxj_data));
          for(int _i0 = 0; _i0 < _len_ext_attr0; _i0++) {
            ext_attr->qam_pga_cfg = ((-2 * (next_i()%2)) + 1) * next_i();
        ext_attr->vsb_pga_cfg = ((-2 * (next_i()%2)) + 1) * next_i();
        ext_attr->vsb_pre_saw_cfg.reference = ((-2 * (next_i()%2)) + 1) * next_i();
        ext_attr->vsb_pre_saw_cfg.use_pre_saw = ((-2 * (next_i()%2)) + 1) * next_i();
        ext_attr->vsb_rf_agc_cfg.max_output_level = ((-2 * (next_i()%2)) + 1) * next_i();
        ext_attr->vsb_rf_agc_cfg.speed = ((-2 * (next_i()%2)) + 1) * next_i();
        ext_attr->vsb_rf_agc_cfg.top = ((-2 * (next_i()%2)) + 1) * next_i();
        ext_attr->vsb_rf_agc_cfg.cut_off_current = ((-2 * (next_i()%2)) + 1) * next_i();
        ext_attr->vsb_rf_agc_cfg.min_output_level = ((-2 * (next_i()%2)) + 1) * next_i();
        ext_attr->qam_pre_saw_cfg.reference = ((-2 * (next_i()%2)) + 1) * next_i();
        ext_attr->qam_pre_saw_cfg.use_pre_saw = ((-2 * (next_i()%2)) + 1) * next_i();
        ext_attr->qam_rf_agc_cfg.max_output_level = ((-2 * (next_i()%2)) + 1) * next_i();
        ext_attr->qam_rf_agc_cfg.speed = ((-2 * (next_i()%2)) + 1) * next_i();
        ext_attr->qam_rf_agc_cfg.top = ((-2 * (next_i()%2)) + 1) * next_i();
        ext_attr->qam_rf_agc_cfg.cut_off_current = ((-2 * (next_i()%2)) + 1) * next_i();
        ext_attr->qam_rf_agc_cfg.min_output_level = ((-2 * (next_i()%2)) + 1) * next_i();
        ext_attr->vsb_if_agc_cfg.max_output_level = ((-2 * (next_i()%2)) + 1) * next_i();
        ext_attr->vsb_if_agc_cfg.speed = ((-2 * (next_i()%2)) + 1) * next_i();
        ext_attr->vsb_if_agc_cfg.top = ((-2 * (next_i()%2)) + 1) * next_i();
        ext_attr->vsb_if_agc_cfg.min_output_level = ((-2 * (next_i()%2)) + 1) * next_i();
        ext_attr->qam_if_agc_cfg.max_output_level = ((-2 * (next_i()%2)) + 1) * next_i();
        ext_attr->qam_if_agc_cfg.speed = ((-2 * (next_i()%2)) + 1) * next_i();
        ext_attr->qam_if_agc_cfg.top = ((-2 * (next_i()%2)) + 1) * next_i();
        ext_attr->qam_if_agc_cfg.min_output_level = ((-2 * (next_i()%2)) + 1) * next_i();
        ext_attr->has_lna = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          drxj_reset_mode(ext_attr);
          free(ext_attr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
