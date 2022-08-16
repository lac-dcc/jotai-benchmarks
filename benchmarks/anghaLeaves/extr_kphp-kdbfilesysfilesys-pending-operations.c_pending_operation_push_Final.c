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

/* Type definitions */
struct pending_operation {struct pending_operation* next; } ;

/* Variables and functions */
 struct pending_operation* pol_head ; 
 struct pending_operation* pol_tail ; 

void pending_operation_push (struct pending_operation *P) {
  P->next = NULL;
  if (pol_head) {
    pol_tail->next = P;
    pol_tail = P;
  } else {
    pol_head = pol_tail = P;
  }
}


// ------------------------------------------------------------------------- //

struct pending_operation *_allocate_P(int length, struct pending_operation *aux_P[]) {
  struct pending_operation *walker = (struct pending_operation *)malloc(sizeof(struct pending_operation));

  aux_P[0] = walker;
  walker->next = NULL;

  struct pending_operation *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct pending_operation *)malloc(sizeof(struct pending_operation));
    walker = walker->next;
    aux_P[i] = walker;
    walker->next = NULL;
  }

  return head;
}

void _delete_P(struct pending_operation *aux_P[], int aux_P_size) {
  for(int i = 0; i < aux_P_size; i++) 
    if(aux_P[i])
      free(aux_P[i]);
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
          struct pending_operation * aux_P[1];
          struct pending_operation * P = _allocate_P(1, aux_P);
          pending_operation_push(P);
          _delete_P(aux_P, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
