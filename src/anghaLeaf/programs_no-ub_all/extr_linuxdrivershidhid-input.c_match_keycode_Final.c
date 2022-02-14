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
struct hid_usage {scalar_t__ type; unsigned int code; } ;

/* Variables and functions */
 scalar_t__ EV_KEY ; 

__attribute__((used)) static bool match_keycode(struct hid_usage *usage,
			  unsigned int cur_idx, unsigned int keycode)
{
	/*
	 * We should exclude unmapped usages when doing lookup by keycode.
	 */
	return (usage->type == EV_KEY && usage->code == keycode);
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
          unsigned int cur_idx = 255;
          unsigned int keycode = 255;
          int _len_usage0 = 1;
          struct hid_usage * usage = (struct hid_usage *) malloc(_len_usage0*sizeof(struct hid_usage));
          for(int _i0 = 0; _i0 < _len_usage0; _i0++) {
            usage->type = ((-2 * (next_i()%2)) + 1) * next_i();
        usage->code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = match_keycode(usage,cur_idx,keycode);
          printf("%d\n", benchRet); 
          free(usage);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
