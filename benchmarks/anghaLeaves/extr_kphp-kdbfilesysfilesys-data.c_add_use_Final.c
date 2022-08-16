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

struct filesys_inode *_allocate_I(int length, struct filesys_inode *aux_I[]) {
  struct filesys_inode *walker = (struct filesys_inode *)malloc(sizeof(struct filesys_inode));

  aux_I[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct filesys_inode *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct filesys_inode *)malloc(sizeof(struct filesys_inode));
    walker = walker->next;
    aux_I[i] = walker;
    walker->prev = (struct filesys_inode *)malloc(sizeof(struct filesys_inode));
    walker = walker->prev;
    aux_I[i] = walker;
    walker->next = NULL;
    walker->prev = NULL;
  }

  return head;
}

void _delete_I(struct filesys_inode *aux_I[], int aux_I_size) {
  for(int i = 0; i < aux_I_size; i++) 
    if(aux_I[i])
      free(aux_I[i]);
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
          struct filesys_inode * aux_I[1];
          struct filesys_inode * I = _allocate_I(1, aux_I);
          add_use(I);
          _delete_I(aux_I, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
