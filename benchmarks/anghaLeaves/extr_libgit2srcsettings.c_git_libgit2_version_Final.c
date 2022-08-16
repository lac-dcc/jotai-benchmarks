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

/* Variables and functions */
 int LIBGIT2_VER_MAJOR ; 
 int LIBGIT2_VER_MINOR ; 
 int LIBGIT2_VER_REVISION ; 

void git_libgit2_version(int *major, int *minor, int *rev)
{
	*major = LIBGIT2_VER_MAJOR;
	*minor = LIBGIT2_VER_MINOR;
	*rev = LIBGIT2_VER_REVISION;
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
          int _len_major0 = 1;
          int * major = (int *) malloc(_len_major0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_major0; _i0++) {
            major[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_minor0 = 1;
          int * minor = (int *) malloc(_len_minor0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_minor0; _i0++) {
            minor[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rev0 = 1;
          int * rev = (int *) malloc(_len_rev0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rev0; _i0++) {
            rev[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          git_libgit2_version(major,minor,rev);
          free(major);
          free(minor);
          free(rev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
