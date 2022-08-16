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
struct mount {struct mount* mnt_parent; } ;

/* Variables and functions */

__attribute__((used)) static inline int mnt_has_parent(struct mount *mnt)
{
	return mnt != mnt->mnt_parent;
}


// ------------------------------------------------------------------------- //

struct mount *_allocate_mnt(int length, struct mount *aux_mnt[]) {
  struct mount *walker = (struct mount *)malloc(sizeof(struct mount));

  aux_mnt[0] = walker;
  walker->mnt_parent = NULL;

  struct mount *head = walker;
  for(int i = 1; i < length; i++) {
    walker->mnt_parent = (struct mount *)malloc(sizeof(struct mount));
    walker = walker->mnt_parent;
    aux_mnt[i] = walker;
    walker->mnt_parent = NULL;
  }

  return head;
}

void _delete_mnt(struct mount *aux_mnt[], int aux_mnt_size) {
  for(int i = 0; i < aux_mnt_size; i++) 
    if(aux_mnt[i])
      free(aux_mnt[i]);
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
          struct mount * aux_mnt[1];
          struct mount * mnt = _allocate_mnt(1, aux_mnt);
          int benchRet = mnt_has_parent(mnt);
          printf("%d\n", benchRet); 
          _delete_mnt(aux_mnt, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
