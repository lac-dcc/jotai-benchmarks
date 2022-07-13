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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
struct TYPE_9__ {int /*<<< orphan*/  btdmAntPos; } ;
struct TYPE_8__ {int bBtCtrlAggBufSize; int aggBufSize; int bIncreaseScanDevNum; } ;
struct TYPE_7__ {int bProfileNotified; } ;
struct TYPE_10__ {int /*<<< orphan*/  cntBind; } ;
struct TYPE_11__ {int bBinded; TYPE_3__ boardInfo; TYPE_2__ btInfo; TYPE_1__ stackInfo; void* Adapter; TYPE_4__ statistics; } ;
typedef  TYPE_5__* PBTC_COEXIST ;

/* Variables and functions */
 int /*<<< orphan*/  BTC_ANTENNA_AT_MAIN_PORT ; 
 TYPE_5__ GLBtCoexist ; 

__attribute__((used)) static u8 EXhalbtcoutsrc_BindBtCoexWithAdapter(void *padapter)
{
	PBTC_COEXIST		pBtCoexist = &GLBtCoexist;

	if (pBtCoexist->bBinded)
		return false;
	else
		pBtCoexist->bBinded = true;

	pBtCoexist->statistics.cntBind++;

	pBtCoexist->Adapter = padapter;

	pBtCoexist->stackInfo.bProfileNotified = false;

	pBtCoexist->btInfo.bBtCtrlAggBufSize = false;
	pBtCoexist->btInfo.aggBufSize = 5;

	pBtCoexist->btInfo.bIncreaseScanDevNum = false;

	/*  set default antenna position to main  port */
	pBtCoexist->boardInfo.btdmAntPos = BTC_ANTENNA_AT_MAIN_PORT;

	return true;
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
          void * padapter;
          int benchRet = EXhalbtcoutsrc_BindBtCoexWithAdapter(padapter);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          void * padapter;
          int benchRet = EXhalbtcoutsrc_BindBtCoexWithAdapter(padapter);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * padapter;
          int benchRet = EXhalbtcoutsrc_BindBtCoexWithAdapter(padapter);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
