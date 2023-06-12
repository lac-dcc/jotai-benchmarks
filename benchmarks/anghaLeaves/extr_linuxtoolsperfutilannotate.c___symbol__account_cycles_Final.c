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
       0            big-arr\n\
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
typedef  scalar_t__ u64 ;
struct cyc_hist {unsigned int cycles_max; unsigned int cycles_min; unsigned int have_start; scalar_t__ start; unsigned int cycles; int reset; scalar_t__ num; int /*<<< orphan*/  cycles_aggr; int /*<<< orphan*/  num_aggr; } ;

/* Variables and functions */

__attribute__((used)) static int __symbol__account_cycles(struct cyc_hist *ch,
				    u64 start,
				    unsigned offset, unsigned cycles,
				    unsigned have_start)
{
	/*
	 * For now we can only account one basic block per
	 * final jump. But multiple could be overlapping.
	 * Always account the longest one. So when
	 * a shorter one has been already seen throw it away.
	 *
	 * We separately always account the full cycles.
	 */
	ch[offset].num_aggr++;
	ch[offset].cycles_aggr += cycles;

	if (cycles > ch[offset].cycles_max)
		ch[offset].cycles_max = cycles;

	if (ch[offset].cycles_min) {
		if (cycles && cycles < ch[offset].cycles_min)
			ch[offset].cycles_min = cycles;
	} else
		ch[offset].cycles_min = cycles;

	if (!have_start && ch[offset].have_start)
		return 0;
	if (ch[offset].num) {
		if (have_start && (!ch[offset].have_start ||
				   ch[offset].start > start)) {
			ch[offset].have_start = 0;
			ch[offset].cycles = 0;
			ch[offset].num = 0;
			if (ch[offset].reset < 0xffff)
				ch[offset].reset++;
		} else if (have_start &&
			   ch[offset].start < start)
			return 0;
	}
	ch[offset].have_start = have_start;
	ch[offset].start = start;
	ch[offset].cycles += cycles;
	ch[offset].num++;
	return 0;
}

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
          long start = 255;
        
          unsigned int offset = 255;
        
          unsigned int cycles = 255;
        
          unsigned int have_start = 255;
        
          int _len_ch0 = 65025;
          struct cyc_hist * ch = (struct cyc_hist *) malloc(_len_ch0*sizeof(struct cyc_hist));
          for(int _i0 = 0; _i0 < _len_ch0; _i0++) {
              ch[_i0].cycles_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].cycles_min = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].have_start = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].cycles = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].reset = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].cycles_aggr = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].num_aggr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = __symbol__account_cycles(ch,start,offset,cycles,have_start);
          printf("%d\n", benchRet); 
          free(ch);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long start = 10;
        
          unsigned int offset = 10;
        
          unsigned int cycles = 10;
        
          unsigned int have_start = 10;
        
          int _len_ch0 = 100;
          struct cyc_hist * ch = (struct cyc_hist *) malloc(_len_ch0*sizeof(struct cyc_hist));
          for(int _i0 = 0; _i0 < _len_ch0; _i0++) {
              ch[_i0].cycles_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].cycles_min = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].have_start = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].cycles = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].reset = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].cycles_aggr = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].num_aggr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = __symbol__account_cycles(ch,start,offset,cycles,have_start);
          printf("%d\n", benchRet); 
          free(ch);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
