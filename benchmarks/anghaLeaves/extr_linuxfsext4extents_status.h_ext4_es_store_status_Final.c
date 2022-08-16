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
       1            big-arr-10x\n\
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
struct extent_status {int es_pblk; } ;
typedef  int ext4_fsblk_t ;

/* Variables and functions */
 int ES_MASK ; 
 int ES_SHIFT ; 

__attribute__((used)) static inline void ext4_es_store_status(struct extent_status *es,
					unsigned int status)
{
	es->es_pblk = (((ext4_fsblk_t)status << ES_SHIFT) & ES_MASK) |
		      (es->es_pblk & ~ES_MASK);
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
          unsigned int status = 100;
          int _len_es0 = 1;
          struct extent_status * es = (struct extent_status *) malloc(_len_es0*sizeof(struct extent_status));
          for(int _i0 = 0; _i0 < _len_es0; _i0++) {
            es[_i0].es_pblk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ext4_es_store_status(es,status);
          free(es);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int status = 10;
          int _len_es0 = 100;
          struct extent_status * es = (struct extent_status *) malloc(_len_es0*sizeof(struct extent_status));
          for(int _i0 = 0; _i0 < _len_es0; _i0++) {
            es[_i0].es_pblk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ext4_es_store_status(es,status);
          free(es);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
