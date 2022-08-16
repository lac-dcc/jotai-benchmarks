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
typedef  enum transaction_status { ____Placeholder_transaction_status } transaction_status ;

/* Variables and functions */
 int tot_cancelled ; 
 int tot_decryption_failed ; 
 int tot_failed ; 
 int tot_ignored ; 
 int tot_interrupted ; 
 int tot_io_failed ; 
 int tot_terminated ; 
#define  ts_cancelled 134 
#define  ts_decryption_failed 133 
#define  ts_failed 132 
#define  ts_ignored 131 
#define  ts_interrupted 130 
#define  ts_io_failed 129 
#define  ts_terminated 128 

__attribute__((used)) static void incr_status_counter (enum transaction_status status, int delta) {
  switch (status) {
    case ts_ignored:
      tot_ignored += delta;
      break;
    case ts_interrupted:
      tot_interrupted += delta;
      break;
    case ts_cancelled:
      tot_cancelled += delta;
      break;
    case ts_terminated:
      tot_terminated += delta;
      break;
    case ts_failed:
      tot_failed += delta;
      break;
    case ts_decryption_failed:
      tot_decryption_failed += delta;
      break;
    case ts_io_failed:
      tot_io_failed += delta;
      break;
    default:
      break;
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
          enum transaction_status status = 0;
          int delta = 100;
          incr_status_counter(status,delta);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum transaction_status status = 0;
          int delta = 255;
          incr_status_counter(status,delta);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum transaction_status status = 0;
          int delta = 10;
          incr_status_counter(status,delta);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
