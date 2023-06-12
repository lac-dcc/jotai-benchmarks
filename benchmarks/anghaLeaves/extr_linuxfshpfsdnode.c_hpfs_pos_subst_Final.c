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
       3            empty\n\
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
typedef  scalar_t__ loff_t ;

/* Variables and functions */

__attribute__((used)) static void hpfs_pos_subst(loff_t *p, loff_t f, loff_t t)
{
	if (*p == f) *p = t;
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
          long f = 100;
        
          long t = 100;
        
          int _len_p0 = 1;
          long * p = (long *) malloc(_len_p0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          hpfs_pos_subst(p,f,t);
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          long f = 255;
        
          long t = 255;
        
          int _len_p0 = 65025;
          long * p = (long *) malloc(_len_p0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          hpfs_pos_subst(p,f,t);
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long f = 10;
        
          long t = 10;
        
          int _len_p0 = 100;
          long * p = (long *) malloc(_len_p0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          hpfs_pos_subst(p,f,t);
          free(p);
        
        break;
    }
    // empty
    case 3:
    {
          long f = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long t = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_p0 = 1;
          long * p = (long *) malloc(_len_p0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          hpfs_pos_subst(p,f,t);
          free(p);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
