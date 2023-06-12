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
struct list_head {struct list_head* next; struct list_head* prev; } ;

/* Variables and functions */

__attribute__((used)) static inline void __list_del(struct list_head *prev, struct list_head *next)
{
	next->prev = prev;
	prev->next = next;
}

// ------------------------------------------------------------------------- //

struct list_head *_allocate_Dlinked_prev(int length, struct list_head *aux_dlinked_prev[] ) {
  struct list_head *walker = (struct list_head *)malloc(sizeof(struct list_head));

  aux_dlinked_prev[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct list_head *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct list_head *)malloc(sizeof(struct list_head));
    walker->prev->next = walker;
    walker = walker->prev;
    aux_dlinked_prev[i] = walker;
    if (i == (length - 1)) 
      walker->prev = NULL;  }

  return head;
}

void _delete_Dlinked_prev(struct list_head *aux_dlinked_prev[], int aux_dlinked_prev_size) {
  for(int i = 0; i < aux_dlinked_prev_size; i++) 
    if(aux_dlinked_prev[i])
      free(aux_dlinked_prev[i]);
}

struct list_head *_allocate_Dlinked_next(int length, struct list_head *aux_dlinked_next[] ) {
  struct list_head *walker = (struct list_head *)malloc(sizeof(struct list_head));

  aux_dlinked_next[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct list_head *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct list_head *)malloc(sizeof(struct list_head));
    walker->prev->next = walker;
    walker = walker->prev;
    aux_dlinked_next[i] = walker;
    if (i == (length - 1)) 
      walker->prev = NULL;  }

  return head;
}

void _delete_Dlinked_next(struct list_head *aux_dlinked_next[], int aux_dlinked_next_size) {
  for(int i = 0; i < aux_dlinked_next_size; i++) 
    if(aux_dlinked_next[i])
      free(aux_dlinked_next[i]);
}

struct list_head *_allocateBinTree_prev(int length, struct list_head *aux_tree_prev[], int *counter_prev) {
  if(length == 0)
    return NULL;
  struct list_head *walker = (struct list_head *)malloc(sizeof(struct list_head));

  aux_tree_prev[*counter_prev] = walker;
  (*counter_prev)++;
  walker->next = _allocateBinTree_prev(length - 1, aux_tree_prev, counter_prev);
  walker->prev = _allocateBinTree_prev(length - 1, aux_tree_prev, counter_prev);
  return walker;
}

void _deleteBinTree_prev(struct list_head *aux_tree_prev[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_prev[i])
      free(aux_tree_prev[i]);
}

struct list_head *_allocateBinTree_next(int length, struct list_head *aux_tree_next[], int *counter_next) {
  if(length == 0)
    return NULL;
  struct list_head *walker = (struct list_head *)malloc(sizeof(struct list_head));

  aux_tree_next[*counter_next] = walker;
  (*counter_next)++;
  walker->next = _allocateBinTree_next(length - 1, aux_tree_next, counter_next);
  walker->prev = _allocateBinTree_next(length - 1, aux_tree_next, counter_next);
  return walker;
}

void _deleteBinTree_next(struct list_head *aux_tree_next[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_next[i])
      free(aux_tree_next[i]);
}

struct list_head *_allocate_prev(int length, struct list_head *aux_prev[]) {
  struct list_head *walker = (struct list_head *)malloc(sizeof(struct list_head));

  aux_prev[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct list_head *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct list_head *)malloc(sizeof(struct list_head));
    walker = walker->next;
    aux_prev[i] = walker;
    walker->prev = (struct list_head *)malloc(sizeof(struct list_head));
    walker = walker->prev;
    aux_prev[i] = walker;
    walker->next = NULL;
    walker->prev = NULL;
  }

  return head;
}

void _delete_prev(struct list_head *aux_prev[], int aux_prev_size) {
  for(int i = 0; i < aux_prev_size; i++) 
    if(aux_prev[i])
      free(aux_prev[i]);
}

struct list_head *_allocate_next(int length, struct list_head *aux_next[]) {
  struct list_head *walker = (struct list_head *)malloc(sizeof(struct list_head));

  aux_next[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct list_head *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct list_head *)malloc(sizeof(struct list_head));
    walker = walker->next;
    aux_next[i] = walker;
    walker->prev = (struct list_head *)malloc(sizeof(struct list_head));
    walker = walker->prev;
    aux_next[i] = walker;
    walker->next = NULL;
    walker->prev = NULL;
  }

  return head;
}

void _delete_next(struct list_head *aux_next[], int aux_next_size) {
  for(int i = 0; i < aux_next_size; i++) 
    if(aux_next[i])
      free(aux_next[i]);
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
          struct list_head * aux_dlinked_prev[10000];
          struct list_head * prev = _allocate_Dlinked_prev(10000, aux_dlinked_prev);
        
          struct list_head * aux_dlinked_next[10000];
          struct list_head * next = _allocate_Dlinked_next(10000, aux_dlinked_next);
        
          __list_del(prev,next);
          _delete_Dlinked_prev(aux_dlinked_prev, 10000);
          _delete_Dlinked_next(aux_dlinked_next, 10000);
        
        break;
    }
    // bintree
    case 1:
    {
          int counter_prev= 0;
          struct list_head *  aux_tree_prev[1023];
          struct list_head * prev = _allocateBinTree_prev(10, aux_tree_prev, &counter_prev);
        
          int counter_next= 0;
          struct list_head *  aux_tree_next[1023];
          struct list_head * next = _allocateBinTree_next(10, aux_tree_next, &counter_next);
        
          __list_del(prev,next);
          _deleteBinTree_prev(aux_tree_prev);
          _deleteBinTree_next(aux_tree_next);
        
        break;
    }
    // empty
    case 2:
    {
          struct list_head * aux_prev[1];
          struct list_head * prev = _allocate_prev(1, aux_prev);
        
          struct list_head * aux_next[1];
          struct list_head * next = _allocate_next(1, aux_next);
        
          __list_del(prev,next);
          _delete_prev(aux_prev, 1);
          _delete_next(aux_next, 1);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
