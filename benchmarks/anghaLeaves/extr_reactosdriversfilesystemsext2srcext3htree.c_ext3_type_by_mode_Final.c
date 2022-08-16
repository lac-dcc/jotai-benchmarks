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
typedef  int umode_t ;

/* Variables and functions */
 unsigned char EXT3_FT_BLKDEV ; 
 unsigned char EXT3_FT_CHRDEV ; 
 unsigned char EXT3_FT_DIR ; 
 unsigned char EXT3_FT_FIFO ; 
 unsigned char EXT3_FT_REG_FILE ; 
 unsigned char EXT3_FT_SOCK ; 
 unsigned char EXT3_FT_SYMLINK ; 
#define  S_IFBLK 134 
#define  S_IFCHR 133 
#define  S_IFDIR 132 
#define  S_IFIFO 131 
#define  S_IFLNK 130 
 int S_IFMT ; 
#define  S_IFREG 129 
#define  S_IFSOCK 128 

unsigned char ext3_type_by_mode(umode_t mode)
{
    unsigned char type = 0;

    switch (mode & S_IFMT) {
    case S_IFREG:
        type = EXT3_FT_REG_FILE;
        break;
    case S_IFDIR:
        type = EXT3_FT_DIR;
        break;
    case S_IFCHR:
        type =  EXT3_FT_CHRDEV;
        break;
    case S_IFBLK:
        type = EXT3_FT_BLKDEV;
        break;
    case S_IFIFO:
        type = EXT3_FT_FIFO;
        break;
    case S_IFSOCK:
        type = EXT3_FT_SOCK;
        break;
    case S_IFLNK:
        type = EXT3_FT_SYMLINK;
    }

    return type;
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
          int mode = 100;
          unsigned char benchRet = ext3_type_by_mode(mode);
          printf("%c\n", (benchRet %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int mode = 255;
          unsigned char benchRet = ext3_type_by_mode(mode);
          printf("%c\n", (benchRet %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mode = 10;
          unsigned char benchRet = ext3_type_by_mode(mode);
          printf("%c\n", (benchRet %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
