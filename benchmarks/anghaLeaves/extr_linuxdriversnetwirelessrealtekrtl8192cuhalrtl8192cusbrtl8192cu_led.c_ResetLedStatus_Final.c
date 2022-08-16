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
struct TYPE_3__ {int /*<<< orphan*/  BlinkingLedState; scalar_t__ BlinkTimes; void* bLedWPSBlinkInProgress; void* bLedScanBlinkInProgress; void* bLedStartToLinkBlinkInProgress; void* bLedLinkBlinkInProgress; void* bLedNoLinkBlinkInProgress; void* bLedBlinkInProgress; void* bLedOn; int /*<<< orphan*/  CurrLedState; } ;
typedef  TYPE_1__* PLED_871x ;

/* Variables and functions */
 int /*<<< orphan*/  LED_UNKNOWN ; 
 int /*<<< orphan*/  RTW_LED_OFF ; 
 void* _FALSE ; 

__attribute__((used)) static void
ResetLedStatus(PLED_871x	pLed) {
	pLed->CurrLedState = RTW_LED_OFF; // Current LED state.
	pLed->bLedOn = _FALSE; // true if LED is ON, false if LED is OFF.
	
	pLed->bLedBlinkInProgress = _FALSE; // true if it is blinking, false o.w..
	pLed->bLedNoLinkBlinkInProgress = _FALSE;
	pLed->bLedLinkBlinkInProgress = _FALSE;
	pLed->bLedStartToLinkBlinkInProgress = _FALSE;
	pLed->bLedScanBlinkInProgress = _FALSE;
	pLed->bLedWPSBlinkInProgress = _FALSE;
	pLed->BlinkTimes = 0; // Number of times to toggle led state for blinking.
	pLed->BlinkingLedState = LED_UNKNOWN; // Next state for blinking, either RTW_LED_ON or RTW_LED_OFF are.
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
          int _len_pLed0 = 1;
          struct TYPE_3__ * pLed = (struct TYPE_3__ *) malloc(_len_pLed0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pLed0; _i0++) {
            pLed[_i0].BlinkingLedState = ((-2 * (next_i()%2)) + 1) * next_i();
        pLed[_i0].BlinkTimes = ((-2 * (next_i()%2)) + 1) * next_i();
        pLed[_i0].CurrLedState = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ResetLedStatus(pLed);
          free(pLed);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
