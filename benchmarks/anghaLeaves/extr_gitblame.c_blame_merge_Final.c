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
       0            int-bounds\n\
       1            linked\n\
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
struct blame_entry {scalar_t__ s_lno; struct blame_entry* next; } ;

/* Variables and functions */

__attribute__((used)) static struct blame_entry *blame_merge(struct blame_entry *list1,
				       struct blame_entry *list2)
{
	struct blame_entry *p1 = list1, *p2 = list2,
		**tail = &list1;

	if (!p1)
		return p2;
	if (!p2)
		return p1;

	if (p1->s_lno <= p2->s_lno) {
		do {
			tail = &p1->next;
			if ((p1 = *tail) == NULL) {
				*tail = p2;
				return list1;
			}
		} while (p1->s_lno <= p2->s_lno);
	}
	for (;;) {
		*tail = p2;
		do {
			tail = &p2->next;
			if ((p2 = *tail) == NULL)  {
				*tail = p1;
				return list1;
			}
		} while (p1->s_lno > p2->s_lno);
		*tail = p1;
		do {
			tail = &p1->next;
			if ((p1 = *tail) == NULL) {
				*tail = p2;
				return list1;
			}
		} while (p1->s_lno <= p2->s_lno);
	}
}


// ------------------------------------------------------------------------- //

struct blame_entry *_allocate_list1(int length, struct blame_entry *aux_list1[]) {
  struct blame_entry *walker = (struct blame_entry *)malloc(sizeof(struct blame_entry));

  aux_list1[0] = walker;
walker->s_lno = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->next = NULL;

  struct blame_entry *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct blame_entry *)malloc(sizeof(struct blame_entry));
    walker = walker->next;
    aux_list1[i] = walker;
walker->s_lno = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->next = NULL;
  }

  return head;
}

void _delete_list1(struct blame_entry *aux_list1[], int aux_list1_size) {
  for(int i = 0; i < aux_list1_size; i++) 
    if(aux_list1[i])
      free(aux_list1[i]);
}

struct blame_entry *_allocate_list2(int length, struct blame_entry *aux_list2[]) {
  struct blame_entry *walker = (struct blame_entry *)malloc(sizeof(struct blame_entry));

  aux_list2[0] = walker;
walker->s_lno = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->next = NULL;

  struct blame_entry *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct blame_entry *)malloc(sizeof(struct blame_entry));
    walker = walker->next;
    aux_list2[i] = walker;
walker->s_lno = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->next = NULL;
  }

  return head;
}

void _delete_list2(struct blame_entry *aux_list2[], int aux_list2_size) {
  for(int i = 0; i < aux_list2_size; i++) 
    if(aux_list2[i])
      free(aux_list2[i]);
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
          struct blame_entry * aux_list1[1];
          struct blame_entry * list1 = _allocate_list1(1, aux_list1);
          struct blame_entry * aux_list2[1];
          struct blame_entry * list2 = _allocate_list2(1, aux_list2);
          struct blame_entry * benchRet = blame_merge(list1,list2);
          printf("%ld\n", (*benchRet).s_lno);
          _delete_list1(aux_list1, 1);
          _delete_list2(aux_list2, 1);
        
        break;
    }
    // linked
    case 1:
    {
          struct blame_entry * aux_list1[10000];
          struct blame_entry * list1 = _allocate_list1(10000, aux_list1);
          struct blame_entry * aux_list2[10000];
          struct blame_entry * list2 = _allocate_list2(10000, aux_list2);
          struct blame_entry * benchRet = blame_merge(list1,list2);
          printf("%ld\n", (*benchRet).s_lno);
          _delete_list1(aux_list1, 10000);
          _delete_list2(aux_list2, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
