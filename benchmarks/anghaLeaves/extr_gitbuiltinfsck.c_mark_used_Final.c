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

/* Type definitions */
struct object {int /*<<< orphan*/  flags; } ;
struct fsck_options {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  USED ; 

__attribute__((used)) static int mark_used(struct object *obj, int type, void *data, struct fsck_options *options)
{
	if (!obj)
		return 1;
	obj->flags |= USED;
	return 0;
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
          int type = 100;
        
          int _len_obj0 = 1;
          struct object * obj = (struct object *) malloc(_len_obj0*sizeof(struct object));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
              obj[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * data;
        
          int _len_options0 = 1;
          struct fsck_options * options = (struct fsck_options *) malloc(_len_options0*sizeof(struct fsck_options));
          for(int _i0 = 0; _i0 < _len_options0; _i0++) {
              options[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mark_used(obj,type,data,options);
          printf("%d\n", benchRet); 
          free(obj);
          free(options);
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
        
          int _len_obj0 = 65025;
          struct object * obj = (struct object *) malloc(_len_obj0*sizeof(struct object));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
              obj[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * data;
        
          int _len_options0 = 65025;
          struct fsck_options * options = (struct fsck_options *) malloc(_len_options0*sizeof(struct fsck_options));
          for(int _i0 = 0; _i0 < _len_options0; _i0++) {
              options[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mark_used(obj,type,data,options);
          printf("%d\n", benchRet); 
          free(obj);
          free(options);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
        
          int _len_obj0 = 100;
          struct object * obj = (struct object *) malloc(_len_obj0*sizeof(struct object));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
              obj[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * data;
        
          int _len_options0 = 100;
          struct fsck_options * options = (struct fsck_options *) malloc(_len_options0*sizeof(struct fsck_options));
          for(int _i0 = 0; _i0 < _len_options0; _i0++) {
              options[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mark_used(obj,type,data,options);
          printf("%d\n", benchRet); 
          free(obj);
          free(options);
        
        break;
    }
    // empty
    case 3:
    {
          int type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_obj0 = 1;
          struct object * obj = (struct object *) malloc(_len_obj0*sizeof(struct object));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
              obj[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * data;
        
          int _len_options0 = 1;
          struct fsck_options * options = (struct fsck_options *) malloc(_len_options0*sizeof(struct fsck_options));
          for(int _i0 = 0; _i0 < _len_options0; _i0++) {
              options[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mark_used(obj,type,data,options);
          printf("%d\n", benchRet); 
          free(obj);
          free(options);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
