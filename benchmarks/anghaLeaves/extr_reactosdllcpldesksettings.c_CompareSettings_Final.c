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
struct TYPE_3__ {scalar_t__ dmPelsWidth; scalar_t__ dmPelsHeight; scalar_t__ dmBitsPerPel; scalar_t__ dmDisplayFrequency; } ;
typedef  TYPE_1__* PSETTINGS_ENTRY ;
typedef  scalar_t__ DWORD ;

/* Variables and functions */

__attribute__((used)) static int
CompareSettings(PSETTINGS_ENTRY Entry, DWORD dmPelsWidth, DWORD dmPelsHeight,
                DWORD dmBitsPerPel, DWORD dmDisplayFrequency)
{
    if (Entry->dmPelsWidth  == dmPelsWidth  &&
        Entry->dmPelsHeight == dmPelsHeight &&
        Entry->dmBitsPerPel == dmBitsPerPel &&
        Entry->dmDisplayFrequency == dmDisplayFrequency)
    {
        return 0;
    }
    else
    if ((Entry->dmPelsWidth  < dmPelsWidth) ||
        (Entry->dmPelsWidth == dmPelsWidth && Entry->dmPelsHeight < dmPelsHeight) ||
        (Entry->dmPelsWidth == dmPelsWidth && Entry->dmPelsHeight == dmPelsHeight &&
         Entry->dmBitsPerPel < dmBitsPerPel))
    {
        return 1;
    }
    return -1;
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
          long dmPelsWidth = 100;
          long dmPelsHeight = 100;
          long dmBitsPerPel = 100;
          long dmDisplayFrequency = 100;
          int _len_Entry0 = 1;
          struct TYPE_3__ * Entry = (struct TYPE_3__ *) malloc(_len_Entry0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_Entry0; _i0++) {
            Entry[_i0].dmPelsWidth = ((-2 * (next_i()%2)) + 1) * next_i();
        Entry[_i0].dmPelsHeight = ((-2 * (next_i()%2)) + 1) * next_i();
        Entry[_i0].dmBitsPerPel = ((-2 * (next_i()%2)) + 1) * next_i();
        Entry[_i0].dmDisplayFrequency = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = CompareSettings(Entry,dmPelsWidth,dmPelsHeight,dmBitsPerPel,dmDisplayFrequency);
          printf("%d\n", benchRet); 
          free(Entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
