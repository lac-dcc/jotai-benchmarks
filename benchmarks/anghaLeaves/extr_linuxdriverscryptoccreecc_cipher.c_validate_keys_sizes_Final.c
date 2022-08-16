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
typedef  int /*<<< orphan*/  u32 ;
struct cc_cipher_ctx {int flow_mode; int /*<<< orphan*/  cipher_mode; } ;

/* Variables and functions */
#define  CC_AES_128_BIT_KEY_SIZE 132 
#define  CC_AES_192_BIT_KEY_SIZE 131 
#define  CC_AES_256_BIT_KEY_SIZE 130 
 int /*<<< orphan*/  DES3_EDE_KEY_SIZE ; 
 int /*<<< orphan*/  DES_KEY_SIZE ; 
 int /*<<< orphan*/  DRV_CIPHER_BITLOCKER ; 
 int /*<<< orphan*/  DRV_CIPHER_ESSIV ; 
 int /*<<< orphan*/  DRV_CIPHER_XTS ; 
 int EINVAL ; 
#define  S_DIN_to_AES 129 
#define  S_DIN_to_DES 128 

__attribute__((used)) static int validate_keys_sizes(struct cc_cipher_ctx *ctx_p, u32 size)
{
	switch (ctx_p->flow_mode) {
	case S_DIN_to_AES:
		switch (size) {
		case CC_AES_128_BIT_KEY_SIZE:
		case CC_AES_192_BIT_KEY_SIZE:
			if (ctx_p->cipher_mode != DRV_CIPHER_XTS &&
			    ctx_p->cipher_mode != DRV_CIPHER_ESSIV &&
			    ctx_p->cipher_mode != DRV_CIPHER_BITLOCKER)
				return 0;
			break;
		case CC_AES_256_BIT_KEY_SIZE:
			return 0;
		case (CC_AES_192_BIT_KEY_SIZE * 2):
		case (CC_AES_256_BIT_KEY_SIZE * 2):
			if (ctx_p->cipher_mode == DRV_CIPHER_XTS ||
			    ctx_p->cipher_mode == DRV_CIPHER_ESSIV ||
			    ctx_p->cipher_mode == DRV_CIPHER_BITLOCKER)
				return 0;
			break;
		default:
			break;
		}
		break;
	case S_DIN_to_DES:
		if (size == DES3_EDE_KEY_SIZE || size == DES_KEY_SIZE)
			return 0;
		break;
	default:
		break;
	}
	return -EINVAL;
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
          int size = 100;
          int _len_ctx_p0 = 1;
          struct cc_cipher_ctx * ctx_p = (struct cc_cipher_ctx *) malloc(_len_ctx_p0*sizeof(struct cc_cipher_ctx));
          for(int _i0 = 0; _i0 < _len_ctx_p0; _i0++) {
            ctx_p[_i0].flow_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx_p[_i0].cipher_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = validate_keys_sizes(ctx_p,size);
          printf("%d\n", benchRet); 
          free(ctx_p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
