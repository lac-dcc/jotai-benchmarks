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
struct list {struct list* prev; struct list* next; } ;

/* Variables and functions */

__attribute__((used)) static inline void
list_insert(struct list *link, struct list *new_link)
{
	new_link->prev		= link->prev;
	new_link->next		= link;
	new_link->prev->next	= new_link;
	new_link->next->prev	= new_link;
}

// ------------------------------------------------------------------------- //

struct list *_allocateBinTree_link(int length, struct list *aux_tree_link[], int *counter_link) {
  if(length == 0)
    return NULL;
  struct list *walker = (struct list *)malloc(sizeof(struct list));

  aux_tree_link[*counter_link] = walker;
  (*counter_link)++;
  walker->prev = _allocateBinTree_link(length - 1, aux_tree_link, counter_link);
  walker->next = _allocateBinTree_link(length - 1, aux_tree_link, counter_link);
  return walker;
}

void _deleteBinTree_link(struct list *aux_tree_link[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_link[i])
      free(aux_tree_link[i]);
}

struct list *_allocateBinTree_new_link(int length, struct list *aux_tree_new_link[], int *counter_new_link) {
  if(length == 0)
    return NULL;
  struct list *walker = (struct list *)malloc(sizeof(struct list));

  aux_tree_new_link[*counter_new_link] = walker;
  (*counter_new_link)++;
  walker->prev = _allocateBinTree_new_link(length - 1, aux_tree_new_link, counter_new_link);
  walker->next = _allocateBinTree_new_link(length - 1, aux_tree_new_link, counter_new_link);
  return walker;
}

void _deleteBinTree_new_link(struct list *aux_tree_new_link[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_new_link[i])
      free(aux_tree_new_link[i]);
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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int counter_link= 0;
          struct list *  aux_tree_link[1023];
          struct list * link = _allocateBinTree_link(10, aux_tree_link, &counter_link);
        
          int counter_new_link= 0;
          struct list *  aux_tree_new_link[1023];
          struct list * new_link = _allocateBinTree_new_link(10, aux_tree_new_link, &counter_new_link);
        
          list_insert(link,new_link);
          _deleteBinTree_link(aux_tree_link);
          _deleteBinTree_new_link(aux_tree_new_link);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
