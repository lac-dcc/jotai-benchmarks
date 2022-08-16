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
struct rt2x00_dev {int dummy; } ;
struct queue_entry {int dummy; } ;
typedef  enum rt2x00_dump_type { ____Placeholder_rt2x00_dump_type } rt2x00_dump_type ;

/* Variables and functions */

__attribute__((used)) static inline void rt2x00debug_dump_frame(struct rt2x00_dev *rt2x00dev,
					  enum rt2x00_dump_type type,
					  struct queue_entry *entry)
{
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
          enum rt2x00_dump_type type = 0;
          int _len_rt2x00dev0 = 1;
          struct rt2x00_dev * rt2x00dev = (struct rt2x00_dev *) malloc(_len_rt2x00dev0*sizeof(struct rt2x00_dev));
          for(int _i0 = 0; _i0 < _len_rt2x00dev0; _i0++) {
            rt2x00dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_entry0 = 1;
          struct queue_entry * entry = (struct queue_entry *) malloc(_len_entry0*sizeof(struct queue_entry));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            entry[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rt2x00debug_dump_frame(rt2x00dev,type,entry);
          free(rt2x00dev);
          free(entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
