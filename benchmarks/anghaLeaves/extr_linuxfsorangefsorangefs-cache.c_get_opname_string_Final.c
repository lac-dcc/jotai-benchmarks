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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ type; } ;
struct orangefs_kernel_op_s {TYPE_1__ upcall; } ;
typedef  scalar_t__ __s32 ;

/* Variables and functions */
 scalar_t__ ORANGEFS_VFS_OP_CANCEL ; 
 scalar_t__ ORANGEFS_VFS_OP_CREATE ; 
 scalar_t__ ORANGEFS_VFS_OP_FEATURES ; 
 scalar_t__ ORANGEFS_VFS_OP_FILE_IO ; 
 scalar_t__ ORANGEFS_VFS_OP_FSKEY ; 
 scalar_t__ ORANGEFS_VFS_OP_FSYNC ; 
 scalar_t__ ORANGEFS_VFS_OP_FS_MOUNT ; 
 scalar_t__ ORANGEFS_VFS_OP_FS_UMOUNT ; 
 scalar_t__ ORANGEFS_VFS_OP_GETATTR ; 
 scalar_t__ ORANGEFS_VFS_OP_GETXATTR ; 
 scalar_t__ ORANGEFS_VFS_OP_LISTXATTR ; 
 scalar_t__ ORANGEFS_VFS_OP_LOOKUP ; 
 scalar_t__ ORANGEFS_VFS_OP_MKDIR ; 
 scalar_t__ ORANGEFS_VFS_OP_PARAM ; 
 scalar_t__ ORANGEFS_VFS_OP_PERF_COUNT ; 
 scalar_t__ ORANGEFS_VFS_OP_RA_FLUSH ; 
 scalar_t__ ORANGEFS_VFS_OP_READDIR ; 
 scalar_t__ ORANGEFS_VFS_OP_READDIRPLUS ; 
 scalar_t__ ORANGEFS_VFS_OP_REMOVE ; 
 scalar_t__ ORANGEFS_VFS_OP_REMOVEXATTR ; 
 scalar_t__ ORANGEFS_VFS_OP_RENAME ; 
 scalar_t__ ORANGEFS_VFS_OP_SETATTR ; 
 scalar_t__ ORANGEFS_VFS_OP_SETXATTR ; 
 scalar_t__ ORANGEFS_VFS_OP_STATFS ; 
 scalar_t__ ORANGEFS_VFS_OP_SYMLINK ; 
 scalar_t__ ORANGEFS_VFS_OP_TRUNCATE ; 

char *get_opname_string(struct orangefs_kernel_op_s *new_op)
{
	if (new_op) {
		__s32 type = new_op->upcall.type;

		if (type == ORANGEFS_VFS_OP_FILE_IO)
			return "OP_FILE_IO";
		else if (type == ORANGEFS_VFS_OP_LOOKUP)
			return "OP_LOOKUP";
		else if (type == ORANGEFS_VFS_OP_CREATE)
			return "OP_CREATE";
		else if (type == ORANGEFS_VFS_OP_GETATTR)
			return "OP_GETATTR";
		else if (type == ORANGEFS_VFS_OP_REMOVE)
			return "OP_REMOVE";
		else if (type == ORANGEFS_VFS_OP_MKDIR)
			return "OP_MKDIR";
		else if (type == ORANGEFS_VFS_OP_READDIR)
			return "OP_READDIR";
		else if (type == ORANGEFS_VFS_OP_READDIRPLUS)
			return "OP_READDIRPLUS";
		else if (type == ORANGEFS_VFS_OP_SETATTR)
			return "OP_SETATTR";
		else if (type == ORANGEFS_VFS_OP_SYMLINK)
			return "OP_SYMLINK";
		else if (type == ORANGEFS_VFS_OP_RENAME)
			return "OP_RENAME";
		else if (type == ORANGEFS_VFS_OP_STATFS)
			return "OP_STATFS";
		else if (type == ORANGEFS_VFS_OP_TRUNCATE)
			return "OP_TRUNCATE";
		else if (type == ORANGEFS_VFS_OP_RA_FLUSH)
			return "OP_RA_FLUSH";
		else if (type == ORANGEFS_VFS_OP_FS_MOUNT)
			return "OP_FS_MOUNT";
		else if (type == ORANGEFS_VFS_OP_FS_UMOUNT)
			return "OP_FS_UMOUNT";
		else if (type == ORANGEFS_VFS_OP_GETXATTR)
			return "OP_GETXATTR";
		else if (type == ORANGEFS_VFS_OP_SETXATTR)
			return "OP_SETXATTR";
		else if (type == ORANGEFS_VFS_OP_LISTXATTR)
			return "OP_LISTXATTR";
		else if (type == ORANGEFS_VFS_OP_REMOVEXATTR)
			return "OP_REMOVEXATTR";
		else if (type == ORANGEFS_VFS_OP_PARAM)
			return "OP_PARAM";
		else if (type == ORANGEFS_VFS_OP_PERF_COUNT)
			return "OP_PERF_COUNT";
		else if (type == ORANGEFS_VFS_OP_CANCEL)
			return "OP_CANCEL";
		else if (type == ORANGEFS_VFS_OP_FSYNC)
			return "OP_FSYNC";
		else if (type == ORANGEFS_VFS_OP_FSKEY)
			return "OP_FSKEY";
		else if (type == ORANGEFS_VFS_OP_FEATURES)
			return "OP_FEATURES";
	}
	return "OP_UNKNOWN?";
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
          int _len_new_op0 = 1;
          struct orangefs_kernel_op_s * new_op = (struct orangefs_kernel_op_s *) malloc(_len_new_op0*sizeof(struct orangefs_kernel_op_s));
          for(int _i0 = 0; _i0 < _len_new_op0; _i0++) {
            new_op[_i0].upcall.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = get_opname_string(new_op);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(new_op);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_new_op0 = 100;
          struct orangefs_kernel_op_s * new_op = (struct orangefs_kernel_op_s *) malloc(_len_new_op0*sizeof(struct orangefs_kernel_op_s));
          for(int _i0 = 0; _i0 < _len_new_op0; _i0++) {
            new_op[_i0].upcall.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = get_opname_string(new_op);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(new_op);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
