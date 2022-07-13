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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int u_long ;
typedef  int int32_t ;

/* Variables and functions */

int
gethex(int32_t *vp, char *p, int n)
{
    u_long v;
    int digit;

    for (v = 0; n > 0; n--) {
        if (*p == 0)
            return (0);
        if (*p >= '0' && *p <= '9')
            digit = *p - '0';
        else if (*p >= 'a' && *p <= 'f')
            digit = *p - 'a' + 10;
        else if (*p >= 'A' && *p <= 'F')
            digit = *p - 'A' + 10;
        else
            return (0);

        v <<= 4;
        v |= digit;
        p++;
    }
    *vp = v;
    return (1);
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
          int n = 100;
          int _len_vp0 = 1;
          int * vp = (int *) malloc(_len_vp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_vp0; _i0++) {
            vp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 1;
          char * p = (char *) malloc(_len_p0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gethex(vp,p,n);
          printf("%d\n", benchRet); 
          free(vp);
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int _len_vp0 = 65025;
          int * vp = (int *) malloc(_len_vp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_vp0; _i0++) {
            vp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 65025;
          char * p = (char *) malloc(_len_p0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gethex(vp,p,n);
          printf("%d\n", benchRet); 
          free(vp);
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int _len_vp0 = 100;
          int * vp = (int *) malloc(_len_vp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_vp0; _i0++) {
            vp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 100;
          char * p = (char *) malloc(_len_p0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gethex(vp,p,n);
          printf("%d\n", benchRet); 
          free(vp);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
