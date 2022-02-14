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
struct addrinfo {scalar_t__ ai_family; struct addrinfo* ai_next; } ;

/* Variables and functions */

__attribute__((used)) static void interleave_addrinfo(struct addrinfo *base)
{
    struct addrinfo **next = &base->ai_next;
    while (*next) {
        struct addrinfo *cur = *next;
        // Iterate forward until we find an entry of a different family.
        if (cur->ai_family == base->ai_family) {
            next = &cur->ai_next;
            continue;
        }
        if (cur == base->ai_next) {
            // If the first one following base is of a different family, just
            // move base forward one step and continue.
            base = cur;
            next = &base->ai_next;
            continue;
        }
        // Unchain cur from the rest of the list from its current spot.
        *next = cur->ai_next;
        // Hook in cur directly after base.
        cur->ai_next = base->ai_next;
        base->ai_next = cur;
        // Restart with a new base. We know that before moving the cur element,
        // everything between the previous base and cur had the same family,
        // different from cur->ai_family. Therefore, we can keep next pointing
        // where it was, and continue from there with base at the one after
        // cur.
        base = cur->ai_next;
    }
}


// ------------------------------------------------------------------------- //

struct addrinfo *_allocate_base(int length) {
  struct addrinfo *head = (struct addrinfo *)malloc(sizeof(struct addrinfo));

  head->ai_family = rand();
  head->ai_next = NULL;

  struct addrinfo *walker = head;
  for(int i = 1; i < length; i++) {
    walker->ai_next = (struct addrinfo *)malloc(sizeof(struct addrinfo));
    walker = walker->ai_next;
    walker->ai_family = rand();
    walker->ai_next = NULL;
  }

  return head;
}

void _delete_base(struct addrinfo * head) {
  if(head->ai_next != NULL) _delete_base(head->ai_next);
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
          struct addrinfo * base = _allocate_base(1);
          interleave_addrinfo(base);
          _delete_base(base);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
