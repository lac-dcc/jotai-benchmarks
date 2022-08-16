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
typedef  int insert_type_t ;
struct TYPE_5__ {struct TYPE_5__* child; struct TYPE_5__* next; } ;
typedef  TYPE_1__ ContentItem ;

/* Variables and functions */
#define  INSERT_CHILD 129 
#define  INSERT_NEXT 128 

__attribute__((used)) static ContentItem *insert_item(ContentItem *item, ContentItem *new_item, insert_type_t insert_type)
{
    if(!item)
        return new_item;

    if(!new_item)
        return item;

    switch(insert_type) {
    case INSERT_NEXT:
        item->next = new_item;
        return new_item;
    case INSERT_CHILD:
        if(item->child) {
            ContentItem *iter = item->child;
            while(iter->next)
                iter = iter->next;
            iter->next = new_item;
        }else {
            item->child = new_item;
        }
        return item;
    }

    return NULL;
}


// ------------------------------------------------------------------------- //

struct TYPE_5__ *_allocate_item(int length, struct TYPE_5__ *aux_item[]) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_item[0] = walker;
  walker->child = NULL;
  walker->next = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->child = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->child;
    aux_item[i] = walker;
    walker->next = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->next;
    aux_item[i] = walker;
    walker->child = NULL;
    walker->next = NULL;
  }

  return head;
}

void _delete_item(struct TYPE_5__ *aux_item[], int aux_item_size) {
  for(int i = 0; i < aux_item_size; i++) 
    if(aux_item[i])
      free(aux_item[i]);
}

struct TYPE_5__ *_allocate_new_item(int length, struct TYPE_5__ *aux_new_item[]) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_new_item[0] = walker;
  walker->child = NULL;
  walker->next = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->child = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->child;
    aux_new_item[i] = walker;
    walker->next = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->next;
    aux_new_item[i] = walker;
    walker->child = NULL;
    walker->next = NULL;
  }

  return head;
}

void _delete_new_item(struct TYPE_5__ *aux_new_item[], int aux_new_item_size) {
  for(int i = 0; i < aux_new_item_size; i++) 
    if(aux_new_item[i])
      free(aux_new_item[i]);
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
          int insert_type = 100;
          struct TYPE_5__ * aux_item[1];
          struct TYPE_5__ * item = _allocate_item(1, aux_item);
          struct TYPE_5__ * aux_new_item[1];
          struct TYPE_5__ * new_item = _allocate_new_item(1, aux_new_item);
          struct TYPE_5__ * benchRet = insert_item(item,new_item,insert_type);
          _delete_item(aux_item, 1);
          _delete_new_item(aux_new_item, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
