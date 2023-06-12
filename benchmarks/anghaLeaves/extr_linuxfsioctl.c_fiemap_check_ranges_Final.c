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
typedef  scalar_t__ u64 ;
struct super_block {int /*<<< orphan*/  s_maxbytes; } ;

/* Variables and functions */
 int EFBIG ; 
 int EINVAL ; 

__attribute__((used)) static int fiemap_check_ranges(struct super_block *sb,
			       u64 start, u64 len, u64 *new_len)
{
	u64 maxbytes = (u64) sb->s_maxbytes;

	*new_len = len;

	if (len == 0)
		return -EINVAL;

	if (start > maxbytes)
		return -EFBIG;

	/*
	 * Shrink request scope to what the fs can actually handle.
	 */
	if (len > maxbytes || (maxbytes - len) < start)
		*new_len = maxbytes - start;

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
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
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
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          long start = 100;
        
          long len = 100;
        
          int _len_sb0 = 1;
          struct super_block * sb = (struct super_block *) malloc(_len_sb0*sizeof(struct super_block));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
              sb[_i0].s_maxbytes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_new_len0 = 1;
          long * new_len = (long *) malloc(_len_new_len0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_new_len0; _i0++) {
            new_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = fiemap_check_ranges(sb,start,len,new_len);
          printf("%d\n", benchRet); 
          free(sb);
          free(new_len);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
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
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          long start = 255;
        
          long len = 255;
        
          int _len_sb0 = 65025;
          struct super_block * sb = (struct super_block *) malloc(_len_sb0*sizeof(struct super_block));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
              sb[_i0].s_maxbytes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_new_len0 = 65025;
          long * new_len = (long *) malloc(_len_new_len0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_new_len0; _i0++) {
            new_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = fiemap_check_ranges(sb,start,len,new_len);
          printf("%d\n", benchRet); 
          free(sb);
          free(new_len);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
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
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          long start = 10;
        
          long len = 10;
        
          int _len_sb0 = 100;
          struct super_block * sb = (struct super_block *) malloc(_len_sb0*sizeof(struct super_block));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
              sb[_i0].s_maxbytes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_new_len0 = 100;
          long * new_len = (long *) malloc(_len_new_len0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_new_len0; _i0++) {
            new_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = fiemap_check_ranges(sb,start,len,new_len);
          printf("%d\n", benchRet); 
          free(sb);
          free(new_len);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          long start = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_sb0 = 1;
          struct super_block * sb = (struct super_block *) malloc(_len_sb0*sizeof(struct super_block));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
              sb[_i0].s_maxbytes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_new_len0 = 1;
          long * new_len = (long *) malloc(_len_new_len0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_new_len0; _i0++) {
            new_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = fiemap_check_ranges(sb,start,len,new_len);
          printf("%d\n", benchRet); 
          free(sb);
          free(new_len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
