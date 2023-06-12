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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  struct pxa_camera_format_xlate {TYPE_1__* host_fmt; scalar_t__ code; } const pxa_camera_format_xlate ;
struct TYPE_2__ {unsigned int fourcc; } ;

/* Variables and functions */

__attribute__((used)) static const struct pxa_camera_format_xlate
*pxa_mbus_xlate_by_fourcc(struct pxa_camera_format_xlate *user_formats,
			  unsigned int fourcc)
{
	unsigned int i;

	for (i = 0; user_formats[i].code; i++)
		if (user_formats[i].host_fmt->fourcc == fourcc)
			return user_formats + i;
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
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
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
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          unsigned int fourcc = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_user_formats0 = 1;
          struct pxa_camera_format_xlate * user_formats = (struct pxa_camera_format_xlate *) malloc(_len_user_formats0*sizeof(struct pxa_camera_format_xlate));
          for(int _i0 = 0; _i0 < _len_user_formats0; _i0++) {
              int _len_user_formats__i0__host_fmt0 = 1;
          user_formats[_i0].host_fmt = (struct TYPE_2__ *) malloc(_len_user_formats__i0__host_fmt0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_user_formats__i0__host_fmt0; _j0++) {
              user_formats[_i0].host_fmt->fourcc = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          user_formats[_i0].code = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          const struct pxa_camera_format_xlate * benchRet = pxa_mbus_xlate_by_fourcc(user_formats,fourcc);
          for(int _aux = 0; _aux < _len_user_formats0; _aux++) {
          free(user_formats[_aux].host_fmt);
          }
          free(user_formats);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
