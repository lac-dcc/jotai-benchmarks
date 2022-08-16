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
struct qtree_mem_dqinfo {int dqi_usable_bs; int dqi_entry_size; } ;
struct qt_disk_dqdbheader {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int qtree_dqstr_in_blk(struct qtree_mem_dqinfo *info)
{
	return (info->dqi_usable_bs - sizeof(struct qt_disk_dqdbheader))
	       / info->dqi_entry_size;
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
          int _len_info0 = 1;
          struct qtree_mem_dqinfo * info = (struct qtree_mem_dqinfo *) malloc(_len_info0*sizeof(struct qtree_mem_dqinfo));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].dqi_usable_bs = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].dqi_entry_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qtree_dqstr_in_blk(info);
          printf("%d\n", benchRet); 
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
