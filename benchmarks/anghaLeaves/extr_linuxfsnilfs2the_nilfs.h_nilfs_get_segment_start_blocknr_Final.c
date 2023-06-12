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
struct the_nilfs {int ns_first_data_block; scalar_t__ ns_blocks_per_segment; } ;
typedef  int sector_t ;
typedef  int __u64 ;

/* Variables and functions */

__attribute__((used)) static inline sector_t
nilfs_get_segment_start_blocknr(struct the_nilfs *nilfs, __u64 segnum)
{
	return (segnum == 0) ? nilfs->ns_first_data_block :
		(sector_t)nilfs->ns_blocks_per_segment * segnum;
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
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
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
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int segnum = 100;
        
          int _len_nilfs0 = 1;
          struct the_nilfs * nilfs = (struct the_nilfs *) malloc(_len_nilfs0*sizeof(struct the_nilfs));
          for(int _i0 = 0; _i0 < _len_nilfs0; _i0++) {
              nilfs[_i0].ns_first_data_block = ((-2 * (next_i()%2)) + 1) * next_i();
          nilfs[_i0].ns_blocks_per_segment = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = nilfs_get_segment_start_blocknr(nilfs,segnum);
          printf("%d\n", benchRet); 
          free(nilfs);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
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
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int segnum = 255;
        
          int _len_nilfs0 = 65025;
          struct the_nilfs * nilfs = (struct the_nilfs *) malloc(_len_nilfs0*sizeof(struct the_nilfs));
          for(int _i0 = 0; _i0 < _len_nilfs0; _i0++) {
              nilfs[_i0].ns_first_data_block = ((-2 * (next_i()%2)) + 1) * next_i();
          nilfs[_i0].ns_blocks_per_segment = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = nilfs_get_segment_start_blocknr(nilfs,segnum);
          printf("%d\n", benchRet); 
          free(nilfs);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
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
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int segnum = 10;
        
          int _len_nilfs0 = 100;
          struct the_nilfs * nilfs = (struct the_nilfs *) malloc(_len_nilfs0*sizeof(struct the_nilfs));
          for(int _i0 = 0; _i0 < _len_nilfs0; _i0++) {
              nilfs[_i0].ns_first_data_block = ((-2 * (next_i()%2)) + 1) * next_i();
          nilfs[_i0].ns_blocks_per_segment = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = nilfs_get_segment_start_blocknr(nilfs,segnum);
          printf("%d\n", benchRet); 
          free(nilfs);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
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
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int segnum = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_nilfs0 = 1;
          struct the_nilfs * nilfs = (struct the_nilfs *) malloc(_len_nilfs0*sizeof(struct the_nilfs));
          for(int _i0 = 0; _i0 < _len_nilfs0; _i0++) {
              nilfs[_i0].ns_first_data_block = ((-2 * (next_i()%2)) + 1) * next_i();
          nilfs[_i0].ns_blocks_per_segment = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = nilfs_get_segment_start_blocknr(nilfs,segnum);
          printf("%d\n", benchRet); 
          free(nilfs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
