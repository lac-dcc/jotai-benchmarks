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
struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;

/* Variables and functions */

__attribute__((used)) static bool same_st(struct stat *st1, struct stat *st2)
{
    return st1->st_dev == st2->st_dev && st1->st_ino == st2->st_ino;
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
          int _len_st10 = 1;
          struct stat * st1 = (struct stat *) malloc(_len_st10*sizeof(struct stat));
          for(int _i0 = 0; _i0 < _len_st10; _i0++) {
            st1[_i0].st_dev = ((-2 * (next_i()%2)) + 1) * next_i();
        st1[_i0].st_ino = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_st20 = 1;
          struct stat * st2 = (struct stat *) malloc(_len_st20*sizeof(struct stat));
          for(int _i0 = 0; _i0 < _len_st20; _i0++) {
            st2[_i0].st_dev = ((-2 * (next_i()%2)) + 1) * next_i();
        st2[_i0].st_ino = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = same_st(st1,st2);
          printf("%d\n", benchRet); 
          free(st1);
          free(st2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
