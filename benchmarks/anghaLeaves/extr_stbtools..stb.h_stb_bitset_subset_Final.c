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
typedef  int stb_bitset ;

/* Variables and functions */

int stb_bitset_subset(stb_bitset *bigger, stb_bitset *smaller, int len)
{
   int i;
   for (i=0; i < len; ++i)
      if ((bigger[i] & smaller[i]) != smaller[i]) return 0;
   return 1;
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
          int len = 255;
        
          int _len_bigger0 = 65025;
          int * bigger = (int *) malloc(_len_bigger0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bigger0; _i0++) {
            bigger[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_smaller0 = 65025;
          int * smaller = (int *) malloc(_len_smaller0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_smaller0; _i0++) {
            smaller[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = stb_bitset_subset(bigger,smaller,len);
          printf("%d\n", benchRet); 
          free(bigger);
          free(smaller);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int len = 10;
        
          int _len_bigger0 = 100;
          int * bigger = (int *) malloc(_len_bigger0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bigger0; _i0++) {
            bigger[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_smaller0 = 100;
          int * smaller = (int *) malloc(_len_smaller0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_smaller0; _i0++) {
            smaller[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = stb_bitset_subset(bigger,smaller,len);
          printf("%d\n", benchRet); 
          free(bigger);
          free(smaller);
        
        break;
    }
    // empty
    case 2:
    {
          int len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_bigger0 = 1;
          int * bigger = (int *) malloc(_len_bigger0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bigger0; _i0++) {
            bigger[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_smaller0 = 1;
          int * smaller = (int *) malloc(_len_smaller0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_smaller0; _i0++) {
            smaller[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = stb_bitset_subset(bigger,smaller,len);
          printf("%d\n", benchRet); 
          free(bigger);
          free(smaller);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
