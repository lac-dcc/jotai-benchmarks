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
struct kernfs_node {struct kernfs_node* parent; } ;

/* Variables and functions */

__attribute__((used)) static size_t kernfs_depth(struct kernfs_node *from, struct kernfs_node *to)
{
	size_t depth = 0;

	while (to->parent && to != from) {
		depth++;
		to = to->parent;
	}
	return depth;
}


// ------------------------------------------------------------------------- //

struct kernfs_node *_allocate_from(int length, struct kernfs_node *aux_from[]) {
  struct kernfs_node *walker = (struct kernfs_node *)malloc(sizeof(struct kernfs_node));

  aux_from[0] = walker;
  walker->parent = NULL;

  struct kernfs_node *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct kernfs_node *)malloc(sizeof(struct kernfs_node));
    walker = walker->parent;
    aux_from[i] = walker;
    walker->parent = NULL;
  }

  return head;
}

void _delete_from(struct kernfs_node *aux_from[], int aux_from_size) {
  for(int i = 0; i < aux_from_size; i++) 
    if(aux_from[i])
      free(aux_from[i]);
}

struct kernfs_node *_allocate_to(int length, struct kernfs_node *aux_to[]) {
  struct kernfs_node *walker = (struct kernfs_node *)malloc(sizeof(struct kernfs_node));

  aux_to[0] = walker;
  walker->parent = NULL;

  struct kernfs_node *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct kernfs_node *)malloc(sizeof(struct kernfs_node));
    walker = walker->parent;
    aux_to[i] = walker;
    walker->parent = NULL;
  }

  return head;
}

void _delete_to(struct kernfs_node *aux_to[], int aux_to_size) {
  for(int i = 0; i < aux_to_size; i++) 
    if(aux_to[i])
      free(aux_to[i]);
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
          struct kernfs_node * aux_from[1];
          struct kernfs_node * from = _allocate_from(1, aux_from);
          struct kernfs_node * aux_to[1];
          struct kernfs_node * to = _allocate_to(1, aux_to);
          unsigned long benchRet = kernfs_depth(from,to);
          printf("%lu\n", benchRet); 
          _delete_from(aux_from, 1);
          _delete_to(aux_to, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
