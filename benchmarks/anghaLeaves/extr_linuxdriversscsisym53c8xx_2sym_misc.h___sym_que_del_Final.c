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
struct sym_quehead {struct sym_quehead* flink; struct sym_quehead* blink; } ;

/* Variables and functions */

__attribute__((used)) static inline void __sym_que_del(struct sym_quehead * blink,
	struct sym_quehead * flink)
{
	flink->blink = blink;
	blink->flink = flink;
}


// ------------------------------------------------------------------------- //

struct sym_quehead *_allocate_blink(int length, struct sym_quehead *aux_blink[]) {
  struct sym_quehead *walker = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));

  aux_blink[0] = walker;
  walker->flink = NULL;
  walker->blink = NULL;

  struct sym_quehead *head = walker;
  for(int i = 1; i < length; i++) {
    walker->flink = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));
    walker = walker->flink;
    aux_blink[i] = walker;
    walker->blink = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));
    walker = walker->blink;
    aux_blink[i] = walker;
    walker->flink = NULL;
    walker->blink = NULL;
  }

  return head;
}

void _delete_blink(struct sym_quehead *aux_blink[], int aux_blink_size) {
  for(int i = 0; i < aux_blink_size; i++) 
    if(aux_blink[i])
      free(aux_blink[i]);
}

struct sym_quehead *_allocate_flink(int length, struct sym_quehead *aux_flink[]) {
  struct sym_quehead *walker = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));

  aux_flink[0] = walker;
  walker->flink = NULL;
  walker->blink = NULL;

  struct sym_quehead *head = walker;
  for(int i = 1; i < length; i++) {
    walker->flink = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));
    walker = walker->flink;
    aux_flink[i] = walker;
    walker->blink = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));
    walker = walker->blink;
    aux_flink[i] = walker;
    walker->flink = NULL;
    walker->blink = NULL;
  }

  return head;
}

void _delete_flink(struct sym_quehead *aux_flink[], int aux_flink_size) {
  for(int i = 0; i < aux_flink_size; i++) 
    if(aux_flink[i])
      free(aux_flink[i]);
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
          struct sym_quehead * aux_blink[1];
          struct sym_quehead * blink = _allocate_blink(1, aux_blink);
          struct sym_quehead * aux_flink[1];
          struct sym_quehead * flink = _allocate_flink(1, aux_flink);
          __sym_que_del(blink,flink);
          _delete_blink(aux_blink, 1);
          _delete_flink(aux_flink, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
