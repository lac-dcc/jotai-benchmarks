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
struct trace_event_call {struct syscall_metadata* data; } ;
struct list_head {int dummy; } ;
struct syscall_metadata {struct list_head enter_fields; } ;

/* Variables and functions */

__attribute__((used)) static struct list_head *
syscall_get_enter_fields(struct trace_event_call *call)
{
	struct syscall_metadata *entry = call->data;

	return &entry->enter_fields;
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
          int _len_call0 = 1;
          struct trace_event_call * call = (struct trace_event_call *) malloc(_len_call0*sizeof(struct trace_event_call));
          for(int _i0 = 0; _i0 < _len_call0; _i0++) {
              int _len_call__i0__data0 = 1;
          call[_i0].data = (struct syscall_metadata *) malloc(_len_call__i0__data0*sizeof(struct syscall_metadata));
          for(int _j0 = 0; _j0 < _len_call__i0__data0; _j0++) {
            call[_i0].data->enter_fields.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct list_head * benchRet = syscall_get_enter_fields(call);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_call0; _aux++) {
          free(call[_aux].data);
          }
          free(call);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
