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
struct list {struct list* next; } ;

/* Variables and functions */

__attribute__((used)) static inline int list_empty(struct list *l)
{
    return l->next == l;
}


// ------------------------------------------------------------------------- //

struct list *_allocate_l(int length, struct list *aux_l[]) {
  struct list *walker = (struct list *)malloc(sizeof(struct list));

  aux_l[0] = walker;
  walker->next = NULL;

  struct list *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct list *)malloc(sizeof(struct list));
    walker = walker->next;
    aux_l[i] = walker;
    walker->next = NULL;
  }

  return head;
}

void _delete_l(struct list *aux_l[], int aux_l_size) {
  for(int i = 0; i < aux_l_size; i++) 
    if(aux_l[i])
      free(aux_l[i]);
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
          struct list * aux_l[1];
          struct list * l = _allocate_l(1, aux_l);
          int benchRet = list_empty(l);
          printf("%d\n", benchRet); 
          _delete_l(aux_l, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
