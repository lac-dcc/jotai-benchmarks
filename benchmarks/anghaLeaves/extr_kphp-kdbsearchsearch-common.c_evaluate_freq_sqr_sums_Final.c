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
       0            big-arr\n\
       1            big-arr-10x\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int freqs; } ;
typedef  TYPE_1__ pair_word_freqs_t ;

/* Variables and functions */

void evaluate_freq_sqr_sums (pair_word_freqs_t *Q, int n, unsigned *sum_sqr_freq_title, unsigned *sum_freq_title_freq_text, unsigned *sum_sqr_freq_text) {
  int i;
  *sum_sqr_freq_title = *sum_freq_title_freq_text = *sum_sqr_freq_text = 0;
  for (i = 0; i < n; i++) {
    unsigned freq_title = Q[i].freqs >> 16, freq_text = Q[i].freqs & 0xffff;
    *sum_sqr_freq_title += freq_title * freq_title;
    *sum_freq_title_freq_text += freq_title * freq_text;
    *sum_sqr_freq_text += freq_text * freq_text;
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

    // big-arr
    case 0:
    {
          int n = 255;
          int _len_Q0 = 65025;
          struct TYPE_3__ * Q = (struct TYPE_3__ *) malloc(_len_Q0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_Q0; _i0++) {
            Q[_i0].freqs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sum_sqr_freq_title0 = 65025;
          unsigned int * sum_sqr_freq_title = (unsigned int *) malloc(_len_sum_sqr_freq_title0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_sum_sqr_freq_title0; _i0++) {
            sum_sqr_freq_title[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sum_freq_title_freq_text0 = 65025;
          unsigned int * sum_freq_title_freq_text = (unsigned int *) malloc(_len_sum_freq_title_freq_text0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_sum_freq_title_freq_text0; _i0++) {
            sum_freq_title_freq_text[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sum_sqr_freq_text0 = 65025;
          unsigned int * sum_sqr_freq_text = (unsigned int *) malloc(_len_sum_sqr_freq_text0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_sum_sqr_freq_text0; _i0++) {
            sum_sqr_freq_text[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          evaluate_freq_sqr_sums(Q,n,sum_sqr_freq_title,sum_freq_title_freq_text,sum_sqr_freq_text);
          free(Q);
          free(sum_sqr_freq_title);
          free(sum_freq_title_freq_text);
          free(sum_sqr_freq_text);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int n = 10;
          int _len_Q0 = 100;
          struct TYPE_3__ * Q = (struct TYPE_3__ *) malloc(_len_Q0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_Q0; _i0++) {
            Q[_i0].freqs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sum_sqr_freq_title0 = 100;
          unsigned int * sum_sqr_freq_title = (unsigned int *) malloc(_len_sum_sqr_freq_title0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_sum_sqr_freq_title0; _i0++) {
            sum_sqr_freq_title[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sum_freq_title_freq_text0 = 100;
          unsigned int * sum_freq_title_freq_text = (unsigned int *) malloc(_len_sum_freq_title_freq_text0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_sum_freq_title_freq_text0; _i0++) {
            sum_freq_title_freq_text[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sum_sqr_freq_text0 = 100;
          unsigned int * sum_sqr_freq_text = (unsigned int *) malloc(_len_sum_sqr_freq_text0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_sum_sqr_freq_text0; _i0++) {
            sum_sqr_freq_text[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          evaluate_freq_sqr_sums(Q,n,sum_sqr_freq_title,sum_freq_title_freq_text,sum_sqr_freq_text);
          free(Q);
          free(sum_sqr_freq_title);
          free(sum_freq_title_freq_text);
          free(sum_sqr_freq_text);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
