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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int uint32_t ;
typedef  int uint16_t ;
typedef  int /*<<< orphan*/  int8_t ;
typedef  int /*<<< orphan*/  int32_t ;
typedef  int /*<<< orphan*/  int16_t ;

/* Variables and functions */
 int g_2236 ; 

__attribute__((used)) static uint32_t  func_7(int8_t  p_8, int16_t  p_9, int32_t  p_10, int16_t  p_11, int32_t  p_12)
{ /* block id: 1551 */
    uint16_t l_3029 = 0x94C3L;
    for (g_2236 = (-17); (g_2236 > 22); g_2236++)
    { /* block id: 1554 */
        l_3029++;
    }
    return l_3029;
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
          int p_8 = 100;
          int p_9 = 100;
          int p_10 = 100;
          int p_11 = 100;
          int p_12 = 100;
          int benchRet = func_7(p_8,p_9,p_10,p_11,p_12);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int p_8 = 255;
          int p_9 = 255;
          int p_10 = 255;
          int p_11 = 255;
          int p_12 = 255;
          int benchRet = func_7(p_8,p_9,p_10,p_11,p_12);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int p_8 = 10;
          int p_9 = 10;
          int p_10 = 10;
          int p_11 = 10;
          int p_12 = 10;
          int benchRet = func_7(p_8,p_9,p_10,p_11,p_12);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
