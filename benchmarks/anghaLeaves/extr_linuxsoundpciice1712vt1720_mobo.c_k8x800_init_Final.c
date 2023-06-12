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
struct snd_ice1712 {int vt1720; int num_total_dacs; int num_total_adcs; } ;

/* Variables and functions */

__attribute__((used)) static int k8x800_init(struct snd_ice1712 *ice)
{
	ice->vt1720 = 1;

	/* VT1616 codec */
	ice->num_total_dacs = 6;
	ice->num_total_adcs = 2;

	/* WM8728 codec */
	/* FIXME: TODO */

	return 0;
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
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_ice0 = 65025;
          struct snd_ice1712 * ice = (struct snd_ice1712 *) malloc(_len_ice0*sizeof(struct snd_ice1712));
          for(int _i0 = 0; _i0 < _len_ice0; _i0++) {
              ice[_i0].vt1720 = ((-2 * (next_i()%2)) + 1) * next_i();
          ice[_i0].num_total_dacs = ((-2 * (next_i()%2)) + 1) * next_i();
          ice[_i0].num_total_adcs = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = k8x800_init(ice);
          printf("%d\n", benchRet); 
          free(ice);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_ice0 = 100;
          struct snd_ice1712 * ice = (struct snd_ice1712 *) malloc(_len_ice0*sizeof(struct snd_ice1712));
          for(int _i0 = 0; _i0 < _len_ice0; _i0++) {
              ice[_i0].vt1720 = ((-2 * (next_i()%2)) + 1) * next_i();
          ice[_i0].num_total_dacs = ((-2 * (next_i()%2)) + 1) * next_i();
          ice[_i0].num_total_adcs = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = k8x800_init(ice);
          printf("%d\n", benchRet); 
          free(ice);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_ice0 = 1;
          struct snd_ice1712 * ice = (struct snd_ice1712 *) malloc(_len_ice0*sizeof(struct snd_ice1712));
          for(int _i0 = 0; _i0 < _len_ice0; _i0++) {
              ice[_i0].vt1720 = ((-2 * (next_i()%2)) + 1) * next_i();
          ice[_i0].num_total_dacs = ((-2 * (next_i()%2)) + 1) * next_i();
          ice[_i0].num_total_adcs = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = k8x800_init(ice);
          printf("%d\n", benchRet); 
          free(ice);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
