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
struct sis_video_info {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void sisfb_save_pdc_emi(struct sis_video_info *ivideo)
{
#ifdef CONFIG_FB_SIS_300
	/* Save the current PanelDelayCompensation if the LCD is currently used */
	if(ivideo->sisvga_engine == SIS_300_VGA) {
		if(ivideo->vbflags2 & (VB2_LVDS | VB2_30xBDH)) {
			int tmp;
			tmp = SiS_GetReg(SISCR, 0x30);
			if(tmp & 0x20) {
				/* Currently on LCD? If yes, read current pdc */
				ivideo->detectedpdc = SiS_GetReg(SISPART1, 0x13);
				ivideo->detectedpdc &= 0x3c;
				if(ivideo->SiS_Pr.PDC == -1) {
					/* Let option override detection */
					ivideo->SiS_Pr.PDC = ivideo->detectedpdc;
				}
				printk(KERN_INFO "sisfb: Detected LCD PDC 0x%02x\n",
					ivideo->detectedpdc);
			}
			if((ivideo->SiS_Pr.PDC != -1) &&
			   (ivideo->SiS_Pr.PDC != ivideo->detectedpdc)) {
				printk(KERN_INFO "sisfb: Using LCD PDC 0x%02x\n",
					ivideo->SiS_Pr.PDC);
			}
		}
	}
#endif

#ifdef CONFIG_FB_SIS_315
	if(ivideo->sisvga_engine == SIS_315_VGA) {

		/* Try to find about LCDA */
		if(ivideo->vbflags2 & VB2_SISLCDABRIDGE) {
			int tmp;
			tmp = SiS_GetReg(SISPART1, 0x13);
			if(tmp & 0x04) {
				ivideo->SiS_Pr.SiS_UseLCDA = true;
				ivideo->detectedlcda = 0x03;
			}
		}

		/* Save PDC */
		if(ivideo->vbflags2 & VB2_SISLVDSBRIDGE) {
			int tmp;
			tmp = SiS_GetReg(SISCR, 0x30);
			if((tmp & 0x20) || (ivideo->detectedlcda != 0xff)) {
				/* Currently on LCD? If yes, read current pdc */
				u8 pdc;
				pdc = SiS_GetReg(SISPART1, 0x2D);
				ivideo->detectedpdc  = (pdc & 0x0f) << 1;
				ivideo->detectedpdca = (pdc & 0xf0) >> 3;
				pdc = SiS_GetReg(SISPART1, 0x35);
				ivideo->detectedpdc |= ((pdc >> 7) & 0x01);
				pdc = SiS_GetReg(SISPART1, 0x20);
				ivideo->detectedpdca |= ((pdc >> 6) & 0x01);
				if(ivideo->newrom) {
					/* New ROM invalidates other PDC resp. */
					if(ivideo->detectedlcda != 0xff) {
						ivideo->detectedpdc = 0xff;
					} else {
						ivideo->detectedpdca = 0xff;
					}
				}
				if(ivideo->SiS_Pr.PDC == -1) {
					if(ivideo->detectedpdc != 0xff) {
						ivideo->SiS_Pr.PDC = ivideo->detectedpdc;
					}
				}
				if(ivideo->SiS_Pr.PDCA == -1) {
					if(ivideo->detectedpdca != 0xff) {
						ivideo->SiS_Pr.PDCA = ivideo->detectedpdca;
					}
				}
				if(ivideo->detectedpdc != 0xff) {
					printk(KERN_INFO
						"sisfb: Detected LCD PDC 0x%02x (for LCD=CRT2)\n",
						ivideo->detectedpdc);
				}
				if(ivideo->detectedpdca != 0xff) {
					printk(KERN_INFO
						"sisfb: Detected LCD PDC1 0x%02x (for LCD=CRT1)\n",
						ivideo->detectedpdca);
				}
			}

			/* Save EMI */
			if(ivideo->vbflags2 & VB2_SISEMIBRIDGE) {
				ivideo->SiS_Pr.EMI_30 = SiS_GetReg(SISPART4, 0x30);
				ivideo->SiS_Pr.EMI_31 = SiS_GetReg(SISPART4, 0x31);
				ivideo->SiS_Pr.EMI_32 = SiS_GetReg(SISPART4, 0x32);
				ivideo->SiS_Pr.EMI_33 = SiS_GetReg(SISPART4, 0x33);
				ivideo->SiS_Pr.HaveEMI = true;
				if((tmp & 0x20) || (ivideo->detectedlcda != 0xff)) {
					ivideo->SiS_Pr.HaveEMILCD = true;
				}
			}
		}

		/* Let user override detected PDCs (all bridges) */
		if(ivideo->vbflags2 & VB2_30xBLV) {
			if((ivideo->SiS_Pr.PDC != -1) &&
			   (ivideo->SiS_Pr.PDC != ivideo->detectedpdc)) {
				printk(KERN_INFO "sisfb: Using LCD PDC 0x%02x (for LCD=CRT2)\n",
					ivideo->SiS_Pr.PDC);
			}
			if((ivideo->SiS_Pr.PDCA != -1) &&
			   (ivideo->SiS_Pr.PDCA != ivideo->detectedpdca)) {
				printk(KERN_INFO "sisfb: Using LCD PDC1 0x%02x (for LCD=CRT1)\n",
				 ivideo->SiS_Pr.PDCA);
			}
		}

	}
#endif
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
          int _len_ivideo0 = 1;
          struct sis_video_info * ivideo = (struct sis_video_info *) malloc(_len_ivideo0*sizeof(struct sis_video_info));
          for(int _i0 = 0; _i0 < _len_ivideo0; _i0++) {
            ivideo[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sisfb_save_pdc_emi(ivideo);
          free(ivideo);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_ivideo0 = 100;
          struct sis_video_info * ivideo = (struct sis_video_info *) malloc(_len_ivideo0*sizeof(struct sis_video_info));
          for(int _i0 = 0; _i0 < _len_ivideo0; _i0++) {
            ivideo[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sisfb_save_pdc_emi(ivideo);
          free(ivideo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
