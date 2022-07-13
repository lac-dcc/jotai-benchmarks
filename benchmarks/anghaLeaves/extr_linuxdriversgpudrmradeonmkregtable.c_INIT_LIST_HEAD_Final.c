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

/* Type definitions */
struct list_head {struct list_head* prev; struct list_head* next; } ;

/* Variables and functions */

__attribute__((used)) static inline void INIT_LIST_HEAD(struct list_head *list)
{
	list->next = list;
	list->prev = list;
}


// ------------------------------------------------------------------------- //

struct list_head *_allocate_list(int length, struct list_head *aux_list[]) {
  struct list_head *walker = (struct list_head *)malloc(sizeof(struct list_head));

  aux_list[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct list_head *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct list_head *)malloc(sizeof(struct list_head));
    walker = walker->prev;
    aux_list[i] = walker;
    walker->next = (struct list_head *)malloc(sizeof(struct list_head));
    walker = walker->next;
    aux_list[i] = walker;
    walker->prev = NULL;
    walker->next = NULL;
  }

  return head;
}

void _delete_list(struct list_head *aux_list[], int aux_list_size) {
  for(int i = 0; i < aux_list_size; i++) 
    if(aux_list[i])
      free(aux_list[i]);
}

struct list_head *_allocate_Dlinked_list(int length, struct list_head *aux_dlinked_list[] ) {
  struct list_head *walker = (struct list_head *)malloc(sizeof(struct list_head));

  aux_dlinked_list[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct list_head *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct list_head *)malloc(sizeof(struct list_head));
    walker->next->prev = walker;
    walker = walker->next;
    aux_dlinked_list[i] = walker;
    if (i == (length - 1)) 
      walker->next = NULL;  }

  return head;
}

void _delete_Dlinked_list(struct list_head *aux_dlinked_list[], int aux_dlinked_list_size) {
  for(int i = 0; i < aux_dlinked_list_size; i++) 
    if(aux_dlinked_list[i])
      free(aux_dlinked_list[i]);
}

struct list_head *_allocateBinTree_list(int length, struct list_head *aux_tree_list[], int *counter_list) {
  if(length == 0)
    return NULL;
  struct list_head *walker = (struct list_head *)malloc(sizeof(struct list_head));

  aux_tree_list[*counter_list] = walker;
  (*counter_list)++;
  walker->prev = _allocateBinTree_list(length - 1, aux_tree_list, counter_list);
  walker->next = _allocateBinTree_list(length - 1, aux_tree_list, counter_list);
  return walker;
}

void _deleteBinTree_list(struct list_head *aux_tree_list[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_list[i])
      free(aux_tree_list[i]);
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
          struct list_head * aux_list[1];
          struct list_head * list = _allocate_list(1, aux_list);
          INIT_LIST_HEAD(list);
          _delete_list(aux_list, 1);
        
        break;
    }
    // dlinked
    case 1:
    {
          struct list_head * aux_dlinked_list[10000];
          struct list_head * list = _allocate_Dlinked_list(10000, aux_dlinked_list);
          INIT_LIST_HEAD(list);
          _delete_Dlinked_list(aux_dlinked_list, 10000);
        
        break;
    }
    // bintree
    case 2:
    {
          int counter_list= 0;
          struct list_head *  aux_tree_list[1023];
          struct list_head * list = _allocateBinTree_list(10, aux_tree_list, &counter_list);
          INIT_LIST_HEAD(list);
          _deleteBinTree_list(aux_tree_list);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
