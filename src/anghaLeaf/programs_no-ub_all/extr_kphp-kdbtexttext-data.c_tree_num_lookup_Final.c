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
       0            big-arr\n\
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
struct TYPE_5__ {int x; struct TYPE_5__* right; struct TYPE_5__* left; } ;
typedef  TYPE_1__ tree_num_t ;

/* Variables and functions */
 TYPE_1__* NIL ; 

__attribute__((used)) static inline tree_num_t *tree_num_lookup (tree_num_t *T, int x) {
  while (T != NIL && x != T->x) {
    T = (x < T->x) ? T->left : T->right;
  }
  return T;
}


// ------------------------------------------------------------------------- //

struct TYPE_5__ *_allocate_T(int length) {
  struct TYPE_5__ *head = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  head->x = rand();
  head->right = NULL;
  head->left = NULL;

  struct TYPE_5__ *walker = head;
  for(int i = 1; i < length; i++) {
    walker->right = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->right;
    walker->left = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->left;
    walker->x = rand();
    walker->right = NULL;
    walker->left = NULL;
  }

  return head;
}

void _delete_T(struct TYPE_5__ * head) {
  if(head->right != NULL) _delete_T(head->right);
  if(head->left != NULL) _delete_T(head->left);
  free(head);
}




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int x = 255;
          struct TYPE_5__ * T = _allocate_T(1);
          struct TYPE_5__ * benchRet = tree_num_lookup(T,x);
          printf("{{struct}} %p\n", &benchRet); 
          _delete_T(T);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
