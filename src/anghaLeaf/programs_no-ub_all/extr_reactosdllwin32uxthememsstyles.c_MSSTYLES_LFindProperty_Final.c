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

struct TYPE_4__ *_allocate_tp(int length) {
  struct TYPE_4__ *head = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  head->iPropertyId = rand();
  head->iPrimitiveType = rand();
  head->next = NULL;

  struct TYPE_4__ *walker = head;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next;
    walker->iPropertyId = rand();
    walker->iPrimitiveType = rand();
    walker->next = NULL;
  }

  return head;
}

void _delete_tp(struct TYPE_4__ * head) {
  if(head->next != NULL) _delete_tp(head->next);
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
          int iPropertyPrimitive = 255;
          int iPropertyId = 255;
          struct TYPE_4__ * tp = _allocate_tp(1);
          struct TYPE_4__ * benchRet = MSSTYLES_LFindProperty(tp,iPropertyPrimitive,iPropertyId);
          printf("{{struct}} %p\n", &benchRet); 
          _delete_tp(tp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
