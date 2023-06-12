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
       3            empty\n\
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
struct ovl_fh {int len; scalar_t__ magic; scalar_t__ version; int flags; } ;

/* Variables and functions */
 int EINVAL ; 
 int ENODATA ; 
 int OVL_FH_FLAG_ALL ; 
 int OVL_FH_FLAG_ANY_ENDIAN ; 
 int OVL_FH_FLAG_BIG_ENDIAN ; 
 int OVL_FH_FLAG_CPU_ENDIAN ; 
 scalar_t__ OVL_FH_MAGIC ; 
 scalar_t__ OVL_FH_VERSION ; 

int ovl_check_fh_len(struct ovl_fh *fh, int fh_len)
{
	if (fh_len < sizeof(struct ovl_fh) || fh_len < fh->len)
		return -EINVAL;

	if (fh->magic != OVL_FH_MAGIC)
		return -EINVAL;

	/* Treat larger version and unknown flags as "origin unknown" */
	if (fh->version > OVL_FH_VERSION || fh->flags & ~OVL_FH_FLAG_ALL)
		return -ENODATA;

	/* Treat endianness mismatch as "origin unknown" */
	if (!(fh->flags & OVL_FH_FLAG_ANY_ENDIAN) &&
	    (fh->flags & OVL_FH_FLAG_BIG_ENDIAN) != OVL_FH_FLAG_CPU_ENDIAN)
		return -ENODATA;

	return 0;
}

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
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int fh_len = 100;
        
          int _len_fh0 = 1;
          struct ovl_fh * fh = (struct ovl_fh *) malloc(_len_fh0*sizeof(struct ovl_fh));
          for(int _i0 = 0; _i0 < _len_fh0; _i0++) {
              fh[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          fh[_i0].magic = ((-2 * (next_i()%2)) + 1) * next_i();
          fh[_i0].version = ((-2 * (next_i()%2)) + 1) * next_i();
          fh[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ovl_check_fh_len(fh,fh_len);
          printf("%d\n", benchRet); 
          free(fh);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int fh_len = 255;
        
          int _len_fh0 = 65025;
          struct ovl_fh * fh = (struct ovl_fh *) malloc(_len_fh0*sizeof(struct ovl_fh));
          for(int _i0 = 0; _i0 < _len_fh0; _i0++) {
              fh[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          fh[_i0].magic = ((-2 * (next_i()%2)) + 1) * next_i();
          fh[_i0].version = ((-2 * (next_i()%2)) + 1) * next_i();
          fh[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ovl_check_fh_len(fh,fh_len);
          printf("%d\n", benchRet); 
          free(fh);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int fh_len = 10;
        
          int _len_fh0 = 100;
          struct ovl_fh * fh = (struct ovl_fh *) malloc(_len_fh0*sizeof(struct ovl_fh));
          for(int _i0 = 0; _i0 < _len_fh0; _i0++) {
              fh[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          fh[_i0].magic = ((-2 * (next_i()%2)) + 1) * next_i();
          fh[_i0].version = ((-2 * (next_i()%2)) + 1) * next_i();
          fh[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ovl_check_fh_len(fh,fh_len);
          printf("%d\n", benchRet); 
          free(fh);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int fh_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_fh0 = 1;
          struct ovl_fh * fh = (struct ovl_fh *) malloc(_len_fh0*sizeof(struct ovl_fh));
          for(int _i0 = 0; _i0 < _len_fh0; _i0++) {
              fh[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          fh[_i0].magic = ((-2 * (next_i()%2)) + 1) * next_i();
          fh[_i0].version = ((-2 * (next_i()%2)) + 1) * next_i();
          fh[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ovl_check_fh_len(fh,fh_len);
          printf("%d\n", benchRet); 
          free(fh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
