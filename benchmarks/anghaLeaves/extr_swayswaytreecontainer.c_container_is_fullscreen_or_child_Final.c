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
struct sway_container {struct sway_container* parent; scalar_t__ fullscreen_mode; } ;

/* Variables and functions */

bool container_is_fullscreen_or_child(struct sway_container *container) {
	do {
		if (container->fullscreen_mode) {
			return true;
		}
		container = container->parent;
	} while (container);

	return false;
}


// ------------------------------------------------------------------------- //

struct sway_container *_allocate_container(int length, struct sway_container *aux_container[]) {
  struct sway_container *walker = (struct sway_container *)malloc(sizeof(struct sway_container));

  aux_container[0] = walker;
  walker->parent = NULL;
walker->fullscreen_mode = ((-2 * (next_i()%2)) + 1) * next_i();

  struct sway_container *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct sway_container *)malloc(sizeof(struct sway_container));
    walker = walker->parent;
    aux_container[i] = walker;
    walker->parent = NULL;
walker->fullscreen_mode = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  return head;
}

void _delete_container(struct sway_container *aux_container[], int aux_container_size) {
  for(int i = 0; i < aux_container_size; i++) 
    if(aux_container[i])
      free(aux_container[i]);
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
          struct sway_container * aux_container[1];
          struct sway_container * container = _allocate_container(1, aux_container);
          int benchRet = container_is_fullscreen_or_child(container);
          printf("%d\n", benchRet); 
          _delete_container(aux_container, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
