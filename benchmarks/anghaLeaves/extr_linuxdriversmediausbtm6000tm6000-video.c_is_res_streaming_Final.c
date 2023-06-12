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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct tm6000_fh {int dummy; } ;
struct tm6000_core {struct tm6000_fh* resources; } ;

/* Variables and functions */

__attribute__((used)) static bool is_res_streaming(struct tm6000_core *dev, struct tm6000_fh *fh)
{
	/* Is the current fh handling it? if so, that's OK */
	if (dev->resources == fh)
		return true;

	return false;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int _len_dev0 = 65025;
          struct tm6000_core * dev = (struct tm6000_core *) malloc(_len_dev0*sizeof(struct tm6000_core));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__resources0 = 1;
          dev[_i0].resources = (struct tm6000_fh *) malloc(_len_dev__i0__resources0*sizeof(struct tm6000_fh));
          for(int _j0 = 0; _j0 < _len_dev__i0__resources0; _j0++) {
              dev[_i0].resources->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_fh0 = 65025;
          struct tm6000_fh * fh = (struct tm6000_fh *) malloc(_len_fh0*sizeof(struct tm6000_fh));
          for(int _i0 = 0; _i0 < _len_fh0; _i0++) {
              fh[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = is_res_streaming(dev,fh);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].resources);
          }
          free(dev);
          free(fh);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_dev0 = 100;
          struct tm6000_core * dev = (struct tm6000_core *) malloc(_len_dev0*sizeof(struct tm6000_core));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__resources0 = 1;
          dev[_i0].resources = (struct tm6000_fh *) malloc(_len_dev__i0__resources0*sizeof(struct tm6000_fh));
          for(int _j0 = 0; _j0 < _len_dev__i0__resources0; _j0++) {
              dev[_i0].resources->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_fh0 = 100;
          struct tm6000_fh * fh = (struct tm6000_fh *) malloc(_len_fh0*sizeof(struct tm6000_fh));
          for(int _i0 = 0; _i0 < _len_fh0; _i0++) {
              fh[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = is_res_streaming(dev,fh);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].resources);
          }
          free(dev);
          free(fh);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_dev0 = 1;
          struct tm6000_core * dev = (struct tm6000_core *) malloc(_len_dev0*sizeof(struct tm6000_core));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__resources0 = 1;
          dev[_i0].resources = (struct tm6000_fh *) malloc(_len_dev__i0__resources0*sizeof(struct tm6000_fh));
          for(int _j0 = 0; _j0 < _len_dev__i0__resources0; _j0++) {
              dev[_i0].resources->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_fh0 = 1;
          struct tm6000_fh * fh = (struct tm6000_fh *) malloc(_len_fh0*sizeof(struct tm6000_fh));
          for(int _i0 = 0; _i0 < _len_fh0; _i0++) {
              fh[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = is_res_streaming(dev,fh);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].resources);
          }
          free(dev);
          free(fh);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
