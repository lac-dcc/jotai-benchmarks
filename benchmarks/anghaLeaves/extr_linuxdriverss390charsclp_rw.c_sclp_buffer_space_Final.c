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
struct sclp_buffer {scalar_t__ current_length; int /*<<< orphan*/ * current_line; struct sccb_header* sccb; } ;
struct sccb_header {int length; } ;
struct msg_buf {int dummy; } ;

/* Variables and functions */
 int MAX_SCCB_ROOM ; 

int
sclp_buffer_space(struct sclp_buffer *buffer)
{
	struct sccb_header *sccb;
	int count;

	sccb = buffer->sccb;
	count = MAX_SCCB_ROOM - sccb->length;
	if (buffer->current_line != NULL)
		count -= sizeof(struct msg_buf) + buffer->current_length;
	return count;
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
          int _len_buffer0 = 1;
          struct sclp_buffer * buffer = (struct sclp_buffer *) malloc(_len_buffer0*sizeof(struct sclp_buffer));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0].current_length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_buffer__i0__current_line0 = 1;
          buffer[_i0].current_line = (int *) malloc(_len_buffer__i0__current_line0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_buffer__i0__current_line0; _j0++) {
            buffer[_i0].current_line[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffer__i0__sccb0 = 1;
          buffer[_i0].sccb = (struct sccb_header *) malloc(_len_buffer__i0__sccb0*sizeof(struct sccb_header));
          for(int _j0 = 0; _j0 < _len_buffer__i0__sccb0; _j0++) {
            buffer[_i0].sccb->length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sclp_buffer_space(buffer);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_buffer0; _aux++) {
          free(buffer[_aux].current_line);
          }
          for(int _aux = 0; _aux < _len_buffer0; _aux++) {
          free(buffer[_aux].sccb);
          }
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
