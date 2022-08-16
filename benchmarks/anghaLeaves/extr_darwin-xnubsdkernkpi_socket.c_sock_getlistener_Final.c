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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* socket_t ;
struct TYPE_4__ {struct TYPE_4__* so_head; } ;

/* Variables and functions */

socket_t
sock_getlistener(socket_t sock)
{
	return (sock->so_head);
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_sock(int length, struct TYPE_4__ *aux_sock[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_sock[0] = walker;
  walker->so_head = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->so_head = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->so_head;
    aux_sock[i] = walker;
    walker->so_head = NULL;
  }

  return head;
}

void _delete_sock(struct TYPE_4__ *aux_sock[], int aux_sock_size) {
  for(int i = 0; i < aux_sock_size; i++) 
    if(aux_sock[i])
      free(aux_sock[i]);
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
          struct TYPE_4__ * aux_sock[1];
          struct TYPE_4__ * sock = _allocate_sock(1, aux_sock);
          struct TYPE_4__ * benchRet = sock_getlistener(sock);
          _delete_sock(aux_sock, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
