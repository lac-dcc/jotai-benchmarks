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
struct attr_cache_entry {scalar_t__ fileid; } ;

/* Variables and functions */

int attr_cmp(struct attr_cache_entry *lhs, struct attr_cache_entry *rhs)
{
    return lhs->fileid < rhs->fileid ? -1 : lhs->fileid > rhs->fileid;
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
          int _len_lhs0 = 1;
          struct attr_cache_entry * lhs = (struct attr_cache_entry *) malloc(_len_lhs0*sizeof(struct attr_cache_entry));
          for(int _i0 = 0; _i0 < _len_lhs0; _i0++) {
            lhs[_i0].fileid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rhs0 = 1;
          struct attr_cache_entry * rhs = (struct attr_cache_entry *) malloc(_len_rhs0*sizeof(struct attr_cache_entry));
          for(int _i0 = 0; _i0 < _len_rhs0; _i0++) {
            rhs[_i0].fileid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = attr_cmp(lhs,rhs);
          printf("%d\n", benchRet); 
          free(lhs);
          free(rhs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
