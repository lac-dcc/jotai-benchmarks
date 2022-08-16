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
typedef  int /*<<< orphan*/  char_u ;

/* Variables and functions */

int
mch_copy_file_attribute(char_u *from, char_u *to)
{
#ifdef FEAT_MBYTE
    /* File streams only work on Windows NT and later. */
    PlatformId();
    if (g_PlatformId == VER_PLATFORM_WIN32_NT)
	copy_infostreams(from, to);
#endif
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
          int _len_from0 = 1;
          int * from = (int *) malloc(_len_from0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_from0; _i0++) {
            from[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_to0 = 1;
          int * to = (int *) malloc(_len_to0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_to0; _i0++) {
            to[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mch_copy_file_attribute(from,to);
          printf("%d\n", benchRet); 
          free(from);
          free(to);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
