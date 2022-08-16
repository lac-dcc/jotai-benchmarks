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
struct ecryptfs_msg_ctx {int dummy; } ;
struct ecryptfs_message {int dummy; } ;

/* Variables and functions */
 int ENOMSG ; 

__attribute__((used)) static inline int ecryptfs_wait_for_response(struct ecryptfs_msg_ctx *msg_ctx,
					     struct ecryptfs_message **emsg)
{
	return -ENOMSG;
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
          int _len_msg_ctx0 = 1;
          struct ecryptfs_msg_ctx * msg_ctx = (struct ecryptfs_msg_ctx *) malloc(_len_msg_ctx0*sizeof(struct ecryptfs_msg_ctx));
          for(int _i0 = 0; _i0 < _len_msg_ctx0; _i0++) {
            msg_ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_emsg0 = 1;
          struct ecryptfs_message ** emsg = (struct ecryptfs_message **) malloc(_len_emsg0*sizeof(struct ecryptfs_message *));
          for(int _i0 = 0; _i0 < _len_emsg0; _i0++) {
            int _len_emsg1 = 1;
            emsg[_i0] = (struct ecryptfs_message *) malloc(_len_emsg1*sizeof(struct ecryptfs_message));
            for(int _i1 = 0; _i1 < _len_emsg1; _i1++) {
              emsg[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = ecryptfs_wait_for_response(msg_ctx,emsg);
          printf("%d\n", benchRet); 
          free(msg_ctx);
          for(int i1 = 0; i1 < _len_emsg0; i1++) {
            int _len_emsg1 = 1;
              free(emsg[i1]);
          }
          free(emsg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
