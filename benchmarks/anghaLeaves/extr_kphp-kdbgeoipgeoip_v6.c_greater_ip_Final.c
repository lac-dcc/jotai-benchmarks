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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Type definitions */
struct ipv6 {scalar_t__* data; } ;

/* Variables and functions */

int greater_ip (struct ipv6 a, struct ipv6 b) {
  int i;
  for (i = 0; i < 8; i++) {
    if (a.data[i] > b.data[i]) { 
      return 1;
    }
    if (a.data[i] < b.data[i]) {
      return 0;
    }
  }
  return 0;
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
          struct ipv6 a;
          int _len_a_data0 = 1;
          a.data = (long *) malloc(_len_a_data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_a_data0; _j0++) {
            a.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct ipv6 b;
          int _len_b_data0 = 1;
          b.data = (long *) malloc(_len_b_data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_b_data0; _j0++) {
            b.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = greater_ip(a,b);
          printf("%d\n", benchRet); 
          free(a.data);
          free(b.data);
        
        break;
    }
    // big-arr
    case 1:
    {
          struct ipv6 a;
          int _len_a_data0 = 1;
          a.data = (long *) malloc(_len_a_data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_a_data0; _j0++) {
            a.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct ipv6 b;
          int _len_b_data0 = 1;
          b.data = (long *) malloc(_len_b_data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_b_data0; _j0++) {
            b.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = greater_ip(a,b);
          printf("%d\n", benchRet); 
          free(a.data);
          free(b.data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          struct ipv6 a;
          int _len_a_data0 = 1;
          a.data = (long *) malloc(_len_a_data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_a_data0; _j0++) {
            a.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct ipv6 b;
          int _len_b_data0 = 1;
          b.data = (long *) malloc(_len_b_data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_b_data0; _j0++) {
            b.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = greater_ip(a,b);
          printf("%d\n", benchRet); 
          free(a.data);
          free(b.data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
