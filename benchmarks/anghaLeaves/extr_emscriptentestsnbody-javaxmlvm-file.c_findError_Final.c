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
typedef  int I_32 ;

/* Variables and functions */
#define  EACCES 137 
#define  EBADF 136 
#define  EEXIST 135 
#define  EFBIG 134 
#define  ELOOP 133 
#define  ENAMETOOLONG 132 
#define  ENOENT 131 
#define  ENOSPC 130 
#define  ENOTDIR 129 
#define  EPERM 128 
 int HYPORT_ERROR_FILE_BADF ; 
 int HYPORT_ERROR_FILE_DISKFULL ; 
 int HYPORT_ERROR_FILE_EXIST ; 
 int HYPORT_ERROR_FILE_LOOP ; 
 int HYPORT_ERROR_FILE_NAMETOOLONG ; 
 int HYPORT_ERROR_FILE_NOENT ; 
 int HYPORT_ERROR_FILE_NOPERMISSION ; 
 int HYPORT_ERROR_FILE_NOTDIR ; 
 int HYPORT_ERROR_FILE_OPFAILED ; 

__attribute__((used)) static I_32 findError (I_32 errorCode)
{
    switch (errorCode)
    {
        case EACCES:
        case EPERM:
            return HYPORT_ERROR_FILE_NOPERMISSION;
        case ENAMETOOLONG:
            return HYPORT_ERROR_FILE_NAMETOOLONG;
        case ENOENT:
            return HYPORT_ERROR_FILE_NOENT;
        case ENOTDIR:
            return HYPORT_ERROR_FILE_NOTDIR;
        case ELOOP:
            return HYPORT_ERROR_FILE_LOOP;
            
        case EBADF:
            return HYPORT_ERROR_FILE_BADF;
        case EEXIST:
            return HYPORT_ERROR_FILE_EXIST;
        case ENOSPC:
        case EFBIG:
            return HYPORT_ERROR_FILE_DISKFULL;
        default:
            return HYPORT_ERROR_FILE_OPFAILED;
    }
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
          int errorCode = 100;
          int benchRet = findError(errorCode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int errorCode = 255;
          int benchRet = findError(errorCode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int errorCode = 10;
          int benchRet = findError(errorCode);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
