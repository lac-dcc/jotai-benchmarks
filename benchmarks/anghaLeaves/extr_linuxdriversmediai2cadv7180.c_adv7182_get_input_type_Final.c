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
typedef  enum adv7182_input_type { ____Placeholder_adv7182_input_type } adv7182_input_type ;

/* Variables and functions */
#define  ADV7182_INPUT_CVBS_AIN1 145 
#define  ADV7182_INPUT_CVBS_AIN2 144 
#define  ADV7182_INPUT_CVBS_AIN3 143 
#define  ADV7182_INPUT_CVBS_AIN4 142 
#define  ADV7182_INPUT_CVBS_AIN5 141 
#define  ADV7182_INPUT_CVBS_AIN6 140 
#define  ADV7182_INPUT_CVBS_AIN7 139 
#define  ADV7182_INPUT_CVBS_AIN8 138 
#define  ADV7182_INPUT_DIFF_CVBS_AIN1_AIN2 137 
#define  ADV7182_INPUT_DIFF_CVBS_AIN3_AIN4 136 
#define  ADV7182_INPUT_DIFF_CVBS_AIN5_AIN6 135 
#define  ADV7182_INPUT_DIFF_CVBS_AIN7_AIN8 134 
#define  ADV7182_INPUT_SVIDEO_AIN1_AIN2 133 
#define  ADV7182_INPUT_SVIDEO_AIN3_AIN4 132 
#define  ADV7182_INPUT_SVIDEO_AIN5_AIN6 131 
#define  ADV7182_INPUT_SVIDEO_AIN7_AIN8 130 
 int ADV7182_INPUT_TYPE_CVBS ; 
 int ADV7182_INPUT_TYPE_DIFF_CVBS ; 
 int ADV7182_INPUT_TYPE_SVIDEO ; 
 int ADV7182_INPUT_TYPE_YPBPR ; 
#define  ADV7182_INPUT_YPRPB_AIN1_AIN2_AIN3 129 
#define  ADV7182_INPUT_YPRPB_AIN4_AIN5_AIN6 128 

__attribute__((used)) static enum adv7182_input_type adv7182_get_input_type(unsigned int input)
{
	switch (input) {
	case ADV7182_INPUT_CVBS_AIN1:
	case ADV7182_INPUT_CVBS_AIN2:
	case ADV7182_INPUT_CVBS_AIN3:
	case ADV7182_INPUT_CVBS_AIN4:
	case ADV7182_INPUT_CVBS_AIN5:
	case ADV7182_INPUT_CVBS_AIN6:
	case ADV7182_INPUT_CVBS_AIN7:
	case ADV7182_INPUT_CVBS_AIN8:
		return ADV7182_INPUT_TYPE_CVBS;
	case ADV7182_INPUT_SVIDEO_AIN1_AIN2:
	case ADV7182_INPUT_SVIDEO_AIN3_AIN4:
	case ADV7182_INPUT_SVIDEO_AIN5_AIN6:
	case ADV7182_INPUT_SVIDEO_AIN7_AIN8:
		return ADV7182_INPUT_TYPE_SVIDEO;
	case ADV7182_INPUT_YPRPB_AIN1_AIN2_AIN3:
	case ADV7182_INPUT_YPRPB_AIN4_AIN5_AIN6:
		return ADV7182_INPUT_TYPE_YPBPR;
	case ADV7182_INPUT_DIFF_CVBS_AIN1_AIN2:
	case ADV7182_INPUT_DIFF_CVBS_AIN3_AIN4:
	case ADV7182_INPUT_DIFF_CVBS_AIN5_AIN6:
	case ADV7182_INPUT_DIFF_CVBS_AIN7_AIN8:
		return ADV7182_INPUT_TYPE_DIFF_CVBS;
	default: /* Will never happen */
		return 0;
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

    // int-bounds
    case 0:
    {
          unsigned int input = 100;
          enum adv7182_input_type benchRet = adv7182_get_input_type(input);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int input = 255;
          enum adv7182_input_type benchRet = adv7182_get_input_type(input);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int input = 10;
          enum adv7182_input_type benchRet = adv7182_get_input_type(input);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
