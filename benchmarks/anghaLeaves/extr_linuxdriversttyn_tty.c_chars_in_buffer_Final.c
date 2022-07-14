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

/* Type definitions */
struct tty_struct {struct n_tty_data* disc_data; } ;
struct n_tty_data {scalar_t__ read_tail; scalar_t__ canon_head; scalar_t__ commit_head; int /*<<< orphan*/  icanon; } ;
typedef  scalar_t__ ssize_t ;

/* Variables and functions */

__attribute__((used)) static ssize_t chars_in_buffer(struct tty_struct *tty)
{
	struct n_tty_data *ldata = tty->disc_data;
	ssize_t n = 0;

	if (!ldata->icanon)
		n = ldata->commit_head - ldata->read_tail;
	else
		n = ldata->canon_head - ldata->read_tail;
	return n;
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
          int _len_tty0 = 1;
          struct tty_struct * tty = (struct tty_struct *) malloc(_len_tty0*sizeof(struct tty_struct));
          for(int _i0 = 0; _i0 < _len_tty0; _i0++) {
              int _len_tty__i0__disc_data0 = 1;
          tty[_i0].disc_data = (struct n_tty_data *) malloc(_len_tty__i0__disc_data0*sizeof(struct n_tty_data));
          for(int _j0 = 0; _j0 < _len_tty__i0__disc_data0; _j0++) {
            tty[_i0].disc_data->read_tail = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].disc_data->canon_head = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].disc_data->commit_head = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].disc_data->icanon = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = chars_in_buffer(tty);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_tty0; _aux++) {
          free(tty[_aux].disc_data);
          }
          free(tty);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tty0 = 65025;
          struct tty_struct * tty = (struct tty_struct *) malloc(_len_tty0*sizeof(struct tty_struct));
          for(int _i0 = 0; _i0 < _len_tty0; _i0++) {
              int _len_tty__i0__disc_data0 = 1;
          tty[_i0].disc_data = (struct n_tty_data *) malloc(_len_tty__i0__disc_data0*sizeof(struct n_tty_data));
          for(int _j0 = 0; _j0 < _len_tty__i0__disc_data0; _j0++) {
            tty[_i0].disc_data->read_tail = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].disc_data->canon_head = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].disc_data->commit_head = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].disc_data->icanon = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = chars_in_buffer(tty);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_tty0; _aux++) {
          free(tty[_aux].disc_data);
          }
          free(tty);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tty0 = 100;
          struct tty_struct * tty = (struct tty_struct *) malloc(_len_tty0*sizeof(struct tty_struct));
          for(int _i0 = 0; _i0 < _len_tty0; _i0++) {
              int _len_tty__i0__disc_data0 = 1;
          tty[_i0].disc_data = (struct n_tty_data *) malloc(_len_tty__i0__disc_data0*sizeof(struct n_tty_data));
          for(int _j0 = 0; _j0 < _len_tty__i0__disc_data0; _j0++) {
            tty[_i0].disc_data->read_tail = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].disc_data->canon_head = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].disc_data->commit_head = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].disc_data->icanon = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = chars_in_buffer(tty);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_tty0; _aux++) {
          free(tty[_aux].disc_data);
          }
          free(tty);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}