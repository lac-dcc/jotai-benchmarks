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
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef  TYPE_1__ bspbrush_t ;

/* Variables and functions */

bspbrush_t *AddBrushListToTail (bspbrush_t *list, bspbrush_t *tail)
{
	bspbrush_t	*walk, *next;

	for (walk=list ; walk ; walk=next)
	{	// add to end of list
		next = walk->next;
		walk->next = NULL;
		tail->next = walk;
		tail = walk;
	} //end for
	return tail;
}


// ------------------------------------------------------------------------- //

struct TYPE_5__ *_allocate_list(int length, struct TYPE_5__ *aux_list[]) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_list[0] = walker;
  walker->next = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->next;
    aux_list[i] = walker;
    walker->next = NULL;
  }

  return head;
}

void _delete_list(struct TYPE_5__ *aux_list[], int aux_list_size) {
  for(int i = 0; i < aux_list_size; i++) 
    if(aux_list[i])
      free(aux_list[i]);
}

struct TYPE_5__ *_allocate_tail(int length, struct TYPE_5__ *aux_tail[]) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_tail[0] = walker;
  walker->next = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->next;
    aux_tail[i] = walker;
    walker->next = NULL;
  }

  return head;
}

void _delete_tail(struct TYPE_5__ *aux_tail[], int aux_tail_size) {
  for(int i = 0; i < aux_tail_size; i++) 
    if(aux_tail[i])
      free(aux_tail[i]);
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
          struct TYPE_5__ * aux_list[1];
          struct TYPE_5__ * list = _allocate_list(1, aux_list);
          struct TYPE_5__ * aux_tail[1];
          struct TYPE_5__ * tail = _allocate_tail(1, aux_tail);
          struct TYPE_5__ * benchRet = AddBrushListToTail(list,tail);
          _delete_list(aux_list, 1);
          _delete_tail(aux_tail, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
