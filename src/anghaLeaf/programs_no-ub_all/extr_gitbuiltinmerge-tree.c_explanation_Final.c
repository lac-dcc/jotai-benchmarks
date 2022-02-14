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

/* Type definitions */
struct merge_list {int stage; struct merge_list* link; } ;

/* Variables and functions */

__attribute__((used)) static const char *explanation(struct merge_list *entry)
{
	switch (entry->stage) {
	case 0:
		return "merged";
	case 3:
		return "added in remote";
	case 2:
		if (entry->link)
			return "added in both";
		return "added in local";
	}

	/* Existed in base */
	entry = entry->link;
	if (!entry)
		return "removed in both";

	if (entry->link)
		return "changed in both";

	if (entry->stage == 3)
		return "removed in local";
	return "removed in remote";
}


// ------------------------------------------------------------------------- //

struct merge_list *_allocate_entry(int length) {
  struct merge_list *head = (struct merge_list *)malloc(sizeof(struct merge_list));

  head->stage = rand();
  head->link = NULL;

  struct merge_list *walker = head;
  for(int i = 1; i < length; i++) {
    walker->link = (struct merge_list *)malloc(sizeof(struct merge_list));
    walker = walker->link;
    walker->stage = rand();
    walker->link = NULL;
  }

  return head;
}

void _delete_entry(struct merge_list * head) {
  if(head->link != NULL) _delete_entry(head->link);
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
          struct merge_list * entry = _allocate_entry(1);
          const char * benchRet = explanation(entry);
          printf("{{other_type}} %p\n", &benchRet); 
          _delete_entry(entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
