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
typedef  TYPE_1__* vnode_t ;
struct TYPE_4__ {struct TYPE_4__* v_parent; } ;

/* Variables and functions */

void
vnode_setparent(vnode_t vp, vnode_t dvp)
{
	vp->v_parent = dvp;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_vp(int length, struct TYPE_4__ *aux_vp[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_vp[0] = walker;
  walker->v_parent = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->v_parent = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->v_parent;
    aux_vp[i] = walker;
    walker->v_parent = NULL;
  }

  return head;
}

void _delete_vp(struct TYPE_4__ *aux_vp[], int aux_vp_size) {
  for(int i = 0; i < aux_vp_size; i++) 
    if(aux_vp[i])
      free(aux_vp[i]);
}

struct TYPE_4__ *_allocate_dvp(int length, struct TYPE_4__ *aux_dvp[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_dvp[0] = walker;
  walker->v_parent = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->v_parent = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->v_parent;
    aux_dvp[i] = walker;
    walker->v_parent = NULL;
  }

  return head;
}

void _delete_dvp(struct TYPE_4__ *aux_dvp[], int aux_dvp_size) {
  for(int i = 0; i < aux_dvp_size; i++) 
    if(aux_dvp[i])
      free(aux_dvp[i]);
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
          struct TYPE_4__ * aux_vp[1];
          struct TYPE_4__ * vp = _allocate_vp(1, aux_vp);
          struct TYPE_4__ * aux_dvp[1];
          struct TYPE_4__ * dvp = _allocate_dvp(1, aux_dvp);
          vnode_setparent(vp,dvp);
          _delete_vp(aux_vp, 1);
          _delete_dvp(aux_dvp, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
