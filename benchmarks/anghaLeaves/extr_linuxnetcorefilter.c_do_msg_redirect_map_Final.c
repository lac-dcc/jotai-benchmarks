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
struct sock {int dummy; } ;
struct sk_msg_buff {struct sock* sk_redir; } ;

/* Variables and functions */

struct sock *do_msg_redirect_map(struct sk_msg_buff *msg)
{
	return msg->sk_redir;
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
          int _len_msg0 = 1;
          struct sk_msg_buff * msg = (struct sk_msg_buff *) malloc(_len_msg0*sizeof(struct sk_msg_buff));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
              int _len_msg__i0__sk_redir0 = 1;
          msg[_i0].sk_redir = (struct sock *) malloc(_len_msg__i0__sk_redir0*sizeof(struct sock));
          for(int _j0 = 0; _j0 < _len_msg__i0__sk_redir0; _j0++) {
            msg[_i0].sk_redir->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct sock * benchRet = do_msg_redirect_map(msg);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_msg0; _aux++) {
          free(msg[_aux].sk_redir);
          }
          free(msg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
