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
 int T1_CTXNO_ZC ; 
 int T1_SIG_E ; 
 int T1_SIG_N ; 
 int T1_SIG_NE ; 
 int T1_SIG_NW ; 
 int T1_SIG_S ; 
 int T1_SIG_SE ; 
 int T1_SIG_SW ; 
 int T1_SIG_W ; 

__attribute__((used)) static int t1_init_ctxno_zc(int f, int orient) {
	int h, v, d, n, t, hv;
	n = 0;
	h = ((f & T1_SIG_W) != 0) + ((f & T1_SIG_E) != 0);
	v = ((f & T1_SIG_N) != 0) + ((f & T1_SIG_S) != 0);
	d = ((f & T1_SIG_NW) != 0) + ((f & T1_SIG_NE) != 0) + ((f & T1_SIG_SE) != 0) + ((f & T1_SIG_SW) != 0);

	switch (orient) {
		case 2:
			t = h;
			h = v;
			v = t;
		case 0:
		case 1:
			if (!h) {
				if (!v) {
					if (!d)
						n = 0;
					else if (d == 1)
						n = 1;
					else
						n = 2;
				} else if (v == 1) {
					n = 3;
				} else {
					n = 4;
				}
			} else if (h == 1) {
				if (!v) {
					if (!d)
						n = 5;
					else
						n = 6;
				} else {
					n = 7;
				}
			} else
				n = 8;
			break;
		case 3:
			hv = h + v;
			if (!d) {
				if (!hv) {
					n = 0;
				} else if (hv == 1) {
					n = 1;
				} else {
					n = 2;
				}
			} else if (d == 1) {
				if (!hv) {
					n = 3;
				} else if (hv == 1) {
					n = 4;
				} else {
					n = 5;
				}
			} else if (d == 2) {
				if (!hv) {
					n = 6;
				} else {
					n = 7;
				}
			} else {
				n = 8;
			}
			break;
	}

	return (T1_CTXNO_ZC + n);
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
          int f = 100;
          int orient = 100;
          int benchRet = t1_init_ctxno_zc(f,orient);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int f = 255;
          int orient = 255;
          int benchRet = t1_init_ctxno_zc(f,orient);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int f = 10;
          int orient = 10;
          int benchRet = t1_init_ctxno_zc(f,orient);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
