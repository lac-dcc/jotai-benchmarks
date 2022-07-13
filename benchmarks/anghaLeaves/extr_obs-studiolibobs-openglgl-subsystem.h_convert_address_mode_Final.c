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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  enum gs_address_mode { ____Placeholder_gs_address_mode } gs_address_mode ;
typedef  int /*<<< orphan*/  GLint ;

/* Variables and functions */
 int /*<<< orphan*/  GL_CLAMP_TO_BORDER ; 
 int /*<<< orphan*/  GL_CLAMP_TO_EDGE ; 
 int /*<<< orphan*/  GL_MIRRORED_REPEAT ; 
 int /*<<< orphan*/  GL_MIRROR_CLAMP_EXT ; 
 int /*<<< orphan*/  GL_REPEAT ; 
#define  GS_ADDRESS_BORDER 132 
#define  GS_ADDRESS_CLAMP 131 
#define  GS_ADDRESS_MIRROR 130 
#define  GS_ADDRESS_MIRRORONCE 129 
#define  GS_ADDRESS_WRAP 128 

__attribute__((used)) static inline GLint convert_address_mode(enum gs_address_mode mode)
{
	switch (mode) {
	case GS_ADDRESS_WRAP:       return GL_REPEAT;
	case GS_ADDRESS_CLAMP:      return GL_CLAMP_TO_EDGE;
	case GS_ADDRESS_MIRROR:     return GL_MIRRORED_REPEAT;
	case GS_ADDRESS_BORDER:     return GL_CLAMP_TO_BORDER;
	case GS_ADDRESS_MIRRORONCE: return GL_MIRROR_CLAMP_EXT;
	}

	return GL_REPEAT;
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
          enum gs_address_mode mode = 0;
          int benchRet = convert_address_mode(mode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum gs_address_mode mode = 0;
          int benchRet = convert_address_mode(mode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum gs_address_mode mode = 0;
          int benchRet = convert_address_mode(mode);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
