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
struct sparsebit {int dummy; } ;
struct node {struct node* parent; struct node* right; struct node* left; } ;

/* Variables and functions */

__attribute__((used)) static struct node *node_next(struct sparsebit *s, struct node *np)
{
	struct node *nodep = np;

	/*
	 * If current node has a right child, next node is the left-most
	 * of the right child.
	 */
	if (nodep->right) {
		for (nodep = nodep->right; nodep->left; nodep = nodep->left)
			;
		return nodep;
	}

	/*
	 * No right child.  Go up until node is left child of a parent.
	 * That parent is then the next node.
	 */
	while (nodep->parent && nodep == nodep->parent->right)
		nodep = nodep->parent;

	return nodep->parent;
}


// ------------------------------------------------------------------------- //

struct node *_allocate_np(int length) {
  struct node *head = (struct node *)malloc(sizeof(struct node));

  head->parent = NULL;
  head->right = NULL;
  head->left = NULL;

  struct node *walker = head;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct node *)malloc(sizeof(struct node));
    walker = walker->parent;
    walker->right = (struct node *)malloc(sizeof(struct node));
    walker = walker->right;
    walker->left = (struct node *)malloc(sizeof(struct node));
    walker = walker->left;
    walker->parent = NULL;
    walker->right = NULL;
    walker->left = NULL;
  }

  return head;
}

void _delete_np(struct node * head) {
  if(head->parent != NULL) _delete_np(head->parent);
  if(head->right != NULL) _delete_np(head->right);
  if(head->left != NULL) _delete_np(head->left);
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
          int _len_s0 = 1;
          struct sparsebit * s = (struct sparsebit *) malloc(_len_s0*sizeof(struct sparsebit));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct node * np = _allocate_np(1);
          struct node * benchRet = node_next(s,np);
          printf("{{struct}} %p\n", &benchRet); 
          free(s);
          _delete_np(np);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
