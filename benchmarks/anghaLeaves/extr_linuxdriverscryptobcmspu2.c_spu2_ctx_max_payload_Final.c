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
typedef  unsigned int u32 ;
typedef  enum spu_cipher_mode { ____Placeholder_spu_cipher_mode } spu_cipher_mode ;
typedef  enum spu_cipher_alg { ____Placeholder_spu_cipher_alg } spu_cipher_alg ;

/* Variables and functions */
 int CIPHER_ALG_AES ; 
 int CIPHER_MODE_CCM ; 
 unsigned int SPU2_MAX_PAYLOAD ; 
 unsigned int SPU_MAX_PAYLOAD_INF ; 

u32 spu2_ctx_max_payload(enum spu_cipher_alg cipher_alg,
			 enum spu_cipher_mode cipher_mode,
			 unsigned int blocksize)
{
	if ((cipher_alg == CIPHER_ALG_AES) &&
	    (cipher_mode == CIPHER_MODE_CCM)) {
		u32 excess = SPU2_MAX_PAYLOAD % blocksize;

		return SPU2_MAX_PAYLOAD - excess;
	} else {
		return SPU_MAX_PAYLOAD_INF;
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
          enum spu_cipher_alg cipher_alg = 0;
          enum spu_cipher_mode cipher_mode = 0;
          unsigned int blocksize = 100;
          unsigned int benchRet = spu2_ctx_max_payload(cipher_alg,cipher_mode,blocksize);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum spu_cipher_alg cipher_alg = 0;
          enum spu_cipher_mode cipher_mode = 0;
          unsigned int blocksize = 255;
          unsigned int benchRet = spu2_ctx_max_payload(cipher_alg,cipher_mode,blocksize);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum spu_cipher_alg cipher_alg = 0;
          enum spu_cipher_mode cipher_mode = 0;
          unsigned int blocksize = 10;
          unsigned int benchRet = spu2_ctx_max_payload(cipher_alg,cipher_mode,blocksize);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
