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
typedef  TYPE_1__* mockfs_fsnode_t ;
struct TYPE_4__ {scalar_t__ mnt; struct TYPE_4__* parent; struct TYPE_4__* child_b; struct TYPE_4__* child_a; } ;

/* Variables and functions */
 int EINVAL ; 
 int ENOMEM ; 

int mockfs_fsnode_adopt(mockfs_fsnode_t parent, mockfs_fsnode_t child)
{
	int rvalue;

	rvalue = 0;

	/*
	 * The child must be an orphan, and the parent cannot be the child.
	 */
	if ((!parent || !child || child->parent) && (parent != child)) {
		rvalue = EINVAL;
		goto done;
	}

	/*
	 * Nodes are actually tied to a specific mount, so assert that both nodes belong to the same mount.
	 */
	if (parent->mnt != child->mnt) {
		rvalue = EINVAL;
		goto done;
	}

	/*
	 * TODO: Get rid of this check if I ever get around to making the tree non-binary.
	 * TODO: Enforce that the parent cannot have two children of the same type (for the moment, this is
	 *   implicit in the structure of the tree constructed by mockfs_mountroot, so we don't need to
	 *   worry about it).
	 * 
	 * Can the parent support another child (food, shelter, unused pointers)?
	 */
	if (!parent->child_a) {
		parent->child_a = child;
		child->parent = parent;
	}
	else if (!parent->child_b) {
		parent->child_b = child;
		child->parent = parent;
	}
	else {
		rvalue = ENOMEM;
	}

done:
	return rvalue;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_parent(int length, struct TYPE_4__ *aux_parent[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_parent[0] = walker;
walker->mnt = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->parent = NULL;
  walker->child_b = NULL;
  walker->child_a = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->parent;
    aux_parent[i] = walker;
    walker->child_b = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->child_b;
    aux_parent[i] = walker;
    walker->child_a = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->child_a;
    aux_parent[i] = walker;
walker->mnt = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->parent = NULL;
    walker->child_b = NULL;
    walker->child_a = NULL;
  }

  return head;
}

void _delete_parent(struct TYPE_4__ *aux_parent[], int aux_parent_size) {
  for(int i = 0; i < aux_parent_size; i++) 
    if(aux_parent[i])
      free(aux_parent[i]);
}

struct TYPE_4__ *_allocate_child(int length, struct TYPE_4__ *aux_child[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_child[0] = walker;
walker->mnt = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->parent = NULL;
  walker->child_b = NULL;
  walker->child_a = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->parent;
    aux_child[i] = walker;
    walker->child_b = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->child_b;
    aux_child[i] = walker;
    walker->child_a = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->child_a;
    aux_child[i] = walker;
walker->mnt = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->parent = NULL;
    walker->child_b = NULL;
    walker->child_a = NULL;
  }

  return head;
}

void _delete_child(struct TYPE_4__ *aux_child[], int aux_child_size) {
  for(int i = 0; i < aux_child_size; i++) 
    if(aux_child[i])
      free(aux_child[i]);
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
          struct TYPE_4__ * aux_parent[1];
          struct TYPE_4__ * parent = _allocate_parent(1, aux_parent);
          struct TYPE_4__ * aux_child[1];
          struct TYPE_4__ * child = _allocate_child(1, aux_child);
          int benchRet = mockfs_fsnode_adopt(parent,child);
          printf("%d\n", benchRet); 
          _delete_parent(aux_parent, 1);
          _delete_child(aux_child, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
