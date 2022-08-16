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
       1            big-arr-10x\n\
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
struct mv_cesa_ahash_req {unsigned int len; } ;

/* Variables and functions */
 unsigned int CESA_HASH_BLOCK_SIZE_MSK ; 

__attribute__((used)) static int mv_cesa_ahash_pad_len(struct mv_cesa_ahash_req *creq)
{
	unsigned int index, padlen;

	index = creq->len & CESA_HASH_BLOCK_SIZE_MSK;
	padlen = (index < 56) ? (56 - index) : (64 + 56 - index);

	return padlen;
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
          int _len_creq0 = 1;
          struct mv_cesa_ahash_req * creq = (struct mv_cesa_ahash_req *) malloc(_len_creq0*sizeof(struct mv_cesa_ahash_req));
          for(int _i0 = 0; _i0 < _len_creq0; _i0++) {
            creq[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mv_cesa_ahash_pad_len(creq);
          printf("%d\n", benchRet); 
          free(creq);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_creq0 = 100;
          struct mv_cesa_ahash_req * creq = (struct mv_cesa_ahash_req *) malloc(_len_creq0*sizeof(struct mv_cesa_ahash_req));
          for(int _i0 = 0; _i0 < _len_creq0; _i0++) {
            creq[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mv_cesa_ahash_pad_len(creq);
          printf("%d\n", benchRet); 
          free(creq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
