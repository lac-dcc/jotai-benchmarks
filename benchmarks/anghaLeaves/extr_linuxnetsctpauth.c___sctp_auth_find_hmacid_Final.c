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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  scalar_t__ __be16 ;

/* Variables and functions */

__attribute__((used)) static int __sctp_auth_find_hmacid(__be16 *hmacs, int n_elts, __be16 hmac_id)
{
	int  found = 0;
	int  i;

	for (i = 0; i < n_elts; i++) {
		if (hmac_id == hmacs[i]) {
			found = 1;
			break;
		}
	}

	return found;
}

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
          int n_elts = 255;
        
          long hmac_id = 255;
        
          int _len_hmacs0 = 65025;
          long * hmacs = (long *) malloc(_len_hmacs0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_hmacs0; _i0++) {
            hmacs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = __sctp_auth_find_hmacid(hmacs,n_elts,hmac_id);
          printf("%d\n", benchRet); 
          free(hmacs);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int n_elts = 10;
        
          long hmac_id = 10;
        
          int _len_hmacs0 = 100;
          long * hmacs = (long *) malloc(_len_hmacs0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_hmacs0; _i0++) {
            hmacs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = __sctp_auth_find_hmacid(hmacs,n_elts,hmac_id);
          printf("%d\n", benchRet); 
          free(hmacs);
        
        break;
    }
    // empty
    case 2:
    {
          int n_elts = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long hmac_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_hmacs0 = 1;
          long * hmacs = (long *) malloc(_len_hmacs0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_hmacs0; _i0++) {
            hmacs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = __sctp_auth_find_hmacid(hmacs,n_elts,hmac_id);
          printf("%d\n", benchRet); 
          free(hmacs);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
