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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u8 ;
struct TYPE_3__ {scalar_t__ btdmAntNum; scalar_t__ pgAntNum; } ;
struct TYPE_4__ {TYPE_1__ boardInfo; } ;

/* Variables and functions */
 scalar_t__ BT_COEX_ANT_TYPE_ANTDIV ; 
 scalar_t__ BT_COEX_ANT_TYPE_DETECTED ; 
 scalar_t__ BT_COEX_ANT_TYPE_PG ; 
 TYPE_2__ GLBtCoexist ; 

void EXhalbtcoutsrc_SetAntNum(u8 type, u8 antNum)
{
	if (BT_COEX_ANT_TYPE_PG == type) {
		GLBtCoexist.boardInfo.pgAntNum = antNum;
		GLBtCoexist.boardInfo.btdmAntNum = antNum;
	} else if (BT_COEX_ANT_TYPE_ANTDIV == type) {
		GLBtCoexist.boardInfo.btdmAntNum = antNum;
		/* GLBtCoexist.boardInfo.btdmAntPos = BTC_ANTENNA_AT_MAIN_PORT; */
	} else if (BT_COEX_ANT_TYPE_DETECTED == type) {
		GLBtCoexist.boardInfo.btdmAntNum = antNum;
		/* GLBtCoexist.boardInfo.btdmAntPos = BTC_ANTENNA_AT_MAIN_PORT; */
	}
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
          long type = 100;
          long antNum = 100;
          EXhalbtcoutsrc_SetAntNum(type,antNum);
        
        break;
    }
    // big-arr
    case 1:
    {
          long type = 255;
          long antNum = 255;
          EXhalbtcoutsrc_SetAntNum(type,antNum);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long type = 10;
          long antNum = 10;
          EXhalbtcoutsrc_SetAntNum(type,antNum);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
