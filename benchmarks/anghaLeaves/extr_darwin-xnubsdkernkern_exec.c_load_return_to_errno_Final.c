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
typedef  int load_return_t ;

/* Variables and functions */
 int EACCES ; 
 int EBADARCH ; 
 int EBADEXEC ; 
 int EBADMACHO ; 
 int EIO ; 
 int ENOENT ; 
 int ENOMEM ; 
 int ESHLIBVERS ; 
#define  LOAD_BADARCH 140 
#define  LOAD_BADARCH_X86 139 
#define  LOAD_BADMACHO 138 
#define  LOAD_BADMACHO_UPX 137 
#define  LOAD_DECRYPTFAIL 136 
#define  LOAD_ENOENT 135 
#define  LOAD_FAILURE 134 
#define  LOAD_IOERROR 133 
#define  LOAD_NOSPACE 132 
#define  LOAD_PROTECT 131 
#define  LOAD_RESOURCE 130 
#define  LOAD_SHLIB 129 
#define  LOAD_SUCCESS 128 

__attribute__((used)) static int
load_return_to_errno(load_return_t lrtn)
{
	switch (lrtn) {
	case LOAD_SUCCESS:
		return 0;
	case LOAD_BADARCH:
	case LOAD_BADARCH_X86:
		return EBADARCH;
	case LOAD_BADMACHO:
	case LOAD_BADMACHO_UPX:
		return EBADMACHO;
	case LOAD_SHLIB:
		return ESHLIBVERS;
	case LOAD_NOSPACE:
	case LOAD_RESOURCE:
		return ENOMEM;
	case LOAD_PROTECT:
		return EACCES;
	case LOAD_ENOENT:
		return ENOENT;
	case LOAD_IOERROR:
		return EIO;
	case LOAD_FAILURE:
	case LOAD_DECRYPTFAIL:
	default:
		return EBADEXEC;
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
          int lrtn = 100;
          int benchRet = load_return_to_errno(lrtn);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int lrtn = 255;
          int benchRet = load_return_to_errno(lrtn);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int lrtn = 10;
          int benchRet = load_return_to_errno(lrtn);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
