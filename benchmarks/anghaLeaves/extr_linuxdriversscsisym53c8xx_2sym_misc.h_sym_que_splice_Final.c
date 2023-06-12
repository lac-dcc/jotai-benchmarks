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
       0            bintree\n\
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
struct sym_quehead {struct sym_quehead* blink; struct sym_quehead* flink; } ;

/* Variables and functions */

__attribute__((used)) static inline void sym_que_splice(struct sym_quehead *list,
	struct sym_quehead *head)
{
	struct sym_quehead *first = list->flink;

	if (first != list) {
		struct sym_quehead *last = list->blink;
		struct sym_quehead *at   = head->flink;

		first->blink = head;
		head->flink  = first;

		last->flink = at;
		at->blink   = last;
	}
}

// ------------------------------------------------------------------------- //

struct sym_quehead *_allocateBinTree_list(int length, struct sym_quehead *aux_tree_list[], int *counter_list) {
  if(length == 0)
    return NULL;
  struct sym_quehead *walker = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));

  aux_tree_list[*counter_list] = walker;
  (*counter_list)++;
  walker->blink = _allocateBinTree_list(length - 1, aux_tree_list, counter_list);
  walker->flink = _allocateBinTree_list(length - 1, aux_tree_list, counter_list);
  return walker;
}

void _deleteBinTree_list(struct sym_quehead *aux_tree_list[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_list[i])
      free(aux_tree_list[i]);
}

struct sym_quehead *_allocateBinTree_head(int length, struct sym_quehead *aux_tree_head[], int *counter_head) {
  if(length == 0)
    return NULL;
  struct sym_quehead *walker = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));

  aux_tree_head[*counter_head] = walker;
  (*counter_head)++;
  walker->blink = _allocateBinTree_head(length - 1, aux_tree_head, counter_head);
  walker->flink = _allocateBinTree_head(length - 1, aux_tree_head, counter_head);
  return walker;
}

void _deleteBinTree_head(struct sym_quehead *aux_tree_head[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_head[i])
      free(aux_tree_head[i]);
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
          int counter_list= 0;
          struct sym_quehead *  aux_tree_list[1023];
          struct sym_quehead * list = _allocateBinTree_list(10, aux_tree_list, &counter_list);
        
          int counter_head= 0;
          struct sym_quehead *  aux_tree_head[1023];
          struct sym_quehead * head = _allocateBinTree_head(10, aux_tree_head, &counter_head);
        
          sym_que_splice(list,head);
          _deleteBinTree_list(aux_tree_list);
          _deleteBinTree_head(aux_tree_head);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
