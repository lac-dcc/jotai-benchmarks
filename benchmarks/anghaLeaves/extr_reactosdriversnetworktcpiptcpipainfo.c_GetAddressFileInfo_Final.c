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
       1            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  TDI_STATUS ;
typedef  int /*<<< orphan*/  TDIObjectID ;
typedef  int /*<<< orphan*/  PVOID ;
typedef  int /*<<< orphan*/  PUINT ;
typedef  int /*<<< orphan*/  PADDRESS_FILE ;

/* Variables and functions */
 int /*<<< orphan*/  TDI_INVALID_REQUEST ; 
 int /*<<< orphan*/  UNIMPLEMENTED ; 

TDI_STATUS GetAddressFileInfo(TDIObjectID *ID,
                              PADDRESS_FILE AddrFile,
                              PVOID Buffer,
                              PUINT BufferSize)
{
    UNIMPLEMENTED;

    return TDI_INVALID_REQUEST;
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
          int AddrFile = 100;
          int Buffer = 100;
          int BufferSize = 100;
          int _len_ID0 = 1;
          int * ID = (int *) malloc(_len_ID0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ID0; _i0++) {
            ID[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = GetAddressFileInfo(ID,AddrFile,Buffer,BufferSize);
          printf("%d\n", benchRet); 
          free(ID);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int AddrFile = 10;
          int Buffer = 10;
          int BufferSize = 10;
          int _len_ID0 = 100;
          int * ID = (int *) malloc(_len_ID0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ID0; _i0++) {
            ID[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = GetAddressFileInfo(ID,AddrFile,Buffer,BufferSize);
          printf("%d\n", benchRet); 
          free(ID);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
