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
typedef  int u32 ;
struct sahara_dev {int flags; } ;

/* Variables and functions */
 int FLAGS_CBC ; 
 int FLAGS_ENCRYPT ; 
 int SAHARA_HDR_BASE ; 
 int SAHARA_HDR_CHA_SKHA ; 
 int SAHARA_HDR_FORM_KEY ; 
 int SAHARA_HDR_LLO ; 
 int SAHARA_HDR_PARITY_BIT ; 
 int SAHARA_HDR_SKHA_ALG_AES ; 
 int SAHARA_HDR_SKHA_MODE_CBC ; 
 int SAHARA_HDR_SKHA_OP_ENC ; 

__attribute__((used)) static u32 sahara_aes_key_hdr(struct sahara_dev *dev)
{
	u32 hdr = SAHARA_HDR_BASE | SAHARA_HDR_SKHA_ALG_AES |
			SAHARA_HDR_FORM_KEY | SAHARA_HDR_LLO |
			SAHARA_HDR_CHA_SKHA | SAHARA_HDR_PARITY_BIT;

	if (dev->flags & FLAGS_CBC) {
		hdr |= SAHARA_HDR_SKHA_MODE_CBC;
		hdr ^= SAHARA_HDR_PARITY_BIT;
	}

	if (dev->flags & FLAGS_ENCRYPT) {
		hdr |= SAHARA_HDR_SKHA_OP_ENC;
		hdr ^= SAHARA_HDR_PARITY_BIT;
	}

	return hdr;
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
          int _len_dev0 = 1;
          struct sahara_dev * dev = (struct sahara_dev *) malloc(_len_dev0*sizeof(struct sahara_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sahara_aes_key_hdr(dev);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_dev0 = 100;
          struct sahara_dev * dev = (struct sahara_dev *) malloc(_len_dev0*sizeof(struct sahara_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sahara_aes_key_hdr(dev);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
