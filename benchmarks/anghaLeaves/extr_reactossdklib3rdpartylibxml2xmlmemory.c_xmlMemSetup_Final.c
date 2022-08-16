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

/* Type definitions */
typedef  int /*<<< orphan*/ * xmlStrdupFunc ;
typedef  int /*<<< orphan*/ * xmlReallocFunc ;
typedef  int /*<<< orphan*/ * xmlMallocFunc ;
typedef  int /*<<< orphan*/ * xmlFreeFunc ;

/* Variables and functions */
 int /*<<< orphan*/ * xmlFree ; 
 int /*<<< orphan*/ * xmlMalloc ; 
 int /*<<< orphan*/ * xmlMallocAtomic ; 
 int /*<<< orphan*/ * xmlMemStrdup ; 
 int /*<<< orphan*/ * xmlRealloc ; 

int
xmlMemSetup(xmlFreeFunc freeFunc, xmlMallocFunc mallocFunc,
            xmlReallocFunc reallocFunc, xmlStrdupFunc strdupFunc) {
#ifdef DEBUG_MEMORY
     xmlGenericError(xmlGenericErrorContext,
	     "xmlMemSetup()\n");
#endif
    if (freeFunc == NULL)
	return(-1);
    if (mallocFunc == NULL)
	return(-1);
    if (reallocFunc == NULL)
	return(-1);
    if (strdupFunc == NULL)
	return(-1);
    xmlFree = freeFunc;
    xmlMalloc = mallocFunc;
    xmlMallocAtomic = mallocFunc;
    xmlRealloc = reallocFunc;
    xmlMemStrdup = strdupFunc;
#ifdef DEBUG_MEMORY
     xmlGenericError(xmlGenericErrorContext,
	     "xmlMemSetup() Ok\n");
#endif
    return(0);
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
          int _len_freeFunc0 = 1;
          int * freeFunc = (int *) malloc(_len_freeFunc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_freeFunc0; _i0++) {
            freeFunc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mallocFunc0 = 1;
          int * mallocFunc = (int *) malloc(_len_mallocFunc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mallocFunc0; _i0++) {
            mallocFunc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reallocFunc0 = 1;
          int * reallocFunc = (int *) malloc(_len_reallocFunc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_reallocFunc0; _i0++) {
            reallocFunc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_strdupFunc0 = 1;
          int * strdupFunc = (int *) malloc(_len_strdupFunc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_strdupFunc0; _i0++) {
            strdupFunc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xmlMemSetup(freeFunc,mallocFunc,reallocFunc,strdupFunc);
          printf("%d\n", benchRet); 
          free(freeFunc);
          free(mallocFunc);
          free(reallocFunc);
          free(strdupFunc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
