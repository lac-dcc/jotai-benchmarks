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
struct drm_i915_error_state_buf {unsigned int pos; unsigned int start; unsigned int size; int /*<<< orphan*/  err; } ;

/* Variables and functions */
 int /*<<< orphan*/  EIO ; 

__attribute__((used)) static bool __i915_error_seek(struct drm_i915_error_state_buf *e,
			      unsigned len)
{
	if (e->pos + len <= e->start) {
		e->pos += len;
		return false;
	}

	/* First vsnprintf needs to fit in its entirety for memmove */
	if (len >= e->size) {
		e->err = -EIO;
		return false;
	}

	return true;
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
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          unsigned int len = 100;
        
          int _len_e0 = 1;
          struct drm_i915_error_state_buf * e = (struct drm_i915_error_state_buf *) malloc(_len_e0*sizeof(struct drm_i915_error_state_buf));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              e[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].err = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = __i915_error_seek(e,len);
          printf("%d\n", benchRet); 
          free(e);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
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
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int len = 255;
        
          int _len_e0 = 65025;
          struct drm_i915_error_state_buf * e = (struct drm_i915_error_state_buf *) malloc(_len_e0*sizeof(struct drm_i915_error_state_buf));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              e[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].err = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = __i915_error_seek(e,len);
          printf("%d\n", benchRet); 
          free(e);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          unsigned int len = 10;
        
          int _len_e0 = 100;
          struct drm_i915_error_state_buf * e = (struct drm_i915_error_state_buf *) malloc(_len_e0*sizeof(struct drm_i915_error_state_buf));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              e[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].err = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = __i915_error_seek(e,len);
          printf("%d\n", benchRet); 
          free(e);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
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
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_e0 = 1;
          struct drm_i915_error_state_buf * e = (struct drm_i915_error_state_buf *) malloc(_len_e0*sizeof(struct drm_i915_error_state_buf));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              e[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].err = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = __i915_error_seek(e,len);
          printf("%d\n", benchRet); 
          free(e);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
