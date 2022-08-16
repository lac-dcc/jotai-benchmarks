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
struct TYPE_5__ {TYPE_1__* chunk_item; } ;
typedef  TYPE_2__ chunk ;
typedef  int UINT64 ;
struct TYPE_4__ {int type; } ;

/* Variables and functions */
 int BLOCK_FLAG_DUPLICATE ; 
 int BLOCK_FLAG_RAID0 ; 
 int BLOCK_FLAG_RAID1 ; 
 int BLOCK_FLAG_RAID10 ; 
 int BLOCK_FLAG_RAID5 ; 
 int BLOCK_FLAG_RAID6 ; 
 int BLOCK_FLAG_SINGLE ; 

__attribute__((used)) static __inline UINT64 get_chunk_dup_type(chunk* c) {
    if (c->chunk_item->type & BLOCK_FLAG_RAID0)
        return BLOCK_FLAG_RAID0;
    else if (c->chunk_item->type & BLOCK_FLAG_RAID1)
        return BLOCK_FLAG_RAID1;
    else if (c->chunk_item->type & BLOCK_FLAG_DUPLICATE)
        return BLOCK_FLAG_DUPLICATE;
    else if (c->chunk_item->type & BLOCK_FLAG_RAID10)
        return BLOCK_FLAG_RAID10;
    else if (c->chunk_item->type & BLOCK_FLAG_RAID5)
        return BLOCK_FLAG_RAID5;
    else if (c->chunk_item->type & BLOCK_FLAG_RAID6)
        return BLOCK_FLAG_RAID6;
    else
        return BLOCK_FLAG_SINGLE;
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
          int _len_c0 = 1;
          struct TYPE_5__ * c = (struct TYPE_5__ *) malloc(_len_c0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__chunk_item0 = 1;
          c[_i0].chunk_item = (struct TYPE_4__ *) malloc(_len_c__i0__chunk_item0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_c__i0__chunk_item0; _j0++) {
            c[_i0].chunk_item->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_chunk_dup_type(c);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].chunk_item);
          }
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
