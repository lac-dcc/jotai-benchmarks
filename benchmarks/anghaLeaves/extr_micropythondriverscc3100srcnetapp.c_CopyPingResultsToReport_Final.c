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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int /*<<< orphan*/  testTime; int /*<<< orphan*/  rttAvg; int /*<<< orphan*/  rttMax; int /*<<< orphan*/  rttMin; int /*<<< orphan*/  numSuccsessPings; int /*<<< orphan*/  numSendsPings; } ;
typedef  TYPE_1__ _PingReportResponse_t ;
struct TYPE_6__ {int /*<<< orphan*/  TestTime; int /*<<< orphan*/  AvgRoundTime; int /*<<< orphan*/  MaxRoundTime; int /*<<< orphan*/  MinRoundTime; int /*<<< orphan*/  PacketsReceived; int /*<<< orphan*/  PacketsSent; } ;
typedef  TYPE_2__ SlPingReport_t ;

/* Variables and functions */

void CopyPingResultsToReport(_PingReportResponse_t *pResults,SlPingReport_t *pReport)
{
    pReport->PacketsSent     = pResults->numSendsPings;
    pReport->PacketsReceived = pResults->numSuccsessPings;
    pReport->MinRoundTime    = pResults->rttMin;
    pReport->MaxRoundTime    = pResults->rttMax;
    pReport->AvgRoundTime    = pResults->rttAvg;
    pReport->TestTime        = pResults->testTime;
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
          int _len_pResults0 = 1;
          struct TYPE_5__ * pResults = (struct TYPE_5__ *) malloc(_len_pResults0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pResults0; _i0++) {
            pResults[_i0].testTime = ((-2 * (next_i()%2)) + 1) * next_i();
        pResults[_i0].rttAvg = ((-2 * (next_i()%2)) + 1) * next_i();
        pResults[_i0].rttMax = ((-2 * (next_i()%2)) + 1) * next_i();
        pResults[_i0].rttMin = ((-2 * (next_i()%2)) + 1) * next_i();
        pResults[_i0].numSuccsessPings = ((-2 * (next_i()%2)) + 1) * next_i();
        pResults[_i0].numSendsPings = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pReport0 = 1;
          struct TYPE_6__ * pReport = (struct TYPE_6__ *) malloc(_len_pReport0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_pReport0; _i0++) {
            pReport[_i0].TestTime = ((-2 * (next_i()%2)) + 1) * next_i();
        pReport[_i0].AvgRoundTime = ((-2 * (next_i()%2)) + 1) * next_i();
        pReport[_i0].MaxRoundTime = ((-2 * (next_i()%2)) + 1) * next_i();
        pReport[_i0].MinRoundTime = ((-2 * (next_i()%2)) + 1) * next_i();
        pReport[_i0].PacketsReceived = ((-2 * (next_i()%2)) + 1) * next_i();
        pReport[_i0].PacketsSent = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CopyPingResultsToReport(pResults,pReport);
          free(pResults);
          free(pReport);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
