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
typedef  int /*<<< orphan*/  u64 ;
typedef  unsigned int u32 ;
typedef  unsigned int u16 ;
typedef  enum hash_mode { ____Placeholder_hash_mode } hash_mode ;
typedef  enum hash_alg { ____Placeholder_hash_alg } hash_alg ;

/* Variables and functions */
 int HASH_ALG_AES ; 
 int HASH_ALG_SHA384 ; 
 int HASH_ALG_SHA512 ; 
 int HASH_MODE_XCBC ; 

u16 spum_hash_pad_len(enum hash_alg hash_alg, enum hash_mode hash_mode,
		      u32 chunksize, u16 hash_block_size)
{
	unsigned int length_len;
	unsigned int used_space_last_block;
	int hash_pad_len;

	/* AES-XCBC hash requires just padding to next block boundary */
	if ((hash_alg == HASH_ALG_AES) && (hash_mode == HASH_MODE_XCBC)) {
		used_space_last_block = chunksize % hash_block_size;
		hash_pad_len = hash_block_size - used_space_last_block;
		if (hash_pad_len >= hash_block_size)
			hash_pad_len -= hash_block_size;
		return hash_pad_len;
	}

	used_space_last_block = chunksize % hash_block_size + 1;
	if ((hash_alg == HASH_ALG_SHA384) || (hash_alg == HASH_ALG_SHA512))
		length_len = 2 * sizeof(u64);
	else
		length_len = sizeof(u64);

	used_space_last_block += length_len;
	hash_pad_len = hash_block_size - used_space_last_block;
	if (hash_pad_len < 0)
		hash_pad_len += hash_block_size;

	hash_pad_len += 1 + length_len;
	return hash_pad_len;
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
          enum hash_alg hash_alg = 0;
          enum hash_mode hash_mode = 0;
          unsigned int chunksize = 100;
          unsigned int hash_block_size = 100;
          unsigned int benchRet = spum_hash_pad_len(hash_alg,hash_mode,chunksize,hash_block_size);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum hash_alg hash_alg = 0;
          enum hash_mode hash_mode = 0;
          unsigned int chunksize = 255;
          unsigned int hash_block_size = 255;
          unsigned int benchRet = spum_hash_pad_len(hash_alg,hash_mode,chunksize,hash_block_size);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum hash_alg hash_alg = 0;
          enum hash_mode hash_mode = 0;
          unsigned int chunksize = 10;
          unsigned int hash_block_size = 10;
          unsigned int benchRet = spum_hash_pad_len(hash_alg,hash_mode,chunksize,hash_block_size);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
