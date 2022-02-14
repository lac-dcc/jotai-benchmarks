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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct string_index {int data_offset; } ;
struct dllredirect_data {int dummy; } ;
struct TYPE_3__ {scalar_t__ dllredirect_section; } ;
typedef  int /*<<< orphan*/  BYTE ;
typedef  TYPE_1__ ACTIVATION_CONTEXT ;

/* Variables and functions */

__attribute__((used)) static inline struct dllredirect_data *get_dllredirect_data(ACTIVATION_CONTEXT *ctxt, struct string_index *index)
{
    return (struct dllredirect_data*)((BYTE*)ctxt->dllredirect_section + index->data_offset);
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
          int _len_ctxt0 = 1;
          struct TYPE_3__ * ctxt = (struct TYPE_3__ *) malloc(_len_ctxt0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctxt0; _i0++) {
            ctxt->dllredirect_section = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_index0 = 1;
          struct string_index * index = (struct string_index *) malloc(_len_index0*sizeof(struct string_index));
          for(int _i0 = 0; _i0 < _len_index0; _i0++) {
            index->data_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct dllredirect_data * benchRet = get_dllredirect_data(ctxt,index);
          printf("{{struct}} %p\n", &benchRet); 
          free(ctxt);
          free(index);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
