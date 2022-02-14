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
typedef  enum orangefs_ds_type { ____Placeholder_orangefs_ds_type } orangefs_ds_type ;

/* Variables and functions */
 int ORANGEFS_TYPE_DIRECTORY ; 
 int ORANGEFS_TYPE_METAFILE ; 
 int ORANGEFS_TYPE_SYMLINK ; 
 int S_IFDIR ; 
 int S_IFLNK ; 
 int S_IFREG ; 

__attribute__((used)) static int orangefs_inode_type(enum orangefs_ds_type objtype)
{
	if (objtype == ORANGEFS_TYPE_METAFILE)
		return S_IFREG;
	else if (objtype == ORANGEFS_TYPE_DIRECTORY)
		return S_IFDIR;
	else if (objtype == ORANGEFS_TYPE_SYMLINK)
		return S_IFLNK;
	else
		return -1;
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
          enum orangefs_ds_type objtype = 0;
          int benchRet = orangefs_inode_type(objtype);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
