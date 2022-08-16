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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  off_t ;
struct TYPE_3__ {int /*<<< orphan*/  position; int /*<<< orphan*/  is_open; } ;
typedef  TYPE_1__ CdioDataSource_t ;

/* Variables and functions */
 int /*<<< orphan*/  DRIVER_OP_UNINIT ; 

off_t
cdio_stream_getpos(CdioDataSource_t* p_obj, /*out*/ off_t *i_offset)
{
  if (!p_obj || !p_obj->is_open) return DRIVER_OP_UNINIT;
  return *i_offset = p_obj->position;
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
          int _len_p_obj0 = 1;
          struct TYPE_3__ * p_obj = (struct TYPE_3__ *) malloc(_len_p_obj0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p_obj0; _i0++) {
            p_obj[_i0].position = ((-2 * (next_i()%2)) + 1) * next_i();
        p_obj[_i0].is_open = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_i_offset0 = 1;
          int * i_offset = (int *) malloc(_len_i_offset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_i_offset0; _i0++) {
            i_offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cdio_stream_getpos(p_obj,i_offset);
          printf("%d\n", benchRet); 
          free(p_obj);
          free(i_offset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
