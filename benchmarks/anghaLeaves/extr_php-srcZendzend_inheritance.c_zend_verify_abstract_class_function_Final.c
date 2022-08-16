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
struct TYPE_6__ {int fn_flags; } ;
struct TYPE_7__ {TYPE_1__ common; } ;
typedef  TYPE_2__ zend_function ;
struct TYPE_8__ {size_t cnt; int ctor; TYPE_2__** afn; } ;
typedef  TYPE_3__ zend_abstract_info ;

/* Variables and functions */
 size_t MAX_ABSTRACT_INFO_CNT ; 
 int ZEND_ACC_ABSTRACT ; 
 int ZEND_ACC_CTOR ; 

__attribute__((used)) static void zend_verify_abstract_class_function(zend_function *fn, zend_abstract_info *ai) /* {{{ */
{
	if (fn->common.fn_flags & ZEND_ACC_ABSTRACT) {
		if (ai->cnt < MAX_ABSTRACT_INFO_CNT) {
			ai->afn[ai->cnt] = fn;
		}
		if (fn->common.fn_flags & ZEND_ACC_CTOR) {
			if (!ai->ctor) {
				ai->cnt++;
				ai->ctor = 1;
			} else {
				ai->afn[ai->cnt] = NULL;
			}
		} else {
			ai->cnt++;
		}
	}
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
          int _len_fn0 = 1;
          struct TYPE_7__ * fn = (struct TYPE_7__ *) malloc(_len_fn0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_fn0; _i0++) {
            fn[_i0].common.fn_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ai0 = 1;
          struct TYPE_8__ * ai = (struct TYPE_8__ *) malloc(_len_ai0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_ai0; _i0++) {
            ai[_i0].cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].ctor = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ai__i0__afn0 = 1;
          ai[_i0].afn = (struct TYPE_7__ **) malloc(_len_ai__i0__afn0*sizeof(struct TYPE_7__ *));
          for(int _j0 = 0; _j0 < _len_ai__i0__afn0; _j0++) {
            int _len_ai__i0__afn1 = 1;
            ai[_i0].afn[_j0] = (struct TYPE_7__ *) malloc(_len_ai__i0__afn1*sizeof(struct TYPE_7__));
            for(int _j1 = 0; _j1 < _len_ai__i0__afn1; _j1++) {
              ai[_i0].afn[_j0]->common.fn_flags = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          zend_verify_abstract_class_function(fn,ai);
          free(fn);
          for(int _aux = 0; _aux < _len_ai0; _aux++) {
          free(*(ai[_aux].afn));
        free(ai[_aux].afn);
          }
          free(ai);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
