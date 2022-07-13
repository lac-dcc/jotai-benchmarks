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
typedef  size_t mrb_int ;
struct TYPE_3__ {char* base; size_t len; size_t pos; } ;
typedef  TYPE_1__ mrb_input_stream_t ;

/* Variables and functions */

__attribute__((used)) static mrb_int
seek_char(mrb_input_stream_t *stream, char chr){
  const char *base = stream->base;
  size_t len = stream->len;
  mrb_int pos = stream->pos;
  const char *end = base + len;
  const char *start = base + pos;
  const char *s = start;

  if (pos >= len) {
    return -1;
  }

  while (s < end) {
    if (*s == chr) {
      break;
    }
    s++;
  }
  return (s - start);
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
          char chr = 100;
          int _len_stream0 = 1;
          struct TYPE_3__ * stream = (struct TYPE_3__ *) malloc(_len_stream0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              int _len_stream__i0__base0 = 1;
          stream[_i0].base = (char *) malloc(_len_stream__i0__base0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_stream__i0__base0; _j0++) {
            stream[_i0].base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stream[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = seek_char(stream,chr);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].base);
          }
          free(stream);
        
        break;
    }
    // big-arr
    case 1:
    {
          char chr = 255;
          int _len_stream0 = 65025;
          struct TYPE_3__ * stream = (struct TYPE_3__ *) malloc(_len_stream0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              int _len_stream__i0__base0 = 1;
          stream[_i0].base = (char *) malloc(_len_stream__i0__base0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_stream__i0__base0; _j0++) {
            stream[_i0].base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stream[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = seek_char(stream,chr);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].base);
          }
          free(stream);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          char chr = 10;
          int _len_stream0 = 100;
          struct TYPE_3__ * stream = (struct TYPE_3__ *) malloc(_len_stream0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              int _len_stream__i0__base0 = 1;
          stream[_i0].base = (char *) malloc(_len_stream__i0__base0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_stream__i0__base0; _j0++) {
            stream[_i0].base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stream[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = seek_char(stream,chr);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].base);
          }
          free(stream);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
