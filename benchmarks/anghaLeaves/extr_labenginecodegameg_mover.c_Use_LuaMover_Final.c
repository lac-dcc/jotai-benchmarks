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
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int /*<<< orphan*/  think; int /*<<< orphan*/  nextthink; struct TYPE_6__* activator; scalar_t__ client; } ;
typedef  TYPE_1__ gentity_t ;
struct TYPE_7__ {int /*<<< orphan*/  time; } ;

/* Variables and functions */
 int /*<<< orphan*/  Think_LuaMover ; 
 TYPE_2__ level ; 

void Use_LuaMover( gentity_t *ent, gentity_t *other, gentity_t *activator ) {
	if (activator->client) {
		ent->activator = activator;
		ent->nextthink = level.time;
		ent->think = Think_LuaMover;
	}
}


// ------------------------------------------------------------------------- //

struct TYPE_6__ *_allocate_ent(int length, struct TYPE_6__ *aux_ent[]) {
  struct TYPE_6__ *walker = (struct TYPE_6__ *)malloc(sizeof(struct TYPE_6__));

  aux_ent[0] = walker;
walker->think = ((-2 * (next_i()%2)) + 1) * next_i();
walker->nextthink = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->activator = NULL;
walker->client = ((-2 * (next_i()%2)) + 1) * next_i();

  struct TYPE_6__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->activator = (struct TYPE_6__ *)malloc(sizeof(struct TYPE_6__));
    walker = walker->activator;
    aux_ent[i] = walker;
walker->think = ((-2 * (next_i()%2)) + 1) * next_i();
walker->nextthink = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->activator = NULL;
walker->client = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  return head;
}

void _delete_ent(struct TYPE_6__ *aux_ent[], int aux_ent_size) {
  for(int i = 0; i < aux_ent_size; i++) 
    if(aux_ent[i])
      free(aux_ent[i]);
}

struct TYPE_6__ *_allocate_other(int length, struct TYPE_6__ *aux_other[]) {
  struct TYPE_6__ *walker = (struct TYPE_6__ *)malloc(sizeof(struct TYPE_6__));

  aux_other[0] = walker;
walker->think = ((-2 * (next_i()%2)) + 1) * next_i();
walker->nextthink = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->activator = NULL;
walker->client = ((-2 * (next_i()%2)) + 1) * next_i();

  struct TYPE_6__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->activator = (struct TYPE_6__ *)malloc(sizeof(struct TYPE_6__));
    walker = walker->activator;
    aux_other[i] = walker;
walker->think = ((-2 * (next_i()%2)) + 1) * next_i();
walker->nextthink = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->activator = NULL;
walker->client = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  return head;
}

void _delete_other(struct TYPE_6__ *aux_other[], int aux_other_size) {
  for(int i = 0; i < aux_other_size; i++) 
    if(aux_other[i])
      free(aux_other[i]);
}

struct TYPE_6__ *_allocate_activator(int length, struct TYPE_6__ *aux_activator[]) {
  struct TYPE_6__ *walker = (struct TYPE_6__ *)malloc(sizeof(struct TYPE_6__));

  aux_activator[0] = walker;
walker->think = ((-2 * (next_i()%2)) + 1) * next_i();
walker->nextthink = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->activator = NULL;
walker->client = ((-2 * (next_i()%2)) + 1) * next_i();

  struct TYPE_6__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->activator = (struct TYPE_6__ *)malloc(sizeof(struct TYPE_6__));
    walker = walker->activator;
    aux_activator[i] = walker;
walker->think = ((-2 * (next_i()%2)) + 1) * next_i();
walker->nextthink = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->activator = NULL;
walker->client = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  return head;
}

void _delete_activator(struct TYPE_6__ *aux_activator[], int aux_activator_size) {
  for(int i = 0; i < aux_activator_size; i++) 
    if(aux_activator[i])
      free(aux_activator[i]);
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
          struct TYPE_6__ * aux_ent[1];
          struct TYPE_6__ * ent = _allocate_ent(1, aux_ent);
          struct TYPE_6__ * aux_other[1];
          struct TYPE_6__ * other = _allocate_other(1, aux_other);
          struct TYPE_6__ * aux_activator[1];
          struct TYPE_6__ * activator = _allocate_activator(1, aux_activator);
          Use_LuaMover(ent,other,activator);
          _delete_ent(aux_ent, 1);
          _delete_other(aux_other, 1);
          _delete_activator(aux_activator, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
