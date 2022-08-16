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
struct sd {int dummy; } ;
struct buffer {scalar_t__ pos; int length; char* string; } ;

/* Variables and functions */

__attribute__((used)) static inline int append(struct sd *sd, struct buffer *buf, char c)
{
    if (buf->pos >= 0 && buf->pos < buf->length) {
        buf->string[buf->pos++] = c;
    } else {
        // ensure that terminating \0 is always written
        if (c == '\0')
            buf->string[buf->length - 1] = c;
    }
    return c;
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
          char c = 100;
          int _len_sd0 = 1;
          struct sd * sd = (struct sd *) malloc(_len_sd0*sizeof(struct sd));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
            sd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          struct buffer * buf = (struct buffer *) malloc(_len_buf0*sizeof(struct buffer));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_buf__i0__string0 = 1;
          buf[_i0].string = (char *) malloc(_len_buf__i0__string0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_buf__i0__string0; _j0++) {
            buf[_i0].string[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = append(sd,buf,c);
          printf("%d\n", benchRet); 
          free(sd);
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].string);
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
