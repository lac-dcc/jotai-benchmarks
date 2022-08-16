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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uint8_t ;
struct TYPE_6__ {int width; int height; int row; int col; int /*<<< orphan*/ * data; int /*<<< orphan*/ * enc; } ;
struct TYPE_5__ {int cols; int rows; int block_width; int image_width; int block_height; int image_height; } ;
typedef  TYPE_1__ FlashSV2Context ;
typedef  TYPE_2__ Block ;

/* Variables and functions */

__attribute__((used)) static void init_blocks(FlashSV2Context * s, Block * blocks,
                        uint8_t * encbuf, uint8_t * databuf)
{
    int row, col;
    Block *b;
    for (col = 0; col < s->cols; col++) {
        for (row = 0; row < s->rows; row++) {
            b = blocks + (col + row * s->cols);
            b->width = (col < s->cols - 1) ?
                s->block_width :
                s->image_width - col * s->block_width;

            b->height = (row < s->rows - 1) ?
                s->block_height :
                s->image_height - row * s->block_height;

            b->row   = row;
            b->col   = col;
            b->enc   = encbuf;
            b->data  = databuf;
            encbuf  += b->width * b->height * 3;
            databuf += !databuf ? 0 : b->width * b->height * 6;
        }
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
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].cols = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].rows = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].block_width = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].image_width = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].block_height = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].image_height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_blocks0 = 1;
          struct TYPE_6__ * blocks = (struct TYPE_6__ *) malloc(_len_blocks0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_blocks0; _i0++) {
            blocks[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        blocks[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        blocks[_i0].row = ((-2 * (next_i()%2)) + 1) * next_i();
        blocks[_i0].col = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_blocks__i0__data0 = 1;
          blocks[_i0].data = (int *) malloc(_len_blocks__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_blocks__i0__data0; _j0++) {
            blocks[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_blocks__i0__enc0 = 1;
          blocks[_i0].enc = (int *) malloc(_len_blocks__i0__enc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_blocks__i0__enc0; _j0++) {
            blocks[_i0].enc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_encbuf0 = 1;
          int * encbuf = (int *) malloc(_len_encbuf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_encbuf0; _i0++) {
            encbuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_databuf0 = 1;
          int * databuf = (int *) malloc(_len_databuf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_databuf0; _i0++) {
            databuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_blocks(s,blocks,encbuf,databuf);
          free(s);
          for(int _aux = 0; _aux < _len_blocks0; _aux++) {
          free(blocks[_aux].data);
          }
          for(int _aux = 0; _aux < _len_blocks0; _aux++) {
          free(blocks[_aux].enc);
          }
          free(blocks);
          free(encbuf);
          free(databuf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
