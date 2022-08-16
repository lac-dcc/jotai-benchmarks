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
          unsigned int block_offset = 100;
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
