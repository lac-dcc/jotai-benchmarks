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
       0            big-arr-10x\n\
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
typedef  void* UINT8 ;
typedef  int UINT32 ;

/* Variables and functions */

UINT8* UINT32_TO_STREAM_f (UINT8 *p, UINT32 u32)
{
	*(p)++ = (UINT8)(u32);
	*(p)++ = (UINT8)((u32) >> 8);
	*(p)++ = (UINT8)((u32) >> 16);
	*(p)++ = (UINT8)((u32) >> 24);
	return p;
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

    // big-arr-10x
    case 0:
    {
          int u32 = 10;
          int _len_p0 = 100;
          void ** p = (void **) malloc(_len_p0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
          }
          void ** benchRet = UINT32_TO_STREAM_f(p,u32);
          for(int i1 = 0; i1 < _len_p0; i1++) {
            int _len_p1 = 1;
              }
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
