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
typedef  int uint32_t ;
struct TYPE_5__ {TYPE_1__* item; } ;
typedef  TYPE_2__ kcdata_iter_t ;
struct TYPE_4__ {int type; } ;

/* Variables and functions */
 int KCDATA_TYPE_ARRAY ; 
 int KCDATA_TYPE_ARRAY_PAD0 ; 

__attribute__((used)) static inline uint32_t
kcdata_iter_type(kcdata_iter_t iter)
{
	if ((iter.item->type & ~0xfu) == KCDATA_TYPE_ARRAY_PAD0)
		return KCDATA_TYPE_ARRAY;
	else
		return iter.item->type;
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
          struct TYPE_5__ iter;
          int _len_iter_item0 = 1;
          iter.item = (struct TYPE_4__ *) malloc(_len_iter_item0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_iter_item0; _j0++) {
            iter.item->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kcdata_iter_type(iter);
          printf("%d\n", benchRet); 
          free(iter.item);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
