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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int sub_id; } ;
struct hidpp_report {scalar_t__ report_id; TYPE_1__ rap; } ;

/* Variables and functions */
 scalar_t__ REPORT_ID_HIDPP_SHORT ; 

__attribute__((used)) static inline bool hidpp_report_is_connect_event(struct hidpp_report *report)
{
	return (report->report_id == REPORT_ID_HIDPP_SHORT) &&
		(report->rap.sub_id == 0x41);
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
          int _len_report0 = 1;
          struct hidpp_report * report = (struct hidpp_report *) malloc(_len_report0*sizeof(struct hidpp_report));
          for(int _i0 = 0; _i0 < _len_report0; _i0++) {
            report[_i0].report_id = ((-2 * (next_i()%2)) + 1) * next_i();
        report[_i0].rap.sub_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hidpp_report_is_connect_event(report);
          printf("%d\n", benchRet); 
          free(report);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
