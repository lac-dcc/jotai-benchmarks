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
typedef  scalar_t__ UINT ;
struct TYPE_3__ {int Action; int Attributes; } ;
typedef  TYPE_1__ MSICOMPONENT ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
#define  INSTALLSTATE_ABSENT 130 
#define  INSTALLSTATE_LOCAL 129 
#define  INSTALLSTATE_SOURCE 128 
 int /*<<< orphan*/  TRUE ; 
 int msidbComponentAttributesSourceOnly ; 
 scalar_t__ msidbRemoveFileInstallModeOnBoth ; 
 scalar_t__ msidbRemoveFileInstallModeOnInstall ; 
 scalar_t__ msidbRemoveFileInstallModeOnRemove ; 

__attribute__((used)) static BOOL verify_comp_for_removal(MSICOMPONENT *comp, UINT install_mode)
{
    /* special case */
    if (comp->Action != INSTALLSTATE_SOURCE &&
        comp->Attributes & msidbComponentAttributesSourceOnly &&
        (install_mode == msidbRemoveFileInstallModeOnRemove ||
         install_mode == msidbRemoveFileInstallModeOnBoth)) return TRUE;

    switch (comp->Action)
    {
    case INSTALLSTATE_LOCAL:
    case INSTALLSTATE_SOURCE:
        if (install_mode == msidbRemoveFileInstallModeOnInstall ||
            install_mode == msidbRemoveFileInstallModeOnBoth) return TRUE;
        break;
    case INSTALLSTATE_ABSENT:
        if (install_mode == msidbRemoveFileInstallModeOnRemove ||
            install_mode == msidbRemoveFileInstallModeOnBoth) return TRUE;
        break;
    default: break;
    }
    return FALSE;
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
          long install_mode = 100;
          int _len_comp0 = 1;
          struct TYPE_3__ * comp = (struct TYPE_3__ *) malloc(_len_comp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_comp0; _i0++) {
            comp[_i0].Action = ((-2 * (next_i()%2)) + 1) * next_i();
        comp[_i0].Attributes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = verify_comp_for_removal(comp,install_mode);
          printf("%d\n", benchRet); 
          free(comp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
