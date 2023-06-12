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
       0            int-bounds\n\
       1            dlinked\n\
       2            bintree\n\
       3            empty\n\
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
struct TYPE_4__ {unsigned int block_offset; struct TYPE_4__* right; struct TYPE_4__* left; } ;
typedef  TYPE_1__ filesys_tree_t ;

/* Variables and functions */

__attribute__((used)) static filesys_tree_t *tree_lowerbound (filesys_tree_t *T, unsigned int block_offset) {
  filesys_tree_t *R = NULL;
  while (T) {
    if (block_offset < T->block_offset) {
      R = T;
      T = T->left;
    } else if (block_offset > T->block_offset) {
      T = T->right;
    } else {
      return T;
    }
  }
  return R;
}

// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_T(int length, struct TYPE_4__ *aux_T[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_T[0] = walker;
walker->block_offset = ((-2 * (next_i()%2)) + 1) * next_i();
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
walker->block_offset = ((-2 * (next_i()%2)) + 1) * next_i();
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

struct TYPE_4__ *_allocate_Dlinked_T(int length, struct TYPE_4__ *aux_dlinked_T[] ) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_dlinked_T[0] = walker;
  walker->block_offset = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->right = NULL;
  walker->left = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->left = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker->left->right = walker;
    walker = walker->left;
    aux_dlinked_T[i] = walker;
    if (i == (length - 1)) 
      walker->left = NULL;    walker->block_offset = ((-2 * (next_i()%2)) + 1) * next_i();
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
  walker->block_offset = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->right = _allocateBinTree_T(length - 1, aux_tree_T, counter_T);
  walker->left = _allocateBinTree_T(length - 1, aux_tree_T, counter_T);
  return walker;
}

void _deleteBinTree_T(struct TYPE_4__ *aux_tree_T[]) {
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


    // int-bounds
    case 0:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          unsigned int block_offset = 100;
        
          struct TYPE_4__ * aux_T[1];
          struct TYPE_4__ * T = _allocate_T(1, aux_T);
        
          struct TYPE_4__ * benchRet = tree_lowerbound(T,block_offset);
          printf("%u\n", (*benchRet).block_offset);
          _delete_T(aux_T, 1);
        
        break;
    }


    // dlinked
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int block_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          struct TYPE_4__ * aux_dlinked_T[10000];
          struct TYPE_4__ * T = _allocate_Dlinked_T(10000, aux_dlinked_T);
        
          struct TYPE_4__ * benchRet = tree_lowerbound(T,block_offset);
          printf("%u\n", (*benchRet).block_offset);
          _delete_Dlinked_T(aux_dlinked_T, 10000);
        
        break;
    }


    // bintree
    case 2:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int block_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int counter_T= 0;
          struct TYPE_4__ *  aux_tree_T[1023];
          struct TYPE_4__ * T = _allocateBinTree_T(10, aux_tree_T, &counter_T);
        
          struct TYPE_4__ * benchRet = tree_lowerbound(T,block_offset);
          printf("%u\n", (*benchRet).block_offset);
          _deleteBinTree_T(aux_tree_T);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int block_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          struct TYPE_4__ * aux_T[1];
          struct TYPE_4__ * T = _allocate_T(1, aux_T);
        
          struct TYPE_4__ * benchRet = tree_lowerbound(T,block_offset);
          printf("%u\n", (*benchRet).block_offset);
          _delete_T(aux_T, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
