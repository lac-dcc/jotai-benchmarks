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
struct TYPE_6__ {int dwMajorVersion; int dwMinorVersion; } ;
struct TYPE_5__ {int sv102_version_major; int sv102_version_minor; } ;
typedef  TYPE_1__* LPSERVER_INFO_102 ;
typedef  TYPE_2__* LPOSVERSIONINFOEX ;
typedef  int INT ;
typedef  scalar_t__ BOOL ;

/* Variables and functions */

INT
GetVersionNumber(BOOL bLocal, LPOSVERSIONINFOEX osvi, LPSERVER_INFO_102 pBuf102)
{
	INT VersionNumber = 255;
	if(pBuf102 != NULL && !bLocal)
	{
		VersionNumber = pBuf102->sv102_version_major * 1000;
		VersionNumber += (pBuf102->sv102_version_minor * 100);
	}
	else if(bLocal)
	{
		VersionNumber = osvi->dwMajorVersion * 1000;
		VersionNumber += (osvi->dwMinorVersion * 100);
	}

	return VersionNumber;
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
          long bLocal = 100;
          int _len_osvi0 = 1;
          struct TYPE_6__ * osvi = (struct TYPE_6__ *) malloc(_len_osvi0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_osvi0; _i0++) {
            osvi[_i0].dwMajorVersion = ((-2 * (next_i()%2)) + 1) * next_i();
        osvi[_i0].dwMinorVersion = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pBuf1020 = 1;
          struct TYPE_5__ * pBuf102 = (struct TYPE_5__ *) malloc(_len_pBuf1020*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pBuf1020; _i0++) {
            pBuf102[_i0].sv102_version_major = ((-2 * (next_i()%2)) + 1) * next_i();
        pBuf102[_i0].sv102_version_minor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = GetVersionNumber(bLocal,osvi,pBuf102);
          printf("%d\n", benchRet); 
          free(osvi);
          free(pBuf102);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
