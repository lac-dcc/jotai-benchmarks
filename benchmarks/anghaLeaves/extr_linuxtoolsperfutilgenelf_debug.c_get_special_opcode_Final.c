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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  unsigned long ubyte ;
struct debug_entry {unsigned int lineno; unsigned long addr; } ;
struct TYPE_2__ {unsigned int line_base; unsigned int line_range; unsigned long minimum_instruction_length; unsigned int opcode_base; } ;

/* Variables and functions */
 TYPE_1__ default_debug_line_header ; 

__attribute__((used)) static ubyte get_special_opcode(struct debug_entry *ent,
				unsigned int last_line,
				unsigned long last_vma)
{
	unsigned int temp;
	unsigned long delta_addr;

	/*
	 * delta from line_base
	 */
	temp = (ent->lineno - last_line) - default_debug_line_header.line_base;

	if (temp >= default_debug_line_header.line_range)
		return 0;

	/*
	 * delta of addresses
	 */
	delta_addr = (ent->addr - last_vma) / default_debug_line_header.minimum_instruction_length;

	/* This is not sufficient to ensure opcode will be in [0-256] but
	 * sufficient to ensure when summing with the delta lineno we will
	 * not overflow the unsigned long opcode */

	if (delta_addr <= 256 / default_debug_line_header.line_range) {
		unsigned long opcode = temp +
			(delta_addr * default_debug_line_header.line_range) +
			default_debug_line_header.opcode_base;

		return opcode <= 255 ? opcode : 0;
	}
	return 0;
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
          unsigned int last_line = 100;
          unsigned long last_vma = 100;
          int _len_ent0 = 1;
          struct debug_entry * ent = (struct debug_entry *) malloc(_len_ent0*sizeof(struct debug_entry));
          for(int _i0 = 0; _i0 < _len_ent0; _i0++) {
            ent[_i0].lineno = ((-2 * (next_i()%2)) + 1) * next_i();
        ent[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = get_special_opcode(ent,last_line,last_vma);
          printf("%lu\n", benchRet); 
          free(ent);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
