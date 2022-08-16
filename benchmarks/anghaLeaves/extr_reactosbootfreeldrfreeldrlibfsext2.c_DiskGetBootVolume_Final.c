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

/* Type definitions */
typedef  scalar_t__* PULONGLONG ;
typedef  scalar_t__* PUCHAR ;
typedef  int /*<<< orphan*/  BOOLEAN ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 

BOOLEAN DiskGetBootVolume(PUCHAR DriveNumber, PULONGLONG StartSector, PULONGLONG SectorCount, int *FsType)
{
    *DriveNumber = 0;
    *StartSector = 0;
    *SectorCount = 0;
    *FsType = 0;
    return FALSE;
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
          int _len_DriveNumber0 = 1;
          long * DriveNumber = (long *) malloc(_len_DriveNumber0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_DriveNumber0; _i0++) {
            DriveNumber[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_StartSector0 = 1;
          long * StartSector = (long *) malloc(_len_StartSector0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_StartSector0; _i0++) {
            StartSector[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SectorCount0 = 1;
          long * SectorCount = (long *) malloc(_len_SectorCount0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_SectorCount0; _i0++) {
            SectorCount[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_FsType0 = 1;
          int * FsType = (int *) malloc(_len_FsType0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_FsType0; _i0++) {
            FsType[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = DiskGetBootVolume(DriveNumber,StartSector,SectorCount,FsType);
          printf("%d\n", benchRet); 
          free(DriveNumber);
          free(StartSector);
          free(SectorCount);
          free(FsType);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
