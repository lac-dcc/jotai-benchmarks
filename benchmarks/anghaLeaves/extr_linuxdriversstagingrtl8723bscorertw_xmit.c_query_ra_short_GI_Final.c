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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
struct TYPE_2__ {int sgi_20m; int sgi_40m; } ;
struct sta_info {int bw_mode; TYPE_1__ htpriv; } ;

/* Variables and functions */
#define  CHANNEL_WIDTH_20 130 
#define  CHANNEL_WIDTH_40 129 
#define  CHANNEL_WIDTH_80 128 

u8 query_ra_short_GI(struct sta_info *psta)
{
	u8 sgi = false, sgi_20m = false, sgi_40m = false, sgi_80m = false;

	sgi_20m = psta->htpriv.sgi_20m;
	sgi_40m = psta->htpriv.sgi_40m;

	switch (psta->bw_mode) {
	case CHANNEL_WIDTH_80:
		sgi = sgi_80m;
		break;
	case CHANNEL_WIDTH_40:
		sgi = sgi_40m;
		break;
	case CHANNEL_WIDTH_20:
	default:
		sgi = sgi_20m;
		break;
	}

	return sgi;
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
          int _len_psta0 = 1;
          struct sta_info * psta = (struct sta_info *) malloc(_len_psta0*sizeof(struct sta_info));
          for(int _i0 = 0; _i0 < _len_psta0; _i0++) {
            psta[_i0].bw_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        psta[_i0].htpriv.sgi_20m = ((-2 * (next_i()%2)) + 1) * next_i();
        psta[_i0].htpriv.sgi_40m = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = query_ra_short_GI(psta);
          printf("%d\n", benchRet); 
          free(psta);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
