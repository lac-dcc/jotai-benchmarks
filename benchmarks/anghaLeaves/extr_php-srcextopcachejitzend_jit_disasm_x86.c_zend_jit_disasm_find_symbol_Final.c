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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ addr; scalar_t__ end; char const* name; struct TYPE_3__** child; } ;
typedef  TYPE_1__ zend_sym_node ;
typedef  scalar_t__ uint64_t ;
typedef  scalar_t__ int64_t ;

/* Variables and functions */
 TYPE_1__* symbols ; 

__attribute__((used)) static const char* zend_jit_disasm_find_symbol(uint64_t  addr,
                                               int64_t  *offset) {
	zend_sym_node *node = symbols;
	while (node) {
		if (addr < node->addr) {
			node = node->child[0];
		} else if (addr > node->end) {
			node = node->child[1];
		} else {
			*offset = addr - node->addr;
			return node->name;
		}
	}
	return NULL;
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
          long addr = 100;
          int _len_offset0 = 1;
          long * offset = (long *) malloc(_len_offset0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = zend_jit_disasm_find_symbol(addr,offset);
          printf("{{other_type}} %p\n", &benchRet); 
          free(offset);
        
        break;
    }
    // big-arr
    case 1:
    {
          long addr = 255;
          int _len_offset0 = 65025;
          long * offset = (long *) malloc(_len_offset0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = zend_jit_disasm_find_symbol(addr,offset);
          printf("{{other_type}} %p\n", &benchRet); 
          free(offset);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long addr = 10;
          int _len_offset0 = 100;
          long * offset = (long *) malloc(_len_offset0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = zend_jit_disasm_find_symbol(addr,offset);
          printf("{{other_type}} %p\n", &benchRet); 
          free(offset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
