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
typedef  int /*<<< orphan*/  IUnknown ;
typedef  int /*<<< orphan*/  HRESULT ;

/* Variables and functions */
 int /*<<< orphan*/  CLASS_E_NOAGGREGATION ; 
 int /*<<< orphan*/  S_OK ; 
 int /*<<< orphan*/  mime_allocator ; 

HRESULT MimeAllocator_create(IUnknown *outer, void **obj)
{
    if(outer) return CLASS_E_NOAGGREGATION;

    *obj = &mime_allocator;
    return S_OK;
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
          int _len_outer0 = 1;
          int * outer = (int *) malloc(_len_outer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_outer0; _i0++) {
            outer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_obj0 = 1;
          void ** obj = (void **) malloc(_len_obj0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
          }
          int benchRet = MimeAllocator_create(outer,obj);
          printf("%d\n", benchRet); 
          free(outer);
          for(int i1 = 0; i1 < _len_obj0; i1++) {
            int _len_obj1 = 1;
              }
          free(obj);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
