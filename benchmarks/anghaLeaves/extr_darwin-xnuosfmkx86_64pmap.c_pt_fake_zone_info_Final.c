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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int vm_size_t ;
typedef  int uint64_t ;

/* Variables and functions */
 int PAGE_SIZE ; 
 int alloc_ptepages_count ; 
 int inuse_ptepages_count ; 
 int vm_page_active_count ; 
 int vm_page_free_count ; 
 int vm_page_inactive_count ; 

void
pt_fake_zone_info(
	int		*count,
	vm_size_t	*cur_size,
	vm_size_t	*max_size,
	vm_size_t	*elem_size,
	vm_size_t	*alloc_size,
	uint64_t	*sum_size,
	int		*collectable,
	int		*exhaustable,
	int		*caller_acct)
{
        *count      = inuse_ptepages_count;
	*cur_size   = PAGE_SIZE * inuse_ptepages_count;
	*max_size   = PAGE_SIZE * (inuse_ptepages_count +
				   vm_page_inactive_count +
				   vm_page_active_count +
				   vm_page_free_count);
	*elem_size  = PAGE_SIZE;
	*alloc_size = PAGE_SIZE;
	*sum_size = alloc_ptepages_count * PAGE_SIZE;

	*collectable = 1;
	*exhaustable = 0;
	*caller_acct = 1;
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
          int _len_count0 = 1;
          int * count = (int *) malloc(_len_count0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cur_size0 = 1;
          int * cur_size = (int *) malloc(_len_cur_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cur_size0; _i0++) {
            cur_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max_size0 = 1;
          int * max_size = (int *) malloc(_len_max_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_max_size0; _i0++) {
            max_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_elem_size0 = 1;
          int * elem_size = (int *) malloc(_len_elem_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_elem_size0; _i0++) {
            elem_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_alloc_size0 = 1;
          int * alloc_size = (int *) malloc(_len_alloc_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_alloc_size0; _i0++) {
            alloc_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sum_size0 = 1;
          int * sum_size = (int *) malloc(_len_sum_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sum_size0; _i0++) {
            sum_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_collectable0 = 1;
          int * collectable = (int *) malloc(_len_collectable0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_collectable0; _i0++) {
            collectable[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_exhaustable0 = 1;
          int * exhaustable = (int *) malloc(_len_exhaustable0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_exhaustable0; _i0++) {
            exhaustable[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_caller_acct0 = 1;
          int * caller_acct = (int *) malloc(_len_caller_acct0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_caller_acct0; _i0++) {
            caller_acct[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pt_fake_zone_info(count,cur_size,max_size,elem_size,alloc_size,sum_size,collectable,exhaustable,caller_acct);
          free(count);
          free(cur_size);
          free(max_size);
          free(elem_size);
          free(alloc_size);
          free(sum_size);
          free(collectable);
          free(exhaustable);
          free(caller_acct);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_count0 = 65025;
          int * count = (int *) malloc(_len_count0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cur_size0 = 65025;
          int * cur_size = (int *) malloc(_len_cur_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cur_size0; _i0++) {
            cur_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max_size0 = 65025;
          int * max_size = (int *) malloc(_len_max_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_max_size0; _i0++) {
            max_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_elem_size0 = 65025;
          int * elem_size = (int *) malloc(_len_elem_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_elem_size0; _i0++) {
            elem_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_alloc_size0 = 65025;
          int * alloc_size = (int *) malloc(_len_alloc_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_alloc_size0; _i0++) {
            alloc_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sum_size0 = 65025;
          int * sum_size = (int *) malloc(_len_sum_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sum_size0; _i0++) {
            sum_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_collectable0 = 65025;
          int * collectable = (int *) malloc(_len_collectable0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_collectable0; _i0++) {
            collectable[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_exhaustable0 = 65025;
          int * exhaustable = (int *) malloc(_len_exhaustable0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_exhaustable0; _i0++) {
            exhaustable[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_caller_acct0 = 65025;
          int * caller_acct = (int *) malloc(_len_caller_acct0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_caller_acct0; _i0++) {
            caller_acct[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pt_fake_zone_info(count,cur_size,max_size,elem_size,alloc_size,sum_size,collectable,exhaustable,caller_acct);
          free(count);
          free(cur_size);
          free(max_size);
          free(elem_size);
          free(alloc_size);
          free(sum_size);
          free(collectable);
          free(exhaustable);
          free(caller_acct);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_count0 = 100;
          int * count = (int *) malloc(_len_count0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cur_size0 = 100;
          int * cur_size = (int *) malloc(_len_cur_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cur_size0; _i0++) {
            cur_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max_size0 = 100;
          int * max_size = (int *) malloc(_len_max_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_max_size0; _i0++) {
            max_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_elem_size0 = 100;
          int * elem_size = (int *) malloc(_len_elem_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_elem_size0; _i0++) {
            elem_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_alloc_size0 = 100;
          int * alloc_size = (int *) malloc(_len_alloc_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_alloc_size0; _i0++) {
            alloc_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sum_size0 = 100;
          int * sum_size = (int *) malloc(_len_sum_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sum_size0; _i0++) {
            sum_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_collectable0 = 100;
          int * collectable = (int *) malloc(_len_collectable0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_collectable0; _i0++) {
            collectable[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_exhaustable0 = 100;
          int * exhaustable = (int *) malloc(_len_exhaustable0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_exhaustable0; _i0++) {
            exhaustable[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_caller_acct0 = 100;
          int * caller_acct = (int *) malloc(_len_caller_acct0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_caller_acct0; _i0++) {
            caller_acct[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pt_fake_zone_info(count,cur_size,max_size,elem_size,alloc_size,sum_size,collectable,exhaustable,caller_acct);
          free(count);
          free(cur_size);
          free(max_size);
          free(elem_size);
          free(alloc_size);
          free(sum_size);
          free(collectable);
          free(exhaustable);
          free(caller_acct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
