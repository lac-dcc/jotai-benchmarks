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
typedef  int /*<<< orphan*/  uint32_t ;
typedef  int /*<<< orphan*/  int8_t ;

/* Variables and functions */
 int /*<<< orphan*/  g_448 ; 

__attribute__((used)) static int8_t * func_4(uint32_t  p_5, int8_t * p_6, int8_t * p_7)
{ /* block id: 1262 */
    return &g_448;
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
          int p_5 = 100;
          int _len_p_60 = 1;
          int * p_6 = (int *) malloc(_len_p_60*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_60; _i0++) {
            p_6[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_70 = 1;
          int * p_7 = (int *) malloc(_len_p_70*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_70; _i0++) {
            p_7[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = func_4(p_5,p_6,p_7);
          printf("%d\n", (*benchRet)); 
          free(p_6);
          free(p_7);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
