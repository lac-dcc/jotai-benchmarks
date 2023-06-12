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
typedef  int uint32_t ;
struct vec4 {float x; float y; float z; float w; } ;

/* Variables and functions */

__attribute__((used)) static inline void vec4_from_rgba(struct vec4 *dst, uint32_t rgba)
{
	dst->x = (float)((double)(rgba&0xFF) * (1.0/255.0));
	rgba >>= 8;
	dst->y = (float)((double)(rgba&0xFF) * (1.0/255.0));
	rgba >>= 8;
	dst->z = (float)((double)(rgba&0xFF) * (1.0/255.0));
	rgba >>= 8;
	dst->w = (float)((double)(rgba&0xFF) * (1.0/255.0));
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
          // static_instructions_O0 : 47
          // dynamic_instructions_O0 : 47
          // ------------------------------- 
          // static_instructions_O1 : 32
          // dynamic_instructions_O1 : 32
          // ------------------------------- 
          // static_instructions_O2 : 32
          // dynamic_instructions_O2 : 32
          // ------------------------------- 
          // static_instructions_O3 : 32
          // dynamic_instructions_O3 : 32
          // ------------------------------- 
          // static_instructions_Ofast : 32
          // dynamic_instructions_Ofast : 32
          // ------------------------------- 
          // static_instructions_Os : 35
          // dynamic_instructions_Os : 35
          // ------------------------------- 
          // static_instructions_Oz : 31
          // dynamic_instructions_Oz : 31
          // ------------------------------- 

          int rgba = 100;
        
          int _len_dst0 = 1;
          struct vec4 * dst = (struct vec4 *) malloc(_len_dst0*sizeof(struct vec4));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
              dst[_i0].x = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          dst[_i0].y = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          dst[_i0].z = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          dst[_i0].w = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          }
        
          vec4_from_rgba(dst,rgba);
          free(dst);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 47
          // dynamic_instructions_O0 : 47
          // ------------------------------- 
          // static_instructions_O1 : 32
          // dynamic_instructions_O1 : 32
          // ------------------------------- 
          // static_instructions_O2 : 32
          // dynamic_instructions_O2 : 32
          // ------------------------------- 
          // static_instructions_O3 : 32
          // dynamic_instructions_O3 : 32
          // ------------------------------- 
          // static_instructions_Ofast : 32
          // dynamic_instructions_Ofast : 32
          // ------------------------------- 
          // static_instructions_Os : 35
          // dynamic_instructions_Os : 35
          // ------------------------------- 
          // static_instructions_Oz : 31
          // dynamic_instructions_Oz : 31
          // ------------------------------- 

          int rgba = 255;
        
          int _len_dst0 = 65025;
          struct vec4 * dst = (struct vec4 *) malloc(_len_dst0*sizeof(struct vec4));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
              dst[_i0].x = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          dst[_i0].y = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          dst[_i0].z = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          dst[_i0].w = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          }
        
          vec4_from_rgba(dst,rgba);
          free(dst);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 47
          // dynamic_instructions_O0 : 47
          // ------------------------------- 
          // static_instructions_O1 : 32
          // dynamic_instructions_O1 : 32
          // ------------------------------- 
          // static_instructions_O2 : 32
          // dynamic_instructions_O2 : 32
          // ------------------------------- 
          // static_instructions_O3 : 32
          // dynamic_instructions_O3 : 32
          // ------------------------------- 
          // static_instructions_Ofast : 32
          // dynamic_instructions_Ofast : 32
          // ------------------------------- 
          // static_instructions_Os : 35
          // dynamic_instructions_Os : 35
          // ------------------------------- 
          // static_instructions_Oz : 31
          // dynamic_instructions_Oz : 31
          // ------------------------------- 

          int rgba = 10;
        
          int _len_dst0 = 100;
          struct vec4 * dst = (struct vec4 *) malloc(_len_dst0*sizeof(struct vec4));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
              dst[_i0].x = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          dst[_i0].y = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          dst[_i0].z = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          dst[_i0].w = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          }
        
          vec4_from_rgba(dst,rgba);
          free(dst);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 47
          // dynamic_instructions_O0 : 47
          // ------------------------------- 
          // static_instructions_O1 : 32
          // dynamic_instructions_O1 : 32
          // ------------------------------- 
          // static_instructions_O2 : 32
          // dynamic_instructions_O2 : 32
          // ------------------------------- 
          // static_instructions_O3 : 32
          // dynamic_instructions_O3 : 32
          // ------------------------------- 
          // static_instructions_Ofast : 32
          // dynamic_instructions_Ofast : 32
          // ------------------------------- 
          // static_instructions_Os : 35
          // dynamic_instructions_Os : 35
          // ------------------------------- 
          // static_instructions_Oz : 31
          // dynamic_instructions_Oz : 31
          // ------------------------------- 

          int rgba = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dst0 = 1;
          struct vec4 * dst = (struct vec4 *) malloc(_len_dst0*sizeof(struct vec4));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
              dst[_i0].x = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          dst[_i0].y = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          dst[_i0].z = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          dst[_i0].w = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          }
        
          vec4_from_rgba(dst,rgba);
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
