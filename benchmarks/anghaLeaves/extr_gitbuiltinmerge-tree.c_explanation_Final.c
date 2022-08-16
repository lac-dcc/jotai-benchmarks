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

struct merge_list *_allocate_entry(int length, struct merge_list *aux_entry[]) {
  struct merge_list *walker = (struct merge_list *)malloc(sizeof(struct merge_list));

  aux_entry[0] = walker;
walker->stage = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->link = NULL;

  struct merge_list *head = walker;
  for(int i = 1; i < length; i++) {
    walker->link = (struct merge_list *)malloc(sizeof(struct merge_list));
    walker = walker->link;
    aux_entry[i] = walker;
walker->stage = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->link = NULL;
  }

  return head;
}

void _delete_entry(struct merge_list *aux_entry[], int aux_entry_size) {
  for(int i = 0; i < aux_entry_size; i++) 
    if(aux_entry[i])
      free(aux_entry[i]);
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
          struct merge_list * aux_entry[1];
          struct merge_list * entry = _allocate_entry(1, aux_entry);
          const char * benchRet = explanation(entry);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          _delete_entry(aux_entry, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
