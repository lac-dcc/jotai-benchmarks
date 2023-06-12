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
       0            linked\n\
       1            empty\n\
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
struct addrinfo {scalar_t__ ai_family; struct addrinfo* ai_next; } ;
typedef  scalar_t__ sa_family_t ;

/* Variables and functions */

__attribute__((used)) static struct addrinfo *SearchAddrInfo(struct addrinfo *hints, sa_family_t family)
{
	while(hints)
	{
		if(hints->ai_family == family)
			return hints;

		hints = hints->ai_next;
	}
	
	return NULL;
}

// ------------------------------------------------------------------------- //

struct addrinfo *_allocate_hints(int length, struct addrinfo *aux_hints[]) {
  struct addrinfo *walker = (struct addrinfo *)malloc(sizeof(struct addrinfo));

  aux_hints[0] = walker;
walker->ai_family = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->ai_next = NULL;

  struct addrinfo *head = walker;
  for(int i = 1; i < length; i++) {
    walker->ai_next = (struct addrinfo *)malloc(sizeof(struct addrinfo));
    walker = walker->ai_next;
    aux_hints[i] = walker;
walker->ai_family = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->ai_next = NULL;
  }

  return head;
}

void _delete_hints(struct addrinfo *aux_hints[], int aux_hints_size) {
  for(int i = 0; i < aux_hints_size; i++) 
    if(aux_hints[i])
      free(aux_hints[i]);
}



// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // linked
    case 0:
    {
          long family = ((-2 * (next_i()%2)) + 1) * next_i();
        
          struct addrinfo * aux_hints[10000];
          struct addrinfo * hints = _allocate_hints(10000, aux_hints);
        
          struct addrinfo * benchRet = SearchAddrInfo(hints,family);
          printf("%ld\n", (*benchRet).ai_family);
          _delete_hints(aux_hints, 10000);
        
        break;
    }
    // empty
    case 1:
    {
          long family = ((-2 * (next_i()%2)) + 1) * next_i();
        
          struct addrinfo * aux_hints[1];
          struct addrinfo * hints = _allocate_hints(1, aux_hints);
        
          struct addrinfo * benchRet = SearchAddrInfo(hints,family);
          printf("%ld\n", (*benchRet).ai_family);
          _delete_hints(aux_hints, 1);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
