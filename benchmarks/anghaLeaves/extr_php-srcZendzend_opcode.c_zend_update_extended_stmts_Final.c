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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int last; TYPE_2__* opcodes; } ;
typedef  TYPE_1__ zend_op_array ;
struct TYPE_5__ {scalar_t__ opcode; int /*<<< orphan*/  lineno; } ;
typedef  TYPE_2__ zend_op ;

/* Variables and functions */
 scalar_t__ ZEND_EXT_STMT ; 
 void* ZEND_NOP ; 

__attribute__((used)) static void zend_update_extended_stmts(zend_op_array *op_array)
{
	zend_op *opline = op_array->opcodes, *end=opline+op_array->last;

	while (opline<end) {
		if (opline->opcode == ZEND_EXT_STMT) {
			if (opline+1<end) {
				if ((opline+1)->opcode == ZEND_EXT_STMT) {
					opline->opcode = ZEND_NOP;
					opline++;
					continue;
				}
				if (opline+1<end) {
					opline->lineno = (opline+1)->lineno;
				}
			} else {
				opline->opcode = ZEND_NOP;
			}
		}
		opline++;
	}
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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_op_array0 = 65025;
          struct TYPE_4__ * op_array = (struct TYPE_4__ *) malloc(_len_op_array0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_op_array0; _i0++) {
              op_array[_i0].last = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_op_array__i0__opcodes0 = 1;
          op_array[_i0].opcodes = (struct TYPE_5__ *) malloc(_len_op_array__i0__opcodes0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_op_array__i0__opcodes0; _j0++) {
              op_array[_i0].opcodes->opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          op_array[_i0].opcodes->lineno = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          zend_update_extended_stmts(op_array);
          for(int _aux = 0; _aux < _len_op_array0; _aux++) {
          free(op_array[_aux].opcodes);
          }
          free(op_array);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_op_array0 = 100;
          struct TYPE_4__ * op_array = (struct TYPE_4__ *) malloc(_len_op_array0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_op_array0; _i0++) {
              op_array[_i0].last = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_op_array__i0__opcodes0 = 1;
          op_array[_i0].opcodes = (struct TYPE_5__ *) malloc(_len_op_array__i0__opcodes0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_op_array__i0__opcodes0; _j0++) {
              op_array[_i0].opcodes->opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          op_array[_i0].opcodes->lineno = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          zend_update_extended_stmts(op_array);
          for(int _aux = 0; _aux < _len_op_array0; _aux++) {
          free(op_array[_aux].opcodes);
          }
          free(op_array);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_op_array0 = 1;
          struct TYPE_4__ * op_array = (struct TYPE_4__ *) malloc(_len_op_array0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_op_array0; _i0++) {
              op_array[_i0].last = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_op_array__i0__opcodes0 = 1;
          op_array[_i0].opcodes = (struct TYPE_5__ *) malloc(_len_op_array__i0__opcodes0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_op_array__i0__opcodes0; _j0++) {
              op_array[_i0].opcodes->opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          op_array[_i0].opcodes->lineno = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          zend_update_extended_stmts(op_array);
          for(int _aux = 0; _aux < _len_op_array0; _aux++) {
          free(op_array[_aux].opcodes);
          }
          free(op_array);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
