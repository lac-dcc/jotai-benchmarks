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
       0            bintree\n\
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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* prev; } ;
typedef  TYPE_1__ olist_t ;

/* Variables and functions */

__attribute__((used)) static inline void online_list_add_after (olist_t *where, olist_t *what) {
  what->prev = where;
  what->next = where->next;
  what->next->prev = what;
  where->next = what;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocateBinTree_where(int length, struct TYPE_4__ *aux_tree_where[], int *counter_where) {
  if(length == 0)
    return NULL;
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_tree_where[*counter_where] = walker;
  (*counter_where)++;
  walker->next = _allocateBinTree_where(length - 1, aux_tree_where, counter_where);
  walker->prev = _allocateBinTree_where(length - 1, aux_tree_where, counter_where);
  return walker;
}

void _deleteBinTree_where(struct TYPE_4__ *aux_tree_where[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_where[i])
      free(aux_tree_where[i]);
}

struct TYPE_4__ *_allocateBinTree_what(int length, struct TYPE_4__ *aux_tree_what[], int *counter_what) {
  if(length == 0)
    return NULL;
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_tree_what[*counter_what] = walker;
  (*counter_what)++;
  walker->next = _allocateBinTree_what(length - 1, aux_tree_what, counter_what);
  walker->prev = _allocateBinTree_what(length - 1, aux_tree_what, counter_what);
  return walker;
}

void _deleteBinTree_what(struct TYPE_4__ *aux_tree_what[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_what[i])
      free(aux_tree_what[i]);
}




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // bintree
    case 0:
    {
          int counter_where= 0;
          struct TYPE_4__ *  aux_tree_where[1023];
          struct TYPE_4__ * where = _allocateBinTree_where(10, aux_tree_where, &counter_where);
          int counter_what= 0;
          struct TYPE_4__ *  aux_tree_what[1023];
          struct TYPE_4__ * what = _allocateBinTree_what(10, aux_tree_what, &counter_what);
          online_list_add_after(where,what);
          _deleteBinTree_where(aux_tree_where);
          _deleteBinTree_what(aux_tree_what);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
