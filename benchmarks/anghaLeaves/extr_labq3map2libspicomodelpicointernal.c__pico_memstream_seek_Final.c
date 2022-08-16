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
struct TYPE_3__ {int curPos; int buffer; int bufSize; } ;
typedef  TYPE_1__ picoMemStream_t ;

/* Variables and functions */
 int PICO_SEEK_CUR ; 
 int PICO_SEEK_END ; 
 int PICO_SEEK_SET ; 

int _pico_memstream_seek( picoMemStream_t *s, long offset, int origin ){
	int overflow;

	/* sanity check */
	if ( s == NULL ) {
		return -1;
	}

	if ( origin == PICO_SEEK_SET ) {
		s->curPos = s->buffer + offset;
		overflow = s->curPos - ( s->buffer + s->bufSize );
		if ( overflow > 0 ) {
			s->curPos = s->buffer + s->bufSize;
			return offset - overflow;
		}
		return 0;
	}
	else if ( origin == PICO_SEEK_CUR ) {
		s->curPos += offset;
		overflow = s->curPos - ( s->buffer + s->bufSize );
		if ( overflow > 0 ) {
			s->curPos = s->buffer + s->bufSize;
			return offset - overflow;
		}
		return 0;
	}
	else if ( origin == PICO_SEEK_END ) {
		s->curPos = ( s->buffer + s->bufSize ) - offset;
		overflow = s->buffer - s->curPos;
		if ( overflow > 0 ) {
			s->curPos = s->buffer;
			return offset - overflow;
		}
		return 0;
	}

	return -1;
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
          long offset = 100;
          int origin = 100;
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].curPos = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].bufSize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _pico_memstream_seek(s,offset,origin);
          printf("%d\n", benchRet); 
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
