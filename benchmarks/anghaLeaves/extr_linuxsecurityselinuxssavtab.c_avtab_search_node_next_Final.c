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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ source_type; scalar_t__ target_type; scalar_t__ target_class; int specified; } ;
struct avtab_node {TYPE_1__ key; struct avtab_node* next; } ;

/* Variables and functions */
 int AVTAB_ENABLED ; 
 int AVTAB_ENABLED_OLD ; 

struct avtab_node*
avtab_search_node_next(struct avtab_node *node, int specified)
{
	struct avtab_node *cur;

	if (!node)
		return NULL;

	specified &= ~(AVTAB_ENABLED|AVTAB_ENABLED_OLD);
	for (cur = node->next; cur; cur = cur->next) {
		if (node->key.source_type == cur->key.source_type &&
		    node->key.target_type == cur->key.target_type &&
		    node->key.target_class == cur->key.target_class &&
		    (specified & cur->key.specified))
			return cur;

		if (node->key.source_type < cur->key.source_type)
			break;
		if (node->key.source_type == cur->key.source_type &&
		    node->key.target_type < cur->key.target_type)
			break;
		if (node->key.source_type == cur->key.source_type &&
		    node->key.target_type == cur->key.target_type &&
		    node->key.target_class < cur->key.target_class)
			break;
	}
	return NULL;
}


// ------------------------------------------------------------------------- //

struct avtab_node *_allocate_node(int length, struct avtab_node *aux_node[]) {
  struct avtab_node *walker = (struct avtab_node *)malloc(sizeof(struct avtab_node));

  aux_node[0] = walker;
walker->key.source_type = ((-2 * (next_i()%2)) + 1) * next_i();
walker->key.target_type = ((-2 * (next_i()%2)) + 1) * next_i();
walker->key.target_class = ((-2 * (next_i()%2)) + 1) * next_i();
walker->key.specified = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->next = NULL;

  struct avtab_node *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct avtab_node *)malloc(sizeof(struct avtab_node));
    walker = walker->next;
    aux_node[i] = walker;
walker->key.source_type = ((-2 * (next_i()%2)) + 1) * next_i();
walker->key.target_type = ((-2 * (next_i()%2)) + 1) * next_i();
walker->key.target_class = ((-2 * (next_i()%2)) + 1) * next_i();
walker->key.specified = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->next = NULL;
  }

  return head;
}

void _delete_node(struct avtab_node *aux_node[], int aux_node_size) {
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
          int specified = 100;
          struct avtab_node * aux_node[1];
          struct avtab_node * node = _allocate_node(1, aux_node);
          struct avtab_node * benchRet = avtab_search_node_next(node,specified);
          _delete_node(aux_node, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
