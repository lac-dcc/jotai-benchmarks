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
typedef  int ULONG ;
typedef  char* PCSTR ;

/* Variables and functions */

PCSTR DiskGetErrorCodeString(ULONG ErrorCode)
{
    switch (ErrorCode)
    {
    case 0x00:  return "no error";
    case 0x01:  return "bad command passed to driver";
    case 0x02:  return "address mark not found or bad sector";
    case 0x03:  return "diskette write protect error";
    case 0x04:  return "sector not found";
    case 0x05:  return "fixed disk reset failed";
    case 0x06:  return "diskette changed or removed";
    case 0x07:  return "bad fixed disk parameter table";
    case 0x08:  return "DMA overrun";
    case 0x09:  return "DMA access across 64k boundary";
    case 0x0A:  return "bad fixed disk sector flag";
    case 0x0B:  return "bad fixed disk cylinder";
    case 0x0C:  return "unsupported track/invalid media";
    case 0x0D:  return "invalid number of sectors on fixed disk format";
    case 0x0E:  return "fixed disk controlled data address mark detected";
    case 0x0F:  return "fixed disk DMA arbitration level out of range";
    case 0x10:  return "ECC/CRC error on disk read";
    case 0x11:  return "recoverable fixed disk data error, data fixed by ECC";
    case 0x20:  return "controller error (NEC for floppies)";
    case 0x40:  return "seek failure";
    case 0x80:  return "time out, drive not ready";
    case 0xAA:  return "fixed disk drive not ready";
    case 0xBB:  return "fixed disk undefined error";
    case 0xCC:  return "fixed disk write fault on selected drive";
    case 0xE0:  return "fixed disk status error/Error reg = 0";
    case 0xFF:  return "sense operation failed";

    default:  return "unknown error code";
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
          int ErrorCode = 100;
          char * benchRet = DiskGetErrorCodeString(ErrorCode);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int ErrorCode = 255;
          char * benchRet = DiskGetErrorCodeString(ErrorCode);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ErrorCode = 10;
          char * benchRet = DiskGetErrorCodeString(ErrorCode);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
