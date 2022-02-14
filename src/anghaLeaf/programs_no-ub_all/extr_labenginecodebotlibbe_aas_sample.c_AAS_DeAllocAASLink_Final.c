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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/ * next_area; int /*<<< orphan*/ * prev_area; struct TYPE_4__* next_ent; struct TYPE_4__* prev_ent; } ;
typedef  TYPE_1__ aas_link_t ;
struct TYPE_5__ {TYPE_1__* freelinks; } ;

/* Variables and functions */
 TYPE_2__ aasworld ; 
 int /*<<< orphan*/  numaaslinks ; 

void AAS_DeAllocAASLink(aas_link_t *link)
{
	if (aasworld.freelinks) aasworld.freelinks->prev_ent = link;
	link->prev_ent = NULL;
	link->next_ent = aasworld.freelinks;
	link->prev_area = NULL;
	link->next_area = NULL;
	aasworld.freelinks = link;
	numaaslinks++;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_link(int length) {
  struct TYPE_4__ *head = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  head->next_area = rand();
  head->prev_area = rand();
  head->next_ent = NULL;
  head->prev_ent = NULL;

  struct TYPE_4__ *walker = head;
  for(int i = 1; i < length; i++) {
    walker->next_ent = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next_ent;
    walker->prev_ent = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->prev_ent;
    walker->next_area = rand();
    walker->prev_area = rand();
    walker->next_ent = NULL;
    walker->prev_ent = NULL;
  }

  return head;
}

void _delete_link(struct TYPE_4__ * head) {
  if(head->next_ent != NULL) _delete_link(head->next_ent);
  if(head->prev_ent != NULL) _delete_link(head->prev_ent);
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
          struct TYPE_4__ * link = _allocate_link(1);
          AAS_DeAllocAASLink(link);
          _delete_link(link);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
