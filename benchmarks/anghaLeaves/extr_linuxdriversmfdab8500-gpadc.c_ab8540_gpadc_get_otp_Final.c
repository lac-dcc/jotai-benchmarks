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
typedef  int /*<<< orphan*/  u16 ;
struct ab8500_gpadc {TYPE_1__* cal_data; } ;
struct TYPE_2__ {int /*<<< orphan*/  otp_calib_hi; int /*<<< orphan*/  otp_calib_lo; } ;

/* Variables and functions */
 size_t ADC_INPUT_BTEMP ; 
 size_t ADC_INPUT_IBAT ; 
 size_t ADC_INPUT_VBAT ; 
 size_t ADC_INPUT_VMAIN ; 

void ab8540_gpadc_get_otp(struct ab8500_gpadc *gpadc,
			u16 *vmain_l, u16 *vmain_h, u16 *btemp_l, u16 *btemp_h,
			u16 *vbat_l, u16 *vbat_h, u16 *ibat_l, u16 *ibat_h)
{
	*vmain_l = gpadc->cal_data[ADC_INPUT_VMAIN].otp_calib_lo;
	*vmain_h = gpadc->cal_data[ADC_INPUT_VMAIN].otp_calib_hi;
	*btemp_l = gpadc->cal_data[ADC_INPUT_BTEMP].otp_calib_lo;
	*btemp_h = gpadc->cal_data[ADC_INPUT_BTEMP].otp_calib_hi;
	*vbat_l  = gpadc->cal_data[ADC_INPUT_VBAT].otp_calib_lo;
	*vbat_h  = gpadc->cal_data[ADC_INPUT_VBAT].otp_calib_hi;
	*ibat_l  = gpadc->cal_data[ADC_INPUT_IBAT].otp_calib_lo;
	*ibat_h  = gpadc->cal_data[ADC_INPUT_IBAT].otp_calib_hi;
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
          int _len_gpadc0 = 1;
          struct ab8500_gpadc * gpadc = (struct ab8500_gpadc *) malloc(_len_gpadc0*sizeof(struct ab8500_gpadc));
          for(int _i0 = 0; _i0 < _len_gpadc0; _i0++) {
              int _len_gpadc__i0__cal_data0 = 1;
          gpadc[_i0].cal_data = (struct TYPE_2__ *) malloc(_len_gpadc__i0__cal_data0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_gpadc__i0__cal_data0; _j0++) {
            gpadc[_i0].cal_data->otp_calib_hi = ((-2 * (next_i()%2)) + 1) * next_i();
        gpadc[_i0].cal_data->otp_calib_lo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vmain_l0 = 1;
          int * vmain_l = (int *) malloc(_len_vmain_l0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_vmain_l0; _i0++) {
            vmain_l[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vmain_h0 = 1;
          int * vmain_h = (int *) malloc(_len_vmain_h0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_vmain_h0; _i0++) {
            vmain_h[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_btemp_l0 = 1;
          int * btemp_l = (int *) malloc(_len_btemp_l0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_btemp_l0; _i0++) {
            btemp_l[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_btemp_h0 = 1;
          int * btemp_h = (int *) malloc(_len_btemp_h0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_btemp_h0; _i0++) {
            btemp_h[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vbat_l0 = 1;
          int * vbat_l = (int *) malloc(_len_vbat_l0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_vbat_l0; _i0++) {
            vbat_l[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vbat_h0 = 1;
          int * vbat_h = (int *) malloc(_len_vbat_h0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_vbat_h0; _i0++) {
            vbat_h[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ibat_l0 = 1;
          int * ibat_l = (int *) malloc(_len_ibat_l0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ibat_l0; _i0++) {
            ibat_l[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ibat_h0 = 1;
          int * ibat_h = (int *) malloc(_len_ibat_h0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ibat_h0; _i0++) {
            ibat_h[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ab8540_gpadc_get_otp(gpadc,vmain_l,vmain_h,btemp_l,btemp_h,vbat_l,vbat_h,ibat_l,ibat_h);
          for(int _aux = 0; _aux < _len_gpadc0; _aux++) {
          free(gpadc[_aux].cal_data);
          }
          free(gpadc);
          free(vmain_l);
          free(vmain_h);
          free(btemp_l);
          free(btemp_h);
          free(vbat_l);
          free(vbat_h);
          free(ibat_l);
          free(ibat_h);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
