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
struct list {struct list* prev; struct list* next; } ;

/* Variables and functions */

__attribute__((used)) static inline void list_add(struct list *l, struct list *n)
{
    n->next = l->next;
    n->next->prev = n;
    l->next = n;
    n->prev = l;
}

// ------------------------------------------------------------------------- //

struct list *_allocate_Dlinked_l(int length, struct list *aux_dlinked_l[] ) {
  struct list *walker = (struct list *)malloc(sizeof(struct list));

  aux_dlinked_l[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct list *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct list *)malloc(sizeof(struct list));
    walker->next->prev = walker;
    walker = walker->next;
    aux_dlinked_l[i] = walker;
    if (i == (length - 1)) 
      walker->next = NULL;  }

  return head;
}

void _delete_Dlinked_l(struct list *aux_dlinked_l[], int aux_dlinked_l_size) {
  for(int i = 0; i < aux_dlinked_l_size; i++) 
    if(aux_dlinked_l[i])
      free(aux_dlinked_l[i]);
}

struct list *_allocate_Dlinked_n(int length, struct list *aux_dlinked_n[] ) {
  struct list *walker = (struct list *)malloc(sizeof(struct list));

  aux_dlinked_n[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct list *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct list *)malloc(sizeof(struct list));
    walker->next->prev = walker;
    walker = walker->next;
    aux_dlinked_n[i] = walker;
    if (i == (length - 1)) 
      walker->next = NULL;  }

  return head;
}

void _delete_Dlinked_n(struct list *aux_dlinked_n[], int aux_dlinked_n_size) {
  for(int i = 0; i < aux_dlinked_n_size; i++) 
    if(aux_dlinked_n[i])
      free(aux_dlinked_n[i]);
}

struct list *_allocateBinTree_l(int length, struct list *aux_tree_l[], int *counter_l) {
  if(length == 0)
    return NULL;
  struct list *walker = (struct list *)malloc(sizeof(struct list));

  aux_tree_l[*counter_l] = walker;
  (*counter_l)++;
  walker->prev = _allocateBinTree_l(length - 1, aux_tree_l, counter_l);
  walker->next = _allocateBinTree_l(length - 1, aux_tree_l, counter_l);
  return walker;
}

void _deleteBinTree_l(struct list *aux_tree_l[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_l[i])
      free(aux_tree_l[i]);
}

struct list *_allocateBinTree_n(int length, struct list *aux_tree_n[], int *counter_n) {
  if(length == 0)
    return NULL;
  struct list *walker = (struct list *)malloc(sizeof(struct list));

  aux_tree_n[*counter_n] = walker;
  (*counter_n)++;
  walker->prev = _allocateBinTree_n(length - 1, aux_tree_n, counter_n);
  walker->next = _allocateBinTree_n(length - 1, aux_tree_n, counter_n);
  return walker;
}

void _deleteBinTree_n(struct list *aux_tree_n[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_n[i])
      free(aux_tree_n[i]);
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
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
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

          struct list * aux_dlinked_l[10000];
          struct list * l = _allocate_Dlinked_l(10000, aux_dlinked_l);
        
          struct list * aux_dlinked_n[10000];
          struct list * n = _allocate_Dlinked_n(10000, aux_dlinked_n);
        
          list_add(l,n);
          _delete_Dlinked_l(aux_dlinked_l, 10000);
          _delete_Dlinked_n(aux_dlinked_n, 10000);
        
        break;
    }


    // bintree
    case 1:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
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

          int counter_l= 0;
          struct list *  aux_tree_l[1023];
          struct list * l = _allocateBinTree_l(10, aux_tree_l, &counter_l);
        
          int counter_n= 0;
          struct list *  aux_tree_n[1023];
          struct list * n = _allocateBinTree_n(10, aux_tree_n, &counter_n);
        
          list_add(l,n);
          _deleteBinTree_l(aux_tree_l);
          _deleteBinTree_n(aux_tree_n);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
