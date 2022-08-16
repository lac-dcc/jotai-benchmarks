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
struct spin_wait {int node_id; struct spin_wait* prev; } ;

/* Variables and functions */
 int _Q_LOCK_CPU_MASK ; 
 int _Q_TAIL_CPU_OFFSET ; 

__attribute__((used)) static inline int arch_spin_yield_target(int lock, struct spin_wait *node)
{
	if (lock & _Q_LOCK_CPU_MASK)
		return lock & _Q_LOCK_CPU_MASK;
	if (node == NULL || node->prev == NULL)
		return 0;	/* 0 -> no target cpu */
	while (node->prev)
		node = node->prev;
	return node->node_id >> _Q_TAIL_CPU_OFFSET;
}


// ------------------------------------------------------------------------- //

struct spin_wait *_allocate_node(int length, struct spin_wait *aux_node[]) {
  struct spin_wait *walker = (struct spin_wait *)malloc(sizeof(struct spin_wait));

  aux_node[0] = walker;
walker->node_id = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->prev = NULL;

  struct spin_wait *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct spin_wait *)malloc(sizeof(struct spin_wait));
    walker = walker->prev;
    aux_node[i] = walker;
walker->node_id = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->prev = NULL;
  }

  return head;
}

void _delete_node(struct spin_wait *aux_node[], int aux_node_size) {
  for(int i = 0; i < aux_node_size; i++) 
    if(aux_node[i])
      free(aux_node[i]);
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
          int lock = 100;
          struct spin_wait * aux_node[1];
          struct spin_wait * node = _allocate_node(1, aux_node);
          int benchRet = arch_spin_yield_target(lock,node);
          printf("%d\n", benchRet); 
          _delete_node(aux_node, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
