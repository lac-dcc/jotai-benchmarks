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
struct perf_event_attr {int dummy; } ;
typedef  int /*<<< orphan*/  pid_t ;

/* Variables and functions */

void test_attr__open(struct perf_event_attr *attr, pid_t pid, int cpu,
                     int fd, int group_fd, unsigned long flags)
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
          int pid = 100;
          int cpu = 100;
          int fd = 100;
          int group_fd = 100;
          unsigned long flags = 100;
          int _len_attr0 = 1;
          struct perf_event_attr * attr = (struct perf_event_attr *) malloc(_len_attr0*sizeof(struct perf_event_attr));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          test_attr__open(attr,pid,cpu,fd,group_fd,flags);
          free(attr);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int pid = 10;
          int cpu = 10;
          int fd = 10;
          int group_fd = 10;
          unsigned long flags = 10;
          int _len_attr0 = 100;
          struct perf_event_attr * attr = (struct perf_event_attr *) malloc(_len_attr0*sizeof(struct perf_event_attr));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          test_attr__open(attr,pid,cpu,fd,group_fd,flags);
          free(attr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
