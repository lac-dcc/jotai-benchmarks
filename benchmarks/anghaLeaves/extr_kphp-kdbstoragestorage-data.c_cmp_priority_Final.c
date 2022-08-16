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
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {scalar_t__ priority; } ;
typedef  TYPE_1__ storage_binlog_file_t ;

/* Variables and functions */

__attribute__((used)) static storage_binlog_file_t *cmp_priority (void **IP, storage_binlog_file_t *A, storage_binlog_file_t *B) {
  if (A->priority < B->priority) {
    return A;
  }
  if (A->priority > B->priority) {
    return B;
  }
  return A;
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
          int _len_IP0 = 1;
          void ** IP = (void **) malloc(_len_IP0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_IP0; _i0++) {
          }
          int _len_A0 = 1;
          struct TYPE_5__ * A = (struct TYPE_5__ *) malloc(_len_A0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
            A[_i0].priority = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_B0 = 1;
          struct TYPE_5__ * B = (struct TYPE_5__ *) malloc(_len_B0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_B0; _i0++) {
            B[_i0].priority = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_5__ * benchRet = cmp_priority(IP,A,B);
          printf("%ld\n", (*benchRet).priority);
          for(int i1 = 0; i1 < _len_IP0; i1++) {
            int _len_IP1 = 1;
              }
          free(IP);
          free(A);
          free(B);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
