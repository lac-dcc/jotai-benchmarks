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
       0            bintree\n\
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
struct ctx_list {struct ctx_list* prev; struct ctx_list* next; } ;

/* Variables and functions */

__attribute__((used)) static inline void add_to_ctx_list(struct ctx_list *head, struct ctx_list *entry)
{
	entry->next = head;
	(entry->prev = head->prev)->next = entry;
	head->prev = entry;
}

// ------------------------------------------------------------------------- //

struct ctx_list *_allocateBinTree_head(int length, struct ctx_list *aux_tree_head[], int *counter_head) {
  if(length == 0)
    return NULL;
  struct ctx_list *walker = (struct ctx_list *)malloc(sizeof(struct ctx_list));

  aux_tree_head[*counter_head] = walker;
  (*counter_head)++;
  walker->prev = _allocateBinTree_head(length - 1, aux_tree_head, counter_head);
  walker->next = _allocateBinTree_head(length - 1, aux_tree_head, counter_head);
  return walker;
}

void _deleteBinTree_head(struct ctx_list *aux_tree_head[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_head[i])
      free(aux_tree_head[i]);
}

struct ctx_list *_allocateBinTree_entry(int length, struct ctx_list *aux_tree_entry[], int *counter_entry) {
  if(length == 0)
    return NULL;
  struct ctx_list *walker = (struct ctx_list *)malloc(sizeof(struct ctx_list));

  aux_tree_entry[*counter_entry] = walker;
  (*counter_entry)++;
  walker->prev = _allocateBinTree_entry(length - 1, aux_tree_entry, counter_entry);
  walker->next = _allocateBinTree_entry(length - 1, aux_tree_entry, counter_entry);
  return walker;
}

void _deleteBinTree_entry(struct ctx_list *aux_tree_entry[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_entry[i])
      free(aux_tree_entry[i]);
}



// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // bintree
    case 0:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int counter_head= 0;
          struct ctx_list *  aux_tree_head[1023];
          struct ctx_list * head = _allocateBinTree_head(10, aux_tree_head, &counter_head);
        
          int counter_entry= 0;
          struct ctx_list *  aux_tree_entry[1023];
          struct ctx_list * entry = _allocateBinTree_entry(10, aux_tree_entry, &counter_entry);
        
          add_to_ctx_list(head,entry);
          _deleteBinTree_head(aux_tree_head);
          _deleteBinTree_entry(aux_tree_entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
