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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct agp_controller {struct agp_controller* prev; struct agp_controller* next; } ;
struct TYPE_2__ {struct agp_controller* controllers; } ;

/* Variables and functions */
 TYPE_1__ agp_fe ; 

__attribute__((used)) static int agp_insert_controller(struct agp_controller *controller)
{
	struct agp_controller *prev_controller;

	prev_controller = agp_fe.controllers;
	controller->next = prev_controller;

	if (prev_controller != NULL)
		prev_controller->prev = controller;

	agp_fe.controllers = controller;

	return 0;
}

// ------------------------------------------------------------------------- //

struct agp_controller *_allocate_Dlinked_controller(int length, struct agp_controller *aux_dlinked_controller[] ) {
  struct agp_controller *walker = (struct agp_controller *)malloc(sizeof(struct agp_controller));

  aux_dlinked_controller[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct agp_controller *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct agp_controller *)malloc(sizeof(struct agp_controller));
    walker->next->prev = walker;
    walker = walker->next;
    aux_dlinked_controller[i] = walker;
    if (i == (length - 1)) 
      walker->next = NULL;  }

  return head;
}

void _delete_Dlinked_controller(struct agp_controller *aux_dlinked_controller[], int aux_dlinked_controller_size) {
  for(int i = 0; i < aux_dlinked_controller_size; i++) 
    if(aux_dlinked_controller[i])
      free(aux_dlinked_controller[i]);
}

struct agp_controller *_allocateBinTree_controller(int length, struct agp_controller *aux_tree_controller[], int *counter_controller) {
  if(length == 0)
    return NULL;
  struct agp_controller *walker = (struct agp_controller *)malloc(sizeof(struct agp_controller));

  aux_tree_controller[*counter_controller] = walker;
  (*counter_controller)++;
  walker->prev = _allocateBinTree_controller(length - 1, aux_tree_controller, counter_controller);
  walker->next = _allocateBinTree_controller(length - 1, aux_tree_controller, counter_controller);
  return walker;
}

void _deleteBinTree_controller(struct agp_controller *aux_tree_controller[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_controller[i])
      free(aux_tree_controller[i]);
}

struct agp_controller *_allocate_controller(int length, struct agp_controller *aux_controller[]) {
  struct agp_controller *walker = (struct agp_controller *)malloc(sizeof(struct agp_controller));

  aux_controller[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct agp_controller *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct agp_controller *)malloc(sizeof(struct agp_controller));
    walker = walker->prev;
    aux_controller[i] = walker;
    walker->next = (struct agp_controller *)malloc(sizeof(struct agp_controller));
    walker = walker->next;
    aux_controller[i] = walker;
    walker->prev = NULL;
    walker->next = NULL;
  }

  return head;
}

void _delete_controller(struct agp_controller *aux_controller[], int aux_controller_size) {
  for(int i = 0; i < aux_controller_size; i++) 
    if(aux_controller[i])
      free(aux_controller[i]);
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
          struct agp_controller * aux_dlinked_controller[10000];
          struct agp_controller * controller = _allocate_Dlinked_controller(10000, aux_dlinked_controller);
        
          int benchRet = agp_insert_controller(controller);
          printf("%d\n", benchRet); 
          _delete_Dlinked_controller(aux_dlinked_controller, 10000);
        
        break;
    }
    // bintree
    case 1:
    {
          int counter_controller= 0;
          struct agp_controller *  aux_tree_controller[1023];
          struct agp_controller * controller = _allocateBinTree_controller(10, aux_tree_controller, &counter_controller);
        
          int benchRet = agp_insert_controller(controller);
          printf("%d\n", benchRet); 
          _deleteBinTree_controller(aux_tree_controller);
        
        break;
    }
    // empty
    case 2:
    {
          struct agp_controller * aux_controller[1];
          struct agp_controller * controller = _allocate_controller(1, aux_controller);
        
          int benchRet = agp_insert_controller(controller);
          printf("%d\n", benchRet); 
          _delete_controller(aux_controller, 1);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
