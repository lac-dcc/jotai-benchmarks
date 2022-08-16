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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int status; int flag; TYPE_1__* encoding; } ;
typedef  TYPE_2__ mbfl_identify_filter ;
struct TYPE_4__ {scalar_t__ no_encoding; } ;

/* Variables and functions */
 scalar_t__ mbfl_no_encoding_cp950 ; 

__attribute__((used)) static int mbfl_filt_ident_big5(int c, mbfl_identify_filter *filter)
{
	int c1;
	if (filter->encoding->no_encoding == mbfl_no_encoding_cp950) {
		c1 = 0x80;
	} else {
		c1 = 0xa0;
	}

	if (filter->status) {		/* kanji second char */
		if (c < 0x40 || (c > 0x7e && c < 0xa1) ||c > 0xfe) {	/* bad */
		    filter->flag = 1;
		}
		filter->status = 0;
	} else if (c >= 0 && c < 0x80) {	/* latin  ok */
		;
	} else if (c > c1 && c < 0xff) {	/* DBCS lead byte */
		filter->status = 1;
	} else {							/* bad */
		filter->flag = 1;
	}

	return c;
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
          int c = 100;
          int _len_filter0 = 1;
          struct TYPE_5__ * filter = (struct TYPE_5__ *) malloc(_len_filter0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
            filter[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        filter[_i0].flag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_filter__i0__encoding0 = 1;
          filter[_i0].encoding = (struct TYPE_4__ *) malloc(_len_filter__i0__encoding0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_filter__i0__encoding0; _j0++) {
            filter[_i0].encoding->no_encoding = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mbfl_filt_ident_big5(c,filter);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_filter0; _aux++) {
          free(filter[_aux].encoding);
          }
          free(filter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
