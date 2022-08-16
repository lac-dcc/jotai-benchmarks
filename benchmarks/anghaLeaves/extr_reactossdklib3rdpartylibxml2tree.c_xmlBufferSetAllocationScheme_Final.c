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
       1            big-arr-10x\n\
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
typedef  TYPE_1__* xmlBufferPtr ;
typedef  scalar_t__ xmlBufferAllocationScheme ;
struct TYPE_3__ {scalar_t__ alloc; } ;

/* Variables and functions */
 scalar_t__ XML_BUFFER_ALLOC_DOUBLEIT ; 
 scalar_t__ XML_BUFFER_ALLOC_EXACT ; 
 scalar_t__ XML_BUFFER_ALLOC_HYBRID ; 
 scalar_t__ XML_BUFFER_ALLOC_IMMUTABLE ; 
 scalar_t__ XML_BUFFER_ALLOC_IO ; 

void
xmlBufferSetAllocationScheme(xmlBufferPtr buf,
                             xmlBufferAllocationScheme scheme) {
    if (buf == NULL) {
#ifdef DEBUG_BUFFER
        xmlGenericError(xmlGenericErrorContext,
		"xmlBufferSetAllocationScheme: buf == NULL\n");
#endif
        return;
    }
    if ((buf->alloc == XML_BUFFER_ALLOC_IMMUTABLE) ||
        (buf->alloc == XML_BUFFER_ALLOC_IO)) return;
    if ((scheme == XML_BUFFER_ALLOC_DOUBLEIT) ||
        (scheme == XML_BUFFER_ALLOC_EXACT) ||
        (scheme == XML_BUFFER_ALLOC_HYBRID) ||
        (scheme == XML_BUFFER_ALLOC_IMMUTABLE))
	buf->alloc = scheme;
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
          long scheme = 100;
          int _len_buf0 = 1;
          struct TYPE_3__ * buf = (struct TYPE_3__ *) malloc(_len_buf0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].alloc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xmlBufferSetAllocationScheme(buf,scheme);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long scheme = 10;
          int _len_buf0 = 100;
          struct TYPE_3__ * buf = (struct TYPE_3__ *) malloc(_len_buf0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].alloc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xmlBufferSetAllocationScheme(buf,scheme);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
