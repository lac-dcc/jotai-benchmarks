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
       1            big-arr-10x\n\
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
struct object {int flags; } ;

/* Variables and functions */
 int ALLOW_REACHABLE_SHA1 ; 
 int ALLOW_TIP_SHA1 ; 
 int HIDDEN_REF ; 
 int OUR_REF ; 
 int allow_unadvertised_object_request ; 

__attribute__((used)) static int is_our_ref(struct object *o)
{
	int allow_hidden_ref = (allow_unadvertised_object_request &
			(ALLOW_TIP_SHA1 | ALLOW_REACHABLE_SHA1));
	return o->flags & ((allow_hidden_ref ? HIDDEN_REF : 0) | OUR_REF);
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
          int _len_o0 = 1;
          struct object * o = (struct object *) malloc(_len_o0*sizeof(struct object));
          for(int _i0 = 0; _i0 < _len_o0; _i0++) {
            o[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_our_ref(o);
          printf("%d\n", benchRet); 
          free(o);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_o0 = 100;
          struct object * o = (struct object *) malloc(_len_o0*sizeof(struct object));
          for(int _i0 = 0; _i0 < _len_o0; _i0++) {
            o[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_our_ref(o);
          printf("%d\n", benchRet); 
          free(o);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
