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
struct cbq_class {int level; struct cbq_class* children; struct cbq_class* sibling; struct cbq_class* tparent; } ;

/* Variables and functions */

__attribute__((used)) static void cbq_adjust_levels(struct cbq_class *this)
{
	if (this == NULL)
		return;

	do {
		int level = 0;
		struct cbq_class *cl;

		cl = this->children;
		if (cl) {
			do {
				if (cl->level > level)
					level = cl->level;
			} while ((cl = cl->sibling) != this->children);
		}
		this->level = level + 1;
	} while ((this = this->tparent) != NULL);
}


// ------------------------------------------------------------------------- //

struct cbq_class *_allocate_this(int length, struct cbq_class *aux_this[]) {
  struct cbq_class *walker = (struct cbq_class *)malloc(sizeof(struct cbq_class));

  aux_this[0] = walker;
walker->level = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->children = NULL;
  walker->sibling = NULL;
  walker->tparent = NULL;

  struct cbq_class *head = walker;
  for(int i = 1; i < length; i++) {
    walker->children = (struct cbq_class *)malloc(sizeof(struct cbq_class));
    walker = walker->children;
    aux_this[i] = walker;
    walker->sibling = (struct cbq_class *)malloc(sizeof(struct cbq_class));
    walker = walker->sibling;
    aux_this[i] = walker;
    walker->tparent = (struct cbq_class *)malloc(sizeof(struct cbq_class));
    walker = walker->tparent;
    aux_this[i] = walker;
walker->level = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->children = NULL;
    walker->sibling = NULL;
    walker->tparent = NULL;
  }

  return head;
}

void _delete_this(struct cbq_class *aux_this[], int aux_this_size) {
  for(int i = 0; i < aux_this_size; i++) 
    if(aux_this[i])
      free(aux_this[i]);
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
          struct cbq_class * aux_this[1];
          struct cbq_class * this = _allocate_this(1, aux_this);
          cbq_adjust_levels(this);
          _delete_this(aux_this, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
