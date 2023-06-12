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
       0            linked\n\
       1            empty\n\
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


    // linked
    case 0:
    {
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 140023
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 60014
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 60014
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 60014
          // ------------------------------- 
          // static_instructions_Ofast : 22
          // dynamic_instructions_Ofast : 60014
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 60014
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 60014
          // ------------------------------- 

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


    // empty
    case 1:
    {
          // static_instructions_O0 : 37
          // dynamic_instructions_O0 : 37
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

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

    default:
        usage();
        break;

    }

    return 0;
}
