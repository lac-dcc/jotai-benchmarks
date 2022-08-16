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
struct TYPE_4__ {struct TYPE_4__* l; } ;
typedef  TYPE_1__ wkey ;

/* Variables and functions */
 int /*<<< orphan*/  keys_cnt ; 
 TYPE_1__* wkey_mem ; 

void free_wkey (wkey *w) {
  keys_cnt--;

  w->l = wkey_mem;
  wkey_mem = w;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_w(int length, struct TYPE_4__ *aux_w[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_w[0] = walker;
  walker->l = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->l = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->l;
    aux_w[i] = walker;
    walker->l = NULL;
  }

  return head;
}

void _delete_w(struct TYPE_4__ *aux_w[], int aux_w_size) {
  for(int i = 0; i < aux_w_size; i++) 
    if(aux_w[i])
      free(aux_w[i]);
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
          struct TYPE_4__ * aux_w[1];
          struct TYPE_4__ * w = _allocate_w(1, aux_w);
          free_wkey(w);
          _delete_w(aux_w, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
