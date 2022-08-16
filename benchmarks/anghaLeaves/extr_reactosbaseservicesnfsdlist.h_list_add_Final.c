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
struct list_entry {struct list_entry* prev; struct list_entry* next; } ;

/* Variables and functions */

__attribute__((used)) static void list_add(
    struct list_entry *entry,
    struct list_entry *prev,
    struct list_entry *next)
{
    /* assert(prev->next == next && next->prev == prev); */
    entry->prev = prev;
    entry->next = next;
    prev->next = entry;
    next->prev = entry;
}


// ------------------------------------------------------------------------- //

struct list_entry *_allocate_entry(int length, struct list_entry *aux_entry[]) {
  struct list_entry *walker = (struct list_entry *)malloc(sizeof(struct list_entry));

  aux_entry[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct list_entry *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct list_entry *)malloc(sizeof(struct list_entry));
    walker = walker->prev;
    aux_entry[i] = walker;
    walker->next = (struct list_entry *)malloc(sizeof(struct list_entry));
    walker = walker->next;
    aux_entry[i] = walker;
    walker->prev = NULL;
    walker->next = NULL;
  }

  return head;
}

void _delete_entry(struct list_entry *aux_entry[], int aux_entry_size) {
  for(int i = 0; i < aux_entry_size; i++) 
    if(aux_entry[i])
      free(aux_entry[i]);
}

struct list_entry *_allocate_prev(int length, struct list_entry *aux_prev[]) {
  struct list_entry *walker = (struct list_entry *)malloc(sizeof(struct list_entry));

  aux_prev[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct list_entry *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct list_entry *)malloc(sizeof(struct list_entry));
    walker = walker->prev;
    aux_prev[i] = walker;
    walker->next = (struct list_entry *)malloc(sizeof(struct list_entry));
    walker = walker->next;
    aux_prev[i] = walker;
    walker->prev = NULL;
    walker->next = NULL;
  }

  return head;
}

void _delete_prev(struct list_entry *aux_prev[], int aux_prev_size) {
  for(int i = 0; i < aux_prev_size; i++) 
    if(aux_prev[i])
      free(aux_prev[i]);
}

struct list_entry *_allocate_next(int length, struct list_entry *aux_next[]) {
  struct list_entry *walker = (struct list_entry *)malloc(sizeof(struct list_entry));

  aux_next[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct list_entry *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct list_entry *)malloc(sizeof(struct list_entry));
    walker = walker->prev;
    aux_next[i] = walker;
    walker->next = (struct list_entry *)malloc(sizeof(struct list_entry));
    walker = walker->next;
    aux_next[i] = walker;
    walker->prev = NULL;
    walker->next = NULL;
  }

  return head;
}

void _delete_next(struct list_entry *aux_next[], int aux_next_size) {
  for(int i = 0; i < aux_next_size; i++) 
    if(aux_next[i])
      free(aux_next[i]);
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
          struct list_entry * aux_entry[1];
          struct list_entry * entry = _allocate_entry(1, aux_entry);
          struct list_entry * aux_prev[1];
          struct list_entry * prev = _allocate_prev(1, aux_prev);
          struct list_entry * aux_next[1];
          struct list_entry * next = _allocate_next(1, aux_next);
          list_add(entry,prev,next);
          _delete_entry(aux_entry, 1);
          _delete_prev(aux_prev, 1);
          _delete_next(aux_next, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
