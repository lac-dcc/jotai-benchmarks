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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  TYPE_1__* xmlParserCtxtPtr ;
struct TYPE_3__ {int spaceNr; int* space; int* spaceTab; } ;

/* Variables and functions */

__attribute__((used)) static int spacePop(xmlParserCtxtPtr ctxt) {
    int ret;
    if (ctxt->spaceNr <= 0) return(0);
    ctxt->spaceNr--;
    if (ctxt->spaceNr > 0)
	ctxt->space = &ctxt->spaceTab[ctxt->spaceNr - 1];
    else
        ctxt->space = &ctxt->spaceTab[0];
    ret = ctxt->spaceTab[ctxt->spaceNr];
    ctxt->spaceTab[ctxt->spaceNr] = -1;
    return(ret);
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int _len_ctxt0 = 65025;
          struct TYPE_3__ * ctxt = (struct TYPE_3__ *) malloc(_len_ctxt0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctxt0; _i0++) {
              ctxt[_i0].spaceNr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctxt__i0__space0 = 1;
          ctxt[_i0].space = (int *) malloc(_len_ctxt__i0__space0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctxt__i0__space0; _j0++) {
            ctxt[_i0].space[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctxt__i0__spaceTab0 = 1;
          ctxt[_i0].spaceTab = (int *) malloc(_len_ctxt__i0__spaceTab0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctxt__i0__spaceTab0; _j0++) {
            ctxt[_i0].spaceTab[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = spacePop(ctxt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctxt0; _aux++) {
          free(ctxt[_aux].space);
          }
          for(int _aux = 0; _aux < _len_ctxt0; _aux++) {
          free(ctxt[_aux].spaceTab);
          }
          free(ctxt);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_ctxt0 = 100;
          struct TYPE_3__ * ctxt = (struct TYPE_3__ *) malloc(_len_ctxt0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctxt0; _i0++) {
              ctxt[_i0].spaceNr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctxt__i0__space0 = 1;
          ctxt[_i0].space = (int *) malloc(_len_ctxt__i0__space0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctxt__i0__space0; _j0++) {
            ctxt[_i0].space[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctxt__i0__spaceTab0 = 1;
          ctxt[_i0].spaceTab = (int *) malloc(_len_ctxt__i0__spaceTab0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctxt__i0__spaceTab0; _j0++) {
            ctxt[_i0].spaceTab[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = spacePop(ctxt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctxt0; _aux++) {
          free(ctxt[_aux].space);
          }
          for(int _aux = 0; _aux < _len_ctxt0; _aux++) {
          free(ctxt[_aux].spaceTab);
          }
          free(ctxt);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_ctxt0 = 1;
          struct TYPE_3__ * ctxt = (struct TYPE_3__ *) malloc(_len_ctxt0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctxt0; _i0++) {
              ctxt[_i0].spaceNr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctxt__i0__space0 = 1;
          ctxt[_i0].space = (int *) malloc(_len_ctxt__i0__space0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctxt__i0__space0; _j0++) {
            ctxt[_i0].space[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctxt__i0__spaceTab0 = 1;
          ctxt[_i0].spaceTab = (int *) malloc(_len_ctxt__i0__spaceTab0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctxt__i0__spaceTab0; _j0++) {
            ctxt[_i0].spaceTab[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = spacePop(ctxt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctxt0; _aux++) {
          free(ctxt[_aux].space);
          }
          for(int _aux = 0; _aux < _len_ctxt0; _aux++) {
          free(ctxt[_aux].spaceTab);
          }
          free(ctxt);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
