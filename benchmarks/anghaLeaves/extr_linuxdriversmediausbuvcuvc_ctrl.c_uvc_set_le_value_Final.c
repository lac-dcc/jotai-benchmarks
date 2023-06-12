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
typedef  int u8 ;
struct uvc_control_mapping {int size; int offset; scalar_t__ v4l2_type; } ;
typedef  int s32 ;

/* Variables and functions */
 scalar_t__ V4L2_CTRL_TYPE_BUTTON ; 

__attribute__((used)) static void uvc_set_le_value(struct uvc_control_mapping *mapping,
	s32 value, u8 *data)
{
	int bits = mapping->size;
	int offset = mapping->offset;
	u8 mask;

	/* According to the v4l2 spec, writing any value to a button control
	 * should result in the action belonging to the button control being
	 * triggered. UVC devices however want to see a 1 written -> override
	 * value.
	 */
	if (mapping->v4l2_type == V4L2_CTRL_TYPE_BUTTON)
		value = -1;

	data += offset / 8;
	offset &= 7;

	for (; bits > 0; data++) {
		mask = ((1LL << bits) - 1) << offset;
		*data = (*data & ~mask) | ((value << offset) & mask);
		value >>= offset ? offset : 8;
		bits -= 8 - offset;
		offset = 0;
	}
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
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 21
          // ------------------------------- 

          int value = 100;
        
          int _len_mapping0 = 1;
          struct uvc_control_mapping * mapping = (struct uvc_control_mapping *) malloc(_len_mapping0*sizeof(struct uvc_control_mapping));
          for(int _i0 = 0; _i0 < _len_mapping0; _i0++) {
              mapping[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          mapping[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          mapping[_i0].v4l2_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_data0 = 1;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          uvc_set_le_value(mapping,value,data);
          free(mapping);
          free(data);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 21
          // ------------------------------- 

          int value = 255;
        
          int _len_mapping0 = 65025;
          struct uvc_control_mapping * mapping = (struct uvc_control_mapping *) malloc(_len_mapping0*sizeof(struct uvc_control_mapping));
          for(int _i0 = 0; _i0 < _len_mapping0; _i0++) {
              mapping[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          mapping[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          mapping[_i0].v4l2_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_data0 = 65025;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          uvc_set_le_value(mapping,value,data);
          free(mapping);
          free(data);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 21
          // ------------------------------- 

          int value = 10;
        
          int _len_mapping0 = 100;
          struct uvc_control_mapping * mapping = (struct uvc_control_mapping *) malloc(_len_mapping0*sizeof(struct uvc_control_mapping));
          for(int _i0 = 0; _i0 < _len_mapping0; _i0++) {
              mapping[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          mapping[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          mapping[_i0].v4l2_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_data0 = 100;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          uvc_set_le_value(mapping,value,data);
          free(mapping);
          free(data);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 21
          // ------------------------------- 

          int value = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_mapping0 = 1;
          struct uvc_control_mapping * mapping = (struct uvc_control_mapping *) malloc(_len_mapping0*sizeof(struct uvc_control_mapping));
          for(int _i0 = 0; _i0 < _len_mapping0; _i0++) {
              mapping[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          mapping[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          mapping[_i0].v4l2_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_data0 = 1;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          uvc_set_le_value(mapping,value,data);
          free(mapping);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
