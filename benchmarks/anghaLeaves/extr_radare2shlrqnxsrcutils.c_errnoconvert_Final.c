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
struct errnomap_t {int nto; int other; int /*<<< orphan*/  member_1; int /*<<< orphan*/  member_0; } ;
typedef  int /*<<< orphan*/  errnomap ;

/* Variables and functions */
 int /*<<< orphan*/  EILSEQ ; 
 int /*<<< orphan*/  ELIBACC ; 
 int /*<<< orphan*/  ELIBBAD ; 
 int /*<<< orphan*/  ELIBEXEC ; 
 int /*<<< orphan*/  ELIBMAX ; 
 int /*<<< orphan*/  ELIBSCN ; 
 int /*<<< orphan*/  ENAMETOOLONG ; 
 int /*<<< orphan*/  ENOSYS ; 
 int /*<<< orphan*/  NTO_EILSEQ ; 
 int /*<<< orphan*/  NTO_ELIBACC ; 
 int /*<<< orphan*/  NTO_ELIBBAD ; 
 int /*<<< orphan*/  NTO_ELIBEXEC ; 
 int /*<<< orphan*/  NTO_ELIBMAX ; 
 int /*<<< orphan*/  NTO_ELIBSCN ; 
 int /*<<< orphan*/  NTO_ENAMETOOLONG ; 
 int /*<<< orphan*/  NTO_ENOSYS ; 

int errnoconvert (int x) {
	struct errnomap_t errnomap[] = {
#if defined(__linux__)
		{NTO_ENAMETOOLONG, ENAMETOOLONG},
		{NTO_ELIBACC, ELIBACC},
		{NTO_ELIBBAD, ELIBBAD},
		{NTO_ELIBSCN, ELIBSCN},
		{NTO_ELIBMAX, ELIBMAX},
		{NTO_ELIBEXEC, ELIBEXEC},
		{NTO_EILSEQ, EILSEQ},
		{NTO_ENOSYS, ENOSYS}
#elif defined(__CYGWIN__)
		{NTO_ENAMETOOLONG, ENAMETOOLONG},
		{NTO_ENOSYS, ENOSYS}
#elif defined(__MINGW32__) || defined(MINGW32) || defined(__NetBSD__)
		/* The closest mappings from mingw's errno.h.  */
		{NTO_ENAMETOOLONG, ENAMETOOLONG},
		{NTO_ELIBACC, ESRCH},
		{NTO_ELIBBAD, ESRCH},
		{NTO_ELIBSCN, ENOEXEC},
		{NTO_ELIBMAX, EPERM},
		{NTO_ELIBEXEC, ENOEXEC},
		{NTO_EILSEQ, EILSEQ},
		{NTO_ENOSYS, ENOSYS}
#else
		{0}
#endif
	};
	int i;

	for (i = 0; i < sizeof(errnomap) / sizeof(errnomap[0]); i++)
		if (errnomap[i].nto == x)
			return errnomap[i].other;
	return x;
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
          int x = 100;
          int benchRet = errnoconvert(x);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int x = 255;
          int benchRet = errnoconvert(x);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x = 10;
          int benchRet = errnoconvert(x);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
