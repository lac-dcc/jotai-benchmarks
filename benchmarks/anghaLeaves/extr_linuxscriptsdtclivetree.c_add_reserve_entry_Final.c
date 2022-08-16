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
struct reserve_info {struct reserve_info* next; } ;

/* Variables and functions */

struct reserve_info *add_reserve_entry(struct reserve_info *list,
				      struct reserve_info *new)
{
	struct reserve_info *last;

	new->next = NULL;

	if (! list)
		return new;

	for (last = list; last->next; last = last->next)
		;

	last->next = new;

	return list;
}


// ------------------------------------------------------------------------- //

struct reserve_info *_allocate_list(int length, struct reserve_info *aux_list[]) {
  struct reserve_info *walker = (struct reserve_info *)malloc(sizeof(struct reserve_info));

  aux_list[0] = walker;
  walker->next = NULL;

  struct reserve_info *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct reserve_info *)malloc(sizeof(struct reserve_info));
    walker = walker->next;
    aux_list[i] = walker;
    walker->next = NULL;
  }

  return head;
}

void _delete_list(struct reserve_info *aux_list[], int aux_list_size) {
  for(int i = 0; i < aux_list_size; i++) 
    if(aux_list[i])
      free(aux_list[i]);
}

struct reserve_info *_allocate_new(int length, struct reserve_info *aux_new[]) {
  struct reserve_info *walker = (struct reserve_info *)malloc(sizeof(struct reserve_info));

  aux_new[0] = walker;
  walker->next = NULL;

  struct reserve_info *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct reserve_info *)malloc(sizeof(struct reserve_info));
    walker = walker->next;
    aux_new[i] = walker;
    walker->next = NULL;
  }

  return head;
}

void _delete_new(struct reserve_info *aux_new[], int aux_new_size) {
  for(int i = 0; i < aux_new_size; i++) 
    if(aux_new[i])
      free(aux_new[i]);
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
          struct reserve_info * aux_list[1];
          struct reserve_info * list = _allocate_list(1, aux_list);
          struct reserve_info * aux_new[1];
          struct reserve_info * new = _allocate_new(1, aux_new);
          struct reserve_info * benchRet = add_reserve_entry(list,new);
          _delete_list(aux_list, 1);
          _delete_new(aux_new, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
