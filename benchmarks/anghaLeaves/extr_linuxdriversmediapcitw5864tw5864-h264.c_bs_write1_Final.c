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
struct bs {int* ptr; int* buf_end; int bits_left; } ;

/* Variables and functions */

__attribute__((used)) static void bs_write1(struct bs *s, u32 bit)
{
	if (s->ptr < s->buf_end) {
		*s->ptr <<= 1;
		*s->ptr |= bit;
		s->bits_left--;
		if (s->bits_left == 0) {
			s->ptr++;
			s->bits_left = 8;
		}
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
          int bit = 100;
          int _len_s0 = 1;
          struct bs * s = (struct bs *) malloc(_len_s0*sizeof(struct bs));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__ptr0 = 1;
          s[_i0].ptr = (int *) malloc(_len_s__i0__ptr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__ptr0; _j0++) {
            s[_i0].ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__buf_end0 = 1;
          s[_i0].buf_end = (int *) malloc(_len_s__i0__buf_end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__buf_end0; _j0++) {
            s[_i0].buf_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].bits_left = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bs_write1(s,bit);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].ptr);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf_end);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bit = 255;
          int _len_s0 = 65025;
          struct bs * s = (struct bs *) malloc(_len_s0*sizeof(struct bs));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__ptr0 = 1;
          s[_i0].ptr = (int *) malloc(_len_s__i0__ptr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__ptr0; _j0++) {
            s[_i0].ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__buf_end0 = 1;
          s[_i0].buf_end = (int *) malloc(_len_s__i0__buf_end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__buf_end0; _j0++) {
            s[_i0].buf_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].bits_left = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bs_write1(s,bit);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].ptr);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf_end);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bit = 10;
          int _len_s0 = 100;
          struct bs * s = (struct bs *) malloc(_len_s0*sizeof(struct bs));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__ptr0 = 1;
          s[_i0].ptr = (int *) malloc(_len_s__i0__ptr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__ptr0; _j0++) {
            s[_i0].ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__buf_end0 = 1;
          s[_i0].buf_end = (int *) malloc(_len_s__i0__buf_end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__buf_end0; _j0++) {
            s[_i0].buf_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].bits_left = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bs_write1(s,bit);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].ptr);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf_end);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
