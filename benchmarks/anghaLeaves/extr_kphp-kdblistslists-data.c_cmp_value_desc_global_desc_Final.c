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
typedef  scalar_t__ value_t ;
struct heap_entry {scalar_t__ value; int global_id; } ;
typedef  int global_id_t ;

/* Variables and functions */

int cmp_value_desc_global_desc (struct heap_entry *p, value_t value, global_id_t global_id) {
  if (p->value > value) {
    return -1;
  } else if (p->value < value) {
    return 1;
  } else {
    return global_id - p->global_id;
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
          long value = 100;
          int global_id = 100;
          int _len_p0 = 1;
          struct heap_entry * p = (struct heap_entry *) malloc(_len_p0*sizeof(struct heap_entry));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].value = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].global_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cmp_value_desc_global_desc(p,value,global_id);
          printf("%d\n", benchRet); 
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
