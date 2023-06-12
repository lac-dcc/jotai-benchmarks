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
struct TYPE_4__ {int x; struct TYPE_4__* right; struct TYPE_4__* left; } ;
typedef  TYPE_1__ tree_t ;

/* Variables and functions */

tree_t *tree_lookup (tree_t *T, int x) {
  while (T && x != T->x) {
    T = (x < T->x) ? T->left : T->right;
  }
  return T;
}

// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_Dlinked_T(int length, struct TYPE_4__ *aux_dlinked_T[] ) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_dlinked_T[0] = walker;
  walker->x = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->right = NULL;
  walker->left = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->left = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker->left->right = walker;
    walker = walker->left;
    aux_dlinked_T[i] = walker;
    if (i == (length - 1)) 
      walker->left = NULL;    walker->x = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  return head;
}

void _delete_Dlinked_T(struct TYPE_4__ *aux_dlinked_T[], int aux_dlinked_T_size) {
  for(int i = 0; i < aux_dlinked_T_size; i++) 
    if(aux_dlinked_T[i])
      free(aux_dlinked_T[i]);
}

struct TYPE_4__ *_allocateBinTree_T(int length, struct TYPE_4__ *aux_tree_T[], int *counter_T) {
  if(length == 0)
    return NULL;
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_tree_T[*counter_T] = walker;
  (*counter_T)++;
  walker->x = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->right = _allocateBinTree_T(length - 1, aux_tree_T, counter_T);
  walker->left = _allocateBinTree_T(length - 1, aux_tree_T, counter_T);
  return walker;
}

void _deleteBinTree_T(struct TYPE_4__ *aux_tree_T[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_T[i])
      free(aux_tree_T[i]);
}

struct TYPE_4__ *_allocate_T(int length, struct TYPE_4__ *aux_T[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_T[0] = walker;
walker->x = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->right = NULL;
  walker->left = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->right = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->right;
    aux_T[i] = walker;
    walker->left = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->left;
    aux_T[i] = walker;
walker->x = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->right = NULL;
    walker->left = NULL;
  }

  return head;
}

void _delete_T(struct TYPE_4__ *aux_T[], int aux_T_size) {
  for(int i = 0; i < aux_T_size; i++) 
    if(aux_T[i])
      free(aux_T[i]);
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
          int x = ((-2 * (next_i()%2)) + 1) * next_i();
        
          struct TYPE_4__ * aux_dlinked_T[10000];
          struct TYPE_4__ * T = _allocate_Dlinked_T(10000, aux_dlinked_T);
        
          struct TYPE_4__ * benchRet = tree_lookup(T,x);
          printf("%d\n", (*benchRet).x);
          _delete_Dlinked_T(aux_dlinked_T, 10000);
        
        break;
    }
    // bintree
    case 1:
    {
          int x = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int counter_T= 0;
          struct TYPE_4__ *  aux_tree_T[1023];
          struct TYPE_4__ * T = _allocateBinTree_T(10, aux_tree_T, &counter_T);
        
          struct TYPE_4__ * benchRet = tree_lookup(T,x);
          printf("%d\n", (*benchRet).x);
          _deleteBinTree_T(aux_tree_T);
        
        break;
    }
    // empty
    case 2:
    {
          int x = ((-2 * (next_i()%2)) + 1) * next_i();
        
          struct TYPE_4__ * aux_T[1];
          struct TYPE_4__ * T = _allocate_T(1, aux_T);
        
          struct TYPE_4__ * benchRet = tree_lookup(T,x);
          printf("%d\n", (*benchRet).x);
          _delete_T(aux_T, 1);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
