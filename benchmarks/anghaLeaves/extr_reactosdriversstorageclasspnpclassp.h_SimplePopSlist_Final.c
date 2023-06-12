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
struct TYPE_4__ {struct TYPE_4__* Next; } ;
typedef  TYPE_1__ SLIST_ENTRY ;

/* Variables and functions */

__attribute__((used)) static inline SLIST_ENTRY *SimplePopSlist(SLIST_ENTRY *SListHdr)
{
    SLIST_ENTRY *sListEntry = SListHdr->Next;
    if (sListEntry){
        SListHdr->Next = sListEntry->Next;
        sListEntry->Next = NULL;
    }
    return sListEntry;
}

// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_SListHdr(int length, struct TYPE_4__ *aux_SListHdr[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_SListHdr[0] = walker;
  walker->Next = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->Next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->Next;
    aux_SListHdr[i] = walker;
    walker->Next = NULL;
  }

  return head;
}

void _delete_SListHdr(struct TYPE_4__ *aux_SListHdr[], int aux_SListHdr_size) {
  for(int i = 0; i < aux_SListHdr_size; i++) 
    if(aux_SListHdr[i])
      free(aux_SListHdr[i]);
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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
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
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          struct TYPE_4__ * aux_SListHdr[10000];
          struct TYPE_4__ * SListHdr = _allocate_SListHdr(10000, aux_SListHdr);
        
          struct TYPE_4__ * benchRet = SimplePopSlist(SListHdr);
          _delete_SListHdr(aux_SListHdr, 10000);
        
        break;
    }


    // empty
    case 1:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          struct TYPE_4__ * aux_SListHdr[1];
          struct TYPE_4__ * SListHdr = _allocate_SListHdr(1, aux_SListHdr);
        
          struct TYPE_4__ * benchRet = SimplePopSlist(SListHdr);
          _delete_SListHdr(aux_SListHdr, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
