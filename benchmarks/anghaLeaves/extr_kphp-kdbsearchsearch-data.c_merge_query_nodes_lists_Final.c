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
struct query_nodes_list {struct query_nodes_list* next; } ;

/* Variables and functions */

__attribute__((used)) static void merge_query_nodes_lists (struct query_nodes_list *p, struct query_nodes_list *q) {
  while (p->next) {
    p = p->next;
  }
  p->next = q;
}


// ------------------------------------------------------------------------- //

struct query_nodes_list *_allocate_p(int length, struct query_nodes_list *aux_p[]) {
  struct query_nodes_list *walker = (struct query_nodes_list *)malloc(sizeof(struct query_nodes_list));

  aux_p[0] = walker;
  walker->next = NULL;

  struct query_nodes_list *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct query_nodes_list *)malloc(sizeof(struct query_nodes_list));
    walker = walker->next;
    aux_p[i] = walker;
    walker->next = NULL;
  }

  return head;
}

void _delete_p(struct query_nodes_list *aux_p[], int aux_p_size) {
  for(int i = 0; i < aux_p_size; i++) 
    if(aux_p[i])
      free(aux_p[i]);
}

struct query_nodes_list *_allocate_q(int length, struct query_nodes_list *aux_q[]) {
  struct query_nodes_list *walker = (struct query_nodes_list *)malloc(sizeof(struct query_nodes_list));

  aux_q[0] = walker;
  walker->next = NULL;

  struct query_nodes_list *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct query_nodes_list *)malloc(sizeof(struct query_nodes_list));
    walker = walker->next;
    aux_q[i] = walker;
    walker->next = NULL;
  }

  return head;
}

void _delete_q(struct query_nodes_list *aux_q[], int aux_q_size) {
  for(int i = 0; i < aux_q_size; i++) 
    if(aux_q[i])
      free(aux_q[i]);
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
          struct query_nodes_list * aux_p[1];
          struct query_nodes_list * p = _allocate_p(1, aux_p);
          struct query_nodes_list * aux_q[1];
          struct query_nodes_list * q = _allocate_q(1, aux_q);
          merge_query_nodes_lists(p,q);
          _delete_p(aux_p, 1);
          _delete_q(aux_q, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
