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
struct filesys_inode {struct filesys_inode* next; struct filesys_inode* prev; } ;

/* Variables and functions */
 struct filesys_inode* lru_head ; 
 struct filesys_inode* lru_tail ; 

__attribute__((used)) static void add_use (struct filesys_inode *I) {
  if (lru_tail == NULL) {
    lru_head = lru_tail = I;
    I->prev = I->next = NULL;
  } else {
    lru_tail->next = I;
    I->prev = lru_tail;
    I->next = NULL;
    lru_tail = I;
  }
}


// ------------------------------------------------------------------------- //

struct filesys_inode *_allocate_I(int length) {
  struct filesys_inode *head = (struct filesys_inode *)malloc(sizeof(struct filesys_inode));

  head->next = NULL;
  head->prev = NULL;

  struct filesys_inode *walker = head;
  for(int i = 1; i < length; i++) {
    walker->next = (struct filesys_inode *)malloc(sizeof(struct filesys_inode));
    walker = walker->next;
    walker->prev = (struct filesys_inode *)malloc(sizeof(struct filesys_inode));
    walker = walker->prev;
    walker->next = NULL;
    walker->prev = NULL;
  }

  return head;
}

void _delete_I(struct filesys_inode * head) {
  if(head->next != NULL) _delete_I(head->next);
  if(head->prev != NULL) _delete_I(head->prev);
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
          struct filesys_inode * I = _allocate_I(1);
          add_use(I);
          _delete_I(I);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
