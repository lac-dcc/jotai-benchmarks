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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  scalar_t__ u64 ;
struct vsock_sock {struct virtio_vsock_sock* trans; } ;
struct virtio_vsock_sock {scalar_t__ buf_size; scalar_t__ buf_size_max; } ;

/* Variables and functions */
 scalar_t__ VIRTIO_VSOCK_MAX_BUF_SIZE ; 

void virtio_transport_set_max_buffer_size(struct vsock_sock *vsk, u64 val)
{
	struct virtio_vsock_sock *vvs = vsk->trans;

	if (val > VIRTIO_VSOCK_MAX_BUF_SIZE)
		val = VIRTIO_VSOCK_MAX_BUF_SIZE;
	if (val < vvs->buf_size)
		vvs->buf_size = val;
	vvs->buf_size_max = val;
}

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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          long val = 100;
        
          int _len_vsk0 = 1;
          struct vsock_sock * vsk = (struct vsock_sock *) malloc(_len_vsk0*sizeof(struct vsock_sock));
          for(int _i0 = 0; _i0 < _len_vsk0; _i0++) {
              int _len_vsk__i0__trans0 = 1;
          vsk[_i0].trans = (struct virtio_vsock_sock *) malloc(_len_vsk__i0__trans0*sizeof(struct virtio_vsock_sock));
          for(int _j0 = 0; _j0 < _len_vsk__i0__trans0; _j0++) {
              vsk[_i0].trans->buf_size = ((-2 * (next_i()%2)) + 1) * next_i();
          vsk[_i0].trans->buf_size_max = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          virtio_transport_set_max_buffer_size(vsk,val);
          for(int _aux = 0; _aux < _len_vsk0; _aux++) {
          free(vsk[_aux].trans);
          }
          free(vsk);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          long val = 255;
        
          int _len_vsk0 = 65025;
          struct vsock_sock * vsk = (struct vsock_sock *) malloc(_len_vsk0*sizeof(struct vsock_sock));
          for(int _i0 = 0; _i0 < _len_vsk0; _i0++) {
              int _len_vsk__i0__trans0 = 1;
          vsk[_i0].trans = (struct virtio_vsock_sock *) malloc(_len_vsk__i0__trans0*sizeof(struct virtio_vsock_sock));
          for(int _j0 = 0; _j0 < _len_vsk__i0__trans0; _j0++) {
              vsk[_i0].trans->buf_size = ((-2 * (next_i()%2)) + 1) * next_i();
          vsk[_i0].trans->buf_size_max = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          virtio_transport_set_max_buffer_size(vsk,val);
          for(int _aux = 0; _aux < _len_vsk0; _aux++) {
          free(vsk[_aux].trans);
          }
          free(vsk);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          long val = 10;
        
          int _len_vsk0 = 100;
          struct vsock_sock * vsk = (struct vsock_sock *) malloc(_len_vsk0*sizeof(struct vsock_sock));
          for(int _i0 = 0; _i0 < _len_vsk0; _i0++) {
              int _len_vsk__i0__trans0 = 1;
          vsk[_i0].trans = (struct virtio_vsock_sock *) malloc(_len_vsk__i0__trans0*sizeof(struct virtio_vsock_sock));
          for(int _j0 = 0; _j0 < _len_vsk__i0__trans0; _j0++) {
              vsk[_i0].trans->buf_size = ((-2 * (next_i()%2)) + 1) * next_i();
          vsk[_i0].trans->buf_size_max = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          virtio_transport_set_max_buffer_size(vsk,val);
          for(int _aux = 0; _aux < _len_vsk0; _aux++) {
          free(vsk[_aux].trans);
          }
          free(vsk);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          long val = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_vsk0 = 1;
          struct vsock_sock * vsk = (struct vsock_sock *) malloc(_len_vsk0*sizeof(struct vsock_sock));
          for(int _i0 = 0; _i0 < _len_vsk0; _i0++) {
              int _len_vsk__i0__trans0 = 1;
          vsk[_i0].trans = (struct virtio_vsock_sock *) malloc(_len_vsk__i0__trans0*sizeof(struct virtio_vsock_sock));
          for(int _j0 = 0; _j0 < _len_vsk__i0__trans0; _j0++) {
              vsk[_i0].trans->buf_size = ((-2 * (next_i()%2)) + 1) * next_i();
          vsk[_i0].trans->buf_size_max = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          virtio_transport_set_max_buffer_size(vsk,val);
          for(int _aux = 0; _aux < _len_vsk0; _aux++) {
          free(vsk[_aux].trans);
          }
          free(vsk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
