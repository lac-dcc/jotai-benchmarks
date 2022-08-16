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
struct sway_container {struct sway_container* parent; } ;

/* Variables and functions */

bool container_has_ancestor(struct sway_container *descendant,
		struct sway_container *ancestor) {
	while (descendant) {
		descendant = descendant->parent;
		if (descendant == ancestor) {
			return true;
		}
	}
	return false;
}


// ------------------------------------------------------------------------- //

struct sway_container *_allocate_descendant(int length, struct sway_container *aux_descendant[]) {
  struct sway_container *walker = (struct sway_container *)malloc(sizeof(struct sway_container));

  aux_descendant[0] = walker;
  walker->parent = NULL;

  struct sway_container *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct sway_container *)malloc(sizeof(struct sway_container));
    walker = walker->parent;
    aux_descendant[i] = walker;
    walker->parent = NULL;
  }

  return head;
}

void _delete_descendant(struct sway_container *aux_descendant[], int aux_descendant_size) {
  for(int i = 0; i < aux_descendant_size; i++) 
    if(aux_descendant[i])
      free(aux_descendant[i]);
}

struct sway_container *_allocate_ancestor(int length, struct sway_container *aux_ancestor[]) {
  struct sway_container *walker = (struct sway_container *)malloc(sizeof(struct sway_container));

  aux_ancestor[0] = walker;
  walker->parent = NULL;

  struct sway_container *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct sway_container *)malloc(sizeof(struct sway_container));
    walker = walker->parent;
    aux_ancestor[i] = walker;
    walker->parent = NULL;
  }

  return head;
}

void _delete_ancestor(struct sway_container *aux_ancestor[], int aux_ancestor_size) {
  for(int i = 0; i < aux_ancestor_size; i++) 
    if(aux_ancestor[i])
      free(aux_ancestor[i]);
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
          struct sway_container * aux_descendant[1];
          struct sway_container * descendant = _allocate_descendant(1, aux_descendant);
          struct sway_container * aux_ancestor[1];
          struct sway_container * ancestor = _allocate_ancestor(1, aux_ancestor);
          int benchRet = container_has_ancestor(descendant,ancestor);
          printf("%d\n", benchRet); 
          _delete_descendant(aux_descendant, 1);
          _delete_ancestor(aux_ancestor, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
