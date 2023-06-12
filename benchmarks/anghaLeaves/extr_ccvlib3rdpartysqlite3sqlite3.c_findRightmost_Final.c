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
struct TYPE_4__ {struct TYPE_4__* pNext; } ;
typedef  TYPE_1__ Select ;

/* Variables and functions */

__attribute__((used)) static Select *findRightmost(Select *p){
  while( p->pNext ) p = p->pNext;
  return p;
}

// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_p(int length, struct TYPE_4__ *aux_p[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_p[0] = walker;
  walker->pNext = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->pNext = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->pNext;
    aux_p[i] = walker;
    walker->pNext = NULL;
  }

  return head;
}

void _delete_p(struct TYPE_4__ *aux_p[], int aux_p_size) {
  for(int i = 0; i < aux_p_size; i++) 
    if(aux_p[i])
      free(aux_p[i]);
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
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 70002
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 40006
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 40006
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 40006
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 40006
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 40004
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 40004
          // ------------------------------- 

          struct TYPE_4__ * aux_p[10000];
          struct TYPE_4__ * p = _allocate_p(10000, aux_p);
        
          struct TYPE_4__ * benchRet = findRightmost(p);
          _delete_p(aux_p, 10000);
        
        break;
    }


    // empty
    case 1:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          struct TYPE_4__ * aux_p[1];
          struct TYPE_4__ * p = _allocate_p(1, aux_p);
        
          struct TYPE_4__ * benchRet = findRightmost(p);
          _delete_p(aux_p, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
