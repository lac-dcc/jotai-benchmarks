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

/* Type definitions */
struct hist_field {int flags; } ;

/* Variables and functions */
 int HIST_FIELD_FL_EXECNAME ; 
 int HIST_FIELD_FL_HEX ; 
 int HIST_FIELD_FL_LOG2 ; 
 int HIST_FIELD_FL_SYM ; 
 int HIST_FIELD_FL_SYM_OFFSET ; 
 int HIST_FIELD_FL_SYSCALL ; 
 int HIST_FIELD_FL_TIMESTAMP_USECS ; 

__attribute__((used)) static const char *get_hist_field_flags(struct hist_field *hist_field)
{
	const char *flags_str = NULL;

	if (hist_field->flags & HIST_FIELD_FL_HEX)
		flags_str = "hex";
	else if (hist_field->flags & HIST_FIELD_FL_SYM)
		flags_str = "sym";
	else if (hist_field->flags & HIST_FIELD_FL_SYM_OFFSET)
		flags_str = "sym-offset";
	else if (hist_field->flags & HIST_FIELD_FL_EXECNAME)
		flags_str = "execname";
	else if (hist_field->flags & HIST_FIELD_FL_SYSCALL)
		flags_str = "syscall";
	else if (hist_field->flags & HIST_FIELD_FL_LOG2)
		flags_str = "log2";
	else if (hist_field->flags & HIST_FIELD_FL_TIMESTAMP_USECS)
		flags_str = "usecs";

	return flags_str;
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
          int _len_hist_field0 = 1;
          struct hist_field * hist_field = (struct hist_field *) malloc(_len_hist_field0*sizeof(struct hist_field));
          for(int _i0 = 0; _i0 < _len_hist_field0; _i0++) {
            hist_field->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = get_hist_field_flags(hist_field);
          printf("{{other_type}} %p\n", &benchRet); 
          free(hist_field);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
