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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct TYPE_2__ {scalar_t__ uobject; } ;
struct mthca_pd {TYPE_1__ ibpd; } ;

/* Variables and functions */
 int MTHCA_INLINE_HEADER_SIZE ; 

__attribute__((used)) static inline int mthca_max_inline_data(struct mthca_pd *pd, int max_data_size)
{
	/* We don't support inline data for kernel QPs (yet). */
	return pd->ibpd.uobject ? max_data_size - MTHCA_INLINE_HEADER_SIZE : 0;
}

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
          int max_data_size = 100;
        
          int _len_pd0 = 1;
          struct mthca_pd * pd = (struct mthca_pd *) malloc(_len_pd0*sizeof(struct mthca_pd));
          for(int _i0 = 0; _i0 < _len_pd0; _i0++) {
              pd[_i0].ibpd.uobject = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = mthca_max_inline_data(pd,max_data_size);
          printf("%d\n", benchRet); 
          free(pd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int max_data_size = 255;
        
          int _len_pd0 = 65025;
          struct mthca_pd * pd = (struct mthca_pd *) malloc(_len_pd0*sizeof(struct mthca_pd));
          for(int _i0 = 0; _i0 < _len_pd0; _i0++) {
              pd[_i0].ibpd.uobject = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = mthca_max_inline_data(pd,max_data_size);
          printf("%d\n", benchRet); 
          free(pd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int max_data_size = 10;
        
          int _len_pd0 = 100;
          struct mthca_pd * pd = (struct mthca_pd *) malloc(_len_pd0*sizeof(struct mthca_pd));
          for(int _i0 = 0; _i0 < _len_pd0; _i0++) {
              pd[_i0].ibpd.uobject = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = mthca_max_inline_data(pd,max_data_size);
          printf("%d\n", benchRet); 
          free(pd);
        
        break;
    }
    // empty
    case 3:
    {
          int max_data_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pd0 = 1;
          struct mthca_pd * pd = (struct mthca_pd *) malloc(_len_pd0*sizeof(struct mthca_pd));
          for(int _i0 = 0; _i0 < _len_pd0; _i0++) {
              pd[_i0].ibpd.uobject = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = mthca_max_inline_data(pd,max_data_size);
          printf("%d\n", benchRet); 
          free(pd);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
