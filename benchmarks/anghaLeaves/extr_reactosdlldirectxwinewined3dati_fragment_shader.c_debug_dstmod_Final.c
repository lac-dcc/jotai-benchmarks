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
typedef  int GLuint ;

/* Variables and functions */
#define  GL_2X_BIT_ATI 135 
#define  GL_4X_BIT_ATI 134 
#define  GL_8X_BIT_ATI 133 
#define  GL_EIGHTH_BIT_ATI 132 
#define  GL_HALF_BIT_ATI 131 
#define  GL_NONE 130 
#define  GL_QUARTER_BIT_ATI 129 
#define  GL_SATURATE_BIT_ATI 128 

__attribute__((used)) static const char *debug_dstmod(GLuint mod) {
    switch(mod) {
        case GL_NONE:               return "GL_NONE";
        case GL_2X_BIT_ATI:         return "GL_2X_BIT_ATI";
        case GL_4X_BIT_ATI:         return "GL_4X_BIT_ATI";
        case GL_8X_BIT_ATI:         return "GL_8X_BIT_ATI";
        case GL_HALF_BIT_ATI:       return "GL_HALF_BIT_ATI";
        case GL_QUARTER_BIT_ATI:    return "GL_QUARTER_BIT_ATI";
        case GL_EIGHTH_BIT_ATI:     return "GL_EIGHTH_BIT_ATI";
        case GL_SATURATE_BIT_ATI:   return "GL_SATURATE_BIT_ATI";
        default:                    return "Unexpected modifier\n";
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
          int mod = 100;
          const char * benchRet = debug_dstmod(mod);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int mod = 255;
          const char * benchRet = debug_dstmod(mod);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mod = 10;
          const char * benchRet = debug_dstmod(mod);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
