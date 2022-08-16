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
typedef  enum spu2_hash_mode { ____Placeholder_spu2_hash_mode } spu2_hash_mode ;
typedef  enum hash_mode { ____Placeholder_hash_mode } hash_mode ;

/* Variables and functions */
 int EINVAL ; 
#define  HASH_MODE_CCM 132 
#define  HASH_MODE_CMAC 131 
#define  HASH_MODE_GCM 130 
#define  HASH_MODE_HMAC 129 
#define  HASH_MODE_XCBC 128 
 int SPU2_HASH_MODE_CCM ; 
 int SPU2_HASH_MODE_CMAC ; 
 int SPU2_HASH_MODE_GCM ; 
 int SPU2_HASH_MODE_HMAC ; 
 int SPU2_HASH_MODE_XCBC_MAC ; 

__attribute__((used)) static int spu2_hash_mode_xlate(enum hash_mode hash_mode,
				enum spu2_hash_mode *spu2_mode)
{
	switch (hash_mode) {
	case HASH_MODE_XCBC:
		*spu2_mode = SPU2_HASH_MODE_XCBC_MAC;
		break;
	case HASH_MODE_CMAC:
		*spu2_mode = SPU2_HASH_MODE_CMAC;
		break;
	case HASH_MODE_HMAC:
		*spu2_mode = SPU2_HASH_MODE_HMAC;
		break;
	case HASH_MODE_CCM:
		*spu2_mode = SPU2_HASH_MODE_CCM;
		break;
	case HASH_MODE_GCM:
		*spu2_mode = SPU2_HASH_MODE_GCM;
		break;
	default:
		return -EINVAL;
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
          enum hash_mode hash_mode = 0;
          int _len_spu2_mode0 = 1;
          enum spu2_hash_mode * spu2_mode = (enum spu2_hash_mode *) malloc(_len_spu2_mode0*sizeof(enum spu2_hash_mode));
          for(int _i0 = 0; _i0 < _len_spu2_mode0; _i0++) {
            spu2_mode[_i0] = 0;
          }
          int benchRet = spu2_hash_mode_xlate(hash_mode,spu2_mode);
          printf("%d\n", benchRet); 
          free(spu2_mode);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum hash_mode hash_mode = 0;
          int _len_spu2_mode0 = 100;
          enum spu2_hash_mode * spu2_mode = (enum spu2_hash_mode *) malloc(_len_spu2_mode0*sizeof(enum spu2_hash_mode));
          for(int _i0 = 0; _i0 < _len_spu2_mode0; _i0++) {
            spu2_mode[_i0] = 0;
          }
          int benchRet = spu2_hash_mode_xlate(hash_mode,spu2_mode);
          printf("%d\n", benchRet); 
          free(spu2_mode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
