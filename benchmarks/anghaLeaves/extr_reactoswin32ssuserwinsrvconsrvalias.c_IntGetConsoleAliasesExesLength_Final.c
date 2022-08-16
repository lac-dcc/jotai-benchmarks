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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  WCHAR ;
typedef  int UINT ;
struct TYPE_4__ {scalar_t__ Length; } ;
struct TYPE_5__ {struct TYPE_5__* Next; TYPE_1__ ExeName; } ;
typedef  TYPE_2__* PALIAS_HEADER ;
typedef  int /*<<< orphan*/  BOOLEAN ;

/* Variables and functions */

__attribute__((used)) static UINT
IntGetConsoleAliasesExesLength(PALIAS_HEADER RootHeader,
                               BOOLEAN IsUnicode)
{
    UINT Length = 0;

    while (RootHeader)
    {
        Length += RootHeader->ExeName.Length + sizeof(WCHAR); // NULL-termination
        RootHeader = RootHeader->Next;
    }

    /*
     * Quick and dirty way of getting the number of bytes of the
     * corresponding ANSI string from the one in UNICODE.
     */
    if (!IsUnicode)
        Length /= sizeof(WCHAR);

    return Length;
}


// ------------------------------------------------------------------------- //

struct TYPE_5__ *_allocate_RootHeader(int length, struct TYPE_5__ *aux_RootHeader[]) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_RootHeader[0] = walker;
  walker->Next = NULL;
walker->ExeName.Length = ((-2 * (next_i()%2)) + 1) * next_i();

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->Next = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->Next;
    aux_RootHeader[i] = walker;
    walker->Next = NULL;
walker->ExeName.Length = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  return head;
}

void _delete_RootHeader(struct TYPE_5__ *aux_RootHeader[], int aux_RootHeader_size) {
  for(int i = 0; i < aux_RootHeader_size; i++) 
    if(aux_RootHeader[i])
      free(aux_RootHeader[i]);
}




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
          int IsUnicode = 100;
          struct TYPE_5__ * aux_RootHeader[1];
          struct TYPE_5__ * RootHeader = _allocate_RootHeader(1, aux_RootHeader);
          int benchRet = IntGetConsoleAliasesExesLength(RootHeader,IsUnicode);
          printf("%d\n", benchRet); 
          _delete_RootHeader(aux_RootHeader, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
