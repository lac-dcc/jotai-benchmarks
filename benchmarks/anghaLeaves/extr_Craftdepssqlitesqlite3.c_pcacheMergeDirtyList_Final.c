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
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {scalar_t__ pgno; struct TYPE_5__* pDirty; } ;
typedef  TYPE_1__ PgHdr ;

/* Variables and functions */

__attribute__((used)) static PgHdr *pcacheMergeDirtyList(PgHdr *pA, PgHdr *pB){
  PgHdr result, *pTail;
  pTail = &result;
  while( pA && pB ){
    if( pA->pgno<pB->pgno ){
      pTail->pDirty = pA;
      pTail = pA;
      pA = pA->pDirty;
    }else{
      pTail->pDirty = pB;
      pTail = pB;
      pB = pB->pDirty;
    }
  }
  if( pA ){
    pTail->pDirty = pA;
  }else if( pB ){
    pTail->pDirty = pB;
  }else{
    pTail->pDirty = 0;
  }
  return result.pDirty;
}


// ------------------------------------------------------------------------- //

struct TYPE_5__ *_allocate_pA(int length, struct TYPE_5__ *aux_pA[]) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_pA[0] = walker;
walker->pgno = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->pDirty = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->pDirty = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->pDirty;
    aux_pA[i] = walker;
walker->pgno = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->pDirty = NULL;
  }

  return head;
}

void _delete_pA(struct TYPE_5__ *aux_pA[], int aux_pA_size) {
  for(int i = 0; i < aux_pA_size; i++) 
    if(aux_pA[i])
      free(aux_pA[i]);
}

struct TYPE_5__ *_allocate_pB(int length, struct TYPE_5__ *aux_pB[]) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_pB[0] = walker;
walker->pgno = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->pDirty = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->pDirty = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->pDirty;
    aux_pB[i] = walker;
walker->pgno = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->pDirty = NULL;
  }

  return head;
}

void _delete_pB(struct TYPE_5__ *aux_pB[], int aux_pB_size) {
  for(int i = 0; i < aux_pB_size; i++) 
    if(aux_pB[i])
      free(aux_pB[i]);
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
          struct TYPE_5__ * aux_pA[1];
          struct TYPE_5__ * pA = _allocate_pA(1, aux_pA);
          struct TYPE_5__ * aux_pB[1];
          struct TYPE_5__ * pB = _allocate_pB(1, aux_pB);
          struct TYPE_5__ * benchRet = pcacheMergeDirtyList(pA,pB);
          printf("%ld\n", (*benchRet).pgno);
          _delete_pA(aux_pA, 1);
          _delete_pB(aux_pB, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
