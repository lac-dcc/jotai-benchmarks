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
typedef  int u32 ;
struct vx_rmh {int* Cmd; } ;

/* Variables and functions */
 int COMMAND_RECORD_MASK ; 
 int FIELD_SIZE ; 
 int MASK_DSP_WORD ; 
 int MASK_FIRST_FIELD ; 

__attribute__((used)) static inline void vx_set_stream_cmd_params(struct vx_rmh *rmh, int is_capture, int pipe)
{
	if (is_capture)
		rmh->Cmd[0] |= COMMAND_RECORD_MASK;
	rmh->Cmd[0] |= (((u32)pipe & MASK_FIRST_FIELD) << FIELD_SIZE) & MASK_DSP_WORD;
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
          int is_capture = 100;
          int pipe = 100;
          int _len_rmh0 = 1;
          struct vx_rmh * rmh = (struct vx_rmh *) malloc(_len_rmh0*sizeof(struct vx_rmh));
          for(int _i0 = 0; _i0 < _len_rmh0; _i0++) {
              int _len_rmh__i0__Cmd0 = 1;
          rmh[_i0].Cmd = (int *) malloc(_len_rmh__i0__Cmd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rmh__i0__Cmd0; _j0++) {
            rmh[_i0].Cmd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vx_set_stream_cmd_params(rmh,is_capture,pipe);
          for(int _aux = 0; _aux < _len_rmh0; _aux++) {
          free(rmh[_aux].Cmd);
          }
          free(rmh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
