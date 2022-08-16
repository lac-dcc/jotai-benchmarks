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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/  write; struct TYPE_3__* parent; } ;
typedef  TYPE_1__ tree ;

/* Variables and functions */
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static void add_parents_to_cache(tree* t) {
    while (t->parent) {
        t = t->parent;
        t->write = TRUE;
    }
}


// ------------------------------------------------------------------------- //

struct TYPE_3__ *_allocate_t(int length, struct TYPE_3__ *aux_t[]) {
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_t[0] = walker;
walker->write = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->parent = NULL;

  struct TYPE_3__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->parent;
    aux_t[i] = walker;
walker->write = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->parent = NULL;
  }

  return head;
}

void _delete_t(struct TYPE_3__ *aux_t[], int aux_t_size) {
  for(int i = 0; i < aux_t_size; i++) 
    if(aux_t[i])
      free(aux_t[i]);
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
          struct TYPE_3__ * aux_t[1];
          struct TYPE_3__ * t = _allocate_t(1, aux_t);
          add_parents_to_cache(t);
          _delete_t(aux_t, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
