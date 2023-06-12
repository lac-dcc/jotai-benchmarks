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
       0            dlinked\n\
       1            bintree\n\
       2            empty\n\
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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* prev; } ;
typedef  TYPE_1__ levelitem_t ;

/* Variables and functions */
 TYPE_1__* levelitems ; 

void AddLevelItemToList(levelitem_t *li)
{
	if (levelitems) levelitems->prev = li;
	li->prev = NULL;
	li->next = levelitems;
	levelitems = li;
}

// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_Dlinked_li(int length, struct TYPE_4__ *aux_dlinked_li[] ) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_dlinked_li[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker->prev->next = walker;
    walker = walker->prev;
    aux_dlinked_li[i] = walker;
    if (i == (length - 1)) 
      walker->prev = NULL;  }

  return head;
}

void _delete_Dlinked_li(struct TYPE_4__ *aux_dlinked_li[], int aux_dlinked_li_size) {
  for(int i = 0; i < aux_dlinked_li_size; i++) 
    if(aux_dlinked_li[i])
      free(aux_dlinked_li[i]);
}

struct TYPE_4__ *_allocateBinTree_li(int length, struct TYPE_4__ *aux_tree_li[], int *counter_li) {
  if(length == 0)
    return NULL;
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_tree_li[*counter_li] = walker;
  (*counter_li)++;
  walker->next = _allocateBinTree_li(length - 1, aux_tree_li, counter_li);
  walker->prev = _allocateBinTree_li(length - 1, aux_tree_li, counter_li);
  return walker;
}

void _deleteBinTree_li(struct TYPE_4__ *aux_tree_li[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_li[i])
      free(aux_tree_li[i]);
}

struct TYPE_4__ *_allocate_li(int length, struct TYPE_4__ *aux_li[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_li[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next;
    aux_li[i] = walker;
    walker->prev = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->prev;
    aux_li[i] = walker;
    walker->next = NULL;
    walker->prev = NULL;
  }

  return head;
}

void _delete_li(struct TYPE_4__ *aux_li[], int aux_li_size) {
  for(int i = 0; i < aux_li_size; i++) 
    if(aux_li[i])
      free(aux_li[i]);
}



// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // dlinked
    case 0:
    {
          struct TYPE_4__ * aux_dlinked_li[10000];
          struct TYPE_4__ * li = _allocate_Dlinked_li(10000, aux_dlinked_li);
        
          AddLevelItemToList(li);
          _delete_Dlinked_li(aux_dlinked_li, 10000);
        
        break;
    }
    // bintree
    case 1:
    {
          int counter_li= 0;
          struct TYPE_4__ *  aux_tree_li[1023];
          struct TYPE_4__ * li = _allocateBinTree_li(10, aux_tree_li, &counter_li);
        
          AddLevelItemToList(li);
          _deleteBinTree_li(aux_tree_li);
        
        break;
    }
    // empty
    case 2:
    {
          struct TYPE_4__ * aux_li[1];
          struct TYPE_4__ * li = _allocate_li(1, aux_li);
        
          AddLevelItemToList(li);
          _delete_li(aux_li, 1);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
