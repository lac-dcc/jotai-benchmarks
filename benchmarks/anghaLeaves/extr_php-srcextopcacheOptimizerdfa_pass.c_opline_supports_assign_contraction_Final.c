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
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct TYPE_11__ {TYPE_1__* var_info; } ;
typedef  TYPE_4__ zend_ssa ;
struct TYPE_10__ {scalar_t__ var; } ;
struct TYPE_9__ {scalar_t__ var; } ;
struct TYPE_12__ {scalar_t__ opcode; scalar_t__ op1_type; scalar_t__ op2_type; scalar_t__ extended_value; TYPE_3__ op1; TYPE_2__ op2; } ;
typedef  TYPE_5__ zend_op ;
typedef  int zend_bool ;
typedef  scalar_t__ uint32_t ;
struct TYPE_8__ {scalar_t__ type; } ;

/* Variables and functions */
 scalar_t__ IS_ARRAY ; 
 scalar_t__ IS_CV ; 
 scalar_t__ IS_OBJECT ; 
 scalar_t__ MAY_BE_ANY ; 
 scalar_t__ MAY_BE_DOUBLE ; 
 scalar_t__ MAY_BE_FALSE ; 
 scalar_t__ MAY_BE_LONG ; 
 scalar_t__ MAY_BE_NULL ; 
 scalar_t__ MAY_BE_TRUE ; 
 scalar_t__ ZEND_CAST ; 
 scalar_t__ ZEND_DO_FCALL ; 
 scalar_t__ ZEND_DO_FCALL_BY_NAME ; 
 scalar_t__ ZEND_DO_ICALL ; 
 scalar_t__ ZEND_DO_UCALL ; 
 scalar_t__ ZEND_INIT_ARRAY ; 
 scalar_t__ ZEND_NEW ; 
 scalar_t__ ZEND_POST_DEC ; 
 scalar_t__ ZEND_POST_INC ; 

__attribute__((used)) static zend_bool opline_supports_assign_contraction(
		zend_ssa *ssa, zend_op *opline, int src_var, uint32_t cv_var) {
	if (opline->opcode == ZEND_NEW) {
		/* see Zend/tests/generators/aborted_yield_during_new.phpt */
		return 0;
	}

	if (opline->opcode == ZEND_DO_ICALL || opline->opcode == ZEND_DO_UCALL
			|| opline->opcode == ZEND_DO_FCALL || opline->opcode == ZEND_DO_FCALL_BY_NAME) {
		/* Function calls may dtor the return value after it has already been written -- allow
		 * direct assignment only for types where a double-dtor does not matter. */
		uint32_t type = ssa->var_info[src_var].type;
		uint32_t simple = MAY_BE_NULL|MAY_BE_FALSE|MAY_BE_TRUE|MAY_BE_LONG|MAY_BE_DOUBLE;
		return !((type & MAY_BE_ANY) & ~simple);
	}

	if (opline->opcode == ZEND_POST_INC || opline->opcode == ZEND_POST_DEC) {
		/* POST_INC/DEC write the result variable before performing the inc/dec. For $i = $i++
		 * eliding the temporary variable would thus yield an incorrect result. */
		return opline->op1_type != IS_CV || opline->op1.var != cv_var;
	}

	if (opline->opcode == ZEND_INIT_ARRAY) {
		/* INIT_ARRAY initializes the result array before reading key/value. */
		return (opline->op1_type != IS_CV || opline->op1.var != cv_var)
			&& (opline->op2_type != IS_CV || opline->op2.var != cv_var);
	}

	if (opline->opcode == ZEND_CAST
			&& (opline->extended_value == IS_ARRAY || opline->extended_value == IS_OBJECT)) {
		/* CAST to array/object may initialize the result to an empty array/object before
		 * reading the expression. */
		return opline->op1_type != IS_CV || opline->op1.var != cv_var;
	}

	return 1;
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
          int src_var = 100;
          long cv_var = 100;
          int _len_ssa0 = 1;
          struct TYPE_11__ * ssa = (struct TYPE_11__ *) malloc(_len_ssa0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_ssa0; _i0++) {
              int _len_ssa__i0__var_info0 = 1;
          ssa[_i0].var_info = (struct TYPE_8__ *) malloc(_len_ssa__i0__var_info0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_ssa__i0__var_info0; _j0++) {
            ssa[_i0].var_info->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_opline0 = 1;
          struct TYPE_12__ * opline = (struct TYPE_12__ *) malloc(_len_opline0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_opline0; _i0++) {
            opline[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        opline[_i0].op1_type = ((-2 * (next_i()%2)) + 1) * next_i();
        opline[_i0].op2_type = ((-2 * (next_i()%2)) + 1) * next_i();
        opline[_i0].extended_value = ((-2 * (next_i()%2)) + 1) * next_i();
        opline[_i0].op1.var = ((-2 * (next_i()%2)) + 1) * next_i();
        opline[_i0].op2.var = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = opline_supports_assign_contraction(ssa,opline,src_var,cv_var);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ssa0; _aux++) {
          free(ssa[_aux].var_info);
          }
          free(ssa);
          free(opline);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
