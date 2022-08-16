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
struct nfp_app {int dummy; } ;
typedef  enum devlink_eswitch_mode { ____Placeholder_devlink_eswitch_mode } devlink_eswitch_mode ;

/* Variables and functions */
 int DEVLINK_ESWITCH_MODE_SWITCHDEV ; 

__attribute__((used)) static enum devlink_eswitch_mode eswitch_mode_get(struct nfp_app *app)
{
	return DEVLINK_ESWITCH_MODE_SWITCHDEV;
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
          int _len_app0 = 1;
          struct nfp_app * app = (struct nfp_app *) malloc(_len_app0*sizeof(struct nfp_app));
          for(int _i0 = 0; _i0 < _len_app0; _i0++) {
            app[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum devlink_eswitch_mode benchRet = eswitch_mode_get(app);
          free(app);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_app0 = 100;
          struct nfp_app * app = (struct nfp_app *) malloc(_len_app0*sizeof(struct nfp_app));
          for(int _i0 = 0; _i0 < _len_app0; _i0++) {
            app[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum devlink_eswitch_mode benchRet = eswitch_mode_get(app);
          free(app);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
