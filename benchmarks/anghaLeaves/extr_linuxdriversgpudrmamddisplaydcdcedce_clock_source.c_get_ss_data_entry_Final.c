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
typedef  scalar_t__ uint32_t ;
typedef  struct spread_spectrum_data {scalar_t__ freq_range_khz; } const spread_spectrum_data ;
struct dce110_clk_src {scalar_t__ dvi_ss_params_cnt; scalar_t__ hdmi_ss_params_cnt; scalar_t__ dp_ss_params_cnt; struct spread_spectrum_data const* dp_ss_params; struct spread_spectrum_data const* hdmi_ss_params; struct spread_spectrum_data const* dvi_ss_params; } ;
typedef  enum signal_type { ____Placeholder_signal_type } signal_type ;

/* Variables and functions */
#define  SIGNAL_TYPE_DISPLAY_PORT 134 
#define  SIGNAL_TYPE_DISPLAY_PORT_MST 133 
#define  SIGNAL_TYPE_DVI_DUAL_LINK 132 
#define  SIGNAL_TYPE_DVI_SINGLE_LINK 131 
#define  SIGNAL_TYPE_EDP 130 
#define  SIGNAL_TYPE_HDMI_TYPE_A 129 
#define  SIGNAL_TYPE_VIRTUAL 128 

__attribute__((used)) static const struct spread_spectrum_data *get_ss_data_entry(
		struct dce110_clk_src *clk_src,
		enum signal_type signal,
		uint32_t pix_clk_khz)
{

	uint32_t entrys_num;
	uint32_t i;
	struct spread_spectrum_data *ss_parm = NULL;
	struct spread_spectrum_data *ret = NULL;

	switch (signal) {
	case SIGNAL_TYPE_DVI_SINGLE_LINK:
	case SIGNAL_TYPE_DVI_DUAL_LINK:
		ss_parm = clk_src->dvi_ss_params;
		entrys_num = clk_src->dvi_ss_params_cnt;
		break;

	case SIGNAL_TYPE_HDMI_TYPE_A:
		ss_parm = clk_src->hdmi_ss_params;
		entrys_num = clk_src->hdmi_ss_params_cnt;
		break;

	case SIGNAL_TYPE_DISPLAY_PORT:
	case SIGNAL_TYPE_DISPLAY_PORT_MST:
	case SIGNAL_TYPE_EDP:
	case SIGNAL_TYPE_VIRTUAL:
		ss_parm = clk_src->dp_ss_params;
		entrys_num = clk_src->dp_ss_params_cnt;
		break;

	default:
		ss_parm = NULL;
		entrys_num = 0;
		break;
	}

	if (ss_parm == NULL)
		return ret;

	for (i = 0; i < entrys_num; ++i, ++ss_parm) {
		if (ss_parm->freq_range_khz >= pix_clk_khz) {
			ret = ss_parm;
			break;
		}
	}

	return ret;
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
          // static_instructions_O0 : 40
          // dynamic_instructions_O0 : 40
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          enum signal_type signal = 0;
        
          long pix_clk_khz = 100;
        
          int _len_clk_src0 = 1;
          struct dce110_clk_src * clk_src = (struct dce110_clk_src *) malloc(_len_clk_src0*sizeof(struct dce110_clk_src));
          for(int _i0 = 0; _i0 < _len_clk_src0; _i0++) {
              clk_src[_i0].dvi_ss_params_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          clk_src[_i0].hdmi_ss_params_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          clk_src[_i0].dp_ss_params_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_clk_src__i0__dp_ss_params0 = 1;
          clk_src[_i0].dp_ss_params = (const struct spread_spectrum_data *) malloc(_len_clk_src__i0__dp_ss_params0*sizeof(const struct spread_spectrum_data));
          for(int _j0 = 0; _j0 < _len_clk_src__i0__dp_ss_params0; _j0++) {
            
          }
          int _len_clk_src__i0__hdmi_ss_params0 = 1;
          clk_src[_i0].hdmi_ss_params = (const struct spread_spectrum_data *) malloc(_len_clk_src__i0__hdmi_ss_params0*sizeof(const struct spread_spectrum_data));
          for(int _j0 = 0; _j0 < _len_clk_src__i0__hdmi_ss_params0; _j0++) {
            
          }
          int _len_clk_src__i0__dvi_ss_params0 = 1;
          clk_src[_i0].dvi_ss_params = (const struct spread_spectrum_data *) malloc(_len_clk_src__i0__dvi_ss_params0*sizeof(const struct spread_spectrum_data));
          for(int _j0 = 0; _j0 < _len_clk_src__i0__dvi_ss_params0; _j0++) {
            
          }
        
          }
        
          const struct spread_spectrum_data * benchRet = get_ss_data_entry(clk_src,signal,pix_clk_khz);
          for(int _aux = 0; _aux < _len_clk_src0; _aux++) {
          free(clk_src[_aux].dp_ss_params);
          }
          for(int _aux = 0; _aux < _len_clk_src0; _aux++) {
          free(clk_src[_aux].hdmi_ss_params);
          }
          for(int _aux = 0; _aux < _len_clk_src0; _aux++) {
          free(clk_src[_aux].dvi_ss_params);
          }
          free(clk_src);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 40
          // dynamic_instructions_O0 : 40
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          enum signal_type signal = 0;
        
          long pix_clk_khz = 255;
        
          int _len_clk_src0 = 65025;
          struct dce110_clk_src * clk_src = (struct dce110_clk_src *) malloc(_len_clk_src0*sizeof(struct dce110_clk_src));
          for(int _i0 = 0; _i0 < _len_clk_src0; _i0++) {
              clk_src[_i0].dvi_ss_params_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          clk_src[_i0].hdmi_ss_params_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          clk_src[_i0].dp_ss_params_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_clk_src__i0__dp_ss_params0 = 1;
          clk_src[_i0].dp_ss_params = (const struct spread_spectrum_data *) malloc(_len_clk_src__i0__dp_ss_params0*sizeof(const struct spread_spectrum_data));
          for(int _j0 = 0; _j0 < _len_clk_src__i0__dp_ss_params0; _j0++) {
            
          }
          int _len_clk_src__i0__hdmi_ss_params0 = 1;
          clk_src[_i0].hdmi_ss_params = (const struct spread_spectrum_data *) malloc(_len_clk_src__i0__hdmi_ss_params0*sizeof(const struct spread_spectrum_data));
          for(int _j0 = 0; _j0 < _len_clk_src__i0__hdmi_ss_params0; _j0++) {
            
          }
          int _len_clk_src__i0__dvi_ss_params0 = 1;
          clk_src[_i0].dvi_ss_params = (const struct spread_spectrum_data *) malloc(_len_clk_src__i0__dvi_ss_params0*sizeof(const struct spread_spectrum_data));
          for(int _j0 = 0; _j0 < _len_clk_src__i0__dvi_ss_params0; _j0++) {
            
          }
        
          }
        
          const struct spread_spectrum_data * benchRet = get_ss_data_entry(clk_src,signal,pix_clk_khz);
          for(int _aux = 0; _aux < _len_clk_src0; _aux++) {
          free(clk_src[_aux].dp_ss_params);
          }
          for(int _aux = 0; _aux < _len_clk_src0; _aux++) {
          free(clk_src[_aux].hdmi_ss_params);
          }
          for(int _aux = 0; _aux < _len_clk_src0; _aux++) {
          free(clk_src[_aux].dvi_ss_params);
          }
          free(clk_src);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 40
          // dynamic_instructions_O0 : 40
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          enum signal_type signal = 0;
        
          long pix_clk_khz = 10;
        
          int _len_clk_src0 = 100;
          struct dce110_clk_src * clk_src = (struct dce110_clk_src *) malloc(_len_clk_src0*sizeof(struct dce110_clk_src));
          for(int _i0 = 0; _i0 < _len_clk_src0; _i0++) {
              clk_src[_i0].dvi_ss_params_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          clk_src[_i0].hdmi_ss_params_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          clk_src[_i0].dp_ss_params_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_clk_src__i0__dp_ss_params0 = 1;
          clk_src[_i0].dp_ss_params = (const struct spread_spectrum_data *) malloc(_len_clk_src__i0__dp_ss_params0*sizeof(const struct spread_spectrum_data));
          for(int _j0 = 0; _j0 < _len_clk_src__i0__dp_ss_params0; _j0++) {
            
          }
          int _len_clk_src__i0__hdmi_ss_params0 = 1;
          clk_src[_i0].hdmi_ss_params = (const struct spread_spectrum_data *) malloc(_len_clk_src__i0__hdmi_ss_params0*sizeof(const struct spread_spectrum_data));
          for(int _j0 = 0; _j0 < _len_clk_src__i0__hdmi_ss_params0; _j0++) {
            
          }
          int _len_clk_src__i0__dvi_ss_params0 = 1;
          clk_src[_i0].dvi_ss_params = (const struct spread_spectrum_data *) malloc(_len_clk_src__i0__dvi_ss_params0*sizeof(const struct spread_spectrum_data));
          for(int _j0 = 0; _j0 < _len_clk_src__i0__dvi_ss_params0; _j0++) {
            
          }
        
          }
        
          const struct spread_spectrum_data * benchRet = get_ss_data_entry(clk_src,signal,pix_clk_khz);
          for(int _aux = 0; _aux < _len_clk_src0; _aux++) {
          free(clk_src[_aux].dp_ss_params);
          }
          for(int _aux = 0; _aux < _len_clk_src0; _aux++) {
          free(clk_src[_aux].hdmi_ss_params);
          }
          for(int _aux = 0; _aux < _len_clk_src0; _aux++) {
          free(clk_src[_aux].dvi_ss_params);
          }
          free(clk_src);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 40
          // dynamic_instructions_O0 : 40
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          enum signal_type signal = 0;
        
          long pix_clk_khz = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_clk_src0 = 1;
          struct dce110_clk_src * clk_src = (struct dce110_clk_src *) malloc(_len_clk_src0*sizeof(struct dce110_clk_src));
          for(int _i0 = 0; _i0 < _len_clk_src0; _i0++) {
              clk_src[_i0].dvi_ss_params_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          clk_src[_i0].hdmi_ss_params_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          clk_src[_i0].dp_ss_params_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_clk_src__i0__dp_ss_params0 = 1;
          clk_src[_i0].dp_ss_params = (const struct spread_spectrum_data *) malloc(_len_clk_src__i0__dp_ss_params0*sizeof(const struct spread_spectrum_data));
          for(int _j0 = 0; _j0 < _len_clk_src__i0__dp_ss_params0; _j0++) {
            
          }
          int _len_clk_src__i0__hdmi_ss_params0 = 1;
          clk_src[_i0].hdmi_ss_params = (const struct spread_spectrum_data *) malloc(_len_clk_src__i0__hdmi_ss_params0*sizeof(const struct spread_spectrum_data));
          for(int _j0 = 0; _j0 < _len_clk_src__i0__hdmi_ss_params0; _j0++) {
            
          }
          int _len_clk_src__i0__dvi_ss_params0 = 1;
          clk_src[_i0].dvi_ss_params = (const struct spread_spectrum_data *) malloc(_len_clk_src__i0__dvi_ss_params0*sizeof(const struct spread_spectrum_data));
          for(int _j0 = 0; _j0 < _len_clk_src__i0__dvi_ss_params0; _j0++) {
            
          }
        
          }
        
          const struct spread_spectrum_data * benchRet = get_ss_data_entry(clk_src,signal,pix_clk_khz);
          for(int _aux = 0; _aux < _len_clk_src0; _aux++) {
          free(clk_src[_aux].dp_ss_params);
          }
          for(int _aux = 0; _aux < _len_clk_src0; _aux++) {
          free(clk_src[_aux].hdmi_ss_params);
          }
          for(int _aux = 0; _aux < _len_clk_src0; _aux++) {
          free(clk_src[_aux].dvi_ss_params);
          }
          free(clk_src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
