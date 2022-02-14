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
       0            big-arr\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ type; } ;
struct binder_buffer_object {TYPE_1__ hdr; } ;
struct binder_buffer {scalar_t__ data; } ;
typedef  scalar_t__ binder_size_t ;

/* Variables and functions */
 scalar_t__ BINDER_TYPE_PTR ; 

__attribute__((used)) static struct binder_buffer_object *binder_validate_ptr(struct binder_buffer *b,
							binder_size_t index,
							binder_size_t *start,
							binder_size_t num_valid)
{
	struct binder_buffer_object *buffer_obj;
	binder_size_t *offp;

	if (index >= num_valid)
		return NULL;

	offp = start + index;
	buffer_obj = (struct binder_buffer_object *)(b->data + *offp);
	if (buffer_obj->hdr.type != BINDER_TYPE_PTR)
		return NULL;

	return buffer_obj;
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

    // big-arr
    case 0:
    {
          long index = 255;
          long num_valid = 255;
          int _len_b0 = 1;
          struct binder_buffer * b = (struct binder_buffer *) malloc(_len_b0*sizeof(struct binder_buffer));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_start0 = 65025;
          long * start = (long *) malloc(_len_start0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_start0; _i0++) {
            start[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct binder_buffer_object * benchRet = binder_validate_ptr(b,index,start,num_valid);
          printf("{{struct}} %p\n", &benchRet); 
          free(b);
          free(start);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
