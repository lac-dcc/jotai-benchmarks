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
       1            empty\n\
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
typedef  int /*<<< orphan*/  uint8_t ;

/* Variables and functions */
 int AVERROR_INVALIDDATA ; 

__attribute__((used)) static int snappy_copy(uint8_t *start, uint8_t *p, int size,
                       unsigned int off, int len)
{
    uint8_t *q;
    int i;
    if (off > p - start || size < len)
        return AVERROR_INVALIDDATA;

    q = p - off;

    for (i = 0; i < len; i++)
        p[i] = q[i];

    return len;
}

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
          int size = 100;
        
          unsigned int off = 100;
        
          int len = 100;
        
          int _len_start0 = 1;
          int * start = (int *) malloc(_len_start0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_start0; _i0++) {
            start[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_p0 = 1;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = snappy_copy(start,p,size,off,len);
          printf("%d\n", benchRet); 
          free(start);
          free(p);
        
        break;
    }
    // empty
    case 1:
    {
          int size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned int off = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_start0 = 1;
          int * start = (int *) malloc(_len_start0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_start0; _i0++) {
            start[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_p0 = 1;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = snappy_copy(start,p,size,off,len);
          printf("%d\n", benchRet); 
          free(start);
          free(p);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
