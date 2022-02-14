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
       0            big-arr\n\
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
struct f2fs_dir_entry {size_t file_type; } ;

/* Variables and functions */
 unsigned char DT_UNKNOWN ; 
 size_t F2FS_FT_MAX ; 
 unsigned char* f2fs_filetype_table ; 

unsigned char f2fs_get_de_type(struct f2fs_dir_entry *de)
{
	if (de->file_type < F2FS_FT_MAX)
		return f2fs_filetype_table[de->file_type];
	return DT_UNKNOWN;
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

    // big-arr
    case 0:
    {
          int _len_de0 = 1;
          struct f2fs_dir_entry * de = (struct f2fs_dir_entry *) malloc(_len_de0*sizeof(struct f2fs_dir_entry));
          for(int _i0 = 0; _i0 < _len_de0; _i0++) {
            de->file_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char benchRet = f2fs_get_de_type(de);
          printf("%c\n", (benchRet%26)+'a'); 
          free(de);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
