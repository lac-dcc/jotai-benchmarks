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
       0            empty\n\
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
typedef  scalar_t__ u32 ;
struct unicam_fmt {scalar_t__ code; } ;
struct unicam_device {unsigned int num_active_fmt; struct unicam_fmt* active_fmts; } ;

/* Variables and functions */

__attribute__((used)) static const struct unicam_fmt *find_format_by_code(struct unicam_device *dev,
						    u32 code)
{
	const struct unicam_fmt *fmt;
	unsigned int k;

	for (k = 0; k < dev->num_active_fmt; k++) {
		fmt = &dev->active_fmts[k];
		if (fmt->code == code)
			return fmt;
	}

	return NULL;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          long code = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dev0 = 1;
          struct unicam_device * dev = (struct unicam_device *) malloc(_len_dev0*sizeof(struct unicam_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].num_active_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__active_fmts0 = 1;
          dev[_i0].active_fmts = (struct unicam_fmt *) malloc(_len_dev__i0__active_fmts0*sizeof(struct unicam_fmt));
          for(int _j0 = 0; _j0 < _len_dev__i0__active_fmts0; _j0++) {
              dev[_i0].active_fmts->code = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          const struct unicam_fmt * benchRet = find_format_by_code(dev,code);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].active_fmts);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
