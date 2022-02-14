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
struct iterator_stack_node {struct iterator_stack_node* prev; } ;

/* Variables and functions */
 struct iterator_stack_node* isn_free ; 

__attribute__((used)) static inline void free_stack_node (struct iterator_stack_node *S) {
  S->prev = isn_free;
  isn_free = S;
}


// ------------------------------------------------------------------------- //

struct iterator_stack_node *_allocate_S(int length) {
  struct iterator_stack_node *head = (struct iterator_stack_node *)malloc(sizeof(struct iterator_stack_node));

  head->prev = NULL;

  struct iterator_stack_node *walker = head;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct iterator_stack_node *)malloc(sizeof(struct iterator_stack_node));
    walker = walker->prev;
    walker->prev = NULL;
  }

  return head;
}

void _delete_S(struct iterator_stack_node * head) {
  if(head->prev != NULL) _delete_S(head->prev);
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
          struct iterator_stack_node * S = _allocate_S(1);
          free_stack_node(S);
          _delete_S(S);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
