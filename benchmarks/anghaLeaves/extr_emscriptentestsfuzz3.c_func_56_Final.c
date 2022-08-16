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
typedef  int /*<<< orphan*/  int8_t ;
typedef  int /*<<< orphan*/  int32_t ;

/* Variables and functions */

__attribute__((used)) static int32_t * func_56(int8_t * p_57, int32_t * p_58)
{ /* block id: 5 */
    int32_t **l_62 = (void*)0;
    int32_t ***l_63 = &l_62;
    (*l_63) = l_62;
    return p_58;
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
          int _len_p_570 = 1;
          int * p_57 = (int *) malloc(_len_p_570*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_570; _i0++) {
            p_57[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_580 = 1;
          int * p_58 = (int *) malloc(_len_p_580*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_580; _i0++) {
            p_58[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = func_56(p_57,p_58);
          printf("%d\n", (*benchRet)); 
          free(p_57);
          free(p_58);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
