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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u64 ;
struct TYPE_2__ {int size; } ;
struct auxtrace_info_event {TYPE_1__ header; } ;

/* Variables and functions */

__attribute__((used)) static bool intel_pt_has(struct auxtrace_info_event *auxtrace_info, int pos)
{
	return auxtrace_info->header.size >=
		sizeof(struct auxtrace_info_event) + (sizeof(u64) * (pos + 1));
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
          int pos = 100;
          int _len_auxtrace_info0 = 1;
          struct auxtrace_info_event * auxtrace_info = (struct auxtrace_info_event *) malloc(_len_auxtrace_info0*sizeof(struct auxtrace_info_event));
          for(int _i0 = 0; _i0 < _len_auxtrace_info0; _i0++) {
            auxtrace_info[_i0].header.size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_pt_has(auxtrace_info,pos);
          printf("%d\n", benchRet); 
          free(auxtrace_info);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int pos = 10;
          int _len_auxtrace_info0 = 100;
          struct auxtrace_info_event * auxtrace_info = (struct auxtrace_info_event *) malloc(_len_auxtrace_info0*sizeof(struct auxtrace_info_event));
          for(int _i0 = 0; _i0 < _len_auxtrace_info0; _i0++) {
            auxtrace_info[_i0].header.size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_pt_has(auxtrace_info,pos);
          printf("%d\n", benchRet); 
          free(auxtrace_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
