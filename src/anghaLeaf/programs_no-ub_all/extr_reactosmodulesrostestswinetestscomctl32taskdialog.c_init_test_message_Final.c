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
       0            big-arr\n\
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
struct message {int flags; scalar_t__ stage; int /*<<< orphan*/  id; int /*<<< orphan*/  lParam; int /*<<< orphan*/  wParam; int /*<<< orphan*/  message; } ;
typedef  int /*<<< orphan*/  WPARAM ;
typedef  int /*<<< orphan*/  UINT ;
typedef  int /*<<< orphan*/  LPARAM ;

/* Variables and functions */
 int /*<<< orphan*/  WM_TD_CALLBACK ; 
 int id ; 
 int lparam ; 
 int sent ; 
 int wparam ; 

__attribute__((used)) static void init_test_message(UINT message, WPARAM wParam, LPARAM lParam, struct message *msg)
{
    msg->message = WM_TD_CALLBACK;
    msg->flags = sent|wparam|lparam|id;
    msg->wParam = wParam;
    msg->lParam = lParam;
    msg->id = message;
    msg->stage = 0;
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

    // big-arr
    case 0:
    {
          int message = 255;
          int wParam = 255;
          int lParam = 255;
          int _len_msg0 = 1;
          struct message * msg = (struct message *) malloc(_len_msg0*sizeof(struct message));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        msg->stage = ((-2 * (next_i()%2)) + 1) * next_i();
        msg->id = ((-2 * (next_i()%2)) + 1) * next_i();
        msg->lParam = ((-2 * (next_i()%2)) + 1) * next_i();
        msg->wParam = ((-2 * (next_i()%2)) + 1) * next_i();
        msg->message = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_test_message(message,wParam,lParam,msg);
          free(msg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
