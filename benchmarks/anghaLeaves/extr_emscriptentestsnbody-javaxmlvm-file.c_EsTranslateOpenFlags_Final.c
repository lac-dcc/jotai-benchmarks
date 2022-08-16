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
 int HyOpenAppend ; 
 int HyOpenCreate ; 
 int HyOpenCreateNew ; 
 int HyOpenRead ; 
 int HyOpenTruncate ; 
 int HyOpenWrite ; 
 int O_APPEND ; 
 int O_CREAT ; 
 int O_EXCL ; 
 int O_RDONLY ; 
 int O_RDWR ; 
 int O_TRUNC ; 
 int O_WRONLY ; 

__attribute__((used)) static I_32
EsTranslateOpenFlags (I_32 flags)
{
    I_32 realFlags = 0;
    
    if (flags & HyOpenAppend)
    {
        realFlags |= O_APPEND;
    }
    if (flags & HyOpenTruncate)
    {
        realFlags |= O_TRUNC;
    }
    if (flags & HyOpenCreate)
    {
        realFlags |= O_CREAT;
    }
    if (flags & HyOpenCreateNew)
    {
        realFlags |= O_EXCL | O_CREAT;
    }
#ifdef O_SYNC
	if (flags & HyOpenSync) {
		realFlags |= O_SYNC;
	}
#endif    
    if (flags & HyOpenRead)
    {
        if (flags & HyOpenWrite)
        {
            return (O_RDWR | realFlags);
        }
        return (O_RDONLY | realFlags);
    }
    if (flags & HyOpenWrite)
    {
        return (O_WRONLY | realFlags);
    }
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

    // int-bounds
    case 0:
    {
          int flags = 100;
          int benchRet = EsTranslateOpenFlags(flags);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int flags = 255;
          int benchRet = EsTranslateOpenFlags(flags);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int flags = 10;
          int benchRet = EsTranslateOpenFlags(flags);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
