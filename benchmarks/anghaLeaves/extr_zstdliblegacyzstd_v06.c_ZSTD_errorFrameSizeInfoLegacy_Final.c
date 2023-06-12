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
       3            empty\n\
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

/* Variables and functions */
 unsigned long long ZSTD_CONTENTSIZE_ERROR ; 

__attribute__((used)) static void ZSTD_errorFrameSizeInfoLegacy(size_t* cSize, unsigned long long* dBound, size_t ret)
{
    *cSize = ret;
    *dBound = ZSTD_CONTENTSIZE_ERROR;
}

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
          unsigned long ret = 100;
        
          int _len_cSize0 = 1;
          unsigned long * cSize = (unsigned long *) malloc(_len_cSize0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_cSize0; _i0++) {
            cSize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dBound0 = 1;
          unsigned long long * dBound = (unsigned long long *) malloc(_len_dBound0*sizeof(unsigned long long));
          for(int _i0 = 0; _i0 < _len_dBound0; _i0++) {
            dBound[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          ZSTD_errorFrameSizeInfoLegacy(cSize,dBound,ret);
          free(cSize);
          free(dBound);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long ret = 255;
        
          int _len_cSize0 = 65025;
          unsigned long * cSize = (unsigned long *) malloc(_len_cSize0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_cSize0; _i0++) {
            cSize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dBound0 = 65025;
          unsigned long long * dBound = (unsigned long long *) malloc(_len_dBound0*sizeof(unsigned long long));
          for(int _i0 = 0; _i0 < _len_dBound0; _i0++) {
            dBound[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          ZSTD_errorFrameSizeInfoLegacy(cSize,dBound,ret);
          free(cSize);
          free(dBound);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long ret = 10;
        
          int _len_cSize0 = 100;
          unsigned long * cSize = (unsigned long *) malloc(_len_cSize0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_cSize0; _i0++) {
            cSize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dBound0 = 100;
          unsigned long long * dBound = (unsigned long long *) malloc(_len_dBound0*sizeof(unsigned long long));
          for(int _i0 = 0; _i0 < _len_dBound0; _i0++) {
            dBound[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          ZSTD_errorFrameSizeInfoLegacy(cSize,dBound,ret);
          free(cSize);
          free(dBound);
        
        break;
    }
    // empty
    case 3:
    {
          unsigned long ret = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_cSize0 = 1;
          unsigned long * cSize = (unsigned long *) malloc(_len_cSize0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_cSize0; _i0++) {
            cSize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dBound0 = 1;
          unsigned long long * dBound = (unsigned long long *) malloc(_len_dBound0*sizeof(unsigned long long));
          for(int _i0 = 0; _i0 < _len_dBound0; _i0++) {
            dBound[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          ZSTD_errorFrameSizeInfoLegacy(cSize,dBound,ret);
          free(cSize);
          free(dBound);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
