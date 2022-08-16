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
struct selinux_avc {unsigned int avc_cache_threshold; } ;

/* Variables and functions */

unsigned int avc_get_cache_threshold(struct selinux_avc *avc)
{
	return avc->avc_cache_threshold;
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
          int _len_avc0 = 1;
          struct selinux_avc * avc = (struct selinux_avc *) malloc(_len_avc0*sizeof(struct selinux_avc));
          for(int _i0 = 0; _i0 < _len_avc0; _i0++) {
            avc[_i0].avc_cache_threshold = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = avc_get_cache_threshold(avc);
          printf("%u\n", benchRet); 
          free(avc);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_avc0 = 100;
          struct selinux_avc * avc = (struct selinux_avc *) malloc(_len_avc0*sizeof(struct selinux_avc));
          for(int _i0 = 0; _i0 < _len_avc0; _i0++) {
            avc[_i0].avc_cache_threshold = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = avc_get_cache_threshold(avc);
          printf("%u\n", benchRet); 
          free(avc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
