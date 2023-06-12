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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct dvb_frontend_tune_settings {int min_delay_ms; scalar_t__ max_drift; scalar_t__ step_size; } ;
struct dvb_frontend {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int mt312_get_tune_settings(struct dvb_frontend *fe,
		struct dvb_frontend_tune_settings *fesettings)
{
	fesettings->min_delay_ms = 50;
	fesettings->step_size = 0;
	fesettings->max_drift = 0;
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


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
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
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_fe0 = 65025;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              fe[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_fesettings0 = 65025;
          struct dvb_frontend_tune_settings * fesettings = (struct dvb_frontend_tune_settings *) malloc(_len_fesettings0*sizeof(struct dvb_frontend_tune_settings));
          for(int _i0 = 0; _i0 < _len_fesettings0; _i0++) {
              fesettings[_i0].min_delay_ms = ((-2 * (next_i()%2)) + 1) * next_i();
          fesettings[_i0].max_drift = ((-2 * (next_i()%2)) + 1) * next_i();
          fesettings[_i0].step_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mt312_get_tune_settings(fe,fesettings);
          printf("%d\n", benchRet); 
          free(fe);
          free(fesettings);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
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
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_fe0 = 100;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              fe[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_fesettings0 = 100;
          struct dvb_frontend_tune_settings * fesettings = (struct dvb_frontend_tune_settings *) malloc(_len_fesettings0*sizeof(struct dvb_frontend_tune_settings));
          for(int _i0 = 0; _i0 < _len_fesettings0; _i0++) {
              fesettings[_i0].min_delay_ms = ((-2 * (next_i()%2)) + 1) * next_i();
          fesettings[_i0].max_drift = ((-2 * (next_i()%2)) + 1) * next_i();
          fesettings[_i0].step_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mt312_get_tune_settings(fe,fesettings);
          printf("%d\n", benchRet); 
          free(fe);
          free(fesettings);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
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
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_fe0 = 1;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              fe[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_fesettings0 = 1;
          struct dvb_frontend_tune_settings * fesettings = (struct dvb_frontend_tune_settings *) malloc(_len_fesettings0*sizeof(struct dvb_frontend_tune_settings));
          for(int _i0 = 0; _i0 < _len_fesettings0; _i0++) {
              fesettings[_i0].min_delay_ms = ((-2 * (next_i()%2)) + 1) * next_i();
          fesettings[_i0].max_drift = ((-2 * (next_i()%2)) + 1) * next_i();
          fesettings[_i0].step_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mt312_get_tune_settings(fe,fesettings);
          printf("%d\n", benchRet); 
          free(fe);
          free(fesettings);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
