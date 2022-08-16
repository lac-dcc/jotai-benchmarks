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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int ULONG ;
struct TYPE_7__ {int /*<<< orphan*/  Data; struct TYPE_7__* Next; } ;
struct TYPE_6__ {int FieldCount; TYPE_3__* FirstField; int /*<<< orphan*/  Key; } ;
struct TYPE_5__ {int /*<<< orphan*/ * Line; } ;
typedef  TYPE_1__* PINFCONTEXT ;
typedef  TYPE_2__* PINFCACHELINE ;
typedef  TYPE_3__* PINFCACHEFIELD ;
typedef  int /*<<< orphan*/  PCSTR ;
typedef  int /*<<< orphan*/  BOOLEAN ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 

BOOLEAN
InfGetDataField (
    PINFCONTEXT Context,
    ULONG FieldIndex,
    PCSTR *Data)
{
    PINFCACHELINE CacheLine;
    PINFCACHEFIELD CacheField;
    ULONG Index;

    if ((Context == NULL) || (Context->Line == NULL) || (Data == NULL))
    {
//      DPRINT("Invalid parameter\n");
        return FALSE;
    }

    CacheLine = (PINFCACHELINE)Context->Line;

    if (FieldIndex > CacheLine->FieldCount)
        return FALSE;

    if (FieldIndex == 0)
    {
        *Data = CacheLine->Key;
    }
    else
    {
        CacheField = CacheLine->FirstField;
        for (Index = 1; Index < FieldIndex; Index++)
            CacheField = CacheField->Next;

        *Data = CacheField->Data;
    }

    return TRUE;
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
          int FieldIndex = 100;
          int _len_Context0 = 1;
          struct TYPE_5__ * Context = (struct TYPE_5__ *) malloc(_len_Context0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_Context0; _i0++) {
              int _len_Context__i0__Line0 = 1;
          Context[_i0].Line = (int *) malloc(_len_Context__i0__Line0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_Context__i0__Line0; _j0++) {
            Context[_i0].Line[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_Data0 = 1;
          int * Data = (int *) malloc(_len_Data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Data0; _i0++) {
            Data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = InfGetDataField(Context,FieldIndex,Data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_Context0; _aux++) {
          free(Context[_aux].Line);
          }
          free(Context);
          free(Data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
