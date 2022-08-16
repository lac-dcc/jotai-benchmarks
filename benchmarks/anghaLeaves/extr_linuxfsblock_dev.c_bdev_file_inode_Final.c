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
struct inode {int dummy; } ;
struct file {TYPE_1__* f_mapping; } ;
struct TYPE_2__ {struct inode* host; } ;

/* Variables and functions */

__attribute__((used)) static struct inode *bdev_file_inode(struct file *file)
{
	return file->f_mapping->host;
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
          int _len_file0 = 1;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              int _len_file__i0__f_mapping0 = 1;
          file[_i0].f_mapping = (struct TYPE_2__ *) malloc(_len_file__i0__f_mapping0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_file__i0__f_mapping0; _j0++) {
              int _len_file__i0__f_mapping_host0 = 1;
          file[_i0].f_mapping->host = (struct inode *) malloc(_len_file__i0__f_mapping_host0*sizeof(struct inode));
          for(int _j0 = 0; _j0 < _len_file__i0__f_mapping_host0; _j0++) {
            file[_i0].f_mapping->host->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct inode * benchRet = bdev_file_inode(file);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_file0; _aux++) {
          free(file[_aux].f_mapping);
          }
          free(file);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
