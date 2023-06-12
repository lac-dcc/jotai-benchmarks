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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {scalar_t__ word; TYPE_1__* item; } ;
typedef  TYPE_2__ tree_t ;
struct TYPE_8__ {scalar_t__ word; } ;
typedef  TYPE_3__ iheap_en_t ;
struct TYPE_6__ {long long item_id; } ;

/* Variables and functions */

__attribute__((used)) static inline int ihe_sgn_ext (tree_t *T, iheap_en_t *A, long long item_id) {
  if (T->word < A->word) {
    return -2;
  }
  if (T->word > A->word) {
    return 2;
  }
  if (T->item->item_id < item_id) {
    return -1;
  }
  if (T->item->item_id > item_id) {
    return 1;
  }
  return 0;
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
          long long item_id = 100;
        
          int _len_T0 = 1;
          struct TYPE_7__ * T = (struct TYPE_7__ *) malloc(_len_T0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_T0; _i0++) {
              T[_i0].word = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_T__i0__item0 = 1;
          T[_i0].item = (struct TYPE_6__ *) malloc(_len_T__i0__item0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_T__i0__item0; _j0++) {
              T[_i0].item->item_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_A0 = 1;
          struct TYPE_8__ * A = (struct TYPE_8__ *) malloc(_len_A0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
              A[_i0].word = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ihe_sgn_ext(T,A,item_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_T0; _aux++) {
          free(T[_aux].item);
          }
          free(T);
          free(A);
        
        break;
    }
    // big-arr
    case 1:
    {
          long long item_id = 255;
        
          int _len_T0 = 65025;
          struct TYPE_7__ * T = (struct TYPE_7__ *) malloc(_len_T0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_T0; _i0++) {
              T[_i0].word = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_T__i0__item0 = 1;
          T[_i0].item = (struct TYPE_6__ *) malloc(_len_T__i0__item0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_T__i0__item0; _j0++) {
              T[_i0].item->item_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_A0 = 65025;
          struct TYPE_8__ * A = (struct TYPE_8__ *) malloc(_len_A0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
              A[_i0].word = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ihe_sgn_ext(T,A,item_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_T0; _aux++) {
          free(T[_aux].item);
          }
          free(T);
          free(A);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long long item_id = 10;
        
          int _len_T0 = 100;
          struct TYPE_7__ * T = (struct TYPE_7__ *) malloc(_len_T0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_T0; _i0++) {
              T[_i0].word = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_T__i0__item0 = 1;
          T[_i0].item = (struct TYPE_6__ *) malloc(_len_T__i0__item0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_T__i0__item0; _j0++) {
              T[_i0].item->item_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_A0 = 100;
          struct TYPE_8__ * A = (struct TYPE_8__ *) malloc(_len_A0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
              A[_i0].word = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ihe_sgn_ext(T,A,item_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_T0; _aux++) {
          free(T[_aux].item);
          }
          free(T);
          free(A);
        
        break;
    }
    // empty
    case 3:
    {
          long long item_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_T0 = 1;
          struct TYPE_7__ * T = (struct TYPE_7__ *) malloc(_len_T0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_T0; _i0++) {
              T[_i0].word = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_T__i0__item0 = 1;
          T[_i0].item = (struct TYPE_6__ *) malloc(_len_T__i0__item0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_T__i0__item0; _j0++) {
              T[_i0].item->item_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_A0 = 1;
          struct TYPE_8__ * A = (struct TYPE_8__ *) malloc(_len_A0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
              A[_i0].word = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ihe_sgn_ext(T,A,item_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_T0; _aux++) {
          free(T[_aux].item);
          }
          free(T);
          free(A);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
