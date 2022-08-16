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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  http_request_t ;
typedef  int /*<<< orphan*/  data_stream_t ;
struct TYPE_2__ {int state; } ;
typedef  TYPE_1__ chunked_stream_t ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
#define  CHUNKED_STREAM_STATE_DISCARD_EOL_AT_END 130 
#define  CHUNKED_STREAM_STATE_END_OF_STREAM 129 
#define  CHUNKED_STREAM_STATE_ERROR 128 
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static BOOL chunked_end_of_data(data_stream_t *stream, http_request_t *req)
{
    chunked_stream_t *chunked_stream = (chunked_stream_t*)stream;
    switch(chunked_stream->state) {
    case CHUNKED_STREAM_STATE_DISCARD_EOL_AT_END:
    case CHUNKED_STREAM_STATE_END_OF_STREAM:
    case CHUNKED_STREAM_STATE_ERROR:
        return TRUE;
    default:
        return FALSE;
    }
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
          int _len_stream0 = 1;
          int * stream = (int *) malloc(_len_stream0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
            stream[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_req0 = 1;
          int * req = (int *) malloc(_len_req0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = chunked_end_of_data(stream,req);
          printf("%d\n", benchRet); 
          free(stream);
          free(req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
