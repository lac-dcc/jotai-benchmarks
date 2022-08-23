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
struct TYPE_4__ {size_t bufend; size_t bufbeg; char* buf; } ;
typedef  TYPE_1__ mime_encoder_state ;
struct TYPE_5__ {TYPE_1__ encstate; } ;
typedef  TYPE_2__ curl_mimepart ;

/* Variables and functions */
 size_t READ_ERROR ; 

__attribute__((used)) static size_t encoder_7bit_read(char *buffer, size_t size, bool ateof,
                                curl_mimepart *part)
{
  mime_encoder_state *st = &part->encstate;
  size_t cursize = st->bufend - st->bufbeg;

  (void) ateof;

  if(size > cursize)
    size = cursize;

  for(cursize = 0; cursize < size; cursize++) {
    *buffer = st->buf[st->bufbeg];
    if(*buffer++ & 0x80)
      return cursize? cursize: READ_ERROR;
    st->bufbeg++;
  }

  return cursize;
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
          unsigned long size = 100;
          int ateof = 100;
          int _len_buffer0 = 1;
          char * buffer = (char *) malloc(_len_buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_part0 = 1;
          struct TYPE_5__ * part = (struct TYPE_5__ *) malloc(_len_part0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_part0; _i0++) {
            part[_i0].encstate.bufend = ((-2 * (next_i()%2)) + 1) * next_i();
        part[_i0].encstate.bufbeg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_part__i0__encstate_buf0 = 1;
          part[_i0].encstate.buf = (char *) malloc(_len_part__i0__encstate_buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_part__i0__encstate_buf0; _j0++) {
            part[_i0].encstate.buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = encoder_7bit_read(buffer,size,ateof,part);
          printf("%lu\n", benchRet); 
          free(buffer);
          free(part);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}