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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct super_block {struct msdos_sb_info* s_fs_info; } ;
struct msdos_sb_info {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline struct msdos_sb_info *MSDOS_SB(struct super_block *sb)
{
	return sb->s_fs_info;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 7
          // dynamic_instructions_O0 : 7
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int _len_sb0 = 65025;
          struct super_block * sb = (struct super_block *) malloc(_len_sb0*sizeof(struct super_block));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
              int _len_sb__i0__s_fs_info0 = 1;
          sb[_i0].s_fs_info = (struct msdos_sb_info *) malloc(_len_sb__i0__s_fs_info0*sizeof(struct msdos_sb_info));
          for(int _j0 = 0; _j0 < _len_sb__i0__s_fs_info0; _j0++) {
              sb[_i0].s_fs_info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct msdos_sb_info * benchRet = MSDOS_SB(sb);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_sb0; _aux++) {
          free(sb[_aux].s_fs_info);
          }
          free(sb);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 7
          // dynamic_instructions_O0 : 7
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int _len_sb0 = 100;
          struct super_block * sb = (struct super_block *) malloc(_len_sb0*sizeof(struct super_block));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
              int _len_sb__i0__s_fs_info0 = 1;
          sb[_i0].s_fs_info = (struct msdos_sb_info *) malloc(_len_sb__i0__s_fs_info0*sizeof(struct msdos_sb_info));
          for(int _j0 = 0; _j0 < _len_sb__i0__s_fs_info0; _j0++) {
              sb[_i0].s_fs_info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct msdos_sb_info * benchRet = MSDOS_SB(sb);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_sb0; _aux++) {
          free(sb[_aux].s_fs_info);
          }
          free(sb);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 7
          // dynamic_instructions_O0 : 7
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int _len_sb0 = 1;
          struct super_block * sb = (struct super_block *) malloc(_len_sb0*sizeof(struct super_block));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
              int _len_sb__i0__s_fs_info0 = 1;
          sb[_i0].s_fs_info = (struct msdos_sb_info *) malloc(_len_sb__i0__s_fs_info0*sizeof(struct msdos_sb_info));
          for(int _j0 = 0; _j0 < _len_sb__i0__s_fs_info0; _j0++) {
              sb[_i0].s_fs_info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct msdos_sb_info * benchRet = MSDOS_SB(sb);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_sb0; _aux++) {
          free(sb[_aux].s_fs_info);
          }
          free(sb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
