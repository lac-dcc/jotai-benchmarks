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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            bintree\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct TYPE_5__ {scalar_t__ x; struct TYPE_5__* right; struct TYPE_5__* left; } ;
typedef  TYPE_1__ tree_ext_global_t ;
typedef  scalar_t__ global_id_t ;

/* Variables and functions */
 TYPE_1__* NILG ; 

__attribute__((used)) static inline tree_ext_global_t *tree_ext_global_lookup (tree_ext_global_t *T, global_id_t x) {
  while (T != NILG && x != T->x) {
    T = (x < T->x) ? T->left : T->right;
  }
  return T;
}


// ------------------------------------------------------------------------- //

struct TYPE_5__ *_allocateBinTree_T(int length, struct TYPE_5__ *aux_tree_T[], int *counter_T) {
  if(length == 0)
    return NULL;
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_tree_T[*counter_T] = walker;
  (*counter_T)++;
  walker->x = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->right = _allocateBinTree_T(length - 1, aux_tree_T, counter_T);
  walker->left = _allocateBinTree_T(length - 1, aux_tree_T, counter_T);
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

    // bintree
    case 0:
    {
          long x = ((-2 * (next_i()%2)) + 1) * next_i();
          int counter_T= 0;
          struct TYPE_5__ *  aux_tree_T[1023];
          struct TYPE_5__ * T = _allocateBinTree_T(10, aux_tree_T, &counter_T);
          struct TYPE_5__ * benchRet = tree_ext_global_lookup(T,x);
          printf("%ld\n", (*benchRet).x);
          _deleteBinTree_T(aux_tree_T);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
