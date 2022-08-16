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
typedef  unsigned int u8 ;

/* Variables and functions */
 int EINVAL ; 
#define  KG_USAGE_SEAL 129 
#define  KG_USAGE_SIGN 128 

__attribute__((used)) static int
arcfour_hmac_md5_usage_to_salt(unsigned int usage, u8 salt[4])
{
	unsigned int ms_usage;

	switch (usage) {
	case KG_USAGE_SIGN:
		ms_usage = 15;
		break;
	case KG_USAGE_SEAL:
		ms_usage = 13;
		break;
	default:
		return -EINVAL;
	}
	salt[0] = (ms_usage >> 0) & 0xff;
	salt[1] = (ms_usage >> 8) & 0xff;
	salt[2] = (ms_usage >> 16) & 0xff;
	salt[3] = (ms_usage >> 24) & 0xff;

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
          unsigned int usage = 100;
          int _len_salt0 = 4;
          unsigned int * salt = (unsigned int *) malloc(_len_salt0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_salt0; _i0++) {
            salt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = arcfour_hmac_md5_usage_to_salt(usage,salt);
          printf("%d\n", benchRet); 
          free(salt);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int usage = 10;
          int _len_salt0 = 100;
          unsigned int * salt = (unsigned int *) malloc(_len_salt0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_salt0; _i0++) {
            salt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = arcfour_hmac_md5_usage_to_salt(usage,salt);
          printf("%d\n", benchRet); 
          free(salt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
