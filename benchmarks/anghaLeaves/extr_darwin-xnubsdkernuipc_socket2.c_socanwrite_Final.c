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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct socket {int so_state; int so_flags1; TYPE_1__* so_proto; } ;
typedef  int boolean_t ;
struct TYPE_2__ {int pr_flags; } ;

/* Variables and functions */
 int PR_CONNREQUIRED ; 
 int SOF1_PRECONNECT_DATA ; 
 int SS_ISCONNECTED ; 

boolean_t
socanwrite(struct socket *so)
{
	return ((so->so_state & SS_ISCONNECTED) ||
	       !(so->so_proto->pr_flags & PR_CONNREQUIRED) ||
	       (so->so_flags1 & SOF1_PRECONNECT_DATA));
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
          int _len_so0 = 65025;
          struct socket * so = (struct socket *) malloc(_len_so0*sizeof(struct socket));
          for(int _i0 = 0; _i0 < _len_so0; _i0++) {
              so[_i0].so_state = ((-2 * (next_i()%2)) + 1) * next_i();
          so[_i0].so_flags1 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_so__i0__so_proto0 = 1;
          so[_i0].so_proto = (struct TYPE_2__ *) malloc(_len_so__i0__so_proto0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_so__i0__so_proto0; _j0++) {
              so[_i0].so_proto->pr_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = socanwrite(so);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_so0; _aux++) {
          free(so[_aux].so_proto);
          }
          free(so);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_so0 = 100;
          struct socket * so = (struct socket *) malloc(_len_so0*sizeof(struct socket));
          for(int _i0 = 0; _i0 < _len_so0; _i0++) {
              so[_i0].so_state = ((-2 * (next_i()%2)) + 1) * next_i();
          so[_i0].so_flags1 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_so__i0__so_proto0 = 1;
          so[_i0].so_proto = (struct TYPE_2__ *) malloc(_len_so__i0__so_proto0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_so__i0__so_proto0; _j0++) {
              so[_i0].so_proto->pr_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = socanwrite(so);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_so0; _aux++) {
          free(so[_aux].so_proto);
          }
          free(so);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_so0 = 1;
          struct socket * so = (struct socket *) malloc(_len_so0*sizeof(struct socket));
          for(int _i0 = 0; _i0 < _len_so0; _i0++) {
              so[_i0].so_state = ((-2 * (next_i()%2)) + 1) * next_i();
          so[_i0].so_flags1 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_so__i0__so_proto0 = 1;
          so[_i0].so_proto = (struct TYPE_2__ *) malloc(_len_so__i0__so_proto0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_so__i0__so_proto0; _j0++) {
              so[_i0].so_proto->pr_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = socanwrite(so);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_so0; _aux++) {
          free(so[_aux].so_proto);
          }
          free(so);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
