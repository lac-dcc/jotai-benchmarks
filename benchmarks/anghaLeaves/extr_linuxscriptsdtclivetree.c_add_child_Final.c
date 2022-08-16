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

/* Type definitions */
struct node {struct node* next_sibling; struct node* children; struct node* parent; } ;

/* Variables and functions */

void add_child(struct node *parent, struct node *child)
{
	struct node **p;

	child->next_sibling = NULL;
	child->parent = parent;

	p = &parent->children;
	while (*p)
		p = &((*p)->next_sibling);

	*p = child;
}


// ------------------------------------------------------------------------- //

struct node *_allocate_parent(int length, struct node *aux_parent[]) {
  struct node *walker = (struct node *)malloc(sizeof(struct node));

  aux_parent[0] = walker;
  walker->next_sibling = NULL;
  walker->children = NULL;
  walker->parent = NULL;

  struct node *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next_sibling = (struct node *)malloc(sizeof(struct node));
    walker = walker->next_sibling;
    aux_parent[i] = walker;
    walker->children = (struct node *)malloc(sizeof(struct node));
    walker = walker->children;
    aux_parent[i] = walker;
    walker->parent = (struct node *)malloc(sizeof(struct node));
    walker = walker->parent;
    aux_parent[i] = walker;
    walker->next_sibling = NULL;
    walker->children = NULL;
    walker->parent = NULL;
  }

  return head;
}

void _delete_parent(struct node *aux_parent[], int aux_parent_size) {
  for(int i = 0; i < aux_parent_size; i++) 
    if(aux_parent[i])
      free(aux_parent[i]);
}

struct node *_allocate_child(int length, struct node *aux_child[]) {
  struct node *walker = (struct node *)malloc(sizeof(struct node));

  aux_child[0] = walker;
  walker->next_sibling = NULL;
  walker->children = NULL;
  walker->parent = NULL;

  struct node *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next_sibling = (struct node *)malloc(sizeof(struct node));
    walker = walker->next_sibling;
    aux_child[i] = walker;
    walker->children = (struct node *)malloc(sizeof(struct node));
    walker = walker->children;
    aux_child[i] = walker;
    walker->parent = (struct node *)malloc(sizeof(struct node));
    walker = walker->parent;
    aux_child[i] = walker;
    walker->next_sibling = NULL;
    walker->children = NULL;
    walker->parent = NULL;
  }

  return head;
}

void _delete_child(struct node *aux_child[], int aux_child_size) {
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
          struct node * aux_parent[1];
          struct node * parent = _allocate_parent(1, aux_parent);
          struct node * aux_child[1];
          struct node * child = _allocate_child(1, aux_child);
          add_child(parent,child);
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
