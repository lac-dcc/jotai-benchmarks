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
struct page {int dummy; } ;
struct file {int dummy; } ;
struct address_space {int dummy; } ;
typedef  int /*<<< orphan*/  loff_t ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int hugetlbfs_write_begin(struct file *file,
			struct address_space *mapping,
			loff_t pos, unsigned len, unsigned flags,
			struct page **pagep, void **fsdata)
{
	return -EINVAL;
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
          int pos = 100;
          unsigned int len = 100;
          unsigned int flags = 100;
          int _len_file0 = 1;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mapping0 = 1;
          struct address_space * mapping = (struct address_space *) malloc(_len_mapping0*sizeof(struct address_space));
          for(int _i0 = 0; _i0 < _len_mapping0; _i0++) {
            mapping[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pagep0 = 1;
          struct page ** pagep = (struct page **) malloc(_len_pagep0*sizeof(struct page *));
          for(int _i0 = 0; _i0 < _len_pagep0; _i0++) {
            int _len_pagep1 = 1;
            pagep[_i0] = (struct page *) malloc(_len_pagep1*sizeof(struct page));
            for(int _i1 = 0; _i1 < _len_pagep1; _i1++) {
              pagep[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_fsdata0 = 1;
          void ** fsdata = (void **) malloc(_len_fsdata0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_fsdata0; _i0++) {
          }
          int benchRet = hugetlbfs_write_begin(file,mapping,pos,len,flags,pagep,fsdata);
          printf("%d\n", benchRet); 
          free(file);
          free(mapping);
          for(int i1 = 0; i1 < _len_pagep0; i1++) {
            int _len_pagep1 = 1;
              free(pagep[i1]);
          }
          free(pagep);
          for(int i1 = 0; i1 < _len_fsdata0; i1++) {
            int _len_fsdata1 = 1;
              }
          free(fsdata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
