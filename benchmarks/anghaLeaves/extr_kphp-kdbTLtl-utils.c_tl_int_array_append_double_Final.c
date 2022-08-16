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

/* Type definitions */
struct tl_int_array {int pos; int size; int /*<<< orphan*/ * buff; } ;

/* Variables and functions */

int tl_int_array_append_double (struct tl_int_array *a, double d) {
  if (a->pos >= a->size - 1) {
    return -1;
  }
  *((double *) (&a->buff[a->pos])) = d;
  a->pos += 2;
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
          double d = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_a0 = 1;
          struct tl_int_array * a = (struct tl_int_array *) malloc(_len_a0*sizeof(struct tl_int_array));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_a__i0__buff0 = 1;
          a[_i0].buff = (int *) malloc(_len_a__i0__buff0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_a__i0__buff0; _j0++) {
            a[_i0].buff[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = tl_int_array_append_double(a,d);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].buff);
          }
          free(a);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
