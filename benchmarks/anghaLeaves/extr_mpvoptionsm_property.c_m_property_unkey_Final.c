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
struct m_property_action_arg {int action; void* arg; int /*<<< orphan*/ * key; } ;

/* Variables and functions */
 int M_PROPERTY_KEY_ACTION ; 

__attribute__((used)) static void m_property_unkey(int *action, void **arg)
{
    if (*action == M_PROPERTY_KEY_ACTION) {
        struct m_property_action_arg *ka = *arg;
        if (!ka->key[0]) {
            *action = ka->action;
            *arg = ka->arg;
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
          int _len_action0 = 1;
          int * action = (int *) malloc(_len_action0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_action0; _i0++) {
            action[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_arg0 = 1;
          void ** arg = (void **) malloc(_len_arg0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
          }
          m_property_unkey(action,arg);
          free(action);
          for(int i1 = 0; i1 < _len_arg0; i1++) {
            int _len_arg1 = 1;
              }
          free(arg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
