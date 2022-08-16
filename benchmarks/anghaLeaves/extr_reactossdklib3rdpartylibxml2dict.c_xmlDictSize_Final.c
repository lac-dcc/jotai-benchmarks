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
typedef  TYPE_2__* xmlDictPtr ;
struct TYPE_5__ {int nbElems; TYPE_1__* subdict; } ;
struct TYPE_4__ {int nbElems; } ;

/* Variables and functions */

int
xmlDictSize(xmlDictPtr dict) {
    if (dict == NULL)
	return(-1);
    if (dict->subdict)
        return(dict->nbElems + dict->subdict->nbElems);
    return(dict->nbElems);
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
          int _len_dict0 = 1;
          struct TYPE_5__ * dict = (struct TYPE_5__ *) malloc(_len_dict0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_dict0; _i0++) {
            dict[_i0].nbElems = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dict__i0__subdict0 = 1;
          dict[_i0].subdict = (struct TYPE_4__ *) malloc(_len_dict__i0__subdict0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dict__i0__subdict0; _j0++) {
            dict[_i0].subdict->nbElems = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xmlDictSize(dict);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dict0; _aux++) {
          free(dict[_aux].subdict);
          }
          free(dict);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
