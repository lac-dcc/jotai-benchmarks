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
       0            int-bounds\n\
       1            dlinked\n\
       2            bintree\n\
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
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* prev; } ;
typedef  TYPE_1__ tftp_connection_t ;

/* Variables and functions */

__attribute__((used)) static void list_insert (tftp_connection_t *u, tftp_connection_t *V, tftp_connection_t *v) {
  u->next = V; V->prev = u;
  v->prev = V; V->next = v;
}


// ------------------------------------------------------------------------- //

struct TYPE_5__ *_allocate_u(int length, struct TYPE_5__ *aux_u[]) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_u[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->next;
    aux_u[i] = walker;
    walker->prev = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->prev;
    aux_u[i] = walker;
    walker->next = NULL;
    walker->prev = NULL;
  }

  return head;
}

void _delete_u(struct TYPE_5__ *aux_u[], int aux_u_size) {
  for(int i = 0; i < aux_u_size; i++) 
    if(aux_u[i])
      free(aux_u[i]);
}

struct TYPE_5__ *_allocate_V(int length, struct TYPE_5__ *aux_V[]) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_V[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->next;
    aux_V[i] = walker;
    walker->prev = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->prev;
    aux_V[i] = walker;
    walker->next = NULL;
    walker->prev = NULL;
  }

  return head;
}

void _delete_V(struct TYPE_5__ *aux_V[], int aux_V_size) {
  for(int i = 0; i < aux_V_size; i++) 
    if(aux_V[i])
      free(aux_V[i]);
}

struct TYPE_5__ *_allocate_v(int length, struct TYPE_5__ *aux_v[]) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_v[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->next;
    aux_v[i] = walker;
    walker->prev = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->prev;
    aux_v[i] = walker;
    walker->next = NULL;
    walker->prev = NULL;
  }

  return head;
}

void _delete_v(struct TYPE_5__ *aux_v[], int aux_v_size) {
  for(int i = 0; i < aux_v_size; i++) 
    if(aux_v[i])
      free(aux_v[i]);
}

struct TYPE_5__ *_allocate_Dlinked_u(int length, struct TYPE_5__ *aux_dlinked_u[] ) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_dlinked_u[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker->prev->next = walker;
    walker = walker->prev;
    aux_dlinked_u[i] = walker;
    if (i == (length - 1)) 
      walker->prev = NULL;  }

  return head;
}

void _delete_Dlinked_u(struct TYPE_5__ *aux_dlinked_u[], int aux_dlinked_u_size) {
  for(int i = 0; i < aux_dlinked_u_size; i++) 
    if(aux_dlinked_u[i])
      free(aux_dlinked_u[i]);
}

struct TYPE_5__ *_allocate_Dlinked_V(int length, struct TYPE_5__ *aux_dlinked_V[] ) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_dlinked_V[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker->prev->next = walker;
    walker = walker->prev;
    aux_dlinked_V[i] = walker;
    if (i == (length - 1)) 
      walker->prev = NULL;  }

  return head;
}

void _delete_Dlinked_V(struct TYPE_5__ *aux_dlinked_V[], int aux_dlinked_V_size) {
  for(int i = 0; i < aux_dlinked_V_size; i++) 
    if(aux_dlinked_V[i])
      free(aux_dlinked_V[i]);
}

struct TYPE_5__ *_allocate_Dlinked_v(int length, struct TYPE_5__ *aux_dlinked_v[] ) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_dlinked_v[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->prev = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker->prev->next = walker;
    walker = walker->prev;
    aux_dlinked_v[i] = walker;
    if (i == (length - 1)) 
      walker->prev = NULL;  }

  return head;
}

void _delete_Dlinked_v(struct TYPE_5__ *aux_dlinked_v[], int aux_dlinked_v_size) {
  for(int i = 0; i < aux_dlinked_v_size; i++) 
    if(aux_dlinked_v[i])
      free(aux_dlinked_v[i]);
}

struct TYPE_5__ *_allocateBinTree_u(int length, struct TYPE_5__ *aux_tree_u[], int *counter_u) {
  if(length == 0)
    return NULL;
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_tree_u[*counter_u] = walker;
  (*counter_u)++;
  walker->next = _allocateBinTree_u(length - 1, aux_tree_u, counter_u);
  walker->prev = _allocateBinTree_u(length - 1, aux_tree_u, counter_u);
  return walker;
}

void _deleteBinTree_u(struct TYPE_5__ *aux_tree_u[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_u[i])
      free(aux_tree_u[i]);
}

struct TYPE_5__ *_allocateBinTree_V(int length, struct TYPE_5__ *aux_tree_V[], int *counter_V) {
  if(length == 0)
    return NULL;
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_tree_V[*counter_V] = walker;
  (*counter_V)++;
  walker->next = _allocateBinTree_V(length - 1, aux_tree_V, counter_V);
  walker->prev = _allocateBinTree_V(length - 1, aux_tree_V, counter_V);
  return walker;
}

void _deleteBinTree_V(struct TYPE_5__ *aux_tree_V[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_V[i])
      free(aux_tree_V[i]);
}

struct TYPE_5__ *_allocateBinTree_v(int length, struct TYPE_5__ *aux_tree_v[], int *counter_v) {
  if(length == 0)
    return NULL;
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_tree_v[*counter_v] = walker;
  (*counter_v)++;
  walker->next = _allocateBinTree_v(length - 1, aux_tree_v, counter_v);
  walker->prev = _allocateBinTree_v(length - 1, aux_tree_v, counter_v);
  return walker;
}

void _deleteBinTree_v(struct TYPE_5__ *aux_tree_v[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_v[i])
      free(aux_tree_v[i]);
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
          struct TYPE_5__ * aux_u[1];
          struct TYPE_5__ * u = _allocate_u(1, aux_u);
          struct TYPE_5__ * aux_V[1];
          struct TYPE_5__ * V = _allocate_V(1, aux_V);
          struct TYPE_5__ * aux_v[1];
          struct TYPE_5__ * v = _allocate_v(1, aux_v);
          list_insert(u,V,v);
          _delete_u(aux_u, 1);
          _delete_V(aux_V, 1);
          _delete_v(aux_v, 1);
        
        break;
    }
    // dlinked
    case 1:
    {
          struct TYPE_5__ * aux_dlinked_u[10000];
          struct TYPE_5__ * u = _allocate_Dlinked_u(10000, aux_dlinked_u);
          struct TYPE_5__ * aux_dlinked_V[10000];
          struct TYPE_5__ * V = _allocate_Dlinked_V(10000, aux_dlinked_V);
          struct TYPE_5__ * aux_dlinked_v[10000];
          struct TYPE_5__ * v = _allocate_Dlinked_v(10000, aux_dlinked_v);
          list_insert(u,V,v);
          _delete_Dlinked_u(aux_dlinked_u, 10000);
          _delete_Dlinked_V(aux_dlinked_V, 10000);
          _delete_Dlinked_v(aux_dlinked_v, 10000);
        
        break;
    }
    // bintree
    case 2:
    {
          int counter_u= 0;
          struct TYPE_5__ *  aux_tree_u[1023];
          struct TYPE_5__ * u = _allocateBinTree_u(10, aux_tree_u, &counter_u);
          int counter_V= 0;
          struct TYPE_5__ *  aux_tree_V[1023];
          struct TYPE_5__ * V = _allocateBinTree_V(10, aux_tree_V, &counter_V);
          int counter_v= 0;
          struct TYPE_5__ *  aux_tree_v[1023];
          struct TYPE_5__ * v = _allocateBinTree_v(10, aux_tree_v, &counter_v);
          list_insert(u,V,v);
          _deleteBinTree_u(aux_tree_u);
          _deleteBinTree_V(aux_tree_V);
          _deleteBinTree_v(aux_tree_v);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
