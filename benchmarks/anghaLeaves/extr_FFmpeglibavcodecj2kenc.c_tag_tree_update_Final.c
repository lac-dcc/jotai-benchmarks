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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ val; struct TYPE_3__* parent; } ;
typedef  TYPE_1__ Jpeg2000TgtNode ;

/* Variables and functions */

__attribute__((used)) static void tag_tree_update(Jpeg2000TgtNode *node)
{
    int lev = 0;
    while (node->parent){
        if (node->parent->val <= node->val)
            break;
        node->parent->val = node->val;
        node = node->parent;
        lev++;
    }
}


// ------------------------------------------------------------------------- //

struct TYPE_3__ *_allocate_node(int length, struct TYPE_3__ *aux_node[]) {
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_node[0] = walker;
walker->val = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->parent = NULL;

  struct TYPE_3__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->parent;
    aux_node[i] = walker;
walker->val = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->parent = NULL;
  }

  return head;
}

void _delete_node(struct TYPE_3__ *aux_node[], int aux_node_size) {
  for(int i = 0; i < aux_node_size; i++) 
    if(aux_node[i])
      free(aux_node[i]);
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
          struct TYPE_3__ * aux_node[1];
          struct TYPE_3__ * node = _allocate_node(1, aux_node);
          tag_tree_update(node);
          _delete_node(aux_node, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
