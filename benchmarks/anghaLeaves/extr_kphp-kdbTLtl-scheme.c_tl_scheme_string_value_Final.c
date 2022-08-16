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
struct TYPE_2__ {char* s; } ;
struct tl_scheme_object {int type; TYPE_1__ u; } ;

/* Variables and functions */
#define  tlso_str 128 

int tl_scheme_string_value (struct tl_scheme_object *O, char **value) {
  switch (O->type) {
    case tlso_str:
      *value = O->u.s;
       return 0;
    default:
    break;
  }
  return -1;
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
          int _len_O0 = 1;
          struct tl_scheme_object * O = (struct tl_scheme_object *) malloc(_len_O0*sizeof(struct tl_scheme_object));
          for(int _i0 = 0; _i0 < _len_O0; _i0++) {
            O[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_O__i0__u_s0 = 1;
          O[_i0].u.s = (char *) malloc(_len_O__i0__u_s0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_O__i0__u_s0; _j0++) {
            O[_i0].u.s[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_value0 = 1;
          char ** value = (char **) malloc(_len_value0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            int _len_value1 = 1;
            value[_i0] = (char *) malloc(_len_value1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_value1; _i1++) {
              value[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = tl_scheme_string_value(O,value);
          printf("%d\n", benchRet); 
          free(O);
          for(int i1 = 0; i1 < _len_value0; i1++) {
            int _len_value1 = 1;
              free(value[i1]);
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
