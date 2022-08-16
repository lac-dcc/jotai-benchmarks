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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ uint64_t ;
typedef  int /*<<< orphan*/  kern_return_t ;
typedef  TYPE_1__* ipc_port_t ;
typedef  scalar_t__ boolean_t ;
struct TYPE_3__ {int ip_guarded; int ip_strict_guard; scalar_t__ ip_context; } ;

/* Variables and functions */
 int /*<<< orphan*/  KERN_INVALID_ARGUMENT ; 
 int /*<<< orphan*/  KERN_SUCCESS ; 

__attribute__((used)) static kern_return_t
mach_port_guard_locked(
	ipc_port_t		port,
	uint64_t		guard,
	boolean_t		strict)
{
	if (port->ip_context)
		return KERN_INVALID_ARGUMENT;

	port->ip_context = guard;
	port->ip_guarded = 1;
	port->ip_strict_guard = (strict)?1:0;
	return KERN_SUCCESS;
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
          long guard = 100;
          long strict = 100;
          int _len_port0 = 1;
          struct TYPE_3__ * port = (struct TYPE_3__ *) malloc(_len_port0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].ip_guarded = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].ip_strict_guard = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].ip_context = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mach_port_guard_locked(port,guard,strict);
          printf("%d\n", benchRet); 
          free(port);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
