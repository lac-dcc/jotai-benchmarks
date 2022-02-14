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
struct nd_opt_hdr {int nd_opt_type; int nd_opt_len; } ;

/* Variables and functions */

__attribute__((used)) static struct nd_opt_hdr *ndisc_next_option(struct nd_opt_hdr *cur,
					    struct nd_opt_hdr *end)
{
	int type;
	if (!cur || !end || cur >= end)
		return NULL;
	type = cur->nd_opt_type;
	do {
		cur = ((void *)cur) + (cur->nd_opt_len << 3);
	} while (cur < end && cur->nd_opt_type != type);
	return cur <= end && cur->nd_opt_type == type ? cur : NULL;
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
          int _len_cur0 = 1;
          struct nd_opt_hdr * cur = (struct nd_opt_hdr *) malloc(_len_cur0*sizeof(struct nd_opt_hdr));
          for(int _i0 = 0; _i0 < _len_cur0; _i0++) {
            cur->nd_opt_type = ((-2 * (next_i()%2)) + 1) * next_i();
        cur->nd_opt_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end0 = 1;
          struct nd_opt_hdr * end = (struct nd_opt_hdr *) malloc(_len_end0*sizeof(struct nd_opt_hdr));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end->nd_opt_type = ((-2 * (next_i()%2)) + 1) * next_i();
        end->nd_opt_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct nd_opt_hdr * benchRet = ndisc_next_option(cur,end);
          printf("{{struct}} %p\n", &benchRet); 
          free(cur);
          free(end);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
