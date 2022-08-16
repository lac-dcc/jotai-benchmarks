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
typedef  int ULONGLONG ;
typedef  int DWORD ;

/* Variables and functions */

__attribute__((used)) static DWORD GetFATSizeSectors(DWORD DskSize, DWORD ReservedSecCnt, DWORD SecPerClus, DWORD NumFATs, DWORD BytesPerSect)
{
	ULONGLONG Numerator, Denominator;
	ULONGLONG FatElementSize = 4;
	ULONGLONG ReservedClusCnt = 2;
	ULONGLONG FatSz;

	Numerator = DskSize - ReservedSecCnt + ReservedClusCnt * SecPerClus;
	Denominator = SecPerClus * BytesPerSect / FatElementSize + NumFATs;
	FatSz = Numerator / Denominator + 1;	// +1 to ensure we are rounded up

	return (DWORD)FatSz;
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
          int DskSize = 100;
          int ReservedSecCnt = 100;
          int SecPerClus = 100;
          int NumFATs = 100;
          int BytesPerSect = 100;
          int benchRet = GetFATSizeSectors(DskSize,ReservedSecCnt,SecPerClus,NumFATs,BytesPerSect);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int DskSize = 255;
          int ReservedSecCnt = 255;
          int SecPerClus = 255;
          int NumFATs = 255;
          int BytesPerSect = 255;
          int benchRet = GetFATSizeSectors(DskSize,ReservedSecCnt,SecPerClus,NumFATs,BytesPerSect);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int DskSize = 10;
          int ReservedSecCnt = 10;
          int SecPerClus = 10;
          int NumFATs = 10;
          int BytesPerSect = 10;
          int benchRet = GetFATSizeSectors(DskSize,ReservedSecCnt,SecPerClus,NumFATs,BytesPerSect);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
