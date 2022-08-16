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
struct __test_metadata {struct __test_metadata* prev; struct __test_metadata* next; } ;

/* Variables and functions */
 scalar_t__ _CONSTRUCTOR_ORDER_FORWARD ; 
 scalar_t__ __constructor_order ; 
 int /*<<< orphan*/  __test_count ; 
 struct __test_metadata* __test_list ; 

__attribute__((used)) static inline void __register_test(struct __test_metadata *t)
{
	__test_count++;
	/* Circular linked list where only prev is circular. */
	if (__test_list == NULL) {
		__test_list = t;
		t->next = NULL;
		t->prev = t;
		return;
	}
	if (__constructor_order == _CONSTRUCTOR_ORDER_FORWARD) {
		t->next = NULL;
		t->prev = __test_list->prev;
		t->prev->next = t;
		__test_list->prev = t;
	} else {
		t->next = __test_list;
		t->next->prev = t;
		t->prev = t;
		__test_list = t;
	}
}


// ------------------------------------------------------------------------- //

struct __test_metadata *_allocate_t(int length, struct __test_metadata *aux_t[]) {
  struct __test_metadata *walker = (struct __test_metadata *)malloc(sizeof(struct __test_metadata));

  aux_t[0] = walker;
  walker->prev = NULL;
  walker->next = NULL;

  struct __test_metadata *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct __test_metadata *)malloc(sizeof(struct __test_metadata));
    walker = walker->prev;
    aux_t[i] = walker;
    walker->next = (struct __test_metadata *)malloc(sizeof(struct __test_metadata));
    walker = walker->next;
    aux_t[i] = walker;
    walker->prev = NULL;
    walker->next = NULL;
  }

  return head;
}

void _delete_t(struct __test_metadata *aux_t[], int aux_t_size) {
  for(int i = 0; i < aux_t_size; i++) 
    if(aux_t[i])
      free(aux_t[i]);
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
          struct __test_metadata * aux_t[1];
          struct __test_metadata * t = _allocate_t(1, aux_t);
          __register_test(t);
          _delete_t(aux_t, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
