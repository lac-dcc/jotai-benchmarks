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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ p; scalar_t__ x; } ;
typedef  TYPE_1__ pthread_t ;

/* Variables and functions */

int
pthread_equal (pthread_t t1, pthread_t t2)
     /*
      * ------------------------------------------------------
      * DOCPUBLIC
      *      This function returns nonzero if t1 and t2 are equal, else
      *      returns zero
      *
      * PARAMETERS
      *      t1,
      *      t2
      *              thread IDs
      *
      *
      * DESCRIPTION
      *      This function returns nonzero if t1 and t2 are equal, else
      *      returns zero.
      *
      * RESULTS
      *              non-zero        if t1 and t2 refer to the same thread,
      *              0               t1 and t2 do not refer to the same thread
      *
      * ------------------------------------------------------
      */
{
  int result;

  /*
   * We also accept NULL == NULL - treating NULL as a thread
   * for this special case, because there is no error that we can return.
   */
  result = ( t1.p == t2.p && t1.x == t2.x );

  return (result);

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
          struct TYPE_4__ t1;
        t1.p = ((-2 * (next_i()%2)) + 1) * next_i();
        t1.x = ((-2 * (next_i()%2)) + 1) * next_i();
          struct TYPE_4__ t2;
        t2.p = ((-2 * (next_i()%2)) + 1) * next_i();
        t2.x = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = pthread_equal(t1,t2);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
