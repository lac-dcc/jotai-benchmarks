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
struct TYPE_3__ {int rows; int cols; int mines; } ;
typedef  TYPE_1__ BOARD ;

/* Variables and functions */
 int BEGINNER_COLS ; 
 int BEGINNER_MINES ; 
 int BEGINNER_ROWS ; 
 int MAX_COLS ; 
 int MAX_ROWS ; 

void CheckLevel( BOARD *p_board )
{
    if( p_board->rows < BEGINNER_ROWS )
        p_board->rows = BEGINNER_ROWS;

    if( p_board->rows > MAX_ROWS )
        p_board->rows = MAX_ROWS;

    if( p_board->cols < BEGINNER_COLS )
        p_board->cols = BEGINNER_COLS;

    if( p_board->cols > MAX_COLS )
        p_board->cols = MAX_COLS;

    if( p_board->mines < BEGINNER_MINES )
        p_board->mines = BEGINNER_MINES;

    if( p_board->mines > ( p_board->cols - 1 ) * ( p_board->rows - 1 ) )
        p_board->mines = ( p_board->cols - 1 ) * ( p_board->rows - 1 );
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
          int _len_p_board0 = 1;
          struct TYPE_3__ * p_board = (struct TYPE_3__ *) malloc(_len_p_board0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p_board0; _i0++) {
            p_board[_i0].rows = ((-2 * (next_i()%2)) + 1) * next_i();
        p_board[_i0].cols = ((-2 * (next_i()%2)) + 1) * next_i();
        p_board[_i0].mines = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CheckLevel(p_board);
          free(p_board);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
