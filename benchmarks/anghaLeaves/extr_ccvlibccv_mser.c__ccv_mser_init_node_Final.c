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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int x; int y; } ;
struct TYPE_5__ {int root; TYPE_1__ point; struct TYPE_5__* shortcut; struct TYPE_5__* next; struct TYPE_5__* prev; } ;
typedef  TYPE_2__ ccv_mser_node_t ;

/* Variables and functions */

__attribute__((used)) static void _ccv_mser_init_node(ccv_mser_node_t* node, int x, int y)
{
	node->prev = node->next = node->shortcut = node; // endless double link list
	node->point.x = x;
	node->point.y = y;
	node->root = -1;
}


// ------------------------------------------------------------------------- //

struct TYPE_5__ *_allocate_node(int length, struct TYPE_5__ *aux_node[]) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_node[0] = walker;
walker->root = ((-2 * (next_i()%2)) + 1) * next_i();
walker->point.x = ((-2 * (next_i()%2)) + 1) * next_i();
walker->point.y = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->shortcut = NULL;
  walker->next = NULL;
  walker->prev = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->shortcut = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->shortcut;
    aux_node[i] = walker;
    walker->next = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->next;
    aux_node[i] = walker;
    walker->prev = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->prev;
    aux_node[i] = walker;
walker->root = ((-2 * (next_i()%2)) + 1) * next_i();
walker->point.x = ((-2 * (next_i()%2)) + 1) * next_i();
walker->point.y = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->shortcut = NULL;
    walker->next = NULL;
    walker->prev = NULL;
  }

  return head;
}

void _delete_node(struct TYPE_5__ *aux_node[], int aux_node_size) {
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
          int x = 100;
          int y = 100;
          struct TYPE_5__ * aux_node[1];
          struct TYPE_5__ * node = _allocate_node(1, aux_node);
          _ccv_mser_init_node(node,x,y);
          _delete_node(aux_node, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
