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
struct commit_list {struct commit_list* next; } ;

/* Variables and functions */

__attribute__((used)) static struct commit_list *reverse_commit_list(struct commit_list *list)
{
	struct commit_list *next = NULL, *current, *backup;
	for (current = list; current; current = backup) {
		backup = current->next;
		current->next = next;
		next = current;
	}
	return next;
}


// ------------------------------------------------------------------------- //

struct commit_list *_allocate_list(int length, struct commit_list *aux_list[]) {
  struct commit_list *walker = (struct commit_list *)malloc(sizeof(struct commit_list));

  aux_list[0] = walker;
  walker->next = NULL;

  struct commit_list *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct commit_list *)malloc(sizeof(struct commit_list));
    walker = walker->next;
    aux_list[i] = walker;
    walker->next = NULL;
  }

  return head;
}

void _delete_list(struct commit_list *aux_list[], int aux_list_size) {
  for(int i = 0; i < aux_list_size; i++) 
    if(aux_list[i])
      free(aux_list[i]);
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
          struct commit_list * aux_list[1];
          struct commit_list * list = _allocate_list(1, aux_list);
          struct commit_list * benchRet = reverse_commit_list(list);
          _delete_list(aux_list, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
