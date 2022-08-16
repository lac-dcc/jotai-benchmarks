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
typedef  scalar_t__ USHORT ;
typedef  int* PULONG ;
typedef  int /*<<< orphan*/  NTSTATUS ;

/* Variables and functions */
 scalar_t__ COMPRESSION_ENGINE_MAXIMUM ; 
 scalar_t__ COMPRESSION_ENGINE_STANDARD ; 
 int /*<<< orphan*/  STATUS_NOT_SUPPORTED ; 
 int /*<<< orphan*/  STATUS_SUCCESS ; 

__attribute__((used)) static NTSTATUS
RtlpWorkSpaceSizeLZNT1(USHORT Engine,
                       PULONG BufferAndWorkSpaceSize,
                       PULONG FragmentWorkSpaceSize)
{
   if (Engine == COMPRESSION_ENGINE_STANDARD)
   {
      *BufferAndWorkSpaceSize = 0x8010;
      *FragmentWorkSpaceSize = 0x1000;
      return(STATUS_SUCCESS);
   }
   else if (Engine == COMPRESSION_ENGINE_MAXIMUM)
   {
      *BufferAndWorkSpaceSize = 0x10;
      *FragmentWorkSpaceSize = 0x1000;
      return(STATUS_SUCCESS);
   }

   return(STATUS_NOT_SUPPORTED);
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
          long Engine = 100;
          int _len_BufferAndWorkSpaceSize0 = 1;
          int * BufferAndWorkSpaceSize = (int *) malloc(_len_BufferAndWorkSpaceSize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_BufferAndWorkSpaceSize0; _i0++) {
            BufferAndWorkSpaceSize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_FragmentWorkSpaceSize0 = 1;
          int * FragmentWorkSpaceSize = (int *) malloc(_len_FragmentWorkSpaceSize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_FragmentWorkSpaceSize0; _i0++) {
            FragmentWorkSpaceSize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = RtlpWorkSpaceSizeLZNT1(Engine,BufferAndWorkSpaceSize,FragmentWorkSpaceSize);
          printf("%d\n", benchRet); 
          free(BufferAndWorkSpaceSize);
          free(FragmentWorkSpaceSize);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
