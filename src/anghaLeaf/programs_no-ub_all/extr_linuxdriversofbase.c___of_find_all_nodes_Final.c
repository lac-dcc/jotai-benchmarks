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

/* Type definitions */
struct device_node {struct device_node* sibling; struct device_node* parent; struct device_node* child; } ;

/* Variables and functions */
 struct device_node* of_root ; 

struct device_node *__of_find_all_nodes(struct device_node *prev)
{
	struct device_node *np;
	if (!prev) {
		np = of_root;
	} else if (prev->child) {
		np = prev->child;
	} else {
		/* Walk back up looking for a sibling, or the end of the structure */
		np = prev;
		while (np->parent && !np->sibling)
			np = np->parent;
		np = np->sibling; /* Might be null at the end of the tree */
	}
	return np;
}


// ------------------------------------------------------------------------- //

struct device_node *_allocate_prev(int length) {
  struct device_node *head = (struct device_node *)malloc(sizeof(struct device_node));

  head->sibling = NULL;
  head->parent = NULL;
  head->child = NULL;

  struct device_node *walker = head;
  for(int i = 1; i < length; i++) {
    walker->sibling = (struct device_node *)malloc(sizeof(struct device_node));
    walker = walker->sibling;
    walker->parent = (struct device_node *)malloc(sizeof(struct device_node));
    walker = walker->parent;
    walker->child = (struct device_node *)malloc(sizeof(struct device_node));
    walker = walker->child;
    walker->sibling = NULL;
    walker->parent = NULL;
    walker->child = NULL;
  }

  return head;
}

void _delete_prev(struct device_node * head) {
  if(head->sibling != NULL) _delete_prev(head->sibling);
  if(head->parent != NULL) _delete_prev(head->parent);
  if(head->child != NULL) _delete_prev(head->child);
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
          struct device_node * prev = _allocate_prev(1);
          struct device_node * benchRet = __of_find_all_nodes(prev);
          printf("{{struct}} %p\n", &benchRet); 
          _delete_prev(prev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
