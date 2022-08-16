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
       1            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  uint32_t ;
struct drm_i915_private {int dummy; } ;
typedef  enum pipe { ____Placeholder_pipe } pipe ;

/* Variables and functions */

__attribute__((used)) static inline void
display_pipe_crc_irq_handler(struct drm_i915_private *dev_priv,
			     enum pipe pipe,
			     uint32_t crc0, uint32_t crc1,
			     uint32_t crc2, uint32_t crc3,
			     uint32_t crc4) {}


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
          enum pipe pipe = 0;
          int crc0 = 100;
          int crc1 = 100;
          int crc2 = 100;
          int crc3 = 100;
          int crc4 = 100;
          int _len_dev_priv0 = 1;
          struct drm_i915_private * dev_priv = (struct drm_i915_private *) malloc(_len_dev_priv0*sizeof(struct drm_i915_private));
          for(int _i0 = 0; _i0 < _len_dev_priv0; _i0++) {
            dev_priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          display_pipe_crc_irq_handler(dev_priv,pipe,crc0,crc1,crc2,crc3,crc4);
          free(dev_priv);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum pipe pipe = 0;
          int crc0 = 10;
          int crc1 = 10;
          int crc2 = 10;
          int crc3 = 10;
          int crc4 = 10;
          int _len_dev_priv0 = 100;
          struct drm_i915_private * dev_priv = (struct drm_i915_private *) malloc(_len_dev_priv0*sizeof(struct drm_i915_private));
          for(int _i0 = 0; _i0 < _len_dev_priv0; _i0++) {
            dev_priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          display_pipe_crc_irq_handler(dev_priv,pipe,crc0,crc1,crc2,crc3,crc4);
          free(dev_priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
