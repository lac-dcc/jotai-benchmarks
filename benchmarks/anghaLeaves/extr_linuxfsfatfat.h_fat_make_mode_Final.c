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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int umode_t ;
typedef  int u8 ;
struct TYPE_2__ {int fs_dmask; int fs_fmask; int /*<<< orphan*/  rodir; } ;
struct msdos_sb_info {TYPE_1__ options; } ;

/* Variables and functions */
 int ATTR_DIR ; 
 int ATTR_RO ; 
 int S_IFDIR ; 
 int S_IFREG ; 
 int S_IWUGO ; 

__attribute__((used)) static inline umode_t fat_make_mode(struct msdos_sb_info *sbi,
				   u8 attrs, umode_t mode)
{
	if (attrs & ATTR_RO && !((attrs & ATTR_DIR) && !sbi->options.rodir))
		mode &= ~S_IWUGO;

	if (attrs & ATTR_DIR)
		return (mode & ~sbi->options.fs_dmask) | S_IFDIR;
	else
		return (mode & ~sbi->options.fs_fmask) | S_IFREG;
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
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int attrs = 100;
        
          int mode = 100;
        
          int _len_sbi0 = 1;
          struct msdos_sb_info * sbi = (struct msdos_sb_info *) malloc(_len_sbi0*sizeof(struct msdos_sb_info));
          for(int _i0 = 0; _i0 < _len_sbi0; _i0++) {
              sbi[_i0].options.fs_dmask = ((-2 * (next_i()%2)) + 1) * next_i();
          sbi[_i0].options.fs_fmask = ((-2 * (next_i()%2)) + 1) * next_i();
          sbi[_i0].options.rodir = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = fat_make_mode(sbi,attrs,mode);
          printf("%d\n", benchRet); 
          free(sbi);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int attrs = 255;
        
          int mode = 255;
        
          int _len_sbi0 = 65025;
          struct msdos_sb_info * sbi = (struct msdos_sb_info *) malloc(_len_sbi0*sizeof(struct msdos_sb_info));
          for(int _i0 = 0; _i0 < _len_sbi0; _i0++) {
              sbi[_i0].options.fs_dmask = ((-2 * (next_i()%2)) + 1) * next_i();
          sbi[_i0].options.fs_fmask = ((-2 * (next_i()%2)) + 1) * next_i();
          sbi[_i0].options.rodir = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = fat_make_mode(sbi,attrs,mode);
          printf("%d\n", benchRet); 
          free(sbi);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int attrs = 10;
        
          int mode = 10;
        
          int _len_sbi0 = 100;
          struct msdos_sb_info * sbi = (struct msdos_sb_info *) malloc(_len_sbi0*sizeof(struct msdos_sb_info));
          for(int _i0 = 0; _i0 < _len_sbi0; _i0++) {
              sbi[_i0].options.fs_dmask = ((-2 * (next_i()%2)) + 1) * next_i();
          sbi[_i0].options.fs_fmask = ((-2 * (next_i()%2)) + 1) * next_i();
          sbi[_i0].options.rodir = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = fat_make_mode(sbi,attrs,mode);
          printf("%d\n", benchRet); 
          free(sbi);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int attrs = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int mode = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_sbi0 = 1;
          struct msdos_sb_info * sbi = (struct msdos_sb_info *) malloc(_len_sbi0*sizeof(struct msdos_sb_info));
          for(int _i0 = 0; _i0 < _len_sbi0; _i0++) {
              sbi[_i0].options.fs_dmask = ((-2 * (next_i()%2)) + 1) * next_i();
          sbi[_i0].options.fs_fmask = ((-2 * (next_i()%2)) + 1) * next_i();
          sbi[_i0].options.rodir = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = fat_make_mode(sbi,attrs,mode);
          printf("%d\n", benchRet); 
          free(sbi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
