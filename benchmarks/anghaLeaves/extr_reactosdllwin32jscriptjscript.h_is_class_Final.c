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
struct TYPE_5__ {TYPE_1__* builtin_info; } ;
typedef  TYPE_2__ jsdisp_t ;
typedef  scalar_t__ jsclass_t ;
struct TYPE_4__ {scalar_t__ class; } ;
typedef  int BOOL ;

/* Variables and functions */

__attribute__((used)) static inline BOOL is_class(jsdisp_t *jsdisp, jsclass_t class)
{
    return jsdisp->builtin_info->class == class;
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
          long class = 100;
          int _len_jsdisp0 = 1;
          struct TYPE_5__ * jsdisp = (struct TYPE_5__ *) malloc(_len_jsdisp0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_jsdisp0; _i0++) {
              int _len_jsdisp__i0__builtin_info0 = 1;
          jsdisp[_i0].builtin_info = (struct TYPE_4__ *) malloc(_len_jsdisp__i0__builtin_info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_jsdisp__i0__builtin_info0; _j0++) {
            jsdisp[_i0].builtin_info->class = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_class(jsdisp,class);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_jsdisp0; _aux++) {
          free(jsdisp[_aux].builtin_info);
          }
          free(jsdisp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
