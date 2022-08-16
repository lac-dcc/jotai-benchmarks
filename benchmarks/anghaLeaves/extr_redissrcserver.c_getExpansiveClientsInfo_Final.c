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

/* Variables and functions */
 int CLIENTS_PEAK_MEM_USAGE_SLOTS ; 
 size_t* ClientsPeakMemInput ; 
 size_t* ClientsPeakMemOutput ; 

void getExpansiveClientsInfo(size_t *in_usage, size_t *out_usage) {
    size_t i = 0, o = 0;
    for (int j = 0; j < CLIENTS_PEAK_MEM_USAGE_SLOTS; j++) {
        if (ClientsPeakMemInput[j] > i) i = ClientsPeakMemInput[j];
        if (ClientsPeakMemOutput[j] > o) o = ClientsPeakMemOutput[j];
    }
    *in_usage = i;
    *out_usage = o;
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
          int _len_in_usage0 = 1;
          unsigned long * in_usage = (unsigned long *) malloc(_len_in_usage0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_in_usage0; _i0++) {
            in_usage[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_usage0 = 1;
          unsigned long * out_usage = (unsigned long *) malloc(_len_out_usage0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_out_usage0; _i0++) {
            out_usage[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          getExpansiveClientsInfo(in_usage,out_usage);
          free(in_usage);
          free(out_usage);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
