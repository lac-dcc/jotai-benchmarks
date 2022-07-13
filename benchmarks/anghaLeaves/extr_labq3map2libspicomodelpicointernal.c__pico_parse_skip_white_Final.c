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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct TYPE_3__ {int* cursor; int* buffer; int* max; int /*<<< orphan*/  curLine; } ;
typedef  TYPE_1__ picoParser_t ;

/* Variables and functions */

void _pico_parse_skip_white( picoParser_t *p, int *hasLFs ){
	/* sanity checks */
	if ( p == NULL || p->cursor == NULL ) {
		return;
	}

	/* skin white spaces */
	while ( 1 )
	{
		/* sanity checks */
		if ( p->cursor <  p->buffer ||
			 p->cursor >= p->max ) {
			return;
		}
		/* break for chars other than white spaces */
		if ( *p->cursor >  0x20 ) {
			break;
		}
		if ( *p->cursor == 0x00 ) {
			return;
		}

		/* a bit of linefeed handling */
		if ( *p->cursor == '\n' ) {
			*hasLFs = 1;
			p->curLine++;
		}
		/* go to next character */
		p->cursor++;
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
          int _len_p0 = 1;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__cursor0 = 1;
          p[_i0].cursor = (int *) malloc(_len_p__i0__cursor0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__cursor0; _j0++) {
            p[_i0].cursor[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__buffer0 = 1;
          p[_i0].buffer = (int *) malloc(_len_p__i0__buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__buffer0; _j0++) {
            p[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__max0 = 1;
          p[_i0].max = (int *) malloc(_len_p__i0__max0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__max0; _j0++) {
            p[_i0].max[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].curLine = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hasLFs0 = 1;
          int * hasLFs = (int *) malloc(_len_hasLFs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hasLFs0; _i0++) {
            hasLFs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _pico_parse_skip_white(p,hasLFs);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].cursor);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].buffer);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].max);
          }
          free(p);
          free(hasLFs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p0 = 65025;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__cursor0 = 1;
          p[_i0].cursor = (int *) malloc(_len_p__i0__cursor0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__cursor0; _j0++) {
            p[_i0].cursor[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__buffer0 = 1;
          p[_i0].buffer = (int *) malloc(_len_p__i0__buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__buffer0; _j0++) {
            p[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__max0 = 1;
          p[_i0].max = (int *) malloc(_len_p__i0__max0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__max0; _j0++) {
            p[_i0].max[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].curLine = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hasLFs0 = 65025;
          int * hasLFs = (int *) malloc(_len_hasLFs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hasLFs0; _i0++) {
            hasLFs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _pico_parse_skip_white(p,hasLFs);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].cursor);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].buffer);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].max);
          }
          free(p);
          free(hasLFs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p0 = 100;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__cursor0 = 1;
          p[_i0].cursor = (int *) malloc(_len_p__i0__cursor0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__cursor0; _j0++) {
            p[_i0].cursor[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__buffer0 = 1;
          p[_i0].buffer = (int *) malloc(_len_p__i0__buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__buffer0; _j0++) {
            p[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__max0 = 1;
          p[_i0].max = (int *) malloc(_len_p__i0__max0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__max0; _j0++) {
            p[_i0].max[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].curLine = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hasLFs0 = 100;
          int * hasLFs = (int *) malloc(_len_hasLFs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hasLFs0; _i0++) {
            hasLFs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _pico_parse_skip_white(p,hasLFs);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].cursor);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].buffer);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].max);
          }
          free(p);
          free(hasLFs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
