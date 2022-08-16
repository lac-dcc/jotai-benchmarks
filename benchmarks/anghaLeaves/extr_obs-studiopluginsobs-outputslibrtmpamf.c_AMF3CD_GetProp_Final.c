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
struct TYPE_3__ {int cd_num; int /*<<< orphan*/ * cd_props; } ;
typedef  int /*<<< orphan*/  AVal ;
typedef  TYPE_1__ AMF3ClassDef ;

/* Variables and functions */
 int /*<<< orphan*/  AV_empty ; 

AVal *
AMF3CD_GetProp(AMF3ClassDef *cd, int nIndex)
{
    if (nIndex >= cd->cd_num)
        return (AVal *)&AV_empty;
    return &cd->cd_props[nIndex];
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
          int nIndex = 100;
          int _len_cd0 = 1;
          struct TYPE_3__ * cd = (struct TYPE_3__ *) malloc(_len_cd0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cd0; _i0++) {
            cd[_i0].cd_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cd__i0__cd_props0 = 1;
          cd[_i0].cd_props = (int *) malloc(_len_cd__i0__cd_props0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cd__i0__cd_props0; _j0++) {
            cd[_i0].cd_props[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = AMF3CD_GetProp(cd,nIndex);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_cd0; _aux++) {
          free(cd[_aux].cd_props);
          }
          free(cd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
