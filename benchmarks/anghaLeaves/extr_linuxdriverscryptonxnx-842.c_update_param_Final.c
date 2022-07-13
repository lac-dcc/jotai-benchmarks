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
struct nx842_crypto_param {unsigned int iremain; unsigned int oremain; unsigned int in; unsigned int out; unsigned int ototal; } ;

/* Variables and functions */
 int ENOSPC ; 
 int EOVERFLOW ; 

__attribute__((used)) static int update_param(struct nx842_crypto_param *p,
			unsigned int slen, unsigned int dlen)
{
	if (p->iremain < slen)
		return -EOVERFLOW;
	if (p->oremain < dlen)
		return -ENOSPC;

	p->in += slen;
	p->iremain -= slen;
	p->out += dlen;
	p->oremain -= dlen;
	p->ototal += dlen;

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
          unsigned int slen = 100;
          unsigned int dlen = 100;
          int _len_p0 = 1;
          struct nx842_crypto_param * p = (struct nx842_crypto_param *) malloc(_len_p0*sizeof(struct nx842_crypto_param));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].iremain = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].oremain = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].in = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].out = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ototal = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = update_param(p,slen,dlen);
          printf("%d\n", benchRet); 
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int slen = 255;
          unsigned int dlen = 255;
          int _len_p0 = 65025;
          struct nx842_crypto_param * p = (struct nx842_crypto_param *) malloc(_len_p0*sizeof(struct nx842_crypto_param));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].iremain = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].oremain = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].in = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].out = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ototal = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = update_param(p,slen,dlen);
          printf("%d\n", benchRet); 
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int slen = 10;
          unsigned int dlen = 10;
          int _len_p0 = 100;
          struct nx842_crypto_param * p = (struct nx842_crypto_param *) malloc(_len_p0*sizeof(struct nx842_crypto_param));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].iremain = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].oremain = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].in = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].out = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ototal = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = update_param(p,slen,dlen);
          printf("%d\n", benchRet); 
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
