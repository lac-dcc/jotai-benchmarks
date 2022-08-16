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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct pwc_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ alternate; } ;

/* Variables and functions */
 unsigned int PWC_FPS_MAX_TIMON ; 
 unsigned int* Timon_fps_vector ; 
 TYPE_1__*** Timon_table ; 

__attribute__((used)) static unsigned int pwc_get_fps_Timon(struct pwc_device *pdev, unsigned int index, unsigned int size)
{
	unsigned int i;

	for (i=0; i < PWC_FPS_MAX_TIMON; i++) {
		if (Timon_table[size][i][3].alternate) {
			if (index--==0) return Timon_fps_vector[i];
		}
	}
	return 0;
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
          unsigned int index = 100;
          unsigned int size = 100;
          int _len_pdev0 = 1;
          struct pwc_device * pdev = (struct pwc_device *) malloc(_len_pdev0*sizeof(struct pwc_device));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = pwc_get_fps_Timon(pdev,index,size);
          printf("%u\n", benchRet); 
          free(pdev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int index = 10;
          unsigned int size = 10;
          int _len_pdev0 = 100;
          struct pwc_device * pdev = (struct pwc_device *) malloc(_len_pdev0*sizeof(struct pwc_device));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = pwc_get_fps_Timon(pdev,index,size);
          printf("%u\n", benchRet); 
          free(pdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
