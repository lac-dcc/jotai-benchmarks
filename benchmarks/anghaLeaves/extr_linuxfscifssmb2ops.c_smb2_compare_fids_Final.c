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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ persistent_fid; scalar_t__ volatile_fid; } ;
struct cifsFileInfo {TYPE_1__ fid; } ;

/* Variables and functions */

__attribute__((used)) static bool
smb2_compare_fids(struct cifsFileInfo *ob1, struct cifsFileInfo *ob2)
{
	return ob1->fid.persistent_fid == ob2->fid.persistent_fid &&
	       ob1->fid.volatile_fid == ob2->fid.volatile_fid;
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
          int _len_ob10 = 1;
          struct cifsFileInfo * ob1 = (struct cifsFileInfo *) malloc(_len_ob10*sizeof(struct cifsFileInfo));
          for(int _i0 = 0; _i0 < _len_ob10; _i0++) {
            ob1[_i0].fid.persistent_fid = ((-2 * (next_i()%2)) + 1) * next_i();
        ob1[_i0].fid.volatile_fid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ob20 = 1;
          struct cifsFileInfo * ob2 = (struct cifsFileInfo *) malloc(_len_ob20*sizeof(struct cifsFileInfo));
          for(int _i0 = 0; _i0 < _len_ob20; _i0++) {
            ob2[_i0].fid.persistent_fid = ((-2 * (next_i()%2)) + 1) * next_i();
        ob2[_i0].fid.volatile_fid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = smb2_compare_fids(ob1,ob2);
          printf("%d\n", benchRet); 
          free(ob1);
          free(ob2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
