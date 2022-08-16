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
struct vmw_sw_context {int dummy; } ;
struct vmw_private {int dummy; } ;
typedef  int /*<<< orphan*/  SVGA3dCmdHeader ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int vmw_cmd_invalid(struct vmw_private *dev_priv,
			   struct vmw_sw_context *sw_context,
			   SVGA3dCmdHeader *header)
{
	return -EINVAL;
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
          int _len_dev_priv0 = 1;
          struct vmw_private * dev_priv = (struct vmw_private *) malloc(_len_dev_priv0*sizeof(struct vmw_private));
          for(int _i0 = 0; _i0 < _len_dev_priv0; _i0++) {
            dev_priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sw_context0 = 1;
          struct vmw_sw_context * sw_context = (struct vmw_sw_context *) malloc(_len_sw_context0*sizeof(struct vmw_sw_context));
          for(int _i0 = 0; _i0 < _len_sw_context0; _i0++) {
            sw_context[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_header0 = 1;
          int * header = (int *) malloc(_len_header0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_header0; _i0++) {
            header[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vmw_cmd_invalid(dev_priv,sw_context,header);
          printf("%d\n", benchRet); 
          free(dev_priv);
          free(sw_context);
          free(header);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
