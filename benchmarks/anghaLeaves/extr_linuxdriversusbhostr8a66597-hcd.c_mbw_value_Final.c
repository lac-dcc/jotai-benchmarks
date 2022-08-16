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
struct r8a66597 {TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ on_chip; } ;

/* Variables and functions */
 unsigned short MBW_16 ; 
 unsigned short MBW_32 ; 

__attribute__((used)) static inline unsigned short mbw_value(struct r8a66597 *r8a66597)
{
	if (r8a66597->pdata->on_chip)
		return MBW_32;
	else
		return MBW_16;
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
          int _len_r8a665970 = 1;
          struct r8a66597 * r8a66597 = (struct r8a66597 *) malloc(_len_r8a665970*sizeof(struct r8a66597));
          for(int _i0 = 0; _i0 < _len_r8a665970; _i0++) {
              int _len_r8a66597__i0__pdata0 = 1;
          r8a66597[_i0].pdata = (struct TYPE_2__ *) malloc(_len_r8a66597__i0__pdata0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_r8a66597__i0__pdata0; _j0++) {
            r8a66597[_i0].pdata->on_chip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned short benchRet = mbw_value(r8a66597);
          printf("%hu\n", benchRet); 
          for(int _aux = 0; _aux < _len_r8a665970; _aux++) {
          free(r8a66597[_aux].pdata);
          }
          free(r8a66597);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
