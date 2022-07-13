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

/* Type definitions */
struct sym_quehead {struct sym_quehead* blink; struct sym_quehead* flink; } ;

/* Variables and functions */

__attribute__((used)) static inline void sym_que_move(struct sym_quehead *orig,
	struct sym_quehead *dest)
{
	struct sym_quehead *first, *last;

	first = orig->flink;
	if (first != orig) {
		first->blink = dest;
		dest->flink  = first;
		last = orig->blink;
		last->flink  = dest;
		dest->blink  = last;
		orig->flink  = orig;
		orig->blink  = orig;
	} else {
		dest->flink  = dest;
		dest->blink  = dest;
	}
}


// ------------------------------------------------------------------------- //

struct sym_quehead *_allocateBinTree_orig(int length, struct sym_quehead *aux_tree_orig[], int *counter_orig) {
  if(length == 0)
    return NULL;
  struct sym_quehead *walker = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));

  aux_tree_orig[*counter_orig] = walker;
  (*counter_orig)++;
  walker->blink = _allocateBinTree_orig(length - 1, aux_tree_orig, counter_orig);
  walker->flink = _allocateBinTree_orig(length - 1, aux_tree_orig, counter_orig);
  return walker;
}

void _deleteBinTree_orig(struct sym_quehead *aux_tree_orig[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_orig[i])
      free(aux_tree_orig[i]);
}

struct sym_quehead *_allocateBinTree_dest(int length, struct sym_quehead *aux_tree_dest[], int *counter_dest) {
  if(length == 0)
    return NULL;
  struct sym_quehead *walker = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));

  aux_tree_dest[*counter_dest] = walker;
  (*counter_dest)++;
  walker->blink = _allocateBinTree_dest(length - 1, aux_tree_dest, counter_dest);
  walker->flink = _allocateBinTree_dest(length - 1, aux_tree_dest, counter_dest);
  return walker;
}

void _deleteBinTree_dest(struct sym_quehead *aux_tree_dest[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_dest[i])
      free(aux_tree_dest[i]);
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
          int counter_orig= 0;
          struct sym_quehead *  aux_tree_orig[1023];
          struct sym_quehead * orig = _allocateBinTree_orig(10, aux_tree_orig, &counter_orig);
          int counter_dest= 0;
          struct sym_quehead *  aux_tree_dest[1023];
          struct sym_quehead * dest = _allocateBinTree_dest(10, aux_tree_dest, &counter_dest);
          sym_que_move(orig,dest);
          _deleteBinTree_orig(aux_tree_orig);
          _deleteBinTree_dest(aux_tree_dest);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
