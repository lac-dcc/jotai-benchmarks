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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  tWriteWlanPin ;
typedef  int /*<<< orphan*/  tWlanReadInteruptPin ;
typedef  int /*<<< orphan*/  tWlanInterruptEnable ;
typedef  int /*<<< orphan*/  tWlanInterruptDisable ;
typedef  int /*<<< orphan*/  tWlanCB ;
typedef  int /*<<< orphan*/  tFWPatches ;
typedef  int /*<<< orphan*/  tDriverPatches ;
typedef  int /*<<< orphan*/  tBootLoaderPatches ;
struct TYPE_2__ {int InformHostOnTxComplete; int /*<<< orphan*/  sWlanCB; int /*<<< orphan*/  WriteWlanPin; int /*<<< orphan*/  WlanInterruptDisable; int /*<<< orphan*/  WlanInterruptEnable; int /*<<< orphan*/  ReadWlanInterruptPin; int /*<<< orphan*/  sBootLoaderPatches; int /*<<< orphan*/  sDriverPatches; int /*<<< orphan*/  sFWPatches; } ;

/* Variables and functions */
 TYPE_1__ tSLInformation ; 

void wlan_init(		tWlanCB	 	sWlanCB,
	tFWPatches sFWPatches,
	tDriverPatches sDriverPatches,
	tBootLoaderPatches sBootLoaderPatches,
	tWlanReadInteruptPin  sReadWlanInterruptPin,
	tWlanInterruptEnable  sWlanInterruptEnable,
	tWlanInterruptDisable sWlanInterruptDisable,
	tWriteWlanPin         sWriteWlanPin)
{

	tSLInformation.sFWPatches = sFWPatches;
	tSLInformation.sDriverPatches = sDriverPatches;
	tSLInformation.sBootLoaderPatches = sBootLoaderPatches;

	// init io callback
	tSLInformation.ReadWlanInterruptPin = sReadWlanInterruptPin;
	tSLInformation.WlanInterruptEnable  = sWlanInterruptEnable;
	tSLInformation.WlanInterruptDisable = sWlanInterruptDisable;
	tSLInformation.WriteWlanPin = sWriteWlanPin;

	//init asynchronous events callback
	tSLInformation.sWlanCB= sWlanCB;

	// By default TX Complete events are routed to host too
	tSLInformation.InformHostOnTxComplete = 1;
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
          int sWlanCB = 100;
          int sFWPatches = 100;
          int sDriverPatches = 100;
          int sBootLoaderPatches = 100;
          int sReadWlanInterruptPin = 100;
          int sWlanInterruptEnable = 100;
          int sWlanInterruptDisable = 100;
          int sWriteWlanPin = 100;
          wlan_init(sWlanCB,sFWPatches,sDriverPatches,sBootLoaderPatches,sReadWlanInterruptPin,sWlanInterruptEnable,sWlanInterruptDisable,sWriteWlanPin);
        
        break;
    }
    // big-arr
    case 1:
    {
          int sWlanCB = 255;
          int sFWPatches = 255;
          int sDriverPatches = 255;
          int sBootLoaderPatches = 255;
          int sReadWlanInterruptPin = 255;
          int sWlanInterruptEnable = 255;
          int sWlanInterruptDisable = 255;
          int sWriteWlanPin = 255;
          wlan_init(sWlanCB,sFWPatches,sDriverPatches,sBootLoaderPatches,sReadWlanInterruptPin,sWlanInterruptEnable,sWlanInterruptDisable,sWriteWlanPin);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sWlanCB = 10;
          int sFWPatches = 10;
          int sDriverPatches = 10;
          int sBootLoaderPatches = 10;
          int sReadWlanInterruptPin = 10;
          int sWlanInterruptEnable = 10;
          int sWlanInterruptDisable = 10;
          int sWriteWlanPin = 10;
          wlan_init(sWlanCB,sFWPatches,sDriverPatches,sBootLoaderPatches,sReadWlanInterruptPin,sWlanInterruptEnable,sWlanInterruptDisable,sWriteWlanPin);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
