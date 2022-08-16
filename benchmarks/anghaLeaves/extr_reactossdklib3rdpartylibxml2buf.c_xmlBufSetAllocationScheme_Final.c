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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ xmlBufferAllocationScheme ;
typedef  TYPE_2__* xmlBufPtr ;
struct TYPE_5__ {scalar_t__ error; scalar_t__ alloc; int /*<<< orphan*/  content; int /*<<< orphan*/  contentIO; TYPE_1__* buffer; } ;
struct TYPE_4__ {scalar_t__ alloc; } ;

/* Variables and functions */
 scalar_t__ XML_BUFFER_ALLOC_BOUNDED ; 
 scalar_t__ XML_BUFFER_ALLOC_DOUBLEIT ; 
 scalar_t__ XML_BUFFER_ALLOC_EXACT ; 
 scalar_t__ XML_BUFFER_ALLOC_HYBRID ; 
 scalar_t__ XML_BUFFER_ALLOC_IMMUTABLE ; 
 scalar_t__ XML_BUFFER_ALLOC_IO ; 

int
xmlBufSetAllocationScheme(xmlBufPtr buf,
                          xmlBufferAllocationScheme scheme) {
    if ((buf == NULL) || (buf->error != 0)) {
#ifdef DEBUG_BUFFER
        xmlGenericError(xmlGenericErrorContext,
		"xmlBufSetAllocationScheme: buf == NULL or in error\n");
#endif
        return(-1);
    }
    if ((buf->alloc == XML_BUFFER_ALLOC_IMMUTABLE) ||
        (buf->alloc == XML_BUFFER_ALLOC_IO))
        return(-1);
    if ((scheme == XML_BUFFER_ALLOC_DOUBLEIT) ||
        (scheme == XML_BUFFER_ALLOC_EXACT) ||
        (scheme == XML_BUFFER_ALLOC_HYBRID) ||
        (scheme == XML_BUFFER_ALLOC_IMMUTABLE) ||
	(scheme == XML_BUFFER_ALLOC_BOUNDED)) {
	buf->alloc = scheme;
        if (buf->buffer)
            buf->buffer->alloc = scheme;
        return(0);
    }
    /*
     * Switching a buffer ALLOC_IO has the side effect of initializing
     * the contentIO field with the current content
     */
    if (scheme == XML_BUFFER_ALLOC_IO) {
        buf->alloc = XML_BUFFER_ALLOC_IO;
        buf->contentIO = buf->content;
    }
    return(-1);
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
          struct TYPE_5__ * buf = (struct TYPE_5__ *) malloc(_len_buf0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].error = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].alloc = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].content = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].contentIO = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_buf__i0__buffer0 = 1;
          buf[_i0].buffer = (struct TYPE_4__ *) malloc(_len_buf__i0__buffer0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_buf__i0__buffer0; _j0++) {
            buf[_i0].buffer->alloc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xmlBufSetAllocationScheme(buf,scheme);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].buffer);
          }
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
