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
struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* prev; } ;
typedef  TYPE_1__ node_t ;

/* Variables and functions */

__attribute__((used)) static void swaplist(node_t *node1, node_t *node2) {
	node_t *par1;

	par1 = node1->next;
	node1->next = node2->next;
	node2->next = par1;

	par1 = node1->prev;
	node1->prev = node2->prev;
	node2->prev = par1;

	if (node1->next == node1) {
		node1->next = node2;
	}
	if (node2->next == node2) {
		node2->next = node1;
	}
	if (node1->next) {
		node1->next->prev = node1;
	}
	if (node2->next) {
		node2->next->prev = node2;
	}
	if (node1->prev) {
		node1->prev->next = node1;
	}
	if (node2->prev) {
		node2->prev->next = node2;
	}
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_node1(int length, struct TYPE_4__ *aux_node1[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_node1[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next;
    aux_node1[i] = walker;
    walker->prev = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->prev;
    aux_node1[i] = walker;
    walker->next = NULL;
    walker->prev = NULL;
  }

  return head;
}

void _delete_node1(struct TYPE_4__ *aux_node1[], int aux_node1_size) {
  for(int i = 0; i < aux_node1_size; i++) 
    if(aux_node1[i])
      free(aux_node1[i]);
}

struct TYPE_4__ *_allocate_node2(int length, struct TYPE_4__ *aux_node2[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_node2[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next;
    aux_node2[i] = walker;
    walker->prev = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->prev;
    aux_node2[i] = walker;
    walker->next = NULL;
    walker->prev = NULL;
  }

  return head;
}

void _delete_node2(struct TYPE_4__ *aux_node2[], int aux_node2_size) {
  for(int i = 0; i < aux_node2_size; i++) 
    if(aux_node2[i])
      free(aux_node2[i]);
}

struct TYPE_4__ *_allocate_Dlinked_node1(int length, struct TYPE_4__ *aux_dlinked_node1[] ) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_dlinked_node1[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker->prev->next = walker;
    walker = walker->prev;
    aux_dlinked_node1[i] = walker;
    if (i == (length - 1)) 
      walker->prev = NULL;  }

  return head;
}

void _delete_Dlinked_node1(struct TYPE_4__ *aux_dlinked_node1[], int aux_dlinked_node1_size) {
  for(int i = 0; i < aux_dlinked_node1_size; i++) 
    if(aux_dlinked_node1[i])
      free(aux_dlinked_node1[i]);
}

struct TYPE_4__ *_allocate_Dlinked_node2(int length, struct TYPE_4__ *aux_dlinked_node2[] ) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_dlinked_node2[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker->prev->next = walker;
    walker = walker->prev;
    aux_dlinked_node2[i] = walker;
    if (i == (length - 1)) 
      walker->prev = NULL;  }

  return head;
}

void _delete_Dlinked_node2(struct TYPE_4__ *aux_dlinked_node2[], int aux_dlinked_node2_size) {
  for(int i = 0; i < aux_dlinked_node2_size; i++) 
    if(aux_dlinked_node2[i])
      free(aux_dlinked_node2[i]);
}

struct TYPE_4__ *_allocateBinTree_node1(int length, struct TYPE_4__ *aux_tree_node1[], int *counter_node1) {
  if(length == 0)
    return NULL;
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_tree_node1[*counter_node1] = walker;
  (*counter_node1)++;
  walker->next = _allocateBinTree_node1(length - 1, aux_tree_node1, counter_node1);
  walker->prev = _allocateBinTree_node1(length - 1, aux_tree_node1, counter_node1);
  return walker;
}

void _deleteBinTree_node1(struct TYPE_4__ *aux_tree_node1[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_node1[i])
      free(aux_tree_node1[i]);
}

struct TYPE_4__ *_allocateBinTree_node2(int length, struct TYPE_4__ *aux_tree_node2[], int *counter_node2) {
  if(length == 0)
    return NULL;
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_tree_node2[*counter_node2] = walker;
  (*counter_node2)++;
  walker->next = _allocateBinTree_node2(length - 1, aux_tree_node2, counter_node2);
  walker->prev = _allocateBinTree_node2(length - 1, aux_tree_node2, counter_node2);
  return walker;
}

void _deleteBinTree_node2(struct TYPE_4__ *aux_tree_node2[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_node2[i])
      free(aux_tree_node2[i]);
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
          struct TYPE_4__ * aux_node1[1];
          struct TYPE_4__ * node1 = _allocate_node1(1, aux_node1);
          struct TYPE_4__ * aux_node2[1];
          struct TYPE_4__ * node2 = _allocate_node2(1, aux_node2);
          swaplist(node1,node2);
          _delete_node1(aux_node1, 1);
          _delete_node2(aux_node2, 1);
        
        break;
    }
    // dlinked
    case 1:
    {
          struct TYPE_4__ * aux_dlinked_node1[10000];
          struct TYPE_4__ * node1 = _allocate_Dlinked_node1(10000, aux_dlinked_node1);
          struct TYPE_4__ * aux_dlinked_node2[10000];
          struct TYPE_4__ * node2 = _allocate_Dlinked_node2(10000, aux_dlinked_node2);
          swaplist(node1,node2);
          _delete_Dlinked_node1(aux_dlinked_node1, 10000);
          _delete_Dlinked_node2(aux_dlinked_node2, 10000);
        
        break;
    }
    // bintree
    case 2:
    {
          int counter_node1= 0;
          struct TYPE_4__ *  aux_tree_node1[1023];
          struct TYPE_4__ * node1 = _allocateBinTree_node1(10, aux_tree_node1, &counter_node1);
          int counter_node2= 0;
          struct TYPE_4__ *  aux_tree_node2[1023];
          struct TYPE_4__ * node2 = _allocateBinTree_node2(10, aux_tree_node2, &counter_node2);
          swaplist(node1,node2);
          _deleteBinTree_node1(aux_tree_node1);
          _deleteBinTree_node2(aux_tree_node2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
