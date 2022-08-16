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
typedef  scalar_t__ ULONG ;
struct TYPE_3__ {struct TYPE_3__* NextKey; } ;
typedef  TYPE_1__* PB_TREE_KEY ;

/* Variables and functions */

ULONG
CountBTreeKeys(PB_TREE_KEY FirstKey)
{
    ULONG Count = 0;
    PB_TREE_KEY Current = FirstKey;
    
    while (Current != NULL)
    {
        Count++;
        Current = Current->NextKey;
    }

    return Count;
}


// ------------------------------------------------------------------------- //

struct TYPE_3__ *_allocate_FirstKey(int length, struct TYPE_3__ *aux_FirstKey[]) {
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_FirstKey[0] = walker;
  walker->NextKey = NULL;

  struct TYPE_3__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->NextKey = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->NextKey;
    aux_FirstKey[i] = walker;
    walker->NextKey = NULL;
  }

  return head;
}

void _delete_FirstKey(struct TYPE_3__ *aux_FirstKey[], int aux_FirstKey_size) {
  for(int i = 0; i < aux_FirstKey_size; i++) 
    if(aux_FirstKey[i])
      free(aux_FirstKey[i]);
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
          struct TYPE_3__ * aux_FirstKey[1];
          struct TYPE_3__ * FirstKey = _allocate_FirstKey(1, aux_FirstKey);
          long benchRet = CountBTreeKeys(FirstKey);
          printf("%ld\n", benchRet); 
          _delete_FirstKey(aux_FirstKey, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
