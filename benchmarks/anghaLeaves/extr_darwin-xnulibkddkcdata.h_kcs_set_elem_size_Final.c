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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint32_t ;
typedef  TYPE_1__* kcdata_subtype_descriptor_t ;
struct TYPE_3__ {int kcs_elem_size; } ;

/* Variables and functions */

__attribute__((used)) static inline int
kcs_set_elem_size(kcdata_subtype_descriptor_t d, uint32_t size, uint32_t count)
{
	if (count > 1) {
		/* means we are setting up an array */
		if (size > 0xffff || count > 0xffff)
			return -1; //invalid argument
		d->kcs_elem_size = ((count & 0xffff) << 16 | (size & 0xffff));
	}
	else
	{
		d->kcs_elem_size = size;
	}
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
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int size = 100;
        
          int count = 100;
        
          int _len_d0 = 1;
          struct TYPE_3__ * d = (struct TYPE_3__ *) malloc(_len_d0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
              d[_i0].kcs_elem_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = kcs_set_elem_size(d,size,count);
          printf("%d\n", benchRet); 
          free(d);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int size = 255;
        
          int count = 255;
        
          int _len_d0 = 65025;
          struct TYPE_3__ * d = (struct TYPE_3__ *) malloc(_len_d0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
              d[_i0].kcs_elem_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = kcs_set_elem_size(d,size,count);
          printf("%d\n", benchRet); 
          free(d);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int size = 10;
        
          int count = 10;
        
          int _len_d0 = 100;
          struct TYPE_3__ * d = (struct TYPE_3__ *) malloc(_len_d0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
              d[_i0].kcs_elem_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = kcs_set_elem_size(d,size,count);
          printf("%d\n", benchRet); 
          free(d);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
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

          int size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_d0 = 1;
          struct TYPE_3__ * d = (struct TYPE_3__ *) malloc(_len_d0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
              d[_i0].kcs_elem_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = kcs_set_elem_size(d,size,count);
          printf("%d\n", benchRet); 
          free(d);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
