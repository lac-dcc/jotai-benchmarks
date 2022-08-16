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

/* Variables and functions */

__attribute__((used)) static inline int
calc_value4 (unsigned sig,
             unsigned n,
             unsigned wmax,
             unsigned nonarrow)
{
    unsigned v = 0;
    n--;

    unsigned w0 = (sig >> 12) & 0xf;
    if(w0 > 1) {
        if(w0 > wmax)
            return(-1);
        unsigned n0 = n - w0;
        unsigned sk20 = (n - 1) * n * (2 * n - 1);
        unsigned sk21 = n0 * (n0 + 1) * (2 * n0 + 1);
        v = sk20 - sk21 - 3 * (w0 - 1) * (2 * n - w0);

        if(!nonarrow && w0 > 2 && n > 4) {
            unsigned k = (n - 2) * (n - 1) * (2 * n - 3) - sk21;
            k -= 3 * (w0 - 2) * (14 * n - 7 * w0 - 31);
            v -= k;
        }

        if(n - 2 > wmax) {
            unsigned wm20 = 2 * wmax * (wmax + 1);
            unsigned wm21 = (2 * wmax + 1);
            unsigned k = sk20;
            if(n0 > wmax) {
                k -= sk21;
                k += 3 * (w0 - 1) * (wm20 - wm21 * (2 * n - w0));
            }
            else {
                k -= (wmax + 1) * (wmax + 2) * (2 * wmax + 3);
                k += 3 * (n - wmax - 2) * (wm20 - wm21 * (n + wmax + 1));
            }
            k *= 3;
            v -= k;
        }
        v /= 12;
    }
    else
        nonarrow = 1;
    n -= w0;

    unsigned w1 = (sig >> 8) & 0xf;
    if(w1 > 1) {
        if(w1 > wmax)
            return(-1);
        v += (2 * n - w1) * (w1 - 1) / 2;
        if(!nonarrow && w1 > 2 && n > 3)
            v -= (2 * n - w1 - 5) * (w1 - 2) / 2;
        if(n - 1 > wmax) {
            if(n - w1 > wmax)
                v -= (w1 - 1) * (2 * n - w1 - 2 * wmax);
            else
                v -= (n - wmax) * (n - wmax - 1);
        }
    }
    else
        nonarrow = 1;
    n -= w1;

    unsigned w2 = (sig >> 4) & 0xf;
    if(w2 > 1) {
        if(w2 > wmax)
            return(-1);
        v += w2 - 1;
        if(!nonarrow && w2 > 2 && n > 2)
            v -= n - 2;
        if(n > wmax)
            v -= n - wmax;
    }
    else
        nonarrow = 1;

    unsigned w3 = sig & 0xf;
    if(w3 == 1)
        nonarrow = 1;
    else if(w3 > wmax)
        return(-1);

    if(!nonarrow)
        return(-1);

    return(v);
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
          unsigned int sig = 100;
          unsigned int n = 100;
          unsigned int wmax = 100;
          unsigned int nonarrow = 100;
          int benchRet = calc_value4(sig,n,wmax,nonarrow);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int sig = 255;
          unsigned int n = 255;
          unsigned int wmax = 255;
          unsigned int nonarrow = 255;
          int benchRet = calc_value4(sig,n,wmax,nonarrow);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int sig = 10;
          unsigned int n = 10;
          unsigned int wmax = 10;
          unsigned int nonarrow = 10;
          int benchRet = calc_value4(sig,n,wmax,nonarrow);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
