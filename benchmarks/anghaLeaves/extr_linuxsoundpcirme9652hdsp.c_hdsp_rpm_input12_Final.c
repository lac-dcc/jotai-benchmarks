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
struct hdsp {int control_register; } ;

/* Variables and functions */
 int HDSP_RPM_Inp12 ; 
#define  HDSP_RPM_Inp12_Line_0dB 131 
#define  HDSP_RPM_Inp12_Line_n6dB 130 
#define  HDSP_RPM_Inp12_Phon_6dB 129 
#define  HDSP_RPM_Inp12_Phon_n6dB 128 

__attribute__((used)) static int hdsp_rpm_input12(struct hdsp *hdsp)
{
	switch (hdsp->control_register & HDSP_RPM_Inp12) {
	case HDSP_RPM_Inp12_Phon_6dB:
		return 0;
	case HDSP_RPM_Inp12_Phon_n6dB:
		return 2;
	case HDSP_RPM_Inp12_Line_0dB:
		return 3;
	case HDSP_RPM_Inp12_Line_n6dB:
		return 4;
	}
	return 1;
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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_hdsp0 = 65025;
          struct hdsp * hdsp = (struct hdsp *) malloc(_len_hdsp0*sizeof(struct hdsp));
          for(int _i0 = 0; _i0 < _len_hdsp0; _i0++) {
              hdsp[_i0].control_register = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = hdsp_rpm_input12(hdsp);
          printf("%d\n", benchRet); 
          free(hdsp);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_hdsp0 = 100;
          struct hdsp * hdsp = (struct hdsp *) malloc(_len_hdsp0*sizeof(struct hdsp));
          for(int _i0 = 0; _i0 < _len_hdsp0; _i0++) {
              hdsp[_i0].control_register = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = hdsp_rpm_input12(hdsp);
          printf("%d\n", benchRet); 
          free(hdsp);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_hdsp0 = 1;
          struct hdsp * hdsp = (struct hdsp *) malloc(_len_hdsp0*sizeof(struct hdsp));
          for(int _i0 = 0; _i0 < _len_hdsp0; _i0++) {
              hdsp[_i0].control_register = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = hdsp_rpm_input12(hdsp);
          printf("%d\n", benchRet); 
          free(hdsp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
