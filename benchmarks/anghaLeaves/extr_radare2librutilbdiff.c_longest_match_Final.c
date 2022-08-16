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
struct pos {int pos; int len; } ;
struct line {int n; scalar_t__ e; } ;

/* Variables and functions */

__attribute__((used)) static int longest_match(struct line *a, struct line *b, struct pos *pos,
			 int a1, int a2, int b1, int b2, int *omi, int *omj)
{
	int mi = a1, mj = b1, mk = 0, mb = 0, i, j, k;

	for (i = a1; i < a2; i++) {
		/* skip things before the current block */
		for (j = a[i].n; j < b1; j = b[j].n) {
			;
		}

		/* loop through all lines match a[i] in b */
		for (; j < b2; j = b[j].n) {
			/* does this extend an earlier match? */
			if (i > a1 && j > b1 && pos[j - 1].pos == i - 1) {
				k = pos[j - 1].len + 1;
			} else {
				k = 1;
			}
			pos[j].pos = i;
			pos[j].len = k;

			/* best match so far? */
			if (k > mk) {
				mi = i;
				mj = j;
				mk = k;
			}
		}
	}

	if (mk) {
		mi = mi - mk + 1;
		mj = mj - mk + 1;
	}

	/* expand match to include neighboring popular lines */
	while (mi - mb > a1 && mj - mb > b1 &&
		a[mi - mb - 1].e == b[mj - mb - 1].e) {
		mb++;
	}
	while (mi + mk < a2 && mj + mk < b2 &&
		a[mi + mk].e == b[mj + mk].e) {
		mk++;
	}

	*omi = mi - mb;
	*omj = mj - mb;

	return mk + mb;
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
          int a1 = 100;
          int a2 = 100;
          int b1 = 100;
          int b2 = 100;
          int _len_a0 = 1;
          struct line * a = (struct line *) malloc(_len_a0*sizeof(struct line));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].e = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b0 = 1;
          struct line * b = (struct line *) malloc(_len_b0*sizeof(struct line));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].e = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pos0 = 1;
          struct pos * pos = (struct pos *) malloc(_len_pos0*sizeof(struct pos));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            pos[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        pos[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_omi0 = 1;
          int * omi = (int *) malloc(_len_omi0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_omi0; _i0++) {
            omi[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_omj0 = 1;
          int * omj = (int *) malloc(_len_omj0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_omj0; _i0++) {
            omj[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = longest_match(a,b,pos,a1,a2,b1,b2,omi,omj);
          printf("%d\n", benchRet); 
          free(a);
          free(b);
          free(pos);
          free(omi);
          free(omj);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
