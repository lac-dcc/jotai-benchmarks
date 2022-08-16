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
typedef  int /*<<< orphan*/  POPEN_INSTANCE ;
typedef  int /*<<< orphan*/  NTSTATUS ;

/* Variables and functions */
 int /*<<< orphan*/  STATUS_SUCCESS ; 

NTSTATUS NPF_CloseDumpFile(POPEN_INSTANCE Open){
#if 0
    IF_LOUD(DbgPrint("NPF: NPF_CloseDumpFile.\n");)
    IF_LOUD(DbgPrint("Dumpoffset=%d\n",Open->DumpOffset.QuadPart);)

DbgPrint("1\n");
   // Consistency check
   if(Open->DumpFileHandle == NULL)
      return STATUS_UNSUCCESSFUL;

DbgPrint("2\n");
   ZwClose( Open->DumpFileHandle );

   ObDereferenceObject(Open->DumpFileObject);
/*
   if(Open->DumpLimitReached == TRUE)
      // Limit already reached: don't save the rest of the buffer.
      return STATUS_SUCCESS;
*/
DbgPrint("3\n");

   NPF_OpenDumpFile(Open,&Open->DumpFileName, TRUE);

   // Flush the buffer to file 
   NPF_SaveCurrentBuffer(Open);

   // Close The file
   ObDereferenceObject(Open->DumpFileObject);
   ZwClose( Open->DumpFileHandle );
   
   Open->DumpFileHandle = NULL;

   ObDereferenceObject(Open->DumpFileObject);
#endif
   return STATUS_SUCCESS;
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
          int Open = 100;
          int benchRet = NPF_CloseDumpFile(Open);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int Open = 255;
          int benchRet = NPF_CloseDumpFile(Open);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int Open = 10;
          int benchRet = NPF_CloseDumpFile(Open);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
