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
typedef  int u32 ;
struct tg3 {int nvram_pagesize; } ;

/* Variables and functions */
#define  FLASH_5752PAGE_SIZE_1K 134 
#define  FLASH_5752PAGE_SIZE_256 133 
#define  FLASH_5752PAGE_SIZE_264 132 
#define  FLASH_5752PAGE_SIZE_2K 131 
#define  FLASH_5752PAGE_SIZE_4K 130 
#define  FLASH_5752PAGE_SIZE_512 129 
#define  FLASH_5752PAGE_SIZE_528 128 
 int NVRAM_CFG1_5752PAGE_SIZE_MASK ; 

__attribute__((used)) static void tg3_nvram_get_pagesize(struct tg3 *tp, u32 nvmcfg1)
{
	switch (nvmcfg1 & NVRAM_CFG1_5752PAGE_SIZE_MASK) {
	case FLASH_5752PAGE_SIZE_256:
		tp->nvram_pagesize = 256;
		break;
	case FLASH_5752PAGE_SIZE_512:
		tp->nvram_pagesize = 512;
		break;
	case FLASH_5752PAGE_SIZE_1K:
		tp->nvram_pagesize = 1024;
		break;
	case FLASH_5752PAGE_SIZE_2K:
		tp->nvram_pagesize = 2048;
		break;
	case FLASH_5752PAGE_SIZE_4K:
		tp->nvram_pagesize = 4096;
		break;
	case FLASH_5752PAGE_SIZE_264:
		tp->nvram_pagesize = 264;
		break;
	case FLASH_5752PAGE_SIZE_528:
		tp->nvram_pagesize = 528;
		break;
	}
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
          int nvmcfg1 = 100;
          int _len_tp0 = 1;
          struct tg3 * tp = (struct tg3 *) malloc(_len_tp0*sizeof(struct tg3));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].nvram_pagesize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tg3_nvram_get_pagesize(tp,nvmcfg1);
          free(tp);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int nvmcfg1 = 10;
          int _len_tp0 = 100;
          struct tg3 * tp = (struct tg3 *) malloc(_len_tp0*sizeof(struct tg3));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].nvram_pagesize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tg3_nvram_get_pagesize(tp,nvmcfg1);
          free(tp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
