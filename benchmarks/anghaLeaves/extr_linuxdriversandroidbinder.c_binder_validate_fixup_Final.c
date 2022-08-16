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
struct binder_buffer_object {int flags; scalar_t__ parent_offset; int parent; } ;
struct binder_buffer {scalar_t__ data; } ;
typedef  scalar_t__ binder_size_t ;

/* Variables and functions */
 int BINDER_BUFFER_FLAG_HAS_PARENT ; 

__attribute__((used)) static bool binder_validate_fixup(struct binder_buffer *b,
				  binder_size_t *objects_start,
				  struct binder_buffer_object *buffer,
				  binder_size_t fixup_offset,
				  struct binder_buffer_object *last_obj,
				  binder_size_t last_min_offset)
{
	if (!last_obj) {
		/* Nothing to fix up in */
		return false;
	}

	while (last_obj != buffer) {
		/*
		 * Safe to retrieve the parent of last_obj, since it
		 * was already previously verified by the driver.
		 */
		if ((last_obj->flags & BINDER_BUFFER_FLAG_HAS_PARENT) == 0)
			return false;
		last_min_offset = last_obj->parent_offset + sizeof(uintptr_t);
		last_obj = (struct binder_buffer_object *)
			(b->data + *(objects_start + last_obj->parent));
	}
	return (fixup_offset >= last_min_offset);
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
          long fixup_offset = 100;
          long last_min_offset = 100;
          int _len_b0 = 1;
          struct binder_buffer * b = (struct binder_buffer *) malloc(_len_b0*sizeof(struct binder_buffer));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_objects_start0 = 1;
          long * objects_start = (long *) malloc(_len_objects_start0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_objects_start0; _i0++) {
            objects_start[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffer0 = 1;
          struct binder_buffer_object * buffer = (struct binder_buffer_object *) malloc(_len_buffer0*sizeof(struct binder_buffer_object));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        buffer[_i0].parent_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        buffer[_i0].parent = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_last_obj0 = 1;
          struct binder_buffer_object * last_obj = (struct binder_buffer_object *) malloc(_len_last_obj0*sizeof(struct binder_buffer_object));
          for(int _i0 = 0; _i0 < _len_last_obj0; _i0++) {
            last_obj[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        last_obj[_i0].parent_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        last_obj[_i0].parent = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = binder_validate_fixup(b,objects_start,buffer,fixup_offset,last_obj,last_min_offset);
          printf("%d\n", benchRet); 
          free(b);
          free(objects_start);
          free(buffer);
          free(last_obj);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
