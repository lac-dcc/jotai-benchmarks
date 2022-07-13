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
       3            linked\n\
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
struct dm_cache_policy_type {size_t hint_size; } ;
struct dm_cache_policy {struct dm_cache_policy_type* private; } ;

/* Variables and functions */

size_t dm_cache_policy_get_hint_size(struct dm_cache_policy *p)
{
	struct dm_cache_policy_type *t = p->private;

	return t->hint_size;
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
          int _len_p0 = 1;
          struct dm_cache_policy * p = (struct dm_cache_policy *) malloc(_len_p0*sizeof(struct dm_cache_policy));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__private0 = 1;
          p[_i0].private = (struct dm_cache_policy_type *) malloc(_len_p__i0__private0*sizeof(struct dm_cache_policy_type));
          for(int _j0 = 0; _j0 < _len_p__i0__private0; _j0++) {
            p[_i0].private->hint_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = dm_cache_policy_get_hint_size(p);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].private);
          }
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p0 = 65025;
          struct dm_cache_policy * p = (struct dm_cache_policy *) malloc(_len_p0*sizeof(struct dm_cache_policy));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__private0 = 1;
          p[_i0].private = (struct dm_cache_policy_type *) malloc(_len_p__i0__private0*sizeof(struct dm_cache_policy_type));
          for(int _j0 = 0; _j0 < _len_p__i0__private0; _j0++) {
            p[_i0].private->hint_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = dm_cache_policy_get_hint_size(p);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].private);
          }
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p0 = 100;
          struct dm_cache_policy * p = (struct dm_cache_policy *) malloc(_len_p0*sizeof(struct dm_cache_policy));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__private0 = 1;
          p[_i0].private = (struct dm_cache_policy_type *) malloc(_len_p__i0__private0*sizeof(struct dm_cache_policy_type));
          for(int _j0 = 0; _j0 < _len_p__i0__private0; _j0++) {
            p[_i0].private->hint_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = dm_cache_policy_get_hint_size(p);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].private);
          }
          free(p);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_p0 = 1;
          struct dm_cache_policy * p = (struct dm_cache_policy *) malloc(_len_p0*sizeof(struct dm_cache_policy));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__private0 = 1;
          p[_i0].private = (struct dm_cache_policy_type *) malloc(_len_p__i0__private0*sizeof(struct dm_cache_policy_type));
          for(int _j0 = 0; _j0 < _len_p__i0__private0; _j0++) {
            p[_i0].private->hint_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = dm_cache_policy_get_hint_size(p);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].private);
          }
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
