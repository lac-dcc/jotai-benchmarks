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

/* Type definitions */
typedef  scalar_t__ DWORD ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 scalar_t__ KULL_M_WIN_BUILD_2K3 ; 
 int /*<<< orphan*/  TRUE ; 

BOOL kuhl_m_sekurlsa_nt5_isOld(DWORD osBuildNumber, DWORD moduleTimeStamp)
{
	BOOL status = FALSE;
	if(osBuildNumber == KULL_M_WIN_BUILD_2K3)
	{
		if(moduleTimeStamp == 0x49901640) // up to date SP1 3290 - Mon Feb 09 12:40:48 2009 (WTF, a build number <, but timestamp >)
			status = TRUE;
		else if(moduleTimeStamp <= 0x45d70a62) // first SP2 3959 - Sat Feb 17 15:00:02 2007
			status = TRUE;
	}
	return status;
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
          long osBuildNumber = 100;
          long moduleTimeStamp = 100;
          int benchRet = kuhl_m_sekurlsa_nt5_isOld(osBuildNumber,moduleTimeStamp);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long osBuildNumber = 255;
          long moduleTimeStamp = 255;
          int benchRet = kuhl_m_sekurlsa_nt5_isOld(osBuildNumber,moduleTimeStamp);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long osBuildNumber = 10;
          long moduleTimeStamp = 10;
          int benchRet = kuhl_m_sekurlsa_nt5_isOld(osBuildNumber,moduleTimeStamp);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
