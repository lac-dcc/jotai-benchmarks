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
       0            big-arr\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct commit_list {struct commit_list* next; struct commit* item; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; } ;

/* Variables and functions */
 int UNINTERESTING ; 

__attribute__((used)) static int everybody_uninteresting(struct commit_list *orig,
				   struct commit **interesting_cache)
{
	struct commit_list *list = orig;

	if (*interesting_cache) {
		struct commit *commit = *interesting_cache;
		if (!(commit->object.flags & UNINTERESTING))
			return 0;
	}

	while (list) {
		struct commit *commit = list->item;
		list = list->next;
		if (commit->object.flags & UNINTERESTING)
			continue;

		*interesting_cache = commit;
		return 0;
	}
	return 1;
}


// ------------------------------------------------------------------------- //

struct commit_list *_allocate_orig(int length) {
  struct commit_list *head = (struct commit_list *)malloc(sizeof(struct commit_list));

  head->next = NULL;
  head->item = rand();

  struct commit_list *walker = head;
  for(int i = 1; i < length; i++) {
    walker->next = (struct commit_list *)malloc(sizeof(struct commit_list));
    walker = walker->next;
    walker->next = NULL;
    walker->item = rand();
  }

  return head;
}

void _delete_orig(struct commit_list * head) {
  if(head->next != NULL) _delete_orig(head->next);
  free(head);
}




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          struct commit_list * orig = _allocate_orig(1);
          int _len_interesting_cache0 = 1;
          struct commit ** interesting_cache = (struct commit **) malloc(_len_interesting_cache0*sizeof(struct commit *));
          for(int _i0 = 0; _i0 < _len_interesting_cache0; _i0++) {
            int _len_interesting_cache1 = 1;
            interesting_cache[_i0] = (struct commit *) malloc(_len_interesting_cache1*sizeof(struct commit));
            for(int _i1 = 0; _i1 < _len_interesting_cache1; _i1++) {
              interesting_cache[_i0]->object.flags = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = everybody_uninteresting(orig,interesting_cache);
          printf("%d\n", benchRet); 
          _delete_orig(orig);
          for(int i1 = 0; i1 < _len_interesting_cache0; i1++) {
            int _len_interesting_cache1 = 1;
              free(interesting_cache[i1]);
          }
          free(interesting_cache);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
