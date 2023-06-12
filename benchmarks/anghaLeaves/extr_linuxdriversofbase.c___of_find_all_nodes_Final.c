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
       0            empty\n\
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

struct device_node *_allocate_prev(int length, struct device_node *aux_prev[]) {
  struct device_node *walker = (struct device_node *)malloc(sizeof(struct device_node));

  aux_prev[0] = walker;
  walker->sibling = NULL;
  walker->parent = NULL;
  walker->child = NULL;

  struct device_node *head = walker;
  for(int i = 1; i < length; i++) {
    walker->sibling = (struct device_node *)malloc(sizeof(struct device_node));
    walker = walker->sibling;
    aux_prev[i] = walker;
    walker->parent = (struct device_node *)malloc(sizeof(struct device_node));
    walker = walker->parent;
    aux_prev[i] = walker;
    walker->child = (struct device_node *)malloc(sizeof(struct device_node));
    walker = walker->child;
    aux_prev[i] = walker;
    walker->sibling = NULL;
    walker->parent = NULL;
    walker->child = NULL;
  }

  return head;
}

void _delete_prev(struct device_node *aux_prev[], int aux_prev_size) {
  for(int i = 0; i < aux_prev_size; i++) 
    if(aux_prev[i])
      free(aux_prev[i]);
}



// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
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
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          struct device_node * aux_prev[1];
          struct device_node * prev = _allocate_prev(1, aux_prev);
        
          struct device_node * benchRet = __of_find_all_nodes(prev);
          _delete_prev(aux_prev, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
