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
struct resource {scalar_t__ start; scalar_t__ end; struct resource* sibling; struct resource* child; struct resource* parent; } ;
typedef  scalar_t__ resource_size_t ;

/* Variables and functions */
 int EBUSY ; 

__attribute__((used)) static int __adjust_resource(struct resource *res, resource_size_t start,
				resource_size_t size)
{
	struct resource *tmp, *parent = res->parent;
	resource_size_t end = start + size - 1;
	int result = -EBUSY;

	if (!parent)
		goto skip;

	if ((start < parent->start) || (end > parent->end))
		goto out;

	if (res->sibling && (res->sibling->start <= end))
		goto out;

	tmp = parent->child;
	if (tmp != res) {
		while (tmp->sibling != res)
			tmp = tmp->sibling;
		if (start <= tmp->end)
			goto out;
	}

skip:
	for (tmp = res->child; tmp; tmp = tmp->sibling)
		if ((tmp->start < start) || (tmp->end > end))
			goto out;

	res->start = start;
	res->end = end;
	result = 0;

 out:
	return result;
}


// ------------------------------------------------------------------------- //

struct resource *_allocate_res(int length) {
  struct resource *head = (struct resource *)malloc(sizeof(struct resource));

  head->start = rand();
  head->end = rand();
  head->sibling = NULL;
  head->child = NULL;
  head->parent = NULL;

  struct resource *walker = head;
  for(int i = 1; i < length; i++) {
    walker->sibling = (struct resource *)malloc(sizeof(struct resource));
    walker = walker->sibling;
    walker->child = (struct resource *)malloc(sizeof(struct resource));
    walker = walker->child;
    walker->parent = (struct resource *)malloc(sizeof(struct resource));
    walker = walker->parent;
    walker->start = rand();
    walker->end = rand();
    walker->sibling = NULL;
    walker->child = NULL;
    walker->parent = NULL;
  }

  return head;
}

void _delete_res(struct resource * head) {
  if(head->sibling != NULL) _delete_res(head->sibling);
  if(head->child != NULL) _delete_res(head->child);
  if(head->parent != NULL) _delete_res(head->parent);
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
          long start = 255;
          long size = 255;
          struct resource * res = _allocate_res(1);
          int benchRet = __adjust_resource(res,start,size);
          printf("%d\n", benchRet); 
          _delete_res(res);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
