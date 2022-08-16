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
typedef  enum gs_stencil_op_type { ____Placeholder_gs_stencil_op_type } gs_stencil_op_type ;
typedef  int /*<<< orphan*/  GLenum ;

/* Variables and functions */
 int /*<<< orphan*/  GL_DECR ; 
 int /*<<< orphan*/  GL_INCR ; 
 int /*<<< orphan*/  GL_INVERT ; 
 int /*<<< orphan*/  GL_KEEP ; 
 int /*<<< orphan*/  GL_REPLACE ; 
 int /*<<< orphan*/  GL_ZERO ; 
#define  GS_DECR 133 
#define  GS_INCR 132 
#define  GS_INVERT 131 
#define  GS_KEEP 130 
#define  GS_REPLACE 129 
#define  GS_ZERO 128 

__attribute__((used)) static inline GLenum convert_gs_stencil_op(enum gs_stencil_op_type op)
{
	switch (op) {
	case GS_KEEP:    return GL_KEEP;
	case GS_ZERO:    return GL_ZERO;
	case GS_REPLACE: return GL_REPLACE;
	case GS_INCR:    return GL_INCR;
	case GS_DECR:    return GL_DECR;
	case GS_INVERT:  return GL_INVERT;
	}

	return GL_KEEP;
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
          enum gs_stencil_op_type op = 0;
          int benchRet = convert_gs_stencil_op(op);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
