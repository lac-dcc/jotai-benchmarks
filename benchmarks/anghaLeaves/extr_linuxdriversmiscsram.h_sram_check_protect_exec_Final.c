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
struct sram_reserve {int dummy; } ;
struct sram_partition {int dummy; } ;
struct sram_dev {int dummy; } ;

/* Variables and functions */
 int ENODEV ; 

__attribute__((used)) static inline int sram_check_protect_exec(struct sram_dev *sram,
					  struct sram_reserve *block,
					  struct sram_partition *part)
{
	return -ENODEV;
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
          int _len_sram0 = 1;
          struct sram_dev * sram = (struct sram_dev *) malloc(_len_sram0*sizeof(struct sram_dev));
          for(int _i0 = 0; _i0 < _len_sram0; _i0++) {
            sram[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_block0 = 1;
          struct sram_reserve * block = (struct sram_reserve *) malloc(_len_block0*sizeof(struct sram_reserve));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_part0 = 1;
          struct sram_partition * part = (struct sram_partition *) malloc(_len_part0*sizeof(struct sram_partition));
          for(int _i0 = 0; _i0 < _len_part0; _i0++) {
            part[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sram_check_protect_exec(sram,block,part);
          printf("%d\n", benchRet); 
          free(sram);
          free(block);
          free(part);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
