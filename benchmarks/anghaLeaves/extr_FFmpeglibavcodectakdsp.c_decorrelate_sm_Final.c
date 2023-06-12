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
typedef  int int32_t ;

/* Variables and functions */

__attribute__((used)) static void decorrelate_sm(int32_t *p1, int32_t *p2, int length)
{
    int i;

    for (i = 0; i < length; i++) {
        int32_t a = p1[i];
        int32_t b = p2[i];
        a        -= b >> 1;
        p1[i]     = a;
        p2[i]     = a + b;
    }
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
          int length = 255;
        
          int _len_p10 = 65025;
          int * p1 = (int *) malloc(_len_p10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p10; _i0++) {
            p1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_p20 = 65025;
          int * p2 = (int *) malloc(_len_p20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p20; _i0++) {
            p2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          decorrelate_sm(p1,p2,length);
          free(p1);
          free(p2);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int length = 10;
        
          int _len_p10 = 100;
          int * p1 = (int *) malloc(_len_p10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p10; _i0++) {
            p1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_p20 = 100;
          int * p2 = (int *) malloc(_len_p20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p20; _i0++) {
            p2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          decorrelate_sm(p1,p2,length);
          free(p1);
          free(p2);
        
        break;
    }
    // empty
    case 2:
    {
          int length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_p10 = 1;
          int * p1 = (int *) malloc(_len_p10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p10; _i0++) {
            p1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_p20 = 1;
          int * p2 = (int *) malloc(_len_p20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p20; _i0++) {
            p2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          decorrelate_sm(p1,p2,length);
          free(p1);
          free(p2);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
