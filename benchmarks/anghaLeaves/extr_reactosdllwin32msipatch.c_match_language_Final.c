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
       0            empty\n\
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
typedef  size_t UINT ;
struct TYPE_3__ {size_t num_langids; scalar_t__* langids; } ;
typedef  TYPE_1__ MSIPACKAGE ;
typedef  scalar_t__ LANGID ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static BOOL match_language( MSIPACKAGE *package, LANGID langid )
{
    UINT i;

    if (!package->num_langids || !langid) return TRUE;
    for (i = 0; i < package->num_langids; i++)
    {
        if (package->langids[i] == langid) return TRUE;
    }
    return FALSE;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          long langid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_package0 = 1;
          struct TYPE_3__ * package = (struct TYPE_3__ *) malloc(_len_package0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_package0; _i0++) {
              package[_i0].num_langids = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_package__i0__langids0 = 1;
          package[_i0].langids = (long *) malloc(_len_package__i0__langids0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_package__i0__langids0; _j0++) {
            package[_i0].langids[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = match_language(package,langid);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_package0; _aux++) {
          free(package[_aux].langids);
          }
          free(package);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
