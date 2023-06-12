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
struct xfs_dir2_sf_hdr {scalar_t__ i8count; } ;
struct xfs_dir2_sf_entry {int dummy; } ;

/* Variables and functions */
 scalar_t__ XFS_INO32_SIZE ; 
 scalar_t__ XFS_INO64_SIZE ; 

__attribute__((used)) static int
xfs_dir2_sf_entsize(
	struct xfs_dir2_sf_hdr	*hdr,
	int			len)
{
	int count = sizeof(struct xfs_dir2_sf_entry);	/* namelen + offset */

	count += len;					/* name */
	count += hdr->i8count ? XFS_INO64_SIZE : XFS_INO32_SIZE; /* ino # */
	return count;
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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int len = 100;
        
          int _len_hdr0 = 1;
          struct xfs_dir2_sf_hdr * hdr = (struct xfs_dir2_sf_hdr *) malloc(_len_hdr0*sizeof(struct xfs_dir2_sf_hdr));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
              hdr[_i0].i8count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = xfs_dir2_sf_entsize(hdr,len);
          printf("%d\n", benchRet); 
          free(hdr);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int len = 255;
        
          int _len_hdr0 = 65025;
          struct xfs_dir2_sf_hdr * hdr = (struct xfs_dir2_sf_hdr *) malloc(_len_hdr0*sizeof(struct xfs_dir2_sf_hdr));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
              hdr[_i0].i8count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = xfs_dir2_sf_entsize(hdr,len);
          printf("%d\n", benchRet); 
          free(hdr);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int len = 10;
        
          int _len_hdr0 = 100;
          struct xfs_dir2_sf_hdr * hdr = (struct xfs_dir2_sf_hdr *) malloc(_len_hdr0*sizeof(struct xfs_dir2_sf_hdr));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
              hdr[_i0].i8count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = xfs_dir2_sf_entsize(hdr,len);
          printf("%d\n", benchRet); 
          free(hdr);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_hdr0 = 1;
          struct xfs_dir2_sf_hdr * hdr = (struct xfs_dir2_sf_hdr *) malloc(_len_hdr0*sizeof(struct xfs_dir2_sf_hdr));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
              hdr[_i0].i8count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = xfs_dir2_sf_entsize(hdr,len);
          printf("%d\n", benchRet); 
          free(hdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
