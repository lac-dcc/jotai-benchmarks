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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ off_t ;
struct TYPE_5__ {scalar_t__ pos; scalar_t__ fileoff; } ;
struct TYPE_6__ {int flags; scalar_t__ filepos; TYPE_1__ buffer; } ;
struct TYPE_7__ {TYPE_2__ rdat; } ;
typedef  TYPE_3__ mpg123_handle ;

/* Variables and functions */
 int READER_BUFFERED ; 

__attribute__((used)) static off_t generic_tell(mpg123_handle *fr)
{
#ifndef NO_FEEDER
	if(fr->rdat.flags & READER_BUFFERED)
	fr->rdat.filepos = fr->rdat.buffer.fileoff+fr->rdat.buffer.pos;
#endif

	return fr->rdat.filepos;
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
          int _len_fr0 = 1;
          struct TYPE_7__ * fr = (struct TYPE_7__ *) malloc(_len_fr0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_fr0; _i0++) {
            fr[_i0].rdat.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        fr[_i0].rdat.filepos = ((-2 * (next_i()%2)) + 1) * next_i();
        fr[_i0].rdat.buffer.pos = ((-2 * (next_i()%2)) + 1) * next_i();
        fr[_i0].rdat.buffer.fileoff = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = generic_tell(fr);
          printf("%ld\n", benchRet); 
          free(fr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
