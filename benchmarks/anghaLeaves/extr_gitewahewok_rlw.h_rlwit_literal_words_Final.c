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
struct TYPE_2__ {size_t literal_words; } ;
struct rlw_iterator {size_t pointer; TYPE_1__ rlw; } ;

/* Variables and functions */

__attribute__((used)) static inline size_t rlwit_literal_words(struct rlw_iterator *it)
{
	return it->pointer - it->rlw.literal_words;
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
          int _len_it0 = 1;
          struct rlw_iterator * it = (struct rlw_iterator *) malloc(_len_it0*sizeof(struct rlw_iterator));
          for(int _i0 = 0; _i0 < _len_it0; _i0++) {
            it[_i0].pointer = ((-2 * (next_i()%2)) + 1) * next_i();
        it[_i0].rlw.literal_words = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = rlwit_literal_words(it);
          printf("%lu\n", benchRet); 
          free(it);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
