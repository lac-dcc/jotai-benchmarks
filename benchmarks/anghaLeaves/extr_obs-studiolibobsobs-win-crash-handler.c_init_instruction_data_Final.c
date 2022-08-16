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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {void* Mode; int /*<<< orphan*/  Offset; } ;
struct TYPE_8__ {void* Mode; int /*<<< orphan*/  Offset; } ;
struct TYPE_7__ {void* Mode; int /*<<< orphan*/  Offset; } ;
struct TYPE_10__ {TYPE_4__ AddrStack; TYPE_3__ AddrPC; TYPE_2__ AddrFrame; } ;
struct TYPE_6__ {int /*<<< orphan*/  Esp; int /*<<< orphan*/  Ebp; int /*<<< orphan*/  Eip; } ;
struct stack_trace {TYPE_5__ frame; int /*<<< orphan*/  image_type; TYPE_1__ context; int /*<<< orphan*/  instruction_ptr; } ;

/* Variables and functions */
 void* AddrModeFlat ; 
 int /*<<< orphan*/  IMAGE_FILE_MACHINE_I386 ; 

__attribute__((used)) static inline void init_instruction_data(struct stack_trace *trace)
{
#ifdef _WIN64
	trace->instruction_ptr = trace->context.Rip;
	trace->frame.AddrPC.Offset = trace->instruction_ptr;
	trace->frame.AddrFrame.Offset = trace->context.Rbp;
	trace->frame.AddrStack.Offset = trace->context.Rsp;
	trace->image_type = IMAGE_FILE_MACHINE_AMD64;
#else
	trace->instruction_ptr = trace->context.Eip;
	trace->frame.AddrPC.Offset = trace->instruction_ptr;
	trace->frame.AddrFrame.Offset = trace->context.Ebp;
	trace->frame.AddrStack.Offset = trace->context.Esp;
	trace->image_type = IMAGE_FILE_MACHINE_I386;
#endif

	trace->frame.AddrFrame.Mode = AddrModeFlat;
	trace->frame.AddrPC.Mode = AddrModeFlat;
	trace->frame.AddrStack.Mode = AddrModeFlat;
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
          int _len_trace0 = 1;
          struct stack_trace * trace = (struct stack_trace *) malloc(_len_trace0*sizeof(struct stack_trace));
          for(int _i0 = 0; _i0 < _len_trace0; _i0++) {
            trace[_i0].frame.AddrStack.Offset = ((-2 * (next_i()%2)) + 1) * next_i();
        trace[_i0].frame.AddrPC.Offset = ((-2 * (next_i()%2)) + 1) * next_i();
        trace[_i0].frame.AddrFrame.Offset = ((-2 * (next_i()%2)) + 1) * next_i();
        trace[_i0].image_type = ((-2 * (next_i()%2)) + 1) * next_i();
        trace[_i0].context.Esp = ((-2 * (next_i()%2)) + 1) * next_i();
        trace[_i0].context.Ebp = ((-2 * (next_i()%2)) + 1) * next_i();
        trace[_i0].context.Eip = ((-2 * (next_i()%2)) + 1) * next_i();
        trace[_i0].instruction_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_instruction_data(trace);
          free(trace);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
