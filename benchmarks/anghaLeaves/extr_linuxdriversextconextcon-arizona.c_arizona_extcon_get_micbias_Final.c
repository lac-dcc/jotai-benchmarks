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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct arizona_extcon_info {TYPE_1__* micd_modes; } ;
struct TYPE_2__ {int bias; } ;

/* Variables and functions */

__attribute__((used)) static const char *arizona_extcon_get_micbias(struct arizona_extcon_info *info)
{
	switch (info->micd_modes[0].bias) {
	case 1:
		return "MICBIAS1";
	case 2:
		return "MICBIAS2";
	case 3:
		return "MICBIAS3";
	default:
		return "MICVDD";
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
          int _len_info0 = 1;
          struct arizona_extcon_info * info = (struct arizona_extcon_info *) malloc(_len_info0*sizeof(struct arizona_extcon_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__micd_modes0 = 1;
          info[_i0].micd_modes = (struct TYPE_2__ *) malloc(_len_info__i0__micd_modes0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_info__i0__micd_modes0; _j0++) {
            info[_i0].micd_modes->bias = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const char * benchRet = arizona_extcon_get_micbias(info);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].micd_modes);
          }
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
