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
struct pcxhr_stream {scalar_t__ status; struct pcxhr_pipe* pipe; } ;
struct pcxhr_pipe {int dummy; } ;

/* Variables and functions */
 scalar_t__ PCXHR_STREAM_STATUS_SCHEDULE_RUN ; 

__attribute__((used)) static inline int pcxhr_stream_scheduled_get_pipe(struct pcxhr_stream *stream,
						  struct pcxhr_pipe **pipe)
{
	if (stream->status == PCXHR_STREAM_STATUS_SCHEDULE_RUN) {
		*pipe = stream->pipe;
		return 1;
	}
	return 0;
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
          struct pcxhr_stream * stream = (struct pcxhr_stream *) malloc(_len_stream0*sizeof(struct pcxhr_stream));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
            stream[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stream__i0__pipe0 = 1;
          stream[_i0].pipe = (struct pcxhr_pipe *) malloc(_len_stream__i0__pipe0*sizeof(struct pcxhr_pipe));
          for(int _j0 = 0; _j0 < _len_stream__i0__pipe0; _j0++) {
            stream[_i0].pipe->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pipe0 = 1;
          struct pcxhr_pipe ** pipe = (struct pcxhr_pipe **) malloc(_len_pipe0*sizeof(struct pcxhr_pipe *));
          for(int _i0 = 0; _i0 < _len_pipe0; _i0++) {
            int _len_pipe1 = 1;
            pipe[_i0] = (struct pcxhr_pipe *) malloc(_len_pipe1*sizeof(struct pcxhr_pipe));
            for(int _i1 = 0; _i1 < _len_pipe1; _i1++) {
              pipe[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = pcxhr_stream_scheduled_get_pipe(stream,pipe);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].pipe);
          }
          free(stream);
          for(int i1 = 0; i1 < _len_pipe0; i1++) {
            int _len_pipe1 = 1;
              free(pipe[i1]);
          }
          free(pipe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
