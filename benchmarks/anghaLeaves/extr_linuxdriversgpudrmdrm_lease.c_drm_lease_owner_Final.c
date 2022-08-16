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
struct drm_master {struct drm_master* lessor; } ;

/* Variables and functions */

struct drm_master *drm_lease_owner(struct drm_master *master)
{
	while (master->lessor != NULL)
		master = master->lessor;
	return master;
}


// ------------------------------------------------------------------------- //

struct drm_master *_allocate_master(int length, struct drm_master *aux_master[]) {
  struct drm_master *walker = (struct drm_master *)malloc(sizeof(struct drm_master));

  aux_master[0] = walker;
  walker->lessor = NULL;

  struct drm_master *head = walker;
  for(int i = 1; i < length; i++) {
    walker->lessor = (struct drm_master *)malloc(sizeof(struct drm_master));
    walker = walker->lessor;
    aux_master[i] = walker;
    walker->lessor = NULL;
  }

  return head;
}

void _delete_master(struct drm_master *aux_master[], int aux_master_size) {
  for(int i = 0; i < aux_master_size; i++) 
    if(aux_master[i])
      free(aux_master[i]);
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
          struct drm_master * aux_master[1];
          struct drm_master * master = _allocate_master(1, aux_master);
          struct drm_master * benchRet = drm_lease_owner(master);
          _delete_master(aux_master, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
