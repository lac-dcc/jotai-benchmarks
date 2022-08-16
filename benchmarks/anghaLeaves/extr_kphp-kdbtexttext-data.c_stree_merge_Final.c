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
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {scalar_t__ y; struct TYPE_5__* left; struct TYPE_5__* right; } ;
typedef  TYPE_1__ stree_t ;

/* Variables and functions */

__attribute__((used)) static stree_t *stree_merge (stree_t *L, stree_t *R) {
  stree_t *Root, **U = &Root;

  while (L && R) {
    if (L->y < R->y) {
      *U = L;
      U = &L->right;
      L = *U;
    } else {
      *U = R;
      U = &R->left;
      R = *U;
    }
  }

  *U = L ? L : R;

  return Root;
}


// ------------------------------------------------------------------------- //

struct TYPE_5__ *_allocate_L(int length, struct TYPE_5__ *aux_L[]) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_L[0] = walker;
walker->y = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->left = NULL;
  walker->right = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->left = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->left;
    aux_L[i] = walker;
    walker->right = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->right;
    aux_L[i] = walker;
walker->y = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->left = NULL;
    walker->right = NULL;
  }

  return head;
}

void _delete_L(struct TYPE_5__ *aux_L[], int aux_L_size) {
  for(int i = 0; i < aux_L_size; i++) 
    if(aux_L[i])
      free(aux_L[i]);
}

struct TYPE_5__ *_allocate_R(int length, struct TYPE_5__ *aux_R[]) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_R[0] = walker;
walker->y = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->left = NULL;
  walker->right = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->left = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->left;
    aux_R[i] = walker;
    walker->right = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->right;
    aux_R[i] = walker;
walker->y = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->left = NULL;
    walker->right = NULL;
  }

  return head;
}

void _delete_R(struct TYPE_5__ *aux_R[], int aux_R_size) {
  for(int i = 0; i < aux_R_size; i++) 
    if(aux_R[i])
      free(aux_R[i]);
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
          struct TYPE_5__ * aux_L[1];
          struct TYPE_5__ * L = _allocate_L(1, aux_L);
          struct TYPE_5__ * aux_R[1];
          struct TYPE_5__ * R = _allocate_R(1, aux_R);
          struct TYPE_5__ * benchRet = stree_merge(L,R);
          printf("%ld\n", (*benchRet).y);
          _delete_L(aux_L, 1);
          _delete_R(aux_R, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
