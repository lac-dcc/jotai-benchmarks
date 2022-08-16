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
struct ref {int status; struct ref* next; } ;

/* Variables and functions */
#define  REF_STATUS_NONE 129 
#define  REF_STATUS_UPTODATE 128 

int transport_refs_pushed(struct ref *ref)
{
	for (; ref; ref = ref->next) {
		switch(ref->status) {
		case REF_STATUS_NONE:
		case REF_STATUS_UPTODATE:
			break;
		default:
			return 1;
		}
	}
	return 0;
}


// ------------------------------------------------------------------------- //

struct ref *_allocate_ref(int length, struct ref *aux_ref[]) {
  struct ref *walker = (struct ref *)malloc(sizeof(struct ref));

  aux_ref[0] = walker;
walker->status = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->next = NULL;

  struct ref *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct ref *)malloc(sizeof(struct ref));
    walker = walker->next;
    aux_ref[i] = walker;
walker->status = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->next = NULL;
  }

  return head;
}

void _delete_ref(struct ref *aux_ref[], int aux_ref_size) {
  for(int i = 0; i < aux_ref_size; i++) 
    if(aux_ref[i])
      free(aux_ref[i]);
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
          struct ref * aux_ref[1];
          struct ref * ref = _allocate_ref(1, aux_ref);
          int benchRet = transport_refs_pushed(ref);
          printf("%d\n", benchRet); 
          _delete_ref(aux_ref, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
