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
typedef  int action_id_t ;

/* Variables and functions */
#define  CHMOD 154 
#define  CHOWN 153 
#define  CREAT 152 
#define  EXCHANGEDATA 151 
#define  FILLFD 150 
#define  FUNLOCK 149 
#define  HARDLINK 148 
#define  LENGTHEN 147 
#define  LSEEK 146 
#define  LSKEE 145 
#define  MKDIR 144 
#define  MKFIFO 143 
#define  MMAP 142 
#define  NOTHING 141 
#define  OPEN 140 
#define  READ 139 
#define  RENAME 138 
#define  REVOKE 137 
#define  RMDIR 136 
#define  SETXATTR 135 
#define  STAT 134 
#define  SYMLINK 133 
#define  TRUNC 132 
#define  UNLINK 131 
#define  UTIMES 130 
#define  WRITE 129 
#define  WRITEFD 128 

char *
get_action_name(action_id_t a)
{
	switch (a) {
	case CREAT:
		return "CREAT";
	case MKDIR:
		return "MKDIR";
	case READ:
		return "READ";
	case WRITE:
		return "WRITE";
	case WRITEFD:
		return "WRITEFD";
	case FILLFD:
		return "FILLFD";
	case UNLINK:
		return "UNLINK";
	case LSKEE:
		return "LSKEE";
	case RMDIR:
		return "RMDIR";
	case MKFIFO:
		return "MKFIFO";
	case LENGTHEN:
		return "LENGTHEN";
	case TRUNC:
		return "TRUNC";
	case SYMLINK:
		return "SYMLINK";
	case CHMOD:
		return "CHMOD";
	case CHOWN:
		return "CHOWN";
	case EXCHANGEDATA:
		return "EXCHANGEDATA";
	case RENAME:
		return "RENAME";
	case LSEEK:
		return "LSEEK";
	case OPEN:
		return "OPEN";
	case MMAP:
		return "MMAP";
	case NOTHING:
		return "NOTHING";
	case SETXATTR:
		return "SETXATTR";
	case UTIMES:
		return "UTIMES";
	case STAT:
		return "STAT";
	case HARDLINK:
		return "HARDLINK";
	case REVOKE:
		return "REVOKE";
	case FUNLOCK:
		return "FUNLOCK";
	}
	return "Unknown";
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
          int a = 100;
          char * benchRet = get_action_name(a);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int a = 255;
          char * benchRet = get_action_name(a);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int a = 10;
          char * benchRet = get_action_name(a);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
