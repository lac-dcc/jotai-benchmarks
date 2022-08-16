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
typedef  struct TYPE_14__   TYPE_7__ ;
typedef  struct TYPE_13__   TYPE_6__ ;
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct TYPE_11__ {int /*<<< orphan*/  gamma_wd; } ;
struct TYPE_12__ {TYPE_4__ alaw; int /*<<< orphan*/  data_sz; } ;
struct TYPE_10__ {int width; int height; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_13__ {TYPE_5__ config_params; TYPE_3__ win; void* hd_pol; void* vd_pol; void* fid_pol; int /*<<< orphan*/  frm_fmt; int /*<<< orphan*/  pix_fmt; } ;
struct TYPE_8__ {int width; int height; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_9__ {int bt656_enable; TYPE_1__ win; int /*<<< orphan*/  buf_type; int /*<<< orphan*/  pix_order; void* hd_pol; void* vd_pol; void* fid_pol; int /*<<< orphan*/  frm_fmt; int /*<<< orphan*/  pix_fmt; } ;
struct TYPE_14__ {TYPE_6__ bayer; TYPE_2__ ycbcr; int /*<<< orphan*/  if_type; } ;
struct vpfe_ccdc {TYPE_7__ ccdc_cfg; } ;

/* Variables and functions */
 int /*<<< orphan*/  CCDC_BUFTYPE_FLD_INTERLEAVED ; 
 int /*<<< orphan*/  CCDC_FRMFMT_INTERLACED ; 
 int /*<<< orphan*/  CCDC_FRMFMT_PROGRESSIVE ; 
 int /*<<< orphan*/  CCDC_PIXFMT_RAW ; 
 int /*<<< orphan*/  CCDC_PIXFMT_YCBCR_8BIT ; 
 int /*<<< orphan*/  CCDC_PIXORDER_CBYCRY ; 
 int /*<<< orphan*/  VPFE_CCDC_DATA_8BITS ; 
 int /*<<< orphan*/  VPFE_CCDC_GAMMA_BITS_09_0 ; 
 void* VPFE_PINPOL_POSITIVE ; 
 int /*<<< orphan*/  VPFE_RAW_BAYER ; 

__attribute__((used)) static void vpfe_ccdc_config_defaults(struct vpfe_ccdc *ccdc)
{
	ccdc->ccdc_cfg.if_type = VPFE_RAW_BAYER;

	ccdc->ccdc_cfg.ycbcr.pix_fmt = CCDC_PIXFMT_YCBCR_8BIT;
	ccdc->ccdc_cfg.ycbcr.frm_fmt = CCDC_FRMFMT_INTERLACED;
	ccdc->ccdc_cfg.ycbcr.fid_pol = VPFE_PINPOL_POSITIVE;
	ccdc->ccdc_cfg.ycbcr.vd_pol = VPFE_PINPOL_POSITIVE;
	ccdc->ccdc_cfg.ycbcr.hd_pol = VPFE_PINPOL_POSITIVE;
	ccdc->ccdc_cfg.ycbcr.pix_order = CCDC_PIXORDER_CBYCRY;
	ccdc->ccdc_cfg.ycbcr.buf_type = CCDC_BUFTYPE_FLD_INTERLEAVED;

	ccdc->ccdc_cfg.ycbcr.win.left = 0;
	ccdc->ccdc_cfg.ycbcr.win.top = 0;
	ccdc->ccdc_cfg.ycbcr.win.width = 720;
	ccdc->ccdc_cfg.ycbcr.win.height = 576;
	ccdc->ccdc_cfg.ycbcr.bt656_enable = 1;

	ccdc->ccdc_cfg.bayer.pix_fmt = CCDC_PIXFMT_RAW;
	ccdc->ccdc_cfg.bayer.frm_fmt = CCDC_FRMFMT_PROGRESSIVE;
	ccdc->ccdc_cfg.bayer.fid_pol = VPFE_PINPOL_POSITIVE;
	ccdc->ccdc_cfg.bayer.vd_pol = VPFE_PINPOL_POSITIVE;
	ccdc->ccdc_cfg.bayer.hd_pol = VPFE_PINPOL_POSITIVE;

	ccdc->ccdc_cfg.bayer.win.left = 0;
	ccdc->ccdc_cfg.bayer.win.top = 0;
	ccdc->ccdc_cfg.bayer.win.width = 800;
	ccdc->ccdc_cfg.bayer.win.height = 600;
	ccdc->ccdc_cfg.bayer.config_params.data_sz = VPFE_CCDC_DATA_8BITS;
	ccdc->ccdc_cfg.bayer.config_params.alaw.gamma_wd =
						VPFE_CCDC_GAMMA_BITS_09_0;
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
          int _len_ccdc0 = 1;
          struct vpfe_ccdc * ccdc = (struct vpfe_ccdc *) malloc(_len_ccdc0*sizeof(struct vpfe_ccdc));
          for(int _i0 = 0; _i0 < _len_ccdc0; _i0++) {
            ccdc[_i0].ccdc_cfg.bayer.config_params.alaw.gamma_wd = ((-2 * (next_i()%2)) + 1) * next_i();
        ccdc[_i0].ccdc_cfg.bayer.config_params.data_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        ccdc[_i0].ccdc_cfg.bayer.win.width = ((-2 * (next_i()%2)) + 1) * next_i();
        ccdc[_i0].ccdc_cfg.bayer.win.height = ((-2 * (next_i()%2)) + 1) * next_i();
        ccdc[_i0].ccdc_cfg.bayer.win.top = ((-2 * (next_i()%2)) + 1) * next_i();
        ccdc[_i0].ccdc_cfg.bayer.win.left = ((-2 * (next_i()%2)) + 1) * next_i();
        ccdc[_i0].ccdc_cfg.bayer.frm_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        ccdc[_i0].ccdc_cfg.bayer.pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        ccdc[_i0].ccdc_cfg.ycbcr.bt656_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        ccdc[_i0].ccdc_cfg.ycbcr.win.width = ((-2 * (next_i()%2)) + 1) * next_i();
        ccdc[_i0].ccdc_cfg.ycbcr.win.height = ((-2 * (next_i()%2)) + 1) * next_i();
        ccdc[_i0].ccdc_cfg.ycbcr.win.top = ((-2 * (next_i()%2)) + 1) * next_i();
        ccdc[_i0].ccdc_cfg.ycbcr.win.left = ((-2 * (next_i()%2)) + 1) * next_i();
        ccdc[_i0].ccdc_cfg.ycbcr.buf_type = ((-2 * (next_i()%2)) + 1) * next_i();
        ccdc[_i0].ccdc_cfg.ycbcr.pix_order = ((-2 * (next_i()%2)) + 1) * next_i();
        ccdc[_i0].ccdc_cfg.ycbcr.frm_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        ccdc[_i0].ccdc_cfg.ycbcr.pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        ccdc[_i0].ccdc_cfg.if_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vpfe_ccdc_config_defaults(ccdc);
          free(ccdc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
