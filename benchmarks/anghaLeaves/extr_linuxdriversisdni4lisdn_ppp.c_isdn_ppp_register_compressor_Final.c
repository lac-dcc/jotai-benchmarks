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
       0            dlinked\n\
       1            bintree\n\
       2            empty\n\
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

struct isdn_ppp_compressor *_allocate_Dlinked_ipc(int length, struct isdn_ppp_compressor *aux_dlinked_ipc[] ) {
  struct isdn_ppp_compressor *walker = (struct isdn_ppp_compressor *)malloc(sizeof(struct isdn_ppp_compressor));

  aux_dlinked_ipc[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct isdn_ppp_compressor *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct isdn_ppp_compressor *)malloc(sizeof(struct isdn_ppp_compressor));
    walker->next->prev = walker;
    walker = walker->next;
    aux_dlinked_ipc[i] = walker;
    if (i == (length - 1)) 
      walker->next = NULL;  }

  return head;
}

void _delete_Dlinked_ipc(struct isdn_ppp_compressor *aux_dlinked_ipc[], int aux_dlinked_ipc_size) {
  for(int i = 0; i < aux_dlinked_ipc_size; i++) 
    if(aux_dlinked_ipc[i])
      free(aux_dlinked_ipc[i]);
}

struct isdn_ppp_compressor *_allocateBinTree_ipc(int length, struct isdn_ppp_compressor *aux_tree_ipc[], int *counter_ipc) {
  if(length == 0)
    return NULL;
  struct isdn_ppp_compressor *walker = (struct isdn_ppp_compressor *)malloc(sizeof(struct isdn_ppp_compressor));

  aux_tree_ipc[*counter_ipc] = walker;
  (*counter_ipc)++;
  walker->prev = _allocateBinTree_ipc(length - 1, aux_tree_ipc, counter_ipc);
  walker->next = _allocateBinTree_ipc(length - 1, aux_tree_ipc, counter_ipc);
  return walker;
}

void _deleteBinTree_ipc(struct isdn_ppp_compressor *aux_tree_ipc[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_ipc[i])
      free(aux_tree_ipc[i]);
}

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


    // dlinked
    case 0:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          struct isdn_ppp_compressor * aux_dlinked_ipc[10000];
          struct isdn_ppp_compressor * ipc = _allocate_Dlinked_ipc(10000, aux_dlinked_ipc);
        
          int benchRet = isdn_ppp_register_compressor(ipc);
          printf("%d\n", benchRet); 
          _delete_Dlinked_ipc(aux_dlinked_ipc, 10000);
        
        break;
    }


    // bintree
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int counter_ipc= 0;
          struct isdn_ppp_compressor *  aux_tree_ipc[1023];
          struct isdn_ppp_compressor * ipc = _allocateBinTree_ipc(10, aux_tree_ipc, &counter_ipc);
        
          int benchRet = isdn_ppp_register_compressor(ipc);
          printf("%d\n", benchRet); 
          _deleteBinTree_ipc(aux_tree_ipc);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

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
