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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* upl_t ;
struct TYPE_4__ {struct TYPE_4__* associated_upl; } ;

/* Variables and functions */

upl_t upl_associated_upl(upl_t upl)
{
	return upl->associated_upl;
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
          struct TYPE_4__ * benchRet = upl_associated_upl(upl);
          _delete_upl(aux_upl, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
