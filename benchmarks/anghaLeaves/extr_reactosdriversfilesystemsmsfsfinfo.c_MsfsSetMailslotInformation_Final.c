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
struct TYPE_6__ {int /*<<< orphan*/ * ReadTimeout; } ;
struct TYPE_5__ {int /*<<< orphan*/  TimeOut; } ;
typedef  int* PULONG ;
typedef  TYPE_1__* PMSFS_FCB ;
typedef  TYPE_2__* PFILE_MAILSLOT_SET_INFORMATION ;
typedef  int /*<<< orphan*/  NTSTATUS ;
typedef  int /*<<< orphan*/  FILE_MAILSLOT_SET_INFORMATION ;

/* Variables and functions */
 int /*<<< orphan*/  STATUS_BUFFER_OVERFLOW ; 
 int /*<<< orphan*/  STATUS_SUCCESS ; 

__attribute__((used)) static NTSTATUS
MsfsSetMailslotInformation(PMSFS_FCB Fcb,
                           PFILE_MAILSLOT_SET_INFORMATION Buffer,
                           PULONG BufferLength)
{
    if (*BufferLength < sizeof(FILE_MAILSLOT_SET_INFORMATION))
        return STATUS_BUFFER_OVERFLOW;

    Fcb->TimeOut = *Buffer->ReadTimeout;

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
          int _len_Fcb0 = 1;
          struct TYPE_5__ * Fcb = (struct TYPE_5__ *) malloc(_len_Fcb0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_Fcb0; _i0++) {
            Fcb[_i0].TimeOut = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Buffer0 = 1;
          struct TYPE_6__ * Buffer = (struct TYPE_6__ *) malloc(_len_Buffer0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_Buffer0; _i0++) {
              int _len_Buffer__i0__ReadTimeout0 = 1;
          Buffer[_i0].ReadTimeout = (int *) malloc(_len_Buffer__i0__ReadTimeout0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Buffer__i0__ReadTimeout0; _j0++) {
            Buffer[_i0].ReadTimeout[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_BufferLength0 = 1;
          int * BufferLength = (int *) malloc(_len_BufferLength0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_BufferLength0; _i0++) {
            BufferLength[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = MsfsSetMailslotInformation(Fcb,Buffer,BufferLength);
          printf("%d\n", benchRet); 
          free(Fcb);
          for(int _aux = 0; _aux < _len_Buffer0; _aux++) {
          free(Buffer[_aux].ReadTimeout);
          }
          free(Buffer);
          free(BufferLength);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
