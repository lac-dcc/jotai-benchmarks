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

/* Variables and functions */
#define  EVAL_ERROR_IF_THEN_ELSE_MISSING_ELSE 139 
#define  EVAL_ERROR_INVALID_NUMBER_OF_OPERANDS 138 
#define  EVAL_ERROR_INVALID_VALUE 137 
#define  EVAL_ERROR_MISSING_CLOSE_SUBEXPRESSION 136 
#define  EVAL_ERROR_MISSING_OPERAND 135 
#define  EVAL_ERROR_MISSING_OPERATOR 134 
#define  EVAL_ERROR_OK 133 
#define  EVAL_ERROR_REMAINING_GARBAGE 132 
#define  EVAL_ERROR_UNKNOWN_OPERAND 131 
#define  EVAL_ERROR_UNKNOWN_VARIABLE 130 
#define  EVAL_ERROR_VALUE_IS_INFINITE 129 
#define  EVAL_ERROR_VALUE_IS_NAN 128 

const char *expression_strerror(int error) {
    switch(error) {
        case EVAL_ERROR_OK:
            return "success";

        case EVAL_ERROR_MISSING_CLOSE_SUBEXPRESSION:
            return "missing closing parenthesis";

        case EVAL_ERROR_UNKNOWN_OPERAND:
            return "unknown operand";

        case EVAL_ERROR_MISSING_OPERAND:
            return "expected operand";

        case EVAL_ERROR_MISSING_OPERATOR:
            return "expected operator";

        case EVAL_ERROR_REMAINING_GARBAGE:
            return "remaining characters after expression";

        case EVAL_ERROR_INVALID_VALUE:
            return "invalid value structure - internal error";

        case EVAL_ERROR_INVALID_NUMBER_OF_OPERANDS:
            return "wrong number of operands for operation - internal error";

        case EVAL_ERROR_VALUE_IS_NAN:
            return "value is unset";

        case EVAL_ERROR_VALUE_IS_INFINITE:
            return "computed value is infinite";

        case EVAL_ERROR_UNKNOWN_VARIABLE:
            return "undefined variable";

        case EVAL_ERROR_IF_THEN_ELSE_MISSING_ELSE:
            return "missing second sub-expression of inline conditional";

        default:
            return "unknown error";
    }
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
          int error = 255;
          const char * benchRet = expression_strerror(error);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
