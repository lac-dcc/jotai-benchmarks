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
struct ocfs2_control_private {int op_state; } ;
struct file {struct ocfs2_control_private* private_data; } ;

/* Variables and functions */

__attribute__((used)) static inline void ocfs2_control_set_handshake_state(struct file *file,
						     int state)
{
	struct ocfs2_control_private *p = file->private_data;
	p->op_state = state;
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
          int state = 100;
          int _len_file0 = 1;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              int _len_file__i0__private_data0 = 1;
          file[_i0].private_data = (struct ocfs2_control_private *) malloc(_len_file__i0__private_data0*sizeof(struct ocfs2_control_private));
          for(int _j0 = 0; _j0 < _len_file__i0__private_data0; _j0++) {
            file[_i0].private_data->op_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ocfs2_control_set_handshake_state(file,state);
          for(int _aux = 0; _aux < _len_file0; _aux++) {
          free(file[_aux].private_data);
          }
          free(file);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
