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
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

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
              free(pagep[i1]);
          }
          free(pagep);
          for(int i1 = 0; i1 < _len_fsdata0; i1++) {
              }
          free(fsdata);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int pos = 255;
        
          unsigned int len = 255;
        
          unsigned int flags = 255;
        
          int _len_file0 = 65025;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_mapping0 = 65025;
          struct address_space * mapping = (struct address_space *) malloc(_len_mapping0*sizeof(struct address_space));
          for(int _i0 = 0; _i0 < _len_mapping0; _i0++) {
              mapping[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_pagep0 = 65025;
          struct page ** pagep = (struct page **) malloc(_len_pagep0*sizeof(struct page *));
          for(int _i0 = 0; _i0 < _len_pagep0; _i0++) {
            int _len_pagep1 = 1;
            pagep[_i0] = (struct page *) malloc(_len_pagep1*sizeof(struct page));
            for(int _i1 = 0; _i1 < _len_pagep1; _i1++) {
                pagep[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int _len_fsdata0 = 65025;
          void ** fsdata = (void **) malloc(_len_fsdata0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_fsdata0; _i0++) {
          }
        
          int benchRet = hugetlbfs_write_begin(file,mapping,pos,len,flags,pagep,fsdata);
          printf("%d\n", benchRet); 
          free(file);
          free(mapping);
          for(int i1 = 0; i1 < _len_pagep0; i1++) {
              free(pagep[i1]);
          }
          free(pagep);
          for(int i1 = 0; i1 < _len_fsdata0; i1++) {
              }
          free(fsdata);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int pos = 10;
        
          unsigned int len = 10;
        
          unsigned int flags = 10;
        
          int _len_file0 = 100;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_mapping0 = 100;
          struct address_space * mapping = (struct address_space *) malloc(_len_mapping0*sizeof(struct address_space));
          for(int _i0 = 0; _i0 < _len_mapping0; _i0++) {
              mapping[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_pagep0 = 100;
          struct page ** pagep = (struct page **) malloc(_len_pagep0*sizeof(struct page *));
          for(int _i0 = 0; _i0 < _len_pagep0; _i0++) {
            int _len_pagep1 = 1;
            pagep[_i0] = (struct page *) malloc(_len_pagep1*sizeof(struct page));
            for(int _i1 = 0; _i1 < _len_pagep1; _i1++) {
                pagep[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int _len_fsdata0 = 100;
          void ** fsdata = (void **) malloc(_len_fsdata0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_fsdata0; _i0++) {
          }
        
          int benchRet = hugetlbfs_write_begin(file,mapping,pos,len,flags,pagep,fsdata);
          printf("%d\n", benchRet); 
          free(file);
          free(mapping);
          for(int i1 = 0; i1 < _len_pagep0; i1++) {
              free(pagep[i1]);
          }
          free(pagep);
          for(int i1 = 0; i1 < _len_fsdata0; i1++) {
              }
          free(fsdata);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int pos = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned int len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned int flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
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
              free(pagep[i1]);
          }
          free(pagep);
          for(int i1 = 0; i1 < _len_fsdata0; i1++) {
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
