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
struct adfs_dir {int pos; } ;

/* Variables and functions */
 unsigned int ADFS_NUM_DIR_ENTRIES ; 
 int ENOENT ; 

__attribute__((used)) static int
adfs_f_setpos(struct adfs_dir *dir, unsigned int fpos)
{
	if (fpos >= ADFS_NUM_DIR_ENTRIES)
		return -ENOENT;

	dir->pos = 5 + fpos * 26;
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
          unsigned int fpos = 100;
          int _len_dir0 = 1;
          struct adfs_dir * dir = (struct adfs_dir *) malloc(_len_dir0*sizeof(struct adfs_dir));
          for(int _i0 = 0; _i0 < _len_dir0; _i0++) {
            dir[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = adfs_f_setpos(dir,fpos);
          printf("%d\n", benchRet); 
          free(dir);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int fpos = 10;
          int _len_dir0 = 100;
          struct adfs_dir * dir = (struct adfs_dir *) malloc(_len_dir0*sizeof(struct adfs_dir));
          for(int _i0 = 0; _i0 < _len_dir0; _i0++) {
            dir[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = adfs_f_setpos(dir,fpos);
          printf("%d\n", benchRet); 
          free(dir);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
