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
typedef  int u32 ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int r600_calculate_at(u32 t, u32 h, u32 fh, u32 fl, u32 *tl, u32 *th)
{
	u32 k, a, ah, al;
	u32 t1;

	if ((fl == 0) || (fh == 0) || (fl > fh))
		return -EINVAL;

	k = (100 * fh) / fl;
	t1 = (t * (k - 100));
	a = (1000 * (100 * h + t1)) / (10000 + (t1 / 100));
	a = (a + 5) / 10;
	ah = ((a * t) + 5000) / 10000;
	al = a - ah;

	*th = t - ah;
	*tl = t + al;

	return 0;
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
          int t = 100;
          int h = 100;
          int fh = 100;
          int fl = 100;
          int _len_tl0 = 1;
          int * tl = (int *) malloc(_len_tl0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tl0; _i0++) {
            tl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_th0 = 1;
          int * th = (int *) malloc(_len_th0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_th0; _i0++) {
            th[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = r600_calculate_at(t,h,fh,fl,tl,th);
          printf("%d\n", benchRet); 
          free(tl);
          free(th);
        
        break;
    }
    // big-arr
    case 1:
    {
          int t = 255;
          int h = 255;
          int fh = 255;
          int fl = 255;
          int _len_tl0 = 65025;
          int * tl = (int *) malloc(_len_tl0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tl0; _i0++) {
            tl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_th0 = 65025;
          int * th = (int *) malloc(_len_th0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_th0; _i0++) {
            th[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = r600_calculate_at(t,h,fh,fl,tl,th);
          printf("%d\n", benchRet); 
          free(tl);
          free(th);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int t = 10;
          int h = 10;
          int fh = 10;
          int fl = 10;
          int _len_tl0 = 100;
          int * tl = (int *) malloc(_len_tl0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tl0; _i0++) {
            tl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_th0 = 100;
          int * th = (int *) malloc(_len_th0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_th0; _i0++) {
            th[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = r600_calculate_at(t,h,fh,fl,tl,th);
          printf("%d\n", benchRet); 
          free(tl);
          free(th);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
