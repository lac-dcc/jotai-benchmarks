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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct cb_desc {scalar_t__ bUseShortPreamble; scalar_t__ bUseShortGI; } ;

/* Variables and functions */
 int DESC90_RATEMCS15 ; 

__attribute__((used)) static u8 _rtl92e_query_is_short(u8 TxHT, u8 TxRate, struct cb_desc *tcb_desc)
{
	u8   tmp_Short;

	tmp_Short = (TxHT == 1) ? ((tcb_desc->bUseShortGI) ? 1 : 0) :
			((tcb_desc->bUseShortPreamble) ? 1 : 0);
	if (TxHT == 1 && TxRate != DESC90_RATEMCS15)
		tmp_Short = 0;

	return tmp_Short;
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

    // big-arr
    case 0:
    {
          int TxHT = 255;
          int TxRate = 255;
          int _len_tcb_desc0 = 1;
          struct cb_desc * tcb_desc = (struct cb_desc *) malloc(_len_tcb_desc0*sizeof(struct cb_desc));
          for(int _i0 = 0; _i0 < _len_tcb_desc0; _i0++) {
            tcb_desc->bUseShortPreamble = ((-2 * (next_i()%2)) + 1) * next_i();
        tcb_desc->bUseShortGI = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _rtl92e_query_is_short(TxHT,TxRate,tcb_desc);
          printf("%d\n", benchRet); 
          free(tcb_desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
