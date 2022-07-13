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
struct TYPE_3__ {int curbit; int code_size; int lastbit; int get_done; unsigned char* buf; unsigned char* direct; int last_byte; unsigned char* gif_data; int buffer_position; int zero_data_block; scalar_t__ buffer_size; } ;
typedef  TYPE_1__ gif_animation ;

/* Variables and functions */
 int GIF_END_OF_FRAME ; 
 int GIF_INSUFFICIENT_FRAME_DATA ; 
 int* maskTbl ; 

__attribute__((used)) static int gif_next_code(gif_animation *gif, int code_size) {
    int i, j, end, count, ret;
    unsigned char *b;

    (void)code_size;

    end = gif->curbit + gif->code_size;
    if (end >= gif->lastbit) {
        if (gif->get_done)
            return GIF_END_OF_FRAME;
        gif->buf[0] = gif->direct[gif->last_byte - 2];
        gif->buf[1] = gif->direct[gif->last_byte - 1];

        /* get the next block */
        gif->direct = gif->gif_data + gif->buffer_position;
        gif->zero_data_block = ((count = gif->direct[0]) == 0);
        if ((gif->buffer_position + count) >= gif->buffer_size)
            return GIF_INSUFFICIENT_FRAME_DATA;
        if (count == 0)
            gif->get_done = true;
        else {
            gif->direct -= 1;
            gif->buf[2] = gif->direct[2];
            gif->buf[3] = gif->direct[3];
        }
        gif->buffer_position += count + 1;

        /* update our variables */
        gif->last_byte = 2 + count;
        gif->curbit = (gif->curbit - gif->lastbit) + 16;
        gif->lastbit = (2 + count) << 3;
        end = gif->curbit + gif->code_size;
    }

    i = gif->curbit >> 3;
    if (i < 2)
        b = gif->buf;
    else
        b = gif->direct;

    ret = b[i];
    j = (end >> 3) - 1;
    if (i <= j) {
        ret |= (b[i + 1] << 8);
        if (i < j)
            ret |= (b[i + 2] << 16);
    }
    ret = (ret >> (gif->curbit % 8)) & maskTbl[gif->code_size];
    gif->curbit += gif->code_size;
    return ret;
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
          int code_size = 100;
          int _len_gif0 = 1;
          struct TYPE_3__ * gif = (struct TYPE_3__ *) malloc(_len_gif0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_gif0; _i0++) {
            gif[_i0].curbit = ((-2 * (next_i()%2)) + 1) * next_i();
        gif[_i0].code_size = ((-2 * (next_i()%2)) + 1) * next_i();
        gif[_i0].lastbit = ((-2 * (next_i()%2)) + 1) * next_i();
        gif[_i0].get_done = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gif__i0__buf0 = 1;
          gif[_i0].buf = (unsigned char *) malloc(_len_gif__i0__buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_gif__i0__buf0; _j0++) {
            gif[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gif__i0__direct0 = 1;
          gif[_i0].direct = (unsigned char *) malloc(_len_gif__i0__direct0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_gif__i0__direct0; _j0++) {
            gif[_i0].direct[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gif[_i0].last_byte = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gif__i0__gif_data0 = 1;
          gif[_i0].gif_data = (unsigned char *) malloc(_len_gif__i0__gif_data0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_gif__i0__gif_data0; _j0++) {
            gif[_i0].gif_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gif[_i0].buffer_position = ((-2 * (next_i()%2)) + 1) * next_i();
        gif[_i0].zero_data_block = ((-2 * (next_i()%2)) + 1) * next_i();
        gif[_i0].buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gif_next_code(gif,code_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_gif0; _aux++) {
          free(gif[_aux].buf);
          }
          for(int _aux = 0; _aux < _len_gif0; _aux++) {
          free(gif[_aux].direct);
          }
          for(int _aux = 0; _aux < _len_gif0; _aux++) {
          free(gif[_aux].gif_data);
          }
          free(gif);
        
        break;
    }
    // big-arr
    case 1:
    {
          int code_size = 255;
          int _len_gif0 = 65025;
          struct TYPE_3__ * gif = (struct TYPE_3__ *) malloc(_len_gif0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_gif0; _i0++) {
            gif[_i0].curbit = ((-2 * (next_i()%2)) + 1) * next_i();
        gif[_i0].code_size = ((-2 * (next_i()%2)) + 1) * next_i();
        gif[_i0].lastbit = ((-2 * (next_i()%2)) + 1) * next_i();
        gif[_i0].get_done = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gif__i0__buf0 = 1;
          gif[_i0].buf = (unsigned char *) malloc(_len_gif__i0__buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_gif__i0__buf0; _j0++) {
            gif[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gif__i0__direct0 = 1;
          gif[_i0].direct = (unsigned char *) malloc(_len_gif__i0__direct0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_gif__i0__direct0; _j0++) {
            gif[_i0].direct[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gif[_i0].last_byte = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gif__i0__gif_data0 = 1;
          gif[_i0].gif_data = (unsigned char *) malloc(_len_gif__i0__gif_data0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_gif__i0__gif_data0; _j0++) {
            gif[_i0].gif_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gif[_i0].buffer_position = ((-2 * (next_i()%2)) + 1) * next_i();
        gif[_i0].zero_data_block = ((-2 * (next_i()%2)) + 1) * next_i();
        gif[_i0].buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gif_next_code(gif,code_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_gif0; _aux++) {
          free(gif[_aux].buf);
          }
          for(int _aux = 0; _aux < _len_gif0; _aux++) {
          free(gif[_aux].direct);
          }
          for(int _aux = 0; _aux < _len_gif0; _aux++) {
          free(gif[_aux].gif_data);
          }
          free(gif);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int code_size = 10;
          int _len_gif0 = 100;
          struct TYPE_3__ * gif = (struct TYPE_3__ *) malloc(_len_gif0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_gif0; _i0++) {
            gif[_i0].curbit = ((-2 * (next_i()%2)) + 1) * next_i();
        gif[_i0].code_size = ((-2 * (next_i()%2)) + 1) * next_i();
        gif[_i0].lastbit = ((-2 * (next_i()%2)) + 1) * next_i();
        gif[_i0].get_done = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gif__i0__buf0 = 1;
          gif[_i0].buf = (unsigned char *) malloc(_len_gif__i0__buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_gif__i0__buf0; _j0++) {
            gif[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gif__i0__direct0 = 1;
          gif[_i0].direct = (unsigned char *) malloc(_len_gif__i0__direct0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_gif__i0__direct0; _j0++) {
            gif[_i0].direct[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gif[_i0].last_byte = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gif__i0__gif_data0 = 1;
          gif[_i0].gif_data = (unsigned char *) malloc(_len_gif__i0__gif_data0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_gif__i0__gif_data0; _j0++) {
            gif[_i0].gif_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gif[_i0].buffer_position = ((-2 * (next_i()%2)) + 1) * next_i();
        gif[_i0].zero_data_block = ((-2 * (next_i()%2)) + 1) * next_i();
        gif[_i0].buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gif_next_code(gif,code_size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_gif0; _aux++) {
          free(gif[_aux].buf);
          }
          for(int _aux = 0; _aux < _len_gif0; _aux++) {
          free(gif[_aux].direct);
          }
          for(int _aux = 0; _aux < _len_gif0; _aux++) {
          free(gif[_aux].gif_data);
          }
          free(gif);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
