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
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* prev; } ;
typedef  TYPE_1__ transaction_t ;
typedef  TYPE_1__ tlist_t ;

/* Variables and functions */

void tlist_insert (tlist_t *L, transaction_t *T) {
  transaction_t *u = L->prev, *v = L;
  u->next = T; T->prev = u;
  v->prev = T; T->next = v;
}

// ------------------------------------------------------------------------- //

struct TYPE_5__ *_allocate_Dlinked_L(int length, struct TYPE_5__ *aux_dlinked_L[] ) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_dlinked_L[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker->prev->next = walker;
    walker = walker->prev;
    aux_dlinked_L[i] = walker;
    if (i == (length - 1)) 
      walker->prev = NULL;  }

  return head;
}

void _delete_Dlinked_L(struct TYPE_5__ *aux_dlinked_L[], int aux_dlinked_L_size) {
  for(int i = 0; i < aux_dlinked_L_size; i++) 
    if(aux_dlinked_L[i])
      free(aux_dlinked_L[i]);
}

struct TYPE_5__ *_allocate_Dlinked_T(int length, struct TYPE_5__ *aux_dlinked_T[] ) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_dlinked_T[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker->prev->next = walker;
    walker = walker->prev;
    aux_dlinked_T[i] = walker;
    if (i == (length - 1)) 
      walker->prev = NULL;  }

  return head;
}

void _delete_Dlinked_T(struct TYPE_5__ *aux_dlinked_T[], int aux_dlinked_T_size) {
  for(int i = 0; i < aux_dlinked_T_size; i++) 
    if(aux_dlinked_T[i])
      free(aux_dlinked_T[i]);
}

struct TYPE_5__ *_allocateBinTree_L(int length, struct TYPE_5__ *aux_tree_L[], int *counter_L) {
  if(length == 0)
    return NULL;
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_tree_L[*counter_L] = walker;
  (*counter_L)++;
  walker->next = _allocateBinTree_L(length - 1, aux_tree_L, counter_L);
  walker->prev = _allocateBinTree_L(length - 1, aux_tree_L, counter_L);
  return walker;
}

void _deleteBinTree_L(struct TYPE_5__ *aux_tree_L[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_L[i])
      free(aux_tree_L[i]);
}

struct TYPE_5__ *_allocateBinTree_T(int length, struct TYPE_5__ *aux_tree_T[], int *counter_T) {
  if(length == 0)
    return NULL;
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_tree_T[*counter_T] = walker;
  (*counter_T)++;
  walker->next = _allocateBinTree_T(length - 1, aux_tree_T, counter_T);
  walker->prev = _allocateBinTree_T(length - 1, aux_tree_T, counter_T);
  return walker;
}

void _deleteBinTree_T(struct TYPE_5__ *aux_tree_T[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_T[i])
      free(aux_tree_T[i]);
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
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
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

          struct TYPE_5__ * aux_dlinked_L[10000];
          struct TYPE_5__ * L = _allocate_Dlinked_L(10000, aux_dlinked_L);
        
          struct TYPE_5__ * aux_dlinked_T[10000];
          struct TYPE_5__ * T = _allocate_Dlinked_T(10000, aux_dlinked_T);
        
          tlist_insert(L,T);
          _delete_Dlinked_L(aux_dlinked_L, 10000);
          _delete_Dlinked_T(aux_dlinked_T, 10000);
        
        break;
    }


    // bintree
    case 1:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
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

          int counter_L= 0;
          struct TYPE_5__ *  aux_tree_L[1023];
          struct TYPE_5__ * L = _allocateBinTree_L(10, aux_tree_L, &counter_L);
        
          int counter_T= 0;
          struct TYPE_5__ *  aux_tree_T[1023];
          struct TYPE_5__ * T = _allocateBinTree_T(10, aux_tree_T, &counter_T);
        
          tlist_insert(L,T);
          _deleteBinTree_L(aux_tree_L);
          _deleteBinTree_T(aux_tree_T);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
