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
struct cache {struct cache* next_local; } ;

/* Variables and functions */

__attribute__((used)) static void link_cache_lists(struct cache *smaller, struct cache *bigger)
{
	while (smaller->next_local) {
		if (smaller->next_local == bigger)
			return; /* already linked */
		smaller = smaller->next_local;
	}

	smaller->next_local = bigger;
}


// ------------------------------------------------------------------------- //

struct cache *_allocate_smaller(int length, struct cache *aux_smaller[]) {
  struct cache *walker = (struct cache *)malloc(sizeof(struct cache));

  aux_smaller[0] = walker;
  walker->next_local = NULL;

  struct cache *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next_local = (struct cache *)malloc(sizeof(struct cache));
    walker = walker->next_local;
    aux_smaller[i] = walker;
    walker->next_local = NULL;
  }

  return head;
}

void _delete_smaller(struct cache *aux_smaller[], int aux_smaller_size) {
  for(int i = 0; i < aux_smaller_size; i++) 
    if(aux_smaller[i])
      free(aux_smaller[i]);
}

struct cache *_allocate_bigger(int length, struct cache *aux_bigger[]) {
  struct cache *walker = (struct cache *)malloc(sizeof(struct cache));

  aux_bigger[0] = walker;
  walker->next_local = NULL;

  struct cache *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next_local = (struct cache *)malloc(sizeof(struct cache));
    walker = walker->next_local;
    aux_bigger[i] = walker;
    walker->next_local = NULL;
  }

  return head;
}

void _delete_bigger(struct cache *aux_bigger[], int aux_bigger_size) {
  for(int i = 0; i < aux_bigger_size; i++) 
    if(aux_bigger[i])
      free(aux_bigger[i]);
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
          struct cache * aux_smaller[1];
          struct cache * smaller = _allocate_smaller(1, aux_smaller);
          struct cache * aux_bigger[1];
          struct cache * bigger = _allocate_bigger(1, aux_bigger);
          link_cache_lists(smaller,bigger);
          _delete_smaller(aux_smaller, 1);
          _delete_bigger(aux_bigger, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
