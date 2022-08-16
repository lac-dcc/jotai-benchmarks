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
typedef  int uint32_t ;
typedef  int /*<<< orphan*/  uint16_t ;
typedef  int int8_t ;
typedef  int int32_t ;
struct TYPE_2__ {int f1; } ;

/* Variables and functions */
 int g_500 ; 
 TYPE_1__ g_82 ; 

__attribute__((used)) static uint32_t  func_41(int32_t  p_42, uint16_t * p_43, int32_t  p_44, uint16_t  p_45, int8_t * p_46)
{ /* block id: 359 */
    int32_t l_580 = 4L;
    for (g_82.f1 = (-1); (g_82.f1 < 7); g_82.f1++)
    { /* block id: 362 */
        int8_t l_578 = 0x96L;
        int32_t *l_579 = &g_500;
        (*l_579) = l_578;
        l_580 &= (~p_42);
    }
    return l_580;
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
          int p_42 = 100;
          int p_44 = 100;
          int p_45 = 100;
          int _len_p_430 = 1;
          int * p_43 = (int *) malloc(_len_p_430*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_430; _i0++) {
            p_43[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_460 = 1;
          int * p_46 = (int *) malloc(_len_p_460*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_460; _i0++) {
            p_46[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = func_41(p_42,p_43,p_44,p_45,p_46);
          printf("%d\n", benchRet); 
          free(p_43);
          free(p_46);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
