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
typedef  scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ msDelay; scalar_t__ Para2; scalar_t__ Para1; int /*<<< orphan*/  CmdID; } ;
typedef  int /*<<< orphan*/  SwChnlCmdID ;
typedef  TYPE_1__ SwChnlCmd ;
typedef  int /*<<< orphan*/  BOOLEAN ;

/* Variables and functions */
 int /*<<< orphan*/  _FALSE ; 
 int /*<<< orphan*/  _TRUE ; 

__attribute__((used)) static	BOOLEAN
phy_SetSwChnlCmdArray(
	SwChnlCmd*		CmdTable,
	u32			CmdTableIdx,
	u32			CmdTableSz,
	SwChnlCmdID		CmdID,
	u32			Para1,
	u32			Para2,
	u32			msDelay
	)
{
	SwChnlCmd* pCmd;

	if(CmdTable == NULL)
	{
		//RT_ASSERT(FALSE, ("phy_SetSwChnlCmdArray(): CmdTable cannot be NULL.\n"));
		return _FALSE;
	}
	if(CmdTableIdx >= CmdTableSz)
	{
		//RT_ASSERT(FALSE, 
		//		("phy_SetSwChnlCmdArray(): Access invalid index, please check size of the table, CmdTableIdx:%ld, CmdTableSz:%ld\n",
		//		CmdTableIdx, CmdTableSz));
		return _FALSE;
	}

	pCmd = CmdTable + CmdTableIdx;
	pCmd->CmdID = CmdID;
	pCmd->Para1 = Para1;
	pCmd->Para2 = Para2;
	pCmd->msDelay = msDelay;

	return _TRUE;
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
          long CmdTableIdx = 100;
          long CmdTableSz = 100;
          int CmdID = 100;
          long Para1 = 100;
          long Para2 = 100;
          long msDelay = 100;
          int _len_CmdTable0 = 1;
          struct TYPE_3__ * CmdTable = (struct TYPE_3__ *) malloc(_len_CmdTable0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_CmdTable0; _i0++) {
            CmdTable[_i0].msDelay = ((-2 * (next_i()%2)) + 1) * next_i();
        CmdTable[_i0].Para2 = ((-2 * (next_i()%2)) + 1) * next_i();
        CmdTable[_i0].Para1 = ((-2 * (next_i()%2)) + 1) * next_i();
        CmdTable[_i0].CmdID = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = phy_SetSwChnlCmdArray(CmdTable,CmdTableIdx,CmdTableSz,CmdID,Para1,Para2,msDelay);
          printf("%d\n", benchRet); 
          free(CmdTable);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
