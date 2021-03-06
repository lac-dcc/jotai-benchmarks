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

/* Type definitions */
typedef  int php_json_error_code ;

/* Variables and functions */
#define  PHP_JSON_ERROR_CTRL_CHAR 138 
#define  PHP_JSON_ERROR_DEPTH 137 
#define  PHP_JSON_ERROR_INF_OR_NAN 136 
#define  PHP_JSON_ERROR_INVALID_PROPERTY_NAME 135 
#define  PHP_JSON_ERROR_NONE 134 
#define  PHP_JSON_ERROR_RECURSION 133 
#define  PHP_JSON_ERROR_STATE_MISMATCH 132 
#define  PHP_JSON_ERROR_SYNTAX 131 
#define  PHP_JSON_ERROR_UNSUPPORTED_TYPE 130 
#define  PHP_JSON_ERROR_UTF16 129 
#define  PHP_JSON_ERROR_UTF8 128 

__attribute__((used)) static const char *php_json_get_error_msg(php_json_error_code error_code) /* {{{ */
{
	switch(error_code) {
		case PHP_JSON_ERROR_NONE:
			return "No error";
		case PHP_JSON_ERROR_DEPTH:
			return "Maximum stack depth exceeded";
		case PHP_JSON_ERROR_STATE_MISMATCH:
			return "State mismatch (invalid or malformed JSON)";
		case PHP_JSON_ERROR_CTRL_CHAR:
			return "Control character error, possibly incorrectly encoded";
		case PHP_JSON_ERROR_SYNTAX:
			return "Syntax error";
		case PHP_JSON_ERROR_UTF8:
			return "Malformed UTF-8 characters, possibly incorrectly encoded";
		case PHP_JSON_ERROR_RECURSION:
			return "Recursion detected";
		case PHP_JSON_ERROR_INF_OR_NAN:
			return "Inf and NaN cannot be JSON encoded";
		case PHP_JSON_ERROR_UNSUPPORTED_TYPE:
			return "Type is not supported";
		case PHP_JSON_ERROR_INVALID_PROPERTY_NAME:
			return "The decoded property name is invalid";
		case PHP_JSON_ERROR_UTF16:
			return "Single unpaired UTF-16 surrogate in unicode escape";
		default:
			return "Unknown error";
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

    // int-bounds
    case 0:
    {
          int error_code = 100;
          const char * benchRet = php_json_get_error_msg(error_code);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int error_code = 255;
          const char * benchRet = php_json_get_error_msg(error_code);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int error_code = 10;
          const char * benchRet = php_json_get_error_msg(error_code);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
