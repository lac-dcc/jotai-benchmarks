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
       0            big-arr\n\
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

struct agp_controller *_allocate_controller(int length) {
  struct agp_controller *head = (struct agp_controller *)malloc(sizeof(struct agp_controller));

  head->prev = NULL;
  head->next = NULL;

  struct agp_controller *walker = head;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct agp_controller *)malloc(sizeof(struct agp_controller));
    walker = walker->prev;
    walker->next = (struct agp_controller *)malloc(sizeof(struct agp_controller));
    walker = walker->next;
    walker->prev = NULL;
    walker->next = NULL;
  }

  return head;
}

void _delete_controller(struct agp_controller * head) {
  if(head->prev != NULL) _delete_controller(head->prev);
  if(head->next != NULL) _delete_controller(head->next);
  free(head);
}




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          struct agp_controller * controller = _allocate_controller(1);
          int benchRet = agp_insert_controller(controller);
          printf("%d\n", benchRet); 
          _delete_controller(controller);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
