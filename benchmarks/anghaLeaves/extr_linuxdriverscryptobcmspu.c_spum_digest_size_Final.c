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
typedef  int /*<<< orphan*/  u32 ;
typedef  enum hash_type { ____Placeholder_hash_type } hash_type ;
typedef  enum hash_alg { ____Placeholder_hash_alg } hash_alg ;

/* Variables and functions */
 int HASH_ALG_SHA224 ; 
 int HASH_ALG_SHA384 ; 
 int HASH_TYPE_INIT ; 
 int HASH_TYPE_UPDT ; 
 int /*<<< orphan*/  SHA256_DIGEST_SIZE ; 
 int /*<<< orphan*/  SHA512_DIGEST_SIZE ; 

u32 spum_digest_size(u32 alg_digest_size, enum hash_alg alg,
		     enum hash_type htype)
{
	u32 digestsize = alg_digest_size;

	/* SPU returns complete digest when doing incremental hash and truncated
	 * hash algo.
	 */
	if ((htype == HASH_TYPE_INIT) || (htype == HASH_TYPE_UPDT)) {
		if (alg == HASH_ALG_SHA224)
			digestsize = SHA256_DIGEST_SIZE;
		else if (alg == HASH_ALG_SHA384)
			digestsize = SHA512_DIGEST_SIZE;
	}
	return digestsize;
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
          int alg_digest_size = 100;
          enum hash_alg alg = 0;
          enum hash_type htype = 0;
          int benchRet = spum_digest_size(alg_digest_size,alg,htype);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int alg_digest_size = 255;
          enum hash_alg alg = 0;
          enum hash_type htype = 0;
          int benchRet = spum_digest_size(alg_digest_size,alg,htype);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int alg_digest_size = 10;
          enum hash_alg alg = 0;
          enum hash_type htype = 0;
          int benchRet = spum_digest_size(alg_digest_size,alg,htype);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
