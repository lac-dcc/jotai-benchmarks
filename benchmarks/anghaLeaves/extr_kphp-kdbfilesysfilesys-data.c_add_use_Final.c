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
       0            dlinked\n\
       1            bintree\n\
       2            empty\n\
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

struct filesys_inode *_allocate_Dlinked_I(int length, struct filesys_inode *aux_dlinked_I[] ) {
  struct filesys_inode *walker = (struct filesys_inode *)malloc(sizeof(struct filesys_inode));

  aux_dlinked_I[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct filesys_inode *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct filesys_inode *)malloc(sizeof(struct filesys_inode));
    walker->prev->next = walker;
    walker = walker->prev;
    aux_dlinked_I[i] = walker;
    if (i == (length - 1)) 
      walker->prev = NULL;  }

  return head;
}

void _delete_Dlinked_I(struct filesys_inode *aux_dlinked_I[], int aux_dlinked_I_size) {
  for(int i = 0; i < aux_dlinked_I_size; i++) 
    if(aux_dlinked_I[i])
      free(aux_dlinked_I[i]);
}

struct filesys_inode *_allocateBinTree_I(int length, struct filesys_inode *aux_tree_I[], int *counter_I) {
  if(length == 0)
    return NULL;
  struct filesys_inode *walker = (struct filesys_inode *)malloc(sizeof(struct filesys_inode));

  aux_tree_I[*counter_I] = walker;
  (*counter_I)++;
  walker->next = _allocateBinTree_I(length - 1, aux_tree_I, counter_I);
  walker->prev = _allocateBinTree_I(length - 1, aux_tree_I, counter_I);
  return walker;
}

void _deleteBinTree_I(struct filesys_inode *aux_tree_I[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_I[i])
      free(aux_tree_I[i]);
}

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


    // dlinked
    case 0:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          struct filesys_inode * aux_dlinked_I[10000];
          struct filesys_inode * I = _allocate_Dlinked_I(10000, aux_dlinked_I);
        
          add_use(I);
          _delete_Dlinked_I(aux_dlinked_I, 10000);
        
        break;
    }


    // bintree
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int counter_I= 0;
          struct filesys_inode *  aux_tree_I[1023];
          struct filesys_inode * I = _allocateBinTree_I(10, aux_tree_I, &counter_I);
        
          add_use(I);
          _deleteBinTree_I(aux_tree_I);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

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
