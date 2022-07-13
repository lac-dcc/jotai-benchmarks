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
       1            dlinked\n\
       2            bintree\n\
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
struct list_head {struct list_head* next; struct list_head* prev; } ;

/* Variables and functions */

__attribute__((used)) static __inline void list_init(struct list_head *entry)
{
	entry->prev = entry->next = entry;
}


// ------------------------------------------------------------------------- //

struct list_head *_allocate_entry(int length, struct list_head *aux_entry[]) {
  struct list_head *walker = (struct list_head *)malloc(sizeof(struct list_head));

  aux_entry[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct list_head *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct list_head *)malloc(sizeof(struct list_head));
    walker = walker->next;
    aux_entry[i] = walker;
    walker->prev = (struct list_head *)malloc(sizeof(struct list_head));
    walker = walker->prev;
    aux_entry[i] = walker;
    walker->next = NULL;
    walker->prev = NULL;
  }

  return head;
}

void _delete_entry(struct list_head *aux_entry[], int aux_entry_size) {
  for(int i = 0; i < aux_entry_size; i++) 
    if(aux_entry[i])
      free(aux_entry[i]);
}

struct list_head *_allocate_Dlinked_entry(int length, struct list_head *aux_dlinked_entry[] ) {
  struct list_head *walker = (struct list_head *)malloc(sizeof(struct list_head));

  aux_dlinked_entry[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct list_head *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct list_head *)malloc(sizeof(struct list_head));
    walker->prev->next = walker;
    walker = walker->prev;
    aux_dlinked_entry[i] = walker;
    if (i == (length - 1)) 
      walker->prev = NULL;  }

  return head;
}

void _delete_Dlinked_entry(struct list_head *aux_dlinked_entry[], int aux_dlinked_entry_size) {
  for(int i = 0; i < aux_dlinked_entry_size; i++) 
    if(aux_dlinked_entry[i])
      free(aux_dlinked_entry[i]);
}

struct list_head *_allocateBinTree_entry(int length, struct list_head *aux_tree_entry[], int *counter_entry) {
  if(length == 0)
    return NULL;
  struct list_head *walker = (struct list_head *)malloc(sizeof(struct list_head));

  aux_tree_entry[*counter_entry] = walker;
  (*counter_entry)++;
  walker->next = _allocateBinTree_entry(length - 1, aux_tree_entry, counter_entry);
  walker->prev = _allocateBinTree_entry(length - 1, aux_tree_entry, counter_entry);
  return walker;
}

void _deleteBinTree_entry(struct list_head *aux_tree_entry[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_entry[i])
      free(aux_tree_entry[i]);
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
          struct list_head * aux_entry[1];
          struct list_head * entry = _allocate_entry(1, aux_entry);
          list_init(entry);
          _delete_entry(aux_entry, 1);
        
        break;
    }
    // dlinked
    case 1:
    {
          struct list_head * aux_dlinked_entry[10000];
          struct list_head * entry = _allocate_Dlinked_entry(10000, aux_dlinked_entry);
          list_init(entry);
          _delete_Dlinked_entry(aux_dlinked_entry, 10000);
        
        break;
    }
    // bintree
    case 2:
    {
          int counter_entry= 0;
          struct list_head *  aux_tree_entry[1023];
          struct list_head * entry = _allocateBinTree_entry(10, aux_tree_entry, &counter_entry);
          list_init(entry);
          _deleteBinTree_entry(aux_tree_entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
