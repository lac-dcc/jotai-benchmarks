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
typedef  enum spu_cipher_mode { ____Placeholder_spu_cipher_mode } spu_cipher_mode ;
typedef  enum spu2_cipher_mode { ____Placeholder_spu2_cipher_mode } spu2_cipher_mode ;

/* Variables and functions */
#define  CIPHER_MODE_CBC 135 
#define  CIPHER_MODE_CCM 134 
#define  CIPHER_MODE_CFB 133 
#define  CIPHER_MODE_CTR 132 
#define  CIPHER_MODE_ECB 131 
#define  CIPHER_MODE_GCM 130 
#define  CIPHER_MODE_OFB 129 
#define  CIPHER_MODE_XTS 128 
 int EINVAL ; 
 int SPU2_CIPHER_MODE_CBC ; 
 int SPU2_CIPHER_MODE_CCM ; 
 int SPU2_CIPHER_MODE_CFB ; 
 int SPU2_CIPHER_MODE_CTR ; 
 int SPU2_CIPHER_MODE_ECB ; 
 int SPU2_CIPHER_MODE_GCM ; 
 int SPU2_CIPHER_MODE_OFB ; 
 int SPU2_CIPHER_MODE_XTS ; 

__attribute__((used)) static int spu2_cipher_mode_xlate(enum spu_cipher_mode cipher_mode,
				  enum spu2_cipher_mode *spu2_mode)
{
	switch (cipher_mode) {
	case CIPHER_MODE_ECB:
		*spu2_mode = SPU2_CIPHER_MODE_ECB;
		break;
	case CIPHER_MODE_CBC:
		*spu2_mode = SPU2_CIPHER_MODE_CBC;
		break;
	case CIPHER_MODE_OFB:
		*spu2_mode = SPU2_CIPHER_MODE_OFB;
		break;
	case CIPHER_MODE_CFB:
		*spu2_mode = SPU2_CIPHER_MODE_CFB;
		break;
	case CIPHER_MODE_CTR:
		*spu2_mode = SPU2_CIPHER_MODE_CTR;
		break;
	case CIPHER_MODE_CCM:
		*spu2_mode = SPU2_CIPHER_MODE_CCM;
		break;
	case CIPHER_MODE_GCM:
		*spu2_mode = SPU2_CIPHER_MODE_GCM;
		break;
	case CIPHER_MODE_XTS:
		*spu2_mode = SPU2_CIPHER_MODE_XTS;
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
          enum spu_cipher_mode cipher_mode = 0;
          int _len_spu2_mode0 = 1;
          enum spu2_cipher_mode * spu2_mode = (enum spu2_cipher_mode *) malloc(_len_spu2_mode0*sizeof(enum spu2_cipher_mode));
          for(int _i0 = 0; _i0 < _len_spu2_mode0; _i0++) {
            spu2_mode[_i0] = 0;
          }
          int benchRet = spu2_cipher_mode_xlate(cipher_mode,spu2_mode);
          printf("%d\n", benchRet); 
          free(spu2_mode);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum spu_cipher_mode cipher_mode = 0;
          int _len_spu2_mode0 = 65025;
          enum spu2_cipher_mode * spu2_mode = (enum spu2_cipher_mode *) malloc(_len_spu2_mode0*sizeof(enum spu2_cipher_mode));
          for(int _i0 = 0; _i0 < _len_spu2_mode0; _i0++) {
            spu2_mode[_i0] = 0;
          }
          int benchRet = spu2_cipher_mode_xlate(cipher_mode,spu2_mode);
          printf("%d\n", benchRet); 
          free(spu2_mode);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum spu_cipher_mode cipher_mode = 0;
          int _len_spu2_mode0 = 100;
          enum spu2_cipher_mode * spu2_mode = (enum spu2_cipher_mode *) malloc(_len_spu2_mode0*sizeof(enum spu2_cipher_mode));
          for(int _i0 = 0; _i0 < _len_spu2_mode0; _i0++) {
            spu2_mode[_i0] = 0;
          }
          int benchRet = spu2_cipher_mode_xlate(cipher_mode,spu2_mode);
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
