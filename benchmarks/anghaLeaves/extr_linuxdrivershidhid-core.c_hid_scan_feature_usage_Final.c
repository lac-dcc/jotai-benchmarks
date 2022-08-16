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
typedef  int u32 ;
struct TYPE_2__ {int report_count; int report_size; } ;
struct hid_parser {int /*<<< orphan*/  scan_flags; TYPE_1__ global; } ;

/* Variables and functions */
 int /*<<< orphan*/  HID_SCAN_FLAG_MT_WIN_8 ; 

__attribute__((used)) static void hid_scan_feature_usage(struct hid_parser *parser, u32 usage)
{
	if (usage == 0xff0000c5 && parser->global.report_count == 256 &&
	    parser->global.report_size == 8)
		parser->scan_flags |= HID_SCAN_FLAG_MT_WIN_8;
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
          int usage = 100;
          int _len_parser0 = 1;
          struct hid_parser * parser = (struct hid_parser *) malloc(_len_parser0*sizeof(struct hid_parser));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
            parser[_i0].scan_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].global.report_count = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].global.report_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hid_scan_feature_usage(parser,usage);
          free(parser);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
