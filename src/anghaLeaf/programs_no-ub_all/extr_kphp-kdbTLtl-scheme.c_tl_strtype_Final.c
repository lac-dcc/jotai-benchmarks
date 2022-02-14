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
struct tl_scheme_object {int type; } ;

/* Variables and functions */
#define  tlso_double 135 
#define  tlso_function 134 
#define  tlso_int 133 
#define  tlso_list 132 
#define  tlso_long 131 
#define  tlso_open_round_bracket 130 
#define  tlso_open_square_bracket 129 
#define  tlso_str 128 

const char *tl_strtype (struct tl_scheme_object *O) {
  switch (O->type) {
    case tlso_int: return "int";
    case tlso_long: return "long";
    case tlso_double: return "double";
    case tlso_str: return "str";
    case tlso_function: return "function";
    case tlso_list: return "list";
    case tlso_open_round_bracket: return "(";
    case tlso_open_square_bracket: return "[";
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

    // big-arr
    case 0:
    {
          int _len_O0 = 1;
          struct tl_scheme_object * O = (struct tl_scheme_object *) malloc(_len_O0*sizeof(struct tl_scheme_object));
          for(int _i0 = 0; _i0 < _len_O0; _i0++) {
            O->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = tl_strtype(O);
          printf("{{other_type}} %p\n", &benchRet); 
          free(O);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
