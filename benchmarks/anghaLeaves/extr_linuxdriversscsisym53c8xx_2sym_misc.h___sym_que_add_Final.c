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
struct sym_quehead {struct sym_quehead* flink; struct sym_quehead* blink; } ;

/* Variables and functions */

__attribute__((used)) static inline void __sym_que_add(struct sym_quehead * new,
	struct sym_quehead * blink,
	struct sym_quehead * flink)
{
	flink->blink	= new;
	new->flink	= flink;
	new->blink	= blink;
	blink->flink	= new;
}

// ------------------------------------------------------------------------- //

struct sym_quehead *_allocate_Dlinked_new(int length, struct sym_quehead *aux_dlinked_new[] ) {
  struct sym_quehead *walker = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));

  aux_dlinked_new[0] = walker;
  walker->flink = NULL;
  walker->blink = NULL;

  struct sym_quehead *head = walker;
  for(int i = 1; i < length; i++) {
    walker->blink = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));
    walker->blink->flink = walker;
    walker = walker->blink;
    aux_dlinked_new[i] = walker;
    if (i == (length - 1)) 
      walker->blink = NULL;  }

  return head;
}

void _delete_Dlinked_new(struct sym_quehead *aux_dlinked_new[], int aux_dlinked_new_size) {
  for(int i = 0; i < aux_dlinked_new_size; i++) 
    if(aux_dlinked_new[i])
      free(aux_dlinked_new[i]);
}

struct sym_quehead *_allocate_Dlinked_blink(int length, struct sym_quehead *aux_dlinked_blink[] ) {
  struct sym_quehead *walker = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));

  aux_dlinked_blink[0] = walker;
  walker->flink = NULL;
  walker->blink = NULL;

  struct sym_quehead *head = walker;
  for(int i = 1; i < length; i++) {
    walker->blink = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));
    walker->blink->flink = walker;
    walker = walker->blink;
    aux_dlinked_blink[i] = walker;
    if (i == (length - 1)) 
      walker->blink = NULL;  }

  return head;
}

void _delete_Dlinked_blink(struct sym_quehead *aux_dlinked_blink[], int aux_dlinked_blink_size) {
  for(int i = 0; i < aux_dlinked_blink_size; i++) 
    if(aux_dlinked_blink[i])
      free(aux_dlinked_blink[i]);
}

struct sym_quehead *_allocate_Dlinked_flink(int length, struct sym_quehead *aux_dlinked_flink[] ) {
  struct sym_quehead *walker = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));

  aux_dlinked_flink[0] = walker;
  walker->flink = NULL;
  walker->blink = NULL;

  struct sym_quehead *head = walker;
  for(int i = 1; i < length; i++) {
    walker->blink = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));
    walker->blink->flink = walker;
    walker = walker->blink;
    aux_dlinked_flink[i] = walker;
    if (i == (length - 1)) 
      walker->blink = NULL;  }

  return head;
}

void _delete_Dlinked_flink(struct sym_quehead *aux_dlinked_flink[], int aux_dlinked_flink_size) {
  for(int i = 0; i < aux_dlinked_flink_size; i++) 
    if(aux_dlinked_flink[i])
      free(aux_dlinked_flink[i]);
}

struct sym_quehead *_allocateBinTree_new(int length, struct sym_quehead *aux_tree_new[], int *counter_new) {
  if(length == 0)
    return NULL;
  struct sym_quehead *walker = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));

  aux_tree_new[*counter_new] = walker;
  (*counter_new)++;
  walker->flink = _allocateBinTree_new(length - 1, aux_tree_new, counter_new);
  walker->blink = _allocateBinTree_new(length - 1, aux_tree_new, counter_new);
  return walker;
}

void _deleteBinTree_new(struct sym_quehead *aux_tree_new[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_new[i])
      free(aux_tree_new[i]);
}

struct sym_quehead *_allocateBinTree_blink(int length, struct sym_quehead *aux_tree_blink[], int *counter_blink) {
  if(length == 0)
    return NULL;
  struct sym_quehead *walker = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));

  aux_tree_blink[*counter_blink] = walker;
  (*counter_blink)++;
  walker->flink = _allocateBinTree_blink(length - 1, aux_tree_blink, counter_blink);
  walker->blink = _allocateBinTree_blink(length - 1, aux_tree_blink, counter_blink);
  return walker;
}

void _deleteBinTree_blink(struct sym_quehead *aux_tree_blink[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_blink[i])
      free(aux_tree_blink[i]);
}

struct sym_quehead *_allocateBinTree_flink(int length, struct sym_quehead *aux_tree_flink[], int *counter_flink) {
  if(length == 0)
    return NULL;
  struct sym_quehead *walker = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));

  aux_tree_flink[*counter_flink] = walker;
  (*counter_flink)++;
  walker->flink = _allocateBinTree_flink(length - 1, aux_tree_flink, counter_flink);
  walker->blink = _allocateBinTree_flink(length - 1, aux_tree_flink, counter_flink);
  return walker;
}

void _deleteBinTree_flink(struct sym_quehead *aux_tree_flink[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_flink[i])
      free(aux_tree_flink[i]);
}

struct sym_quehead *_allocate_new(int length, struct sym_quehead *aux_new[]) {
  struct sym_quehead *walker = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));

  aux_new[0] = walker;
  walker->flink = NULL;
  walker->blink = NULL;

  struct sym_quehead *head = walker;
  for(int i = 1; i < length; i++) {
    walker->flink = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));
    walker = walker->flink;
    aux_new[i] = walker;
    walker->blink = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));
    walker = walker->blink;
    aux_new[i] = walker;
    walker->flink = NULL;
    walker->blink = NULL;
  }

  return head;
}

void _delete_new(struct sym_quehead *aux_new[], int aux_new_size) {
  for(int i = 0; i < aux_new_size; i++) 
    if(aux_new[i])
      free(aux_new[i]);
}

struct sym_quehead *_allocate_blink(int length, struct sym_quehead *aux_blink[]) {
  struct sym_quehead *walker = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));

  aux_blink[0] = walker;
  walker->flink = NULL;
  walker->blink = NULL;

  struct sym_quehead *head = walker;
  for(int i = 1; i < length; i++) {
    walker->flink = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));
    walker = walker->flink;
    aux_blink[i] = walker;
    walker->blink = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));
    walker = walker->blink;
    aux_blink[i] = walker;
    walker->flink = NULL;
    walker->blink = NULL;
  }

  return head;
}

void _delete_blink(struct sym_quehead *aux_blink[], int aux_blink_size) {
  for(int i = 0; i < aux_blink_size; i++) 
    if(aux_blink[i])
      free(aux_blink[i]);
}

struct sym_quehead *_allocate_flink(int length, struct sym_quehead *aux_flink[]) {
  struct sym_quehead *walker = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));

  aux_flink[0] = walker;
  walker->flink = NULL;
  walker->blink = NULL;

  struct sym_quehead *head = walker;
  for(int i = 1; i < length; i++) {
    walker->flink = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));
    walker = walker->flink;
    aux_flink[i] = walker;
    walker->blink = (struct sym_quehead *)malloc(sizeof(struct sym_quehead));
    walker = walker->blink;
    aux_flink[i] = walker;
    walker->flink = NULL;
    walker->blink = NULL;
  }

  return head;
}

void _delete_flink(struct sym_quehead *aux_flink[], int aux_flink_size) {
  for(int i = 0; i < aux_flink_size; i++) 
    if(aux_flink[i])
      free(aux_flink[i]);
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
          struct sym_quehead * aux_dlinked_new[10000];
          struct sym_quehead * new = _allocate_Dlinked_new(10000, aux_dlinked_new);
        
          struct sym_quehead * aux_dlinked_blink[10000];
          struct sym_quehead * blink = _allocate_Dlinked_blink(10000, aux_dlinked_blink);
        
          struct sym_quehead * aux_dlinked_flink[10000];
          struct sym_quehead * flink = _allocate_Dlinked_flink(10000, aux_dlinked_flink);
        
          __sym_que_add(new,blink,flink);
          _delete_Dlinked_new(aux_dlinked_new, 10000);
          _delete_Dlinked_blink(aux_dlinked_blink, 10000);
          _delete_Dlinked_flink(aux_dlinked_flink, 10000);
        
        break;
    }
    // bintree
    case 1:
    {
          int counter_new= 0;
          struct sym_quehead *  aux_tree_new[1023];
          struct sym_quehead * new = _allocateBinTree_new(10, aux_tree_new, &counter_new);
        
          int counter_blink= 0;
          struct sym_quehead *  aux_tree_blink[1023];
          struct sym_quehead * blink = _allocateBinTree_blink(10, aux_tree_blink, &counter_blink);
        
          int counter_flink= 0;
          struct sym_quehead *  aux_tree_flink[1023];
          struct sym_quehead * flink = _allocateBinTree_flink(10, aux_tree_flink, &counter_flink);
        
          __sym_que_add(new,blink,flink);
          _deleteBinTree_new(aux_tree_new);
          _deleteBinTree_blink(aux_tree_blink);
          _deleteBinTree_flink(aux_tree_flink);
        
        break;
    }
    // empty
    case 2:
    {
          struct sym_quehead * aux_new[1];
          struct sym_quehead * new = _allocate_new(1, aux_new);
        
          struct sym_quehead * aux_blink[1];
          struct sym_quehead * blink = _allocate_blink(1, aux_blink);
        
          struct sym_quehead * aux_flink[1];
          struct sym_quehead * flink = _allocate_flink(1, aux_flink);
        
          __sym_que_add(new,blink,flink);
          _delete_new(aux_new, 1);
          _delete_blink(aux_blink, 1);
          _delete_flink(aux_flink, 1);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
