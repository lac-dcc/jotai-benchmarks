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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  XMLRPC_VECTOR_TYPE ;
typedef  int XMLRPC_VALUE_TYPE ;

/* Variables and functions */
#define  xmlrpc_base64 140 
#define  xmlrpc_boolean 139 
#define  xmlrpc_datetime 138 
#define  xmlrpc_double 137 
#define  xmlrpc_empty 136 
#define  xmlrpc_int 135 
#define  xmlrpc_none 134 
#define  xmlrpc_string 133 
#define  xmlrpc_vector 132 
#define  xmlrpc_vector_array 131 
#define  xmlrpc_vector_mixed 130 
#define  xmlrpc_vector_none 129 
#define  xmlrpc_vector_struct 128 

const char* type_to_str(XMLRPC_VALUE_TYPE type, XMLRPC_VECTOR_TYPE vtype) {
    switch(type) {
       case xmlrpc_none:
          return "none";
       case xmlrpc_empty:
          return "empty";
       case xmlrpc_base64:
          return "base64";
       case xmlrpc_boolean:
          return "boolean";
       case xmlrpc_datetime:
          return "datetime";
       case xmlrpc_double:
          return "double";
       case xmlrpc_int:
          return "int";
       case xmlrpc_string:
          return "string";
       case xmlrpc_vector:
          switch(vtype) {
             case xmlrpc_vector_none:
                return "none";
             case xmlrpc_vector_array:
                return "array";
             case xmlrpc_vector_mixed:
                return "mixed vector (struct)";
             case xmlrpc_vector_struct:
                return "struct";
          }
    }
    return "unknown";
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
          int type = 100;
          int vtype = 100;
          const char * benchRet = type_to_str(type,vtype);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          int vtype = 255;
          const char * benchRet = type_to_str(type,vtype);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          int vtype = 10;
          const char * benchRet = type_to_str(type,vtype);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
