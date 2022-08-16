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
struct TYPE_3__ {int Length; int* Buffer; } ;
typedef  TYPE_1__* PUNICODE_STRING ;
typedef  int BOOLEAN ;

/* Variables and functions */

BOOLEAN Ext2IsDotDot(PUNICODE_STRING name)
{
    return (name->Length == 4 && name->Buffer[0] == L'.' &&
            name->Buffer[1] == L'.');
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
          int _len_name0 = 1;
          struct TYPE_3__ * name = (struct TYPE_3__ *) malloc(_len_name0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0].Length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_name__i0__Buffer0 = 1;
          name[_i0].Buffer = (int *) malloc(_len_name__i0__Buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_name__i0__Buffer0; _j0++) {
            name[_i0].Buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = Ext2IsDotDot(name);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_name0; _aux++) {
          free(name[_aux].Buffer);
          }
          free(name);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
