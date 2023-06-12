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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* tail; } ;
typedef  TYPE_1__ IARTN_Q ;

/* Variables and functions */

__attribute__((used)) static void ia_enque_head_rtn_q (IARTN_Q *que, IARTN_Q * data) 
{
   data->next = NULL;
   if (que->next == NULL) 
      que->next = que->tail = data;
   else {
      data->next = que->next;
      que->next = data;
   } 
   return;
}

// ------------------------------------------------------------------------- //

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

struct TYPE_4__ *_allocate_Dlinked_data(int length, struct TYPE_4__ *aux_dlinked_data[] ) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_dlinked_data[0] = walker;
  walker->next = NULL;
  walker->tail = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->tail = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker->tail->next = walker;
    walker = walker->tail;
    aux_dlinked_data[i] = walker;
    if (i == (length - 1)) 
      walker->tail = NULL;  }

  return head;
}

void _delete_Dlinked_data(struct TYPE_4__ *aux_dlinked_data[], int aux_dlinked_data_size) {
  for(int i = 0; i < aux_dlinked_data_size; i++) 
    if(aux_dlinked_data[i])
      free(aux_dlinked_data[i]);
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

struct TYPE_4__ *_allocateBinTree_data(int length, struct TYPE_4__ *aux_tree_data[], int *counter_data) {
  if(length == 0)
    return NULL;
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_tree_data[*counter_data] = walker;
  (*counter_data)++;
  walker->next = _allocateBinTree_data(length - 1, aux_tree_data, counter_data);
  walker->tail = _allocateBinTree_data(length - 1, aux_tree_data, counter_data);
  return walker;
}

void _deleteBinTree_data(struct TYPE_4__ *aux_tree_data[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_data[i])
      free(aux_tree_data[i]);
}

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

struct TYPE_4__ *_allocate_data(int length, struct TYPE_4__ *aux_data[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_data[0] = walker;
  walker->next = NULL;
  walker->tail = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next;
    aux_data[i] = walker;
    walker->tail = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->tail;
    aux_data[i] = walker;
    walker->next = NULL;
    walker->tail = NULL;
  }

  return head;
}

void _delete_data(struct TYPE_4__ *aux_data[], int aux_data_size) {
  for(int i = 0; i < aux_data_size; i++) 
    if(aux_data[i])
      free(aux_data[i]);
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
          struct TYPE_4__ * aux_dlinked_que[10000];
          struct TYPE_4__ * que = _allocate_Dlinked_que(10000, aux_dlinked_que);
        
          struct TYPE_4__ * aux_dlinked_data[10000];
          struct TYPE_4__ * data = _allocate_Dlinked_data(10000, aux_dlinked_data);
        
          ia_enque_head_rtn_q(que,data);
          _delete_Dlinked_que(aux_dlinked_que, 10000);
          _delete_Dlinked_data(aux_dlinked_data, 10000);
        
        break;
    }
    // bintree
    case 1:
    {
          int counter_que= 0;
          struct TYPE_4__ *  aux_tree_que[1023];
          struct TYPE_4__ * que = _allocateBinTree_que(10, aux_tree_que, &counter_que);
        
          int counter_data= 0;
          struct TYPE_4__ *  aux_tree_data[1023];
          struct TYPE_4__ * data = _allocateBinTree_data(10, aux_tree_data, &counter_data);
        
          ia_enque_head_rtn_q(que,data);
          _deleteBinTree_que(aux_tree_que);
          _deleteBinTree_data(aux_tree_data);
        
        break;
    }
    // empty
    case 2:
    {
          struct TYPE_4__ * aux_que[1];
          struct TYPE_4__ * que = _allocate_que(1, aux_que);
        
          struct TYPE_4__ * aux_data[1];
          struct TYPE_4__ * data = _allocate_data(1, aux_data);
        
          ia_enque_head_rtn_q(que,data);
          _delete_que(aux_que, 1);
          _delete_data(aux_data, 1);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
