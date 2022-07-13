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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* upl_t ;
struct TYPE_4__ {struct TYPE_4__* associated_upl; } ;

/* Variables and functions */

void upl_set_associated_upl(upl_t upl, upl_t associated_upl)
{
	upl->associated_upl = associated_upl;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_upl(int length, struct TYPE_4__ *aux_upl[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_upl[0] = walker;
  walker->associated_upl = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->associated_upl = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->associated_upl;
    aux_upl[i] = walker;
    walker->associated_upl = NULL;
  }

  return head;
}

void _delete_upl(struct TYPE_4__ *aux_upl[], int aux_upl_size) {
  for(int i = 0; i < aux_upl_size; i++) 
    if(aux_upl[i])
      free(aux_upl[i]);
}

struct TYPE_4__ *_allocate_associated_upl(int length, struct TYPE_4__ *aux_associated_upl[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_associated_upl[0] = walker;
  walker->associated_upl = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->associated_upl = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->associated_upl;
    aux_associated_upl[i] = walker;
    walker->associated_upl = NULL;
  }

  return head;
}

void _delete_associated_upl(struct TYPE_4__ *aux_associated_upl[], int aux_associated_upl_size) {
  for(int i = 0; i < aux_associated_upl_size; i++) 
    if(aux_associated_upl[i])
      free(aux_associated_upl[i]);
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
          struct TYPE_4__ * aux_upl[1];
          struct TYPE_4__ * upl = _allocate_upl(1, aux_upl);
          struct TYPE_4__ * aux_associated_upl[1];
          struct TYPE_4__ * associated_upl = _allocate_associated_upl(1, aux_associated_upl);
          upl_set_associated_upl(upl,associated_upl);
          _delete_upl(aux_upl, 1);
          _delete_associated_upl(aux_associated_upl, 1);
        
        break;
    }
    // linked
    case 1:
    {
          struct TYPE_4__ * aux_upl[10000];
          struct TYPE_4__ * upl = _allocate_upl(10000, aux_upl);
          struct TYPE_4__ * aux_associated_upl[10000];
          struct TYPE_4__ * associated_upl = _allocate_associated_upl(10000, aux_associated_upl);
          upl_set_associated_upl(upl,associated_upl);
          _delete_upl(aux_upl, 10000);
          _delete_associated_upl(aux_associated_upl, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
