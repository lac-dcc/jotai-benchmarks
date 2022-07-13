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
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;

/* Variables and functions */

__attribute__((used)) static struct timeval php_openssl_subtract_timeval(struct timeval a, struct timeval b) /* {{{ */
{
	struct timeval difference;

	difference.tv_sec  = a.tv_sec  - b.tv_sec;
	difference.tv_usec = a.tv_usec - b.tv_usec;

	if (a.tv_usec < b.tv_usec) {
	  	b.tv_sec  -= 1L;
	   	b.tv_usec += 1000000L;
	}

	return difference;
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
          struct timeval a;
        a.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        a.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          struct timeval b;
        b.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        b.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          struct timeval benchRet = php_openssl_subtract_timeval(a,b);
          printf("%ld\n", benchRet.tv_usec);
          printf("%ld\n", benchRet.tv_sec);
        
        break;
    }
    // big-arr
    case 1:
    {
          struct timeval a;
        a.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        a.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          struct timeval b;
        b.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        b.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          struct timeval benchRet = php_openssl_subtract_timeval(a,b);
          printf("%ld\n", benchRet.tv_usec);
          printf("%ld\n", benchRet.tv_sec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          struct timeval a;
        a.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        a.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          struct timeval b;
        b.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        b.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          struct timeval benchRet = php_openssl_subtract_timeval(a,b);
          printf("%ld\n", benchRet.tv_usec);
          printf("%ld\n", benchRet.tv_sec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
