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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  pthread_cond_t ;
struct TYPE_5__ {scalar_t__ pthreadCondT_; } ;
struct TYPE_6__ {TYPE_1__ org_xmlvm_runtime_Condition; } ;
struct TYPE_7__ {TYPE_2__ fields; } ;
typedef  TYPE_3__ org_xmlvm_runtime_Condition ;

/* Variables and functions */

pthread_cond_t* getConditionPtr(org_xmlvm_runtime_Condition* me)
{
    return (pthread_cond_t*)(me->fields.org_xmlvm_runtime_Condition.pthreadCondT_);
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

    // big-arr
    case 0:
    {
          int _len_me0 = 1;
          struct TYPE_7__ * me = (struct TYPE_7__ *) malloc(_len_me0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_me0; _i0++) {
            me->fields.org_xmlvm_runtime_Condition.pthreadCondT_ = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = getConditionPtr(me);
          printf("{{other_type}} %p\n", &benchRet); 
          free(me);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
