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
typedef  scalar_t__ vlen ;
typedef  scalar_t__ ut8 ;
typedef  scalar_t__ ut32 ;

/* Variables and functions */
 scalar_t__ SDB_MAX_KEY ; 
 scalar_t__ SDB_MAX_VALUE ; 

__attribute__((used)) static int pack_kvlen(ut8 *buf, ut32 klen, ut32 vlen) {
	if (klen > SDB_MAX_KEY) {
		return 0; // 0xff = 254 chars+trailing zero
	}
	if (vlen >= SDB_MAX_VALUE) {
		return 0;
	}
	buf[0] = (ut8)klen;
	buf[1] = (ut8)((vlen      ) & 0xff);
	buf[2] = (ut8)((vlen >> 8 ) & 0xff);
	buf[3] = (ut8)((vlen >> 16) & 0xff);
	return 1;
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
          long klen = 100;
          long vlen = 100;
          int _len_buf0 = 1;
          long * buf = (long *) malloc(_len_buf0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pack_kvlen(buf,klen,vlen);
          printf("%d\n", benchRet); 
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long klen = 10;
          long vlen = 10;
          int _len_buf0 = 100;
          long * buf = (long *) malloc(_len_buf0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pack_kvlen(buf,klen,vlen);
          printf("%d\n", benchRet); 
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
