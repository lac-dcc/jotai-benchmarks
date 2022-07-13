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
       0            int-bounds\n\
       1            dlinked\n\
       2            bintree\n\
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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* tail; } ;
typedef  TYPE_1__ IARTN_Q ;

/* Variables and functions */

__attribute__((used)) static IARTN_Q * ia_deque_rtn_q (IARTN_Q *que) {
   IARTN_Q *tmpdata;
   if (que->next == NULL)
      return NULL;
   tmpdata = que->next;
   if ( que->next == que->tail)  
      que->next = que->tail = NULL;
   else 
      que->next = que->next->next;
   return tmpdata;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_que(int length, struct TYPE_4__ *aux_que[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_que[0] = walker;
  walker->next = NULL;
  walker->tail = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next;
    aux_que[i] = walker;
    walker->tail = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->tail;
    aux_que[i] = walker;
    walker->next = NULL;
    walker->tail = NULL;
  }

  return head;
}

void _delete_que(struct TYPE_4__ *aux_que[], int aux_que_size) {
  for(int i = 0; i < aux_que_size; i++) 
    if(aux_que[i])
      free(aux_que[i]);
}

struct TYPE_4__ *_allocate_Dlinked_que(int length, struct TYPE_4__ *aux_dlinked_que[] ) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_dlinked_que[0] = walker;
  walker->next = NULL;
  walker->tail = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->tail = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker->tail->next = walker;
    walker = walker->tail;
    aux_dlinked_que[i] = walker;
    if (i == (length - 1)) 
      walker->tail = NULL;  }

  return head;
}

void _delete_Dlinked_que(struct TYPE_4__ *aux_dlinked_que[], int aux_dlinked_que_size) {
  for(int i = 0; i < aux_dlinked_que_size; i++) 
    if(aux_dlinked_que[i])
      free(aux_dlinked_que[i]);
}

struct TYPE_4__ *_allocateBinTree_que(int length, struct TYPE_4__ *aux_tree_que[], int *counter_que) {
  if(length == 0)
    return NULL;
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_tree_que[*counter_que] = walker;
  (*counter_que)++;
  walker->next = _allocateBinTree_que(length - 1, aux_tree_que, counter_que);
  walker->tail = _allocateBinTree_que(length - 1, aux_tree_que, counter_que);
  return walker;
}

void _deleteBinTree_que(struct TYPE_4__ *aux_tree_que[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_que[i])
      free(aux_tree_que[i]);
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
          struct TYPE_4__ * aux_que[1];
          struct TYPE_4__ * que = _allocate_que(1, aux_que);
          struct TYPE_4__ * benchRet = ia_deque_rtn_q(que);
          _delete_que(aux_que, 1);
        
        break;
    }
    // dlinked
    case 1:
    {
          struct TYPE_4__ * aux_dlinked_que[10000];
          struct TYPE_4__ * que = _allocate_Dlinked_que(10000, aux_dlinked_que);
          struct TYPE_4__ * benchRet = ia_deque_rtn_q(que);
          _delete_Dlinked_que(aux_dlinked_que, 10000);
        
        break;
    }
    // bintree
    case 2:
    {
          int counter_que= 0;
          struct TYPE_4__ *  aux_tree_que[1023];
          struct TYPE_4__ * que = _allocateBinTree_que(10, aux_tree_que, &counter_que);
          struct TYPE_4__ * benchRet = ia_deque_rtn_q(que);
          _deleteBinTree_que(aux_tree_que);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
