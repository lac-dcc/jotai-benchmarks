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

struct resource *_allocate_res(int length, struct resource *aux_res[]) {
  struct resource *walker = (struct resource *)malloc(sizeof(struct resource));

  aux_res[0] = walker;
walker->start = ((-2 * (next_i()%2)) + 1) * next_i();
walker->end = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->sibling = NULL;
  walker->child = NULL;
  walker->parent = NULL;

  struct resource *head = walker;
  for(int i = 1; i < length; i++) {
    walker->sibling = (struct resource *)malloc(sizeof(struct resource));
    walker = walker->sibling;
    aux_res[i] = walker;
    walker->child = (struct resource *)malloc(sizeof(struct resource));
    walker = walker->child;
    aux_res[i] = walker;
    walker->parent = (struct resource *)malloc(sizeof(struct resource));
    walker = walker->parent;
    aux_res[i] = walker;
walker->start = ((-2 * (next_i()%2)) + 1) * next_i();
walker->end = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->sibling = NULL;
    walker->child = NULL;
    walker->parent = NULL;
  }

  return head;
}

void _delete_res(struct resource *aux_res[], int aux_res_size) {
  for(int i = 0; i < aux_res_size; i++) 
    if(aux_res[i])
      free(aux_res[i]);
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
          long start = 100;
          long size = 100;
          struct resource * aux_res[1];
          struct resource * res = _allocate_res(1, aux_res);
          int benchRet = __adjust_resource(res,start,size);
          printf("%d\n", benchRet); 
          _delete_res(aux_res, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
