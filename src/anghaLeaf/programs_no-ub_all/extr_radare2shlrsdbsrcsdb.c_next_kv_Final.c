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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int elem_size; } ;
struct TYPE_5__ {TYPE_1__ opt; } ;
typedef  int /*<<< orphan*/  SdbKv ;
typedef  TYPE_2__ HtPP ;

/* Variables and functions */

__attribute__((used)) static inline SdbKv *next_kv(HtPP *ht, SdbKv *kv) {
	return (SdbKv *)((char *)kv + ht->opt.elem_size);
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
          int _len_ht0 = 1;
          struct TYPE_5__ * ht = (struct TYPE_5__ *) malloc(_len_ht0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ht0; _i0++) {
            ht->opt.elem_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_kv0 = 65025;
          int * kv = (int *) malloc(_len_kv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_kv0; _i0++) {
            kv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = next_kv(ht,kv);
          printf("{{other_type}} %p\n", &benchRet); 
          free(ht);
          free(kv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
