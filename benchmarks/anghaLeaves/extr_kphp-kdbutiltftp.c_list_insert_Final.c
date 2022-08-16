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

    default:
        usage();
        break;

    }

    return 0;
}
