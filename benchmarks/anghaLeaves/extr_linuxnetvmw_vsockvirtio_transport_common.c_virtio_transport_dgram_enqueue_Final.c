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
struct vsock_sock {int dummy; } ;
struct sockaddr_vm {int dummy; } ;
struct msghdr {int dummy; } ;

/* Variables and functions */
 int EOPNOTSUPP ; 

int
virtio_transport_dgram_enqueue(struct vsock_sock *vsk,
			       struct sockaddr_vm *remote_addr,
			       struct msghdr *msg,
			       size_t dgram_len)
{
	return -EOPNOTSUPP;
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
          unsigned long dgram_len = 100;
        
          int _len_vsk0 = 1;
          struct vsock_sock * vsk = (struct vsock_sock *) malloc(_len_vsk0*sizeof(struct vsock_sock));
          for(int _i0 = 0; _i0 < _len_vsk0; _i0++) {
              vsk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_remote_addr0 = 1;
          struct sockaddr_vm * remote_addr = (struct sockaddr_vm *) malloc(_len_remote_addr0*sizeof(struct sockaddr_vm));
          for(int _i0 = 0; _i0 < _len_remote_addr0; _i0++) {
              remote_addr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_msg0 = 1;
          struct msghdr * msg = (struct msghdr *) malloc(_len_msg0*sizeof(struct msghdr));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
              msg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = virtio_transport_dgram_enqueue(vsk,remote_addr,msg,dgram_len);
          printf("%d\n", benchRet); 
          free(vsk);
          free(remote_addr);
          free(msg);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long dgram_len = 255;
        
          int _len_vsk0 = 65025;
          struct vsock_sock * vsk = (struct vsock_sock *) malloc(_len_vsk0*sizeof(struct vsock_sock));
          for(int _i0 = 0; _i0 < _len_vsk0; _i0++) {
              vsk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_remote_addr0 = 65025;
          struct sockaddr_vm * remote_addr = (struct sockaddr_vm *) malloc(_len_remote_addr0*sizeof(struct sockaddr_vm));
          for(int _i0 = 0; _i0 < _len_remote_addr0; _i0++) {
              remote_addr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_msg0 = 65025;
          struct msghdr * msg = (struct msghdr *) malloc(_len_msg0*sizeof(struct msghdr));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
              msg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = virtio_transport_dgram_enqueue(vsk,remote_addr,msg,dgram_len);
          printf("%d\n", benchRet); 
          free(vsk);
          free(remote_addr);
          free(msg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long dgram_len = 10;
        
          int _len_vsk0 = 100;
          struct vsock_sock * vsk = (struct vsock_sock *) malloc(_len_vsk0*sizeof(struct vsock_sock));
          for(int _i0 = 0; _i0 < _len_vsk0; _i0++) {
              vsk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_remote_addr0 = 100;
          struct sockaddr_vm * remote_addr = (struct sockaddr_vm *) malloc(_len_remote_addr0*sizeof(struct sockaddr_vm));
          for(int _i0 = 0; _i0 < _len_remote_addr0; _i0++) {
              remote_addr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_msg0 = 100;
          struct msghdr * msg = (struct msghdr *) malloc(_len_msg0*sizeof(struct msghdr));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
              msg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = virtio_transport_dgram_enqueue(vsk,remote_addr,msg,dgram_len);
          printf("%d\n", benchRet); 
          free(vsk);
          free(remote_addr);
          free(msg);
        
        break;
    }
    // empty
    case 3:
    {
          unsigned long dgram_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_vsk0 = 1;
          struct vsock_sock * vsk = (struct vsock_sock *) malloc(_len_vsk0*sizeof(struct vsock_sock));
          for(int _i0 = 0; _i0 < _len_vsk0; _i0++) {
              vsk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_remote_addr0 = 1;
          struct sockaddr_vm * remote_addr = (struct sockaddr_vm *) malloc(_len_remote_addr0*sizeof(struct sockaddr_vm));
          for(int _i0 = 0; _i0 < _len_remote_addr0; _i0++) {
              remote_addr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_msg0 = 1;
          struct msghdr * msg = (struct msghdr *) malloc(_len_msg0*sizeof(struct msghdr));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
              msg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = virtio_transport_dgram_enqueue(vsk,remote_addr,msg,dgram_len);
          printf("%d\n", benchRet); 
          free(vsk);
          free(remote_addr);
          free(msg);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
