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
struct pack_list {struct pack_list* next; } ;

/* Variables and functions */

__attribute__((used)) static inline size_t pack_list_size(struct pack_list *pl)
{
	size_t ret = 0;
	while (pl) {
		ret++;
		pl = pl->next;
	}
	return ret;
}


// ------------------------------------------------------------------------- //

struct pack_list *_allocate_pl(int length) {
  struct pack_list *head = (struct pack_list *)malloc(sizeof(struct pack_list));

  head->next = NULL;

  struct pack_list *walker = head;
  for(int i = 1; i < length; i++) {
    walker->next = (struct pack_list *)malloc(sizeof(struct pack_list));
    walker = walker->next;
    walker->next = NULL;
  }

  return head;
}

void _delete_pl(struct pack_list * head) {
  if(head->next != NULL) _delete_pl(head->next);
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
          struct pack_list * pl = _allocate_pl(1);
          unsigned long benchRet = pack_list_size(pl);
          printf("%lu\n", benchRet); 
          _delete_pl(pl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
