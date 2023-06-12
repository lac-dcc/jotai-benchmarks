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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct resource {int flags; } ;

/* Variables and functions */
 int DPA_RESOURCE_ADJUSTED ; 

__attribute__((used)) static bool is_old_resource(struct resource *res, struct resource **list, int n)
{
	int i;

	if (res->flags & DPA_RESOURCE_ADJUSTED)
		return false;
	for (i = 0; i < n; i++)
		if (res == list[i])
			return true;
	return false;
}

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
          int n = 255;
        
          int _len_res0 = 65025;
          struct resource * res = (struct resource *) malloc(_len_res0*sizeof(struct resource));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
              res[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_list0 = 65025;
          struct resource ** list = (struct resource **) malloc(_len_list0*sizeof(struct resource *));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            int _len_list1 = 1;
            list[_i0] = (struct resource *) malloc(_len_list1*sizeof(struct resource));
            for(int _i1 = 0; _i1 < _len_list1; _i1++) {
                list[_i0][_i1].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int benchRet = is_old_resource(res,list,n);
          printf("%d\n", benchRet); 
          free(res);
          for(int i1 = 0; i1 < _len_list0; i1++) {
              free(list[i1]);
          }
          free(list);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int n = 10;
        
          int _len_res0 = 100;
          struct resource * res = (struct resource *) malloc(_len_res0*sizeof(struct resource));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
              res[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_list0 = 100;
          struct resource ** list = (struct resource **) malloc(_len_list0*sizeof(struct resource *));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            int _len_list1 = 1;
            list[_i0] = (struct resource *) malloc(_len_list1*sizeof(struct resource));
            for(int _i1 = 0; _i1 < _len_list1; _i1++) {
                list[_i0][_i1].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int benchRet = is_old_resource(res,list,n);
          printf("%d\n", benchRet); 
          free(res);
          for(int i1 = 0; i1 < _len_list0; i1++) {
              free(list[i1]);
          }
          free(list);
        
        break;
    }
    // empty
    case 2:
    {
          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_res0 = 1;
          struct resource * res = (struct resource *) malloc(_len_res0*sizeof(struct resource));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
              res[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_list0 = 1;
          struct resource ** list = (struct resource **) malloc(_len_list0*sizeof(struct resource *));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            int _len_list1 = 1;
            list[_i0] = (struct resource *) malloc(_len_list1*sizeof(struct resource));
            for(int _i1 = 0; _i1 < _len_list1; _i1++) {
                list[_i0][_i1].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int benchRet = is_old_resource(res,list,n);
          printf("%d\n", benchRet); 
          free(res);
          for(int i1 = 0; i1 < _len_list0; i1++) {
              free(list[i1]);
          }
          free(list);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
