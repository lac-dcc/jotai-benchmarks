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
struct list_entry {struct list_entry* next; struct list_entry* prev; } ;

/* Variables and functions */

__attribute__((used)) static void list_init(
    struct list_entry *head)
{
    head->prev = head;
    head->next = head;
}

// ------------------------------------------------------------------------- //

struct list_entry *_allocate_Dlinked_head(int length, struct list_entry *aux_dlinked_head[] ) {
  struct list_entry *walker = (struct list_entry *)malloc(sizeof(struct list_entry));

  aux_dlinked_head[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct list_entry *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct list_entry *)malloc(sizeof(struct list_entry));
    walker->prev->next = walker;
    walker = walker->prev;
    aux_dlinked_head[i] = walker;
    if (i == (length - 1)) 
      walker->prev = NULL;  }

  return head;
}

void _delete_Dlinked_head(struct list_entry *aux_dlinked_head[], int aux_dlinked_head_size) {
  for(int i = 0; i < aux_dlinked_head_size; i++) 
    if(aux_dlinked_head[i])
      free(aux_dlinked_head[i]);
}

struct list_entry *_allocateBinTree_head(int length, struct list_entry *aux_tree_head[], int *counter_head) {
  if(length == 0)
    return NULL;
  struct list_entry *walker = (struct list_entry *)malloc(sizeof(struct list_entry));

  aux_tree_head[*counter_head] = walker;
  (*counter_head)++;
  walker->next = _allocateBinTree_head(length - 1, aux_tree_head, counter_head);
  walker->prev = _allocateBinTree_head(length - 1, aux_tree_head, counter_head);
  return walker;
}

void _deleteBinTree_head(struct list_entry *aux_tree_head[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_head[i])
      free(aux_tree_head[i]);
}

struct list_entry *_allocate_head(int length, struct list_entry *aux_head[]) {
  struct list_entry *walker = (struct list_entry *)malloc(sizeof(struct list_entry));

  aux_head[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct list_entry *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct list_entry *)malloc(sizeof(struct list_entry));
    walker = walker->next;
    aux_head[i] = walker;
    walker->prev = (struct list_entry *)malloc(sizeof(struct list_entry));
    walker = walker->prev;
    aux_head[i] = walker;
    walker->next = NULL;
    walker->prev = NULL;
  }

  return head;
}

void _delete_head(struct list_entry *aux_head[], int aux_head_size) {
  for(int i = 0; i < aux_head_size; i++) 
    if(aux_head[i])
      free(aux_head[i]);
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
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          struct list_entry * aux_dlinked_head[10000];
          struct list_entry * head = _allocate_Dlinked_head(10000, aux_dlinked_head);
        
          list_init(head);
          _delete_Dlinked_head(aux_dlinked_head, 10000);
        
        break;
    }


    // bintree
    case 1:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int counter_head= 0;
          struct list_entry *  aux_tree_head[1023];
          struct list_entry * head = _allocateBinTree_head(10, aux_tree_head, &counter_head);
        
          list_init(head);
          _deleteBinTree_head(aux_tree_head);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          struct list_entry * aux_head[1];
          struct list_entry * head = _allocate_head(1, aux_head);
        
          list_init(head);
          _delete_head(aux_head, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
