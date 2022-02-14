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

struct cbq_class *_allocate_this(int length) {
  struct cbq_class *head = (struct cbq_class *)malloc(sizeof(struct cbq_class));

  head->level = rand();
  head->children = NULL;
  head->sibling = NULL;
  head->tparent = NULL;

  struct cbq_class *walker = head;
  for(int i = 1; i < length; i++) {
    walker->children = (struct cbq_class *)malloc(sizeof(struct cbq_class));
    walker = walker->children;
    walker->sibling = (struct cbq_class *)malloc(sizeof(struct cbq_class));
    walker = walker->sibling;
    walker->tparent = (struct cbq_class *)malloc(sizeof(struct cbq_class));
    walker = walker->tparent;
    walker->level = rand();
    walker->children = NULL;
    walker->sibling = NULL;
    walker->tparent = NULL;
  }

  return head;
}

void _delete_this(struct cbq_class * head) {
  if(head->children != NULL) _delete_this(head->children);
  if(head->sibling != NULL) _delete_this(head->sibling);
  if(head->tparent != NULL) _delete_this(head->tparent);
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
          struct cbq_class * this = _allocate_this(1);
          cbq_adjust_levels(this);
          _delete_this(this);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
