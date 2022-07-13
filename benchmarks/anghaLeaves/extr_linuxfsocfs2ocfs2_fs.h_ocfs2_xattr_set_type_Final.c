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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct ocfs2_xattr_entry {int xe_type; } ;

/* Variables and functions */
 int OCFS2_XATTR_TYPE_MASK ; 

__attribute__((used)) static inline void ocfs2_xattr_set_type(struct ocfs2_xattr_entry *xe, int type)
{
	xe->xe_type |= type & OCFS2_XATTR_TYPE_MASK;
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
          int type = 100;
          int _len_xe0 = 1;
          struct ocfs2_xattr_entry * xe = (struct ocfs2_xattr_entry *) malloc(_len_xe0*sizeof(struct ocfs2_xattr_entry));
          for(int _i0 = 0; _i0 < _len_xe0; _i0++) {
            xe[_i0].xe_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ocfs2_xattr_set_type(xe,type);
          free(xe);
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          int _len_xe0 = 65025;
          struct ocfs2_xattr_entry * xe = (struct ocfs2_xattr_entry *) malloc(_len_xe0*sizeof(struct ocfs2_xattr_entry));
          for(int _i0 = 0; _i0 < _len_xe0; _i0++) {
            xe[_i0].xe_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ocfs2_xattr_set_type(xe,type);
          free(xe);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          int _len_xe0 = 100;
          struct ocfs2_xattr_entry * xe = (struct ocfs2_xattr_entry *) malloc(_len_xe0*sizeof(struct ocfs2_xattr_entry));
          for(int _i0 = 0; _i0 < _len_xe0; _i0++) {
            xe[_i0].xe_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ocfs2_xattr_set_type(xe,type);
          free(xe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
