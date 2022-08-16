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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  XMLRPC_VALUE_TYPE_EASY ;
typedef  TYPE_2__* XMLRPC_VALUE ;
struct TYPE_5__ {int type; TYPE_1__* v; } ;
struct TYPE_4__ {int /*<<< orphan*/  type; } ;

/* Variables and functions */
 int /*<<< orphan*/  xmlrpc_none ; 
 int /*<<< orphan*/  xmlrpc_type_array ; 
 int /*<<< orphan*/  xmlrpc_type_mixed ; 
 int /*<<< orphan*/  xmlrpc_type_none ; 
 int /*<<< orphan*/  xmlrpc_type_struct ; 
#define  xmlrpc_vector 132 
#define  xmlrpc_vector_array 131 
#define  xmlrpc_vector_mixed 130 
#define  xmlrpc_vector_none 129 
#define  xmlrpc_vector_struct 128 

XMLRPC_VALUE_TYPE_EASY XMLRPC_GetValueTypeEasy (XMLRPC_VALUE value) {
	if (value) {
		switch (value->type) {
		case xmlrpc_vector:
			switch (value->v->type) {
			case xmlrpc_vector_none:
				return xmlrpc_type_none;
			case xmlrpc_vector_struct:
				return xmlrpc_type_struct;
			case xmlrpc_vector_mixed:
				return xmlrpc_type_mixed;
			case xmlrpc_vector_array:
				return xmlrpc_type_array;
			}
		default:
			/* evil cast, but we know they are the same */
			return(XMLRPC_VALUE_TYPE_EASY) value->type;
		}
	}
	return xmlrpc_none;
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
          int _len_value0 = 1;
          struct TYPE_5__ * value = (struct TYPE_5__ *) malloc(_len_value0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_value__i0__v0 = 1;
          value[_i0].v = (struct TYPE_4__ *) malloc(_len_value__i0__v0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_value__i0__v0; _j0++) {
            value[_i0].v->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = XMLRPC_GetValueTypeEasy(value);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_value0; _aux++) {
          free(value[_aux].v);
          }
          free(value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
