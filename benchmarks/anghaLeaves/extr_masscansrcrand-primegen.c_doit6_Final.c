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

/* Type definitions */
typedef  int uint32_t ;
typedef  int int64_t ;

/* Variables and functions */
 long B ; 
 int* two ; 

__attribute__((used)) static void doit6(register uint32_t *a,register long x,register long y,int64_t start)
{
  long i0;
  long y0;
  register long i;
  register uint32_t data;
  register uint32_t pos;
  register uint32_t bits;

  x += 5;
  y += 15;

  start += 1000000000;
  while (start < 0) { start += x; x += 10; }
  start -= 1000000000;
  i = start;
  while (i < B) { i += x; x += 10; }

  for (;;) {
    x -= 10;
    if (x <= 5) return;
    i -= x;

    while (i < 0) { i += y; y += 30; }

    i0 = i; y0 = y;
    while (i < B) {
      pos = (uint32_t)i; data = (uint32_t)i;
      pos >>= 5; data &= 31;
      i += y; y += 30;
      bits = a[pos]; data = two[data];
      bits ^= data;
      a[pos] = bits;
    }
    i = i0; y = y0;
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
          long x = 100;
          long y = 100;
          int start = 100;
          int _len_a0 = 1;
          int * a = (int *) malloc(_len_a0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          doit6(a,x,y,start);
          free(a);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long x = 10;
          long y = 10;
          int start = 10;
          int _len_a0 = 100;
          int * a = (int *) malloc(_len_a0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          doit6(a,x,y,start);
          free(a);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
