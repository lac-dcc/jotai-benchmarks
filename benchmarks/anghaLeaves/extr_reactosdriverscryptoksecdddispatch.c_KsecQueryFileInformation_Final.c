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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {scalar_t__ QuadPart; } ;
struct TYPE_4__ {scalar_t__ QuadPart; } ;
struct TYPE_6__ {int NumberOfLinks; void* Directory; void* DeletePending; TYPE_2__ EndOfFile; TYPE_1__ AllocationSize; } ;
typedef  scalar_t__ PVOID ;
typedef  int* PSIZE_T ;
typedef  TYPE_3__* PFILE_STANDARD_INFORMATION ;
typedef  int /*<<< orphan*/  NTSTATUS ;
typedef  int /*<<< orphan*/  FILE_STANDARD_INFORMATION ;
typedef  scalar_t__ FILE_INFORMATION_CLASS ;

/* Variables and functions */
 void* FALSE ; 
 scalar_t__ FileStandardInformation ; 
 int /*<<< orphan*/  STATUS_INFO_LENGTH_MISMATCH ; 
 int /*<<< orphan*/  STATUS_INVALID_INFO_CLASS ; 
 int /*<<< orphan*/  STATUS_SUCCESS ; 

__attribute__((used)) static
NTSTATUS
KsecQueryFileInformation(
    PVOID InfoBuffer,
    FILE_INFORMATION_CLASS FileInformationClass,
    PSIZE_T BufferLength)
{
    PFILE_STANDARD_INFORMATION StandardInformation;

    /* Only FileStandardInformation is supported */
    if (FileInformationClass != FileStandardInformation)
    {
        return STATUS_INVALID_INFO_CLASS;
    }

    /* Validate buffer size */
    if (*BufferLength < sizeof(FILE_STANDARD_INFORMATION))
    {
        *BufferLength = sizeof(FILE_STANDARD_INFORMATION);
        return STATUS_INFO_LENGTH_MISMATCH;
    }

    /* Fill the structure */
    StandardInformation = (PFILE_STANDARD_INFORMATION)InfoBuffer;
    StandardInformation->AllocationSize.QuadPart = 0;
    StandardInformation->EndOfFile.QuadPart = 0;
    StandardInformation->NumberOfLinks = 1;
    StandardInformation->DeletePending = FALSE;
    StandardInformation->Directory = FALSE;
    *BufferLength = sizeof(FILE_STANDARD_INFORMATION);

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
          long InfoBuffer = 100;
          long FileInformationClass = 100;
          int _len_BufferLength0 = 1;
          int * BufferLength = (int *) malloc(_len_BufferLength0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_BufferLength0; _i0++) {
            BufferLength[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = KsecQueryFileInformation(InfoBuffer,FileInformationClass,BufferLength);
          printf("%d\n", benchRet); 
          free(BufferLength);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long InfoBuffer = 10;
          long FileInformationClass = 10;
          int _len_BufferLength0 = 100;
          int * BufferLength = (int *) malloc(_len_BufferLength0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_BufferLength0; _i0++) {
            BufferLength[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = KsecQueryFileInformation(InfoBuffer,FileInformationClass,BufferLength);
          printf("%d\n", benchRet); 
          free(BufferLength);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
