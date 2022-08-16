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
       1            big-arr-10x\n\
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
typedef  int u8 ;
struct antsel_info {scalar_t__ antsel_type; } ;

/* Variables and functions */
 scalar_t__ ANTSEL_2x3 ; 
 scalar_t__ ANTSEL_2x4 ; 
 int ANT_SELCFG_DEF_2x2 ; 

__attribute__((used)) static u8 brcms_c_antsel_id2antcfg(struct antsel_info *asi, u8 id)
{
	u8 antcfg = ANT_SELCFG_DEF_2x2;

	if (asi->antsel_type == ANTSEL_2x4) {
		/* 2x4 antenna diversity board, 4 cfgs: 0-2 0-3 1-2 1-3 */
		antcfg = (((id & 0x2) << 3) | ((id & 0x1) + 2));
		return antcfg;

	} else if (asi->antsel_type == ANTSEL_2x3) {
		/* 2x3 antenna selection, 3 cfgs: 0-1 0-2 2-1 */
		antcfg = (((id & 0x02) << 4) | ((id & 0x1) + 1));
		return antcfg;
	}

	return antcfg;
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
          int id = 100;
          int _len_asi0 = 1;
          struct antsel_info * asi = (struct antsel_info *) malloc(_len_asi0*sizeof(struct antsel_info));
          for(int _i0 = 0; _i0 < _len_asi0; _i0++) {
            asi[_i0].antsel_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = brcms_c_antsel_id2antcfg(asi,id);
          printf("%d\n", benchRet); 
          free(asi);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int id = 10;
          int _len_asi0 = 100;
          struct antsel_info * asi = (struct antsel_info *) malloc(_len_asi0*sizeof(struct antsel_info));
          for(int _i0 = 0; _i0 < _len_asi0; _i0++) {
            asi[_i0].antsel_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = brcms_c_antsel_id2antcfg(asi,id);
          printf("%d\n", benchRet); 
          free(asi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
