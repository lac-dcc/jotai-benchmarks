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
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {scalar_t__ word; struct TYPE_8__* right; TYPE_1__* item; struct TYPE_8__* left; } ;
typedef  TYPE_2__ tree_t ;
struct TYPE_9__ {scalar_t__ item_id; } ;
typedef  TYPE_3__ item_t ;
typedef  scalar_t__ hash_t ;
struct TYPE_7__ {scalar_t__ item_id; } ;

/* Variables and functions */

__attribute__((used)) static tree_t *tree_lookup (tree_t *T, hash_t word, item_t *item) {
  while (T) {
    if (word < T->word) {
      T = T->left;
    } else if (word > T->word) {
      T = T->right;
    } else if (item->item_id < T->item->item_id) {
      T = T->left;
    } else if (item->item_id > T->item->item_id) {
      T = T->right;
    } else {
      return T;
    }
  }
  return T;
}


// ------------------------------------------------------------------------- //

struct TYPE_8__ *_allocate_T(int length) {
  struct TYPE_8__ *head = (struct TYPE_8__ *)malloc(sizeof(struct TYPE_8__));

  head->word = rand();
  head->right = NULL;
  head->item = rand();
  head->left = NULL;

  struct TYPE_8__ *walker = head;
  for(int i = 1; i < length; i++) {
    walker->right = (struct TYPE_8__ *)malloc(sizeof(struct TYPE_8__));
    walker = walker->right;
    walker->left = (struct TYPE_8__ *)malloc(sizeof(struct TYPE_8__));
    walker = walker->left;
    walker->word = rand();
    walker->right = NULL;
    walker->item = rand();
    walker->left = NULL;
  }

  return head;
}

void _delete_T(struct TYPE_8__ * head) {
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
          long word = 255;
          struct TYPE_8__ * T = _allocate_T(1);
          int _len_item0 = 1;
          struct TYPE_9__ * item = (struct TYPE_9__ *) malloc(_len_item0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_item0; _i0++) {
            item->item_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_8__ * benchRet = tree_lookup(T,word,item);
          printf("{{struct}} %p\n", &benchRet); 
          _delete_T(T);
          free(item);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
