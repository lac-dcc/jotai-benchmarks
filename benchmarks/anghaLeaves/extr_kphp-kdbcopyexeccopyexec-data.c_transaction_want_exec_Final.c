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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ status; int mask; int result; } ;
typedef  TYPE_1__ transaction_t ;

/* Variables and functions */
 int MASK_RERUN_TRANSACTION ; 
 scalar_t__ SIGINT ; 
 scalar_t__ SIGTERM ; 
 scalar_t__ ts_cancelled ; 
 scalar_t__ ts_decryption_failed ; 
 scalar_t__ ts_interrupted ; 
 scalar_t__ ts_running ; 

__attribute__((used)) static inline int transaction_want_exec (transaction_t *T) {
  if (T->status == ts_running) {
    return 0;
  }
  if (T->status == ts_decryption_failed) {
    return 1;
  }

  if (T->status == ts_cancelled) {
    if (T->mask & MASK_RERUN_TRANSACTION) {
      return 1;
    }
    if (T->result == (((int) SIGINT) << 8) || T->result == (((int) SIGTERM) << 8)) {
      return 1;
    }
    return 0;
  }

  return (T->status == ts_interrupted) && (T->mask & MASK_RERUN_TRANSACTION);
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
          int _len_T0 = 1;
          struct TYPE_3__ * T = (struct TYPE_3__ *) malloc(_len_T0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_T0; _i0++) {
            T[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        T[_i0].mask = ((-2 * (next_i()%2)) + 1) * next_i();
        T[_i0].result = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = transaction_want_exec(T);
          printf("%d\n", benchRet); 
          free(T);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
