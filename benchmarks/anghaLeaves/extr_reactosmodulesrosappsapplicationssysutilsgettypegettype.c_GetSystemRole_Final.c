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
struct TYPE_6__ {scalar_t__ wProductType; } ;
struct TYPE_5__ {int sv102_type; } ;
typedef  TYPE_1__* LPSERVER_INFO_102 ;
typedef  TYPE_2__* LPOSVERSIONINFOEX ;
typedef  int INT ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
 int SV_TYPE_DOMAIN_BAKCTRL ; 
 int SV_TYPE_DOMAIN_CTRL ; 
 int SV_TYPE_SERVER_NT ; 
 scalar_t__ VER_NT_DOMAIN_CONTROLLER ; 
 scalar_t__ VER_NT_SERVER ; 
 scalar_t__ VER_NT_WORKSTATION ; 

INT
GetSystemRole(BOOL bLocal, LPOSVERSIONINFOEX osvi, LPSERVER_INFO_102 pBuf102)
{

	if(pBuf102 != NULL && !bLocal)
	{
		if ((pBuf102->sv102_type & SV_TYPE_DOMAIN_CTRL) ||
			(pBuf102->sv102_type & SV_TYPE_DOMAIN_BAKCTRL))
			return 1;
		else if(pBuf102->sv102_type & SV_TYPE_SERVER_NT)
			return 2;
		else
			return 3;
	}
	else
	{
		if(osvi->wProductType == VER_NT_DOMAIN_CONTROLLER)
			return 1;
		else if(osvi->wProductType == VER_NT_SERVER)
			return 2;
		else if(osvi->wProductType == VER_NT_WORKSTATION)
			return 3;
	}
	return 255;

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
          int bLocal = 100;
          int _len_osvi0 = 1;
          struct TYPE_6__ * osvi = (struct TYPE_6__ *) malloc(_len_osvi0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_osvi0; _i0++) {
            osvi[_i0].wProductType = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pBuf1020 = 1;
          struct TYPE_5__ * pBuf102 = (struct TYPE_5__ *) malloc(_len_pBuf1020*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pBuf1020; _i0++) {
            pBuf102[_i0].sv102_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = GetSystemRole(bLocal,osvi,pBuf102);
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
