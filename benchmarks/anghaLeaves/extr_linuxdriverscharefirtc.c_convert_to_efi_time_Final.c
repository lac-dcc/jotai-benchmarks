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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct rtc_time {scalar_t__ tm_isdst; int /*<<< orphan*/  tm_sec; int /*<<< orphan*/  tm_min; int /*<<< orphan*/  tm_hour; int /*<<< orphan*/  tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
struct TYPE_3__ {int /*<<< orphan*/  timezone; int /*<<< orphan*/  daylight; scalar_t__ nanosecond; int /*<<< orphan*/  second; int /*<<< orphan*/  minute; int /*<<< orphan*/  hour; int /*<<< orphan*/  day; scalar_t__ month; scalar_t__ year; } ;
typedef  TYPE_1__ efi_time_t ;

/* Variables and functions */
 int /*<<< orphan*/  EFI_ISDST ; 
 int /*<<< orphan*/  EFI_UNSPECIFIED_TIMEZONE ; 

__attribute__((used)) static void
convert_to_efi_time(struct rtc_time *wtime, efi_time_t *eft)
{

	eft->year	= wtime->tm_year + 1900;
	eft->month	= wtime->tm_mon + 1; 
	eft->day	= wtime->tm_mday;
	eft->hour	= wtime->tm_hour;
	eft->minute	= wtime->tm_min;
	eft->second 	= wtime->tm_sec;
	eft->nanosecond = 0; 
	eft->daylight	= wtime->tm_isdst ? EFI_ISDST: 0;
	eft->timezone	= EFI_UNSPECIFIED_TIMEZONE;
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
          int _len_wtime0 = 1;
          struct rtc_time * wtime = (struct rtc_time *) malloc(_len_wtime0*sizeof(struct rtc_time));
          for(int _i0 = 0; _i0 < _len_wtime0; _i0++) {
            wtime[_i0].tm_isdst = ((-2 * (next_i()%2)) + 1) * next_i();
        wtime[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        wtime[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
        wtime[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
        wtime[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
        wtime[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
        wtime[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_eft0 = 1;
          struct TYPE_3__ * eft = (struct TYPE_3__ *) malloc(_len_eft0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_eft0; _i0++) {
            eft[_i0].timezone = ((-2 * (next_i()%2)) + 1) * next_i();
        eft[_i0].daylight = ((-2 * (next_i()%2)) + 1) * next_i();
        eft[_i0].nanosecond = ((-2 * (next_i()%2)) + 1) * next_i();
        eft[_i0].second = ((-2 * (next_i()%2)) + 1) * next_i();
        eft[_i0].minute = ((-2 * (next_i()%2)) + 1) * next_i();
        eft[_i0].hour = ((-2 * (next_i()%2)) + 1) * next_i();
        eft[_i0].day = ((-2 * (next_i()%2)) + 1) * next_i();
        eft[_i0].month = ((-2 * (next_i()%2)) + 1) * next_i();
        eft[_i0].year = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          convert_to_efi_time(wtime,eft);
          free(wtime);
          free(eft);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
