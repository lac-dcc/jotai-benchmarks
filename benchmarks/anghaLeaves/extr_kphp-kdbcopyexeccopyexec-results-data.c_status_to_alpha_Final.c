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

/* Variables and functions */
#define  ts_cancelled 135 
#define  ts_decryption_failed 134 
#define  ts_failed 133 
#define  ts_ignored 132 
#define  ts_interrupted 131 
#define  ts_io_failed 130 
#define  ts_running 129 
#define  ts_terminated 128 

__attribute__((used)) static char *status_to_alpha (int tp) {
  switch (tp) {
    case ts_running:
      return "running";
    case ts_ignored:
      return "ignored";
      break;
    case ts_interrupted:
      return "interrupted";
      break;
    case ts_cancelled:
      return "cancelled";
      break;
    case ts_terminated:
      return "terminated";
      break;
    case ts_failed:
      return "failed";
      break;
    case ts_decryption_failed:
      return "decryption_failed";
      break;
    case ts_io_failed:
      return "io_failed";
    default:
      return "unknown";
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
          int tp = 100;
          char * benchRet = status_to_alpha(tp);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int tp = 255;
          char * benchRet = status_to_alpha(tp);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tp = 10;
          char * benchRet = status_to_alpha(tp);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
