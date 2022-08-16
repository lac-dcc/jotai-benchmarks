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
struct TYPE_4__ {struct TYPE_4__* next_bio; } ;
typedef  TYPE_1__ BIO ;

/* Variables and functions */

void BIO_set_next(BIO *b, BIO *next)
{
    b->next_bio = next;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_b(int length, struct TYPE_4__ *aux_b[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_b[0] = walker;
  walker->next_bio = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next_bio = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next_bio;
    aux_b[i] = walker;
    walker->next_bio = NULL;
  }

  return head;
}

void _delete_b(struct TYPE_4__ *aux_b[], int aux_b_size) {
  for(int i = 0; i < aux_b_size; i++) 
    if(aux_b[i])
      free(aux_b[i]);
}

struct TYPE_4__ *_allocate_next(int length, struct TYPE_4__ *aux_next[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_next[0] = walker;
  walker->next_bio = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next_bio = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next_bio;
    aux_next[i] = walker;
    walker->next_bio = NULL;
  }

  return head;
}

void _delete_next(struct TYPE_4__ *aux_next[], int aux_next_size) {
  for(int i = 0; i < aux_next_size; i++) 
    if(aux_next[i])
      free(aux_next[i]);
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
          struct TYPE_4__ * aux_b[1];
          struct TYPE_4__ * b = _allocate_b(1, aux_b);
          struct TYPE_4__ * aux_next[1];
          struct TYPE_4__ * next = _allocate_next(1, aux_next);
          BIO_set_next(b,next);
          _delete_b(aux_b, 1);
          _delete_next(aux_next, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
