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
struct eckd_count {int head; int record; } ;

/* Variables and functions */

__attribute__((used)) static int dasd_eckd_count_records(struct eckd_count *fmt_buffer, int start,
				   int max)
{
	int head;
	int i;

	head = fmt_buffer[start].head;

	/*
	 * There are 3 conditions where we stop counting:
	 * - if data reoccurs (same head and record may reoccur), which may
	 *   happen due to the way DASD_ECKD_CCW_READ_COUNT works
	 * - when the head changes, because we're iterating over several tracks
	 *   then (DASD_ECKD_CCW_READ_COUNT_MT)
	 * - when we've reached the end of sensible data in the buffer (the
	 *   record will be 0 then)
	 */
	for (i = start; i < max; i++) {
		if (i > start) {
			if ((fmt_buffer[i].head == head &&
			    fmt_buffer[i].record == 1) ||
			    fmt_buffer[i].head != head ||
			    fmt_buffer[i].record == 0)
				break;
		}
	}

	return i - start;
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
          int start = 255;
        
          int max = 255;
        
          int _len_fmt_buffer0 = 65025;
          struct eckd_count * fmt_buffer = (struct eckd_count *) malloc(_len_fmt_buffer0*sizeof(struct eckd_count));
          for(int _i0 = 0; _i0 < _len_fmt_buffer0; _i0++) {
              fmt_buffer[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
          fmt_buffer[_i0].record = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = dasd_eckd_count_records(fmt_buffer,start,max);
          printf("%d\n", benchRet); 
          free(fmt_buffer);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int start = 10;
        
          int max = 10;
        
          int _len_fmt_buffer0 = 100;
          struct eckd_count * fmt_buffer = (struct eckd_count *) malloc(_len_fmt_buffer0*sizeof(struct eckd_count));
          for(int _i0 = 0; _i0 < _len_fmt_buffer0; _i0++) {
              fmt_buffer[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
          fmt_buffer[_i0].record = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = dasd_eckd_count_records(fmt_buffer,start,max);
          printf("%d\n", benchRet); 
          free(fmt_buffer);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
