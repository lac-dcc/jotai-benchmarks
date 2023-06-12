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
       0            linked\n\
       1            empty\n\
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
struct TYPE_4__ {int iPropertyId; int iPrimitiveType; struct TYPE_4__* next; } ;
typedef  TYPE_1__* PTHEME_PROPERTY ;

/* Variables and functions */

__attribute__((used)) static PTHEME_PROPERTY MSSTYLES_LFindProperty(PTHEME_PROPERTY tp, int iPropertyPrimitive, int iPropertyId)
{
    PTHEME_PROPERTY cur = tp;
    while(cur) {
        if(cur->iPropertyId == iPropertyId) {
            if(cur->iPrimitiveType == iPropertyPrimitive) {
                return cur;
            }
            else {
                if(!iPropertyPrimitive)
                    return cur;
                return NULL;
            }
        }
        cur = cur->next;
    }
    return NULL;
}

// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_tp(int length, struct TYPE_4__ *aux_tp[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_tp[0] = walker;
walker->iPropertyId = ((-2 * (next_i()%2)) + 1) * next_i();
walker->iPrimitiveType = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->next = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next;
    aux_tp[i] = walker;
walker->iPropertyId = ((-2 * (next_i()%2)) + 1) * next_i();
walker->iPrimitiveType = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->next = NULL;
  }

  return head;
}

void _delete_tp(struct TYPE_4__ *aux_tp[], int aux_tp_size) {
  for(int i = 0; i < aux_tp_size; i++) 
    if(aux_tp[i])
      free(aux_tp[i]);
}



// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // linked
    case 0:
    {
          int iPropertyPrimitive = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int iPropertyId = ((-2 * (next_i()%2)) + 1) * next_i();
        
          struct TYPE_4__ * aux_tp[10000];
          struct TYPE_4__ * tp = _allocate_tp(10000, aux_tp);
        
          struct TYPE_4__ * benchRet = MSSTYLES_LFindProperty(tp,iPropertyPrimitive,iPropertyId);
          printf("%d\n", (*benchRet).iPropertyId);
          printf("%d\n", (*benchRet).iPrimitiveType);
          _delete_tp(aux_tp, 10000);
        
        break;
    }
    // empty
    case 1:
    {
          int iPropertyPrimitive = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int iPropertyId = ((-2 * (next_i()%2)) + 1) * next_i();
        
          struct TYPE_4__ * aux_tp[1];
          struct TYPE_4__ * tp = _allocate_tp(1, aux_tp);
        
          struct TYPE_4__ * benchRet = MSSTYLES_LFindProperty(tp,iPropertyPrimitive,iPropertyId);
          printf("%d\n", (*benchRet).iPropertyId);
          printf("%d\n", (*benchRet).iPrimitiveType);
          _delete_tp(aux_tp, 1);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
