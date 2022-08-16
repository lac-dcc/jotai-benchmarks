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
typedef  int u16 ;
struct ar9003_txc {int info; int link; int data0; int ctl3; int data1; int ctl5; int data2; int ctl7; int data3; int ctl9; } ;

/* Variables and functions */
 int AR_TxPtrChkSum ; 

__attribute__((used)) static u16 ar9003_calc_ptr_chksum(struct ar9003_txc *ads)
{
	int checksum;

	checksum = ads->info + ads->link
		+ ads->data0 + ads->ctl3
		+ ads->data1 + ads->ctl5
		+ ads->data2 + ads->ctl7
		+ ads->data3 + ads->ctl9;

	return ((checksum & 0xffff) + (checksum >> 16)) & AR_TxPtrChkSum;
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
          int _len_ads0 = 1;
          struct ar9003_txc * ads = (struct ar9003_txc *) malloc(_len_ads0*sizeof(struct ar9003_txc));
          for(int _i0 = 0; _i0 < _len_ads0; _i0++) {
            ads[_i0].info = ((-2 * (next_i()%2)) + 1) * next_i();
        ads[_i0].link = ((-2 * (next_i()%2)) + 1) * next_i();
        ads[_i0].data0 = ((-2 * (next_i()%2)) + 1) * next_i();
        ads[_i0].ctl3 = ((-2 * (next_i()%2)) + 1) * next_i();
        ads[_i0].data1 = ((-2 * (next_i()%2)) + 1) * next_i();
        ads[_i0].ctl5 = ((-2 * (next_i()%2)) + 1) * next_i();
        ads[_i0].data2 = ((-2 * (next_i()%2)) + 1) * next_i();
        ads[_i0].ctl7 = ((-2 * (next_i()%2)) + 1) * next_i();
        ads[_i0].data3 = ((-2 * (next_i()%2)) + 1) * next_i();
        ads[_i0].ctl9 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ar9003_calc_ptr_chksum(ads);
          printf("%d\n", benchRet); 
          free(ads);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
