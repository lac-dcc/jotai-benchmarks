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
struct sparsebit {int dummy; } ;
struct node {struct node* parent; struct node* left; struct node* right; } ;

/* Variables and functions */

__attribute__((used)) static struct node *node_prev(struct sparsebit *s, struct node *np)
{
	struct node *nodep = np;

	/*
	 * If current node has a left child, next node is the right-most
	 * of the left child.
	 */
	if (nodep->left) {
		for (nodep = nodep->left; nodep->right; nodep = nodep->right)
			;
		return (struct node *) nodep;
	}

	/*
	 * No left child.  Go up until node is right child of a parent.
	 * That parent is then the next node.
	 */
	while (nodep->parent && nodep == nodep->parent->left)
		nodep = nodep->parent;

	return (struct node *) nodep->parent;
}


// ------------------------------------------------------------------------- //

struct node *_allocate_np(int length, struct node *aux_np[]) {
  struct node *walker = (struct node *)malloc(sizeof(struct node));

  aux_np[0] = walker;
  walker->parent = NULL;
  walker->left = NULL;
  walker->right = NULL;

  struct node *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct node *)malloc(sizeof(struct node));
    walker = walker->parent;
    aux_np[i] = walker;
    walker->left = (struct node *)malloc(sizeof(struct node));
    walker = walker->left;
    aux_np[i] = walker;
    walker->right = (struct node *)malloc(sizeof(struct node));
    walker = walker->right;
    aux_np[i] = walker;
    walker->parent = NULL;
    walker->left = NULL;
    walker->right = NULL;
  }

  return head;
}

void _delete_np(struct node *aux_np[], int aux_np_size) {
  for(int i = 0; i < aux_np_size; i++) 
    if(aux_np[i])
      free(aux_np[i]);
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
          int _len_s0 = 1;
          struct sparsebit * s = (struct sparsebit *) malloc(_len_s0*sizeof(struct sparsebit));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct node * aux_np[1];
          struct node * np = _allocate_np(1, aux_np);
          struct node * benchRet = node_prev(s,np);
          free(s);
          _delete_np(aux_np, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
