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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {struct TYPE_3__* prev; struct TYPE_3__* next; } ;
typedef  TYPE_1__ tlist_t ;

/* Variables and functions */

void tlist_clear (tlist_t *L) {
  L->next = L->prev = L;
}

// ------------------------------------------------------------------------- //

struct TYPE_3__ *_allocate_Dlinked_L(int length, struct TYPE_3__ *aux_dlinked_L[] ) {
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_dlinked_L[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct TYPE_3__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker->next->prev = walker;
    walker = walker->next;
    aux_dlinked_L[i] = walker;
    if (i == (length - 1)) 
      walker->next = NULL;  }

  return head;
}

void _delete_Dlinked_L(struct TYPE_3__ *aux_dlinked_L[], int aux_dlinked_L_size) {
  for(int i = 0; i < aux_dlinked_L_size; i++) 
    if(aux_dlinked_L[i])
      free(aux_dlinked_L[i]);
}

struct TYPE_3__ *_allocateBinTree_L(int length, struct TYPE_3__ *aux_tree_L[], int *counter_L) {
  if(length == 0)
    return NULL;
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_tree_L[*counter_L] = walker;
  (*counter_L)++;
  walker->prev = _allocateBinTree_L(length - 1, aux_tree_L, counter_L);
  walker->next = _allocateBinTree_L(length - 1, aux_tree_L, counter_L);
  return walker;
}

void _deleteBinTree_L(struct TYPE_3__ *aux_tree_L[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_L[i])
      free(aux_tree_L[i]);
}

struct TYPE_3__ *_allocate_L(int length, struct TYPE_3__ *aux_L[]) {
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_L[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct TYPE_3__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->prev;
    aux_L[i] = walker;
    walker->next = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->next;
    aux_L[i] = walker;
    walker->prev = NULL;
    walker->next = NULL;
  }

  return head;
}

void _delete_L(struct TYPE_3__ *aux_L[], int aux_L_size) {
  for(int i = 0; i < aux_L_size; i++) 
    if(aux_L[i])
      free(aux_L[i]);
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
          struct TYPE_3__ * aux_dlinked_L[10000];
          struct TYPE_3__ * L = _allocate_Dlinked_L(10000, aux_dlinked_L);
        
          tlist_clear(L);
          _delete_Dlinked_L(aux_dlinked_L, 10000);
        
        break;
    }
    // bintree
    case 1:
    {
          int counter_L= 0;
          struct TYPE_3__ *  aux_tree_L[1023];
          struct TYPE_3__ * L = _allocateBinTree_L(10, aux_tree_L, &counter_L);
        
          tlist_clear(L);
          _deleteBinTree_L(aux_tree_L);
        
        break;
    }
    // empty
    case 2:
    {
          struct TYPE_3__ * aux_L[1];
          struct TYPE_3__ * L = _allocate_L(1, aux_L);
        
          tlist_clear(L);
          _delete_L(aux_L, 1);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
