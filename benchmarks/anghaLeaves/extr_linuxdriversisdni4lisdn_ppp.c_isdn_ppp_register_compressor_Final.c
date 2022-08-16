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
struct isdn_ppp_compressor {struct isdn_ppp_compressor* prev; struct isdn_ppp_compressor* next; } ;

/* Variables and functions */
 struct isdn_ppp_compressor* ipc_head ; 

int isdn_ppp_register_compressor(struct isdn_ppp_compressor *ipc)
{
	ipc->next = ipc_head;
	ipc->prev = NULL;
	if (ipc_head) {
		ipc_head->prev = ipc;
	}
	ipc_head = ipc;
	return 0;
}


// ------------------------------------------------------------------------- //

struct isdn_ppp_compressor *_allocate_ipc(int length, struct isdn_ppp_compressor *aux_ipc[]) {
  struct isdn_ppp_compressor *walker = (struct isdn_ppp_compressor *)malloc(sizeof(struct isdn_ppp_compressor));

  aux_ipc[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct isdn_ppp_compressor *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct isdn_ppp_compressor *)malloc(sizeof(struct isdn_ppp_compressor));
    walker = walker->prev;
    aux_ipc[i] = walker;
    walker->next = (struct isdn_ppp_compressor *)malloc(sizeof(struct isdn_ppp_compressor));
    walker = walker->next;
    aux_ipc[i] = walker;
    walker->prev = NULL;
    walker->next = NULL;
  }

  return head;
}

void _delete_ipc(struct isdn_ppp_compressor *aux_ipc[], int aux_ipc_size) {
  for(int i = 0; i < aux_ipc_size; i++) 
    if(aux_ipc[i])
      free(aux_ipc[i]);
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
          struct isdn_ppp_compressor * aux_ipc[1];
          struct isdn_ppp_compressor * ipc = _allocate_ipc(1, aux_ipc);
          int benchRet = isdn_ppp_register_compressor(ipc);
          printf("%d\n", benchRet); 
          _delete_ipc(aux_ipc, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
