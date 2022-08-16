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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int iPKey; } ;
typedef  TYPE_2__ Table ;
struct TYPE_8__ {int nCol; TYPE_1__* aCol; } ;
struct TYPE_6__ {int iFrom; } ;
typedef  TYPE_3__ FKey ;

/* Variables and functions */

__attribute__((used)) static int fkChildIsModified(
  Table *pTab,                    /* Table being updated */
  FKey *p,                        /* Foreign key for which pTab is the child */
  int *aChange,                   /* Array indicating modified columns */
  int bChngRowid                  /* True if rowid is modified by this update */
){
  int i;
  for(i=0; i<p->nCol; i++){
    int iChildKey = p->aCol[i].iFrom;
    if( aChange[iChildKey]>=0 ) return 1;
    if( iChildKey==pTab->iPKey && bChngRowid ) return 1;
  }
  return 0;
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
          int bChngRowid = 100;
          int _len_pTab0 = 1;
          struct TYPE_7__ * pTab = (struct TYPE_7__ *) malloc(_len_pTab0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_pTab0; _i0++) {
            pTab[_i0].iPKey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 1;
          struct TYPE_8__ * p = (struct TYPE_8__ *) malloc(_len_p0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].nCol = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__aCol0 = 1;
          p[_i0].aCol = (struct TYPE_6__ *) malloc(_len_p__i0__aCol0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_p__i0__aCol0; _j0++) {
            p[_i0].aCol->iFrom = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_aChange0 = 1;
          int * aChange = (int *) malloc(_len_aChange0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_aChange0; _i0++) {
            aChange[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fkChildIsModified(pTab,p,aChange,bChngRowid);
          printf("%d\n", benchRet); 
          free(pTab);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].aCol);
          }
          free(p);
          free(aChange);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
