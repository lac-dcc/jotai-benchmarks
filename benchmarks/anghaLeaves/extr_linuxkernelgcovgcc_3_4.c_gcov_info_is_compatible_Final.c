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
struct gcov_info {scalar_t__ stamp; } ;

/* Variables and functions */

int gcov_info_is_compatible(struct gcov_info *info1, struct gcov_info *info2)
{
	return (info1->stamp == info2->stamp);
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
          int _len_info10 = 1;
          struct gcov_info * info1 = (struct gcov_info *) malloc(_len_info10*sizeof(struct gcov_info));
          for(int _i0 = 0; _i0 < _len_info10; _i0++) {
            info1[_i0].stamp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info20 = 1;
          struct gcov_info * info2 = (struct gcov_info *) malloc(_len_info20*sizeof(struct gcov_info));
          for(int _i0 = 0; _i0 < _len_info20; _i0++) {
            info2[_i0].stamp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gcov_info_is_compatible(info1,info2);
          printf("%d\n", benchRet); 
          free(info1);
          free(info2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
