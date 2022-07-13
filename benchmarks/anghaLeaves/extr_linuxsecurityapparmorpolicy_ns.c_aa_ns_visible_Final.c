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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            linked\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct aa_ns {struct aa_ns* parent; } ;

/* Variables and functions */

bool aa_ns_visible(struct aa_ns *curr, struct aa_ns *view, bool subns)
{
	if (curr == view)
		return true;

	if (!subns)
		return false;

	for ( ; view; view = view->parent) {
		if (view->parent == curr)
			return true;
	}

	return false;
}


// ------------------------------------------------------------------------- //

struct aa_ns *_allocate_curr(int length, struct aa_ns *aux_curr[]) {
  struct aa_ns *walker = (struct aa_ns *)malloc(sizeof(struct aa_ns));

  aux_curr[0] = walker;
  walker->parent = NULL;

  struct aa_ns *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct aa_ns *)malloc(sizeof(struct aa_ns));
    walker = walker->parent;
    aux_curr[i] = walker;
    walker->parent = NULL;
  }

  return head;
}

void _delete_curr(struct aa_ns *aux_curr[], int aux_curr_size) {
  for(int i = 0; i < aux_curr_size; i++) 
    if(aux_curr[i])
      free(aux_curr[i]);
}

struct aa_ns *_allocate_view(int length, struct aa_ns *aux_view[]) {
  struct aa_ns *walker = (struct aa_ns *)malloc(sizeof(struct aa_ns));

  aux_view[0] = walker;
  walker->parent = NULL;

  struct aa_ns *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct aa_ns *)malloc(sizeof(struct aa_ns));
    walker = walker->parent;
    aux_view[i] = walker;
    walker->parent = NULL;
  }

  return head;
}

void _delete_view(struct aa_ns *aux_view[], int aux_view_size) {
  for(int i = 0; i < aux_view_size; i++) 
    if(aux_view[i])
      free(aux_view[i]);
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
          int subns = 100;
          struct aa_ns * aux_curr[1];
          struct aa_ns * curr = _allocate_curr(1, aux_curr);
          struct aa_ns * aux_view[1];
          struct aa_ns * view = _allocate_view(1, aux_view);
          int benchRet = aa_ns_visible(curr,view,subns);
          printf("%d\n", benchRet); 
          _delete_curr(aux_curr, 1);
          _delete_view(aux_view, 1);
        
        break;
    }
    // linked
    case 1:
    {
          int subns = ((-2 * (next_i()%2)) + 1) * next_i();
          struct aa_ns * aux_curr[10000];
          struct aa_ns * curr = _allocate_curr(10000, aux_curr);
          struct aa_ns * aux_view[10000];
          struct aa_ns * view = _allocate_view(10000, aux_view);
          int benchRet = aa_ns_visible(curr,view,subns);
          printf("%d\n", benchRet); 
          _delete_curr(aux_curr, 10000);
          _delete_view(aux_view, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
