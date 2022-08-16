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
struct TYPE_3__ {scalar_t__ namelen; struct TYPE_3__* parent; } ;
typedef  TYPE_1__ send_dir ;
typedef  int /*<<< orphan*/  UINT16 ;

/* Variables and functions */

__attribute__((used)) static __inline UINT16 find_path_len(send_dir* parent, UINT16 namelen) {
    UINT16 len = namelen;

    while (parent && parent->namelen > 0) {
        len += parent->namelen + 1;
        parent = parent->parent;
    }

    return len;
}


// ------------------------------------------------------------------------- //

struct TYPE_3__ *_allocate_parent(int length, struct TYPE_3__ *aux_parent[]) {
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_parent[0] = walker;
walker->namelen = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->parent = NULL;

  struct TYPE_3__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->parent;
    aux_parent[i] = walker;
walker->namelen = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->parent = NULL;
  }

  return head;
}

void _delete_parent(struct TYPE_3__ *aux_parent[], int aux_parent_size) {
  for(int i = 0; i < aux_parent_size; i++) 
    if(aux_parent[i])
      free(aux_parent[i]);
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
          int namelen = 100;
          struct TYPE_3__ * aux_parent[1];
          struct TYPE_3__ * parent = _allocate_parent(1, aux_parent);
          int benchRet = find_path_len(parent,namelen);
          printf("%d\n", benchRet); 
          _delete_parent(aux_parent, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
