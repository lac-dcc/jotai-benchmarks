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
struct TYPE_3__ {int IsWindows; int IsNT; int VerMajor; int VerMinor; int ServicePack; scalar_t__ IsBeta; } ;
typedef  TYPE_1__ RPC_WINVER ;

/* Variables and functions */

bool IsSupportedWinVer(RPC_WINVER *v)
{
	// Validate arguments
	if (v == NULL)
	{
		return false;
	}

	if (v->IsWindows == false)
	{
		return true;
	}

	if (v->IsNT == false)
	{
		return true;
	}

	if (v->IsBeta)
	{
		return true;
	}

	if (v->VerMajor <= 4)
	{
		// Windows NT
		return true;
	}

	if (v->VerMajor == 5 && v->VerMinor == 0)
	{
		// Windows 2000
		if (v->ServicePack <= 4)
		{
			// SP4 or earlier
			return true;
		}
	}

	if (v->VerMajor == 5 && v->VerMinor == 1)
	{
		// Windows XP x86
		if (v->ServicePack <= 3)
		{
			// SP3 or earlier
			return true;
		}
	}

	if (v->VerMajor == 5 && v->VerMinor == 2)
	{
		// Windows XP x64, Windows Server 2003
		if (v->ServicePack <= 2)
		{
			// SP2 or earlier
			return true;
		}
	}

	if (v->VerMajor == 6 && v->VerMinor == 0)
	{
		// Windows Vista, Server 2008
		if (v->ServicePack <= 2)
		{
			// SP2 or earlier
			return true;
		}
	}

	if (v->VerMajor == 6 && v->VerMinor == 1)
	{
		// Windows 7, Server 2008 R2
		if (v->ServicePack <= 1)
		{
			// SP1 or earlier
			return true;
		}
	}

	if (v->VerMajor == 6 && v->VerMinor == 2)
	{
		// Windows 8, Server 2012
		if (v->ServicePack <= 0)
		{
			// SP0 only
			return true;
		}
	}

	if (v->VerMajor == 6 && v->VerMinor == 3)
	{
		// Windows 8.1, Server 2012 R2
		if (v->ServicePack <= 0)
		{
			// SP0 only
			return true;
		}
	}

	if ((v->VerMajor == 6 && v->VerMinor == 4) || (v->VerMajor == 10 && v->VerMinor == 0))
	{
		// Windows 10 or Windows Server 2016
		if (v->ServicePack <= 0)
		{
			// SP0 only
			return true;
		}
	}

	return false;
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
          int _len_v0 = 1;
          struct TYPE_3__ * v = (struct TYPE_3__ *) malloc(_len_v0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0].IsWindows = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].IsNT = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].VerMajor = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].VerMinor = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].ServicePack = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].IsBeta = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = IsSupportedWinVer(v);
          printf("%d\n", benchRet); 
          free(v);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
