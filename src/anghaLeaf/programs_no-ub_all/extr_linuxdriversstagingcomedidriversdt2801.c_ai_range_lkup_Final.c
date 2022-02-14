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
struct comedi_lrange {int dummy; } ;

/* Variables and functions */
 struct comedi_lrange const range_bipolar10 ; 
 struct comedi_lrange const range_dt2801_ai_pgl_bipolar ; 
 struct comedi_lrange const range_dt2801_ai_pgl_unipolar ; 
 struct comedi_lrange const range_unipolar10 ; 
 struct comedi_lrange const range_unipolar5 ; 
 struct comedi_lrange const range_unknown ; 

__attribute__((used)) static const struct comedi_lrange *ai_range_lkup(int type, int opt)
{
	switch (type) {
	case 0:
		return (opt) ?
		    &range_dt2801_ai_pgl_unipolar :
		    &range_dt2801_ai_pgl_bipolar;
	case 1:
		return (opt) ? &range_unipolar10 : &range_bipolar10;
	case 2:
		return &range_unipolar5;
	}
	return &range_unknown;
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
          int type = 255;
          int opt = 255;
          const struct comedi_lrange * benchRet = ai_range_lkup(type,opt);
          printf("{{struct}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
