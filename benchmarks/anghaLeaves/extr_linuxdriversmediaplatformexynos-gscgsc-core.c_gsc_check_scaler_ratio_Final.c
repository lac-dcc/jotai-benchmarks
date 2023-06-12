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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct gsc_variant {int sc_down_max; int local_sc_down; int sc_up_max; } ;

/* Variables and functions */
 int EINVAL ; 
 int GSC_DMA ; 

int gsc_check_scaler_ratio(struct gsc_variant *var, int sw, int sh, int dw,
			   int dh, int rot, int out_path)
{
	int tmp_w, tmp_h, sc_down_max;

	if (out_path == GSC_DMA)
		sc_down_max = var->sc_down_max;
	else
		sc_down_max = var->local_sc_down;

	if (rot == 90 || rot == 270) {
		tmp_w = dh;
		tmp_h = dw;
	} else {
		tmp_w = dw;
		tmp_h = dh;
	}

	if ((sw / tmp_w) > sc_down_max ||
	    (sh / tmp_h) > sc_down_max ||
	    (tmp_w / sw) > var->sc_up_max ||
	    (tmp_h / sh) > var->sc_up_max)
		return -EINVAL;

	return 0;
}

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
          // static_instructions_O0 : 35
          // dynamic_instructions_O0 : 35
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 25
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 25
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 25
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int sw = 100;
        
          int sh = 100;
        
          int dw = 100;
        
          int dh = 100;
        
          int rot = 100;
        
          int out_path = 100;
        
          int _len_var0 = 1;
          struct gsc_variant * var = (struct gsc_variant *) malloc(_len_var0*sizeof(struct gsc_variant));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
              var[_i0].sc_down_max = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].local_sc_down = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].sc_up_max = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = gsc_check_scaler_ratio(var,sw,sh,dw,dh,rot,out_path);
          printf("%d\n", benchRet); 
          free(var);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 35
          // dynamic_instructions_O0 : 35
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 25
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 25
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 25
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int sw = 255;
        
          int sh = 255;
        
          int dw = 255;
        
          int dh = 255;
        
          int rot = 255;
        
          int out_path = 255;
        
          int _len_var0 = 65025;
          struct gsc_variant * var = (struct gsc_variant *) malloc(_len_var0*sizeof(struct gsc_variant));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
              var[_i0].sc_down_max = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].local_sc_down = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].sc_up_max = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = gsc_check_scaler_ratio(var,sw,sh,dw,dh,rot,out_path);
          printf("%d\n", benchRet); 
          free(var);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 35
          // dynamic_instructions_O0 : 35
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 25
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 25
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 25
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int sw = 10;
        
          int sh = 10;
        
          int dw = 10;
        
          int dh = 10;
        
          int rot = 10;
        
          int out_path = 10;
        
          int _len_var0 = 100;
          struct gsc_variant * var = (struct gsc_variant *) malloc(_len_var0*sizeof(struct gsc_variant));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
              var[_i0].sc_down_max = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].local_sc_down = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].sc_up_max = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = gsc_check_scaler_ratio(var,sw,sh,dw,dh,rot,out_path);
          printf("%d\n", benchRet); 
          free(var);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 35
          // dynamic_instructions_O0 : 35
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 25
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 25
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 25
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int sw = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int sh = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int dw = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int dh = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int rot = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int out_path = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_var0 = 1;
          struct gsc_variant * var = (struct gsc_variant *) malloc(_len_var0*sizeof(struct gsc_variant));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
              var[_i0].sc_down_max = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].local_sc_down = ((-2 * (next_i()%2)) + 1) * next_i();
          var[_i0].sc_up_max = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = gsc_check_scaler_ratio(var,sw,sh,dw,dh,rot,out_path);
          printf("%d\n", benchRet); 
          free(var);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
