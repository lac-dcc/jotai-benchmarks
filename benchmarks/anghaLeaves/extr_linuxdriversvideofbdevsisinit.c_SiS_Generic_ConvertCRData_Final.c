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
       1            big-arr-10x\n\
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

/* Type definitions */
struct fb_var_screeninfo {int xres; int left_margin; int right_margin; int hsync_len; int yres; int upper_margin; int lower_margin; int vsync_len; } ;
struct SiS_Private {int dummy; } ;

/* Variables and functions */

void
SiS_Generic_ConvertCRData(struct SiS_Private *SiS_Pr, unsigned char *crdata,
			int xres, int yres,
			struct fb_var_screeninfo *var, bool writeres
)
{
   unsigned short HRE, HBE, HRS, HBS, HDE, HT;
   unsigned short VRE, VBE, VRS, VBS, VDE, VT;
   unsigned char  sr_data, cr_data, cr_data2;
   int            A, B, C, D, E, F, temp;

   sr_data = crdata[14];

   /* Horizontal total */
   HT =  crdata[0] | ((unsigned short)(sr_data & 0x03) << 8);
   A = HT + 5;

   /* Horizontal display enable end */
   HDE = crdata[1] | ((unsigned short)(sr_data & 0x0C) << 6);
   E = HDE + 1;

   /* Horizontal retrace (=sync) start */
   HRS = crdata[4] | ((unsigned short)(sr_data & 0xC0) << 2);
   F = HRS - E - 3;

   /* Horizontal blank start */
   HBS = crdata[2] | ((unsigned short)(sr_data & 0x30) << 4);

   sr_data = crdata[15];
   cr_data = crdata[5];

   /* Horizontal blank end */
   HBE = (crdata[3] & 0x1f) |
         ((unsigned short)(cr_data & 0x80) >> 2) |
         ((unsigned short)(sr_data & 0x03) << 6);

   /* Horizontal retrace (=sync) end */
   HRE = (cr_data & 0x1f) | ((sr_data & 0x04) << 3);

   temp = HBE - ((E - 1) & 255);
   B = (temp > 0) ? temp : (temp + 256);

   temp = HRE - ((E + F + 3) & 63);
   C = (temp > 0) ? temp : (temp + 64);

   D = B - F - C;

   if(writeres) var->xres = xres = E * 8;
   var->left_margin = D * 8;
   var->right_margin = F * 8;
   var->hsync_len = C * 8;

   /* Vertical */
   sr_data = crdata[13];
   cr_data = crdata[7];

   /* Vertical total */
   VT  = crdata[6] |
	 ((unsigned short)(cr_data & 0x01) << 8) |
	 ((unsigned short)(cr_data & 0x20) << 4) |
	 ((unsigned short)(sr_data & 0x01) << 10);
   A = VT + 2;

   /* Vertical display enable end */
   VDE = crdata[10] |
	 ((unsigned short)(cr_data & 0x02) << 7) |
	 ((unsigned short)(cr_data & 0x40) << 3) |
	 ((unsigned short)(sr_data & 0x02) << 9);
   E = VDE + 1;

   /* Vertical retrace (=sync) start */
   VRS = crdata[8] |
	 ((unsigned short)(cr_data & 0x04) << 6) |
	 ((unsigned short)(cr_data & 0x80) << 2) |
	 ((unsigned short)(sr_data & 0x08) << 7);
   F = VRS + 1 - E;

   cr_data2 = (crdata[16] & 0x01) << 5;

   /* Vertical blank start */
   VBS = crdata[11] |
	 ((unsigned short)(cr_data  & 0x08) << 5) |
	 ((unsigned short)(cr_data2 & 0x20) << 4) |
	 ((unsigned short)(sr_data  & 0x04) << 8);

   /* Vertical blank end */
   VBE = crdata[12] | ((unsigned short)(sr_data & 0x10) << 4);
   temp = VBE - ((E - 1) & 511);
   B = (temp > 0) ? temp : (temp + 512);

   /* Vertical retrace (=sync) end */
   VRE = (crdata[9] & 0x0f) | ((sr_data & 0x20) >> 1);
   temp = VRE - ((E + F - 1) & 31);
   C = (temp > 0) ? temp : (temp + 32);

   D = B - F - C;

   if(writeres) var->yres = yres = E;
   var->upper_margin = D;
   var->lower_margin = F;
   var->vsync_len = C;

   if((xres == 320) && ((yres == 200) || (yres == 240))) {
	/* Terrible hack, but correct CRTC data for
	 * these modes only produces a black screen...
	 * (HRE is 0, leading into a too large C and
	 * a negative D. The CRT controller does not
	 * seem to like correcting HRE to 50)
	 */
      var->left_margin = (400 - 376);
      var->right_margin = (328 - 320);
      var->hsync_len = (376 - 328);

   }

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
          int xres = 255;
          int yres = 255;
          int writeres = 255;
          int _len_SiS_Pr0 = 65025;
          struct SiS_Private * SiS_Pr = (struct SiS_Private *) malloc(_len_SiS_Pr0*sizeof(struct SiS_Private));
          for(int _i0 = 0; _i0 < _len_SiS_Pr0; _i0++) {
            SiS_Pr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_crdata0 = 65025;
          unsigned char * crdata = (unsigned char *) malloc(_len_crdata0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_crdata0; _i0++) {
            crdata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_var0 = 65025;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].left_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].right_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].hsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].upper_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].lower_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].vsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SiS_Generic_ConvertCRData(SiS_Pr,crdata,xres,yres,var,writeres);
          free(SiS_Pr);
          free(crdata);
          free(var);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int xres = 10;
          int yres = 10;
          int writeres = 10;
          int _len_SiS_Pr0 = 100;
          struct SiS_Private * SiS_Pr = (struct SiS_Private *) malloc(_len_SiS_Pr0*sizeof(struct SiS_Private));
          for(int _i0 = 0; _i0 < _len_SiS_Pr0; _i0++) {
            SiS_Pr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_crdata0 = 100;
          unsigned char * crdata = (unsigned char *) malloc(_len_crdata0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_crdata0; _i0++) {
            crdata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_var0 = 100;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].left_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].right_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].hsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].upper_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].lower_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].vsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SiS_Generic_ConvertCRData(SiS_Pr,crdata,xres,yres,var,writeres);
          free(SiS_Pr);
          free(crdata);
          free(var);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
