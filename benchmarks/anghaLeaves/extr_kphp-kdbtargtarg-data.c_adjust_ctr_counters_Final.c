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
struct advert {int l_views; int l_clicked_old; scalar_t__ g_clicked_old; scalar_t__ g_views; } ;

/* Variables and functions */
 int ADJ_VIEW_THRESHOLD ; 
 double INIT_L_CTR ; 

__attribute__((used)) static void adjust_ctr_counters (struct advert *A) {
  if (A->l_views >= 2*ADJ_VIEW_THRESHOLD && (double) A->l_clicked_old / A->l_views > 1.5*INIT_L_CTR) {
    int x = A->l_views / ADJ_VIEW_THRESHOLD;
    A->l_views /= x;
    A->l_clicked_old /= x;
  }
  A->g_views = 0;
  A->g_clicked_old = 0;
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
          int _len_A0 = 1;
          struct advert * A = (struct advert *) malloc(_len_A0*sizeof(struct advert));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
            A[_i0].l_views = ((-2 * (next_i()%2)) + 1) * next_i();
        A[_i0].l_clicked_old = ((-2 * (next_i()%2)) + 1) * next_i();
        A[_i0].g_clicked_old = ((-2 * (next_i()%2)) + 1) * next_i();
        A[_i0].g_views = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          adjust_ctr_counters(A);
          free(A);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
