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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef  TYPE_1__ bspbrush_t ;

/* Variables and functions */

int CountBrushList (bspbrush_t *brushes)
{
	int c;

	c = 0;
	for ( ; brushes; brushes = brushes->next) c++;
	return c;
}


// ------------------------------------------------------------------------- //

struct TYPE_3__ *_allocate_brushes(int length, struct TYPE_3__ *aux_brushes[]) {
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_brushes[0] = walker;
  walker->next = NULL;

  struct TYPE_3__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->next;
    aux_brushes[i] = walker;
    walker->next = NULL;
  }

  return head;
}

void _delete_brushes(struct TYPE_3__ *aux_brushes[], int aux_brushes_size) {
  for(int i = 0; i < aux_brushes_size; i++) 
    if(aux_brushes[i])
      free(aux_brushes[i]);
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
          struct TYPE_3__ * aux_brushes[1];
          struct TYPE_3__ * brushes = _allocate_brushes(1, aux_brushes);
          int benchRet = CountBrushList(brushes);
          printf("%d\n", benchRet); 
          _delete_brushes(aux_brushes, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
