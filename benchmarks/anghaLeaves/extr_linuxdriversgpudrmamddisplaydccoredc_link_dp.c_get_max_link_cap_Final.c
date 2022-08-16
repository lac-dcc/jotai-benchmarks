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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct dc_link_settings {scalar_t__ link_rate; scalar_t__ lane_count; scalar_t__ link_spread; int /*<<< orphan*/  member_2; int /*<<< orphan*/  member_1; int /*<<< orphan*/  member_0; } ;
struct TYPE_10__ {scalar_t__ lane_count; scalar_t__ link_rate; scalar_t__ link_spread; } ;
struct dc_link {TYPE_5__ reported_link_cap; TYPE_4__* link_enc; } ;
struct TYPE_6__ {scalar_t__ IS_HBR3_CAPABLE; scalar_t__ IS_HBR2_CAPABLE; } ;
struct TYPE_7__ {TYPE_1__ bits; } ;
struct TYPE_8__ {TYPE_2__ flags; } ;
struct TYPE_9__ {TYPE_3__ features; } ;

/* Variables and functions */
 int /*<<< orphan*/  LANE_COUNT_FOUR ; 
 int /*<<< orphan*/  LINK_RATE_HIGH ; 
 scalar_t__ LINK_RATE_HIGH2 ; 
 scalar_t__ LINK_RATE_HIGH3 ; 
 int /*<<< orphan*/  LINK_SPREAD_05_DOWNSPREAD_30KHZ ; 

__attribute__((used)) static struct dc_link_settings get_max_link_cap(struct dc_link *link)
{
	/* Set Default link settings */
	struct dc_link_settings max_link_cap = {LANE_COUNT_FOUR, LINK_RATE_HIGH,
			LINK_SPREAD_05_DOWNSPREAD_30KHZ};

	/* Higher link settings based on feature supported */
	if (link->link_enc->features.flags.bits.IS_HBR2_CAPABLE)
		max_link_cap.link_rate = LINK_RATE_HIGH2;

	if (link->link_enc->features.flags.bits.IS_HBR3_CAPABLE)
		max_link_cap.link_rate = LINK_RATE_HIGH3;

	/* Lower link settings based on sink's link cap */
	if (link->reported_link_cap.lane_count < max_link_cap.lane_count)
		max_link_cap.lane_count =
				link->reported_link_cap.lane_count;
	if (link->reported_link_cap.link_rate < max_link_cap.link_rate)
		max_link_cap.link_rate =
				link->reported_link_cap.link_rate;
	if (link->reported_link_cap.link_spread <
			max_link_cap.link_spread)
		max_link_cap.link_spread =
				link->reported_link_cap.link_spread;
	return max_link_cap;
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
          int _len_link0 = 1;
          struct dc_link * link = (struct dc_link *) malloc(_len_link0*sizeof(struct dc_link));
          for(int _i0 = 0; _i0 < _len_link0; _i0++) {
            link[_i0].reported_link_cap.lane_count = ((-2 * (next_i()%2)) + 1) * next_i();
        link[_i0].reported_link_cap.link_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        link[_i0].reported_link_cap.link_spread = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_link__i0__link_enc0 = 1;
          link[_i0].link_enc = (struct TYPE_9__ *) malloc(_len_link__i0__link_enc0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_link__i0__link_enc0; _j0++) {
            link[_i0].link_enc->features.flags.bits.IS_HBR3_CAPABLE = ((-2 * (next_i()%2)) + 1) * next_i();
        link[_i0].link_enc->features.flags.bits.IS_HBR2_CAPABLE = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct dc_link_settings benchRet = get_max_link_cap(link);
          printf("%ld\n", benchRet.link_rate);
          printf("%ld\n", benchRet.lane_count);
          printf("%ld\n", benchRet.link_spread);
          printf("%d\n", benchRet.member_2);
          printf("%d\n", benchRet.member_1);
          printf("%d\n", benchRet.member_0);
          for(int _aux = 0; _aux < _len_link0; _aux++) {
          free(link[_aux].link_enc);
          }
          free(link);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
