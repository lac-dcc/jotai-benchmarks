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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ RTC_Seconds; scalar_t__ RTC_Minutes; scalar_t__ RTC_Hours; int /*<<< orphan*/  RTC_H12; } ;
struct TYPE_5__ {int RTC_AlarmDateWeekDay; int /*<<< orphan*/  RTC_AlarmMask; int /*<<< orphan*/  RTC_AlarmDateWeekDaySel; TYPE_1__ RTC_AlarmTime; } ;
typedef  TYPE_2__ RTC_AlarmTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  RTC_AlarmDateWeekDaySel_Date ; 
 int /*<<< orphan*/  RTC_AlarmMask_None ; 
 int /*<<< orphan*/  RTC_H12_AM ; 

void RTC_AlarmStructInit(RTC_AlarmTypeDef* RTC_AlarmStruct)
{
  /* Alarm Time Settings : Time = 00h:00mn:00sec */
  RTC_AlarmStruct->RTC_AlarmTime.RTC_H12 = RTC_H12_AM;
  RTC_AlarmStruct->RTC_AlarmTime.RTC_Hours = 0;
  RTC_AlarmStruct->RTC_AlarmTime.RTC_Minutes = 0;
  RTC_AlarmStruct->RTC_AlarmTime.RTC_Seconds = 0;

  /* Alarm Date Settings : Date = 1st day of the month */
  RTC_AlarmStruct->RTC_AlarmDateWeekDaySel = RTC_AlarmDateWeekDaySel_Date;
  RTC_AlarmStruct->RTC_AlarmDateWeekDay = 1;

  /* Alarm Masks Settings : Mask =  all fields are not masked */
  RTC_AlarmStruct->RTC_AlarmMask = RTC_AlarmMask_None;
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
          int _len_RTC_AlarmStruct0 = 1;
          struct TYPE_5__ * RTC_AlarmStruct = (struct TYPE_5__ *) malloc(_len_RTC_AlarmStruct0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_RTC_AlarmStruct0; _i0++) {
            RTC_AlarmStruct[_i0].RTC_AlarmDateWeekDay = ((-2 * (next_i()%2)) + 1) * next_i();
        RTC_AlarmStruct[_i0].RTC_AlarmMask = ((-2 * (next_i()%2)) + 1) * next_i();
        RTC_AlarmStruct[_i0].RTC_AlarmDateWeekDaySel = ((-2 * (next_i()%2)) + 1) * next_i();
        RTC_AlarmStruct[_i0].RTC_AlarmTime.RTC_Seconds = ((-2 * (next_i()%2)) + 1) * next_i();
        RTC_AlarmStruct[_i0].RTC_AlarmTime.RTC_Minutes = ((-2 * (next_i()%2)) + 1) * next_i();
        RTC_AlarmStruct[_i0].RTC_AlarmTime.RTC_Hours = ((-2 * (next_i()%2)) + 1) * next_i();
        RTC_AlarmStruct[_i0].RTC_AlarmTime.RTC_H12 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          RTC_AlarmStructInit(RTC_AlarmStruct);
          free(RTC_AlarmStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
