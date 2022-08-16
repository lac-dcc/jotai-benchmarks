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
struct mg_connection {struct mg_connection* user_data; } ;

/* Variables and functions */

__attribute__((used)) static void link_conns(struct mg_connection *nc1, struct mg_connection *nc2) {
  nc1->user_data = nc2;
  nc2->user_data = nc1;
}


// ------------------------------------------------------------------------- //

struct mg_connection *_allocate_nc1(int length, struct mg_connection *aux_nc1[]) {
  struct mg_connection *walker = (struct mg_connection *)malloc(sizeof(struct mg_connection));

  aux_nc1[0] = walker;
  walker->user_data = NULL;

  struct mg_connection *head = walker;
  for(int i = 1; i < length; i++) {
    walker->user_data = (struct mg_connection *)malloc(sizeof(struct mg_connection));
    walker = walker->user_data;
    aux_nc1[i] = walker;
    walker->user_data = NULL;
  }

  return head;
}

void _delete_nc1(struct mg_connection *aux_nc1[], int aux_nc1_size) {
  for(int i = 0; i < aux_nc1_size; i++) 
    if(aux_nc1[i])
      free(aux_nc1[i]);
}

struct mg_connection *_allocate_nc2(int length, struct mg_connection *aux_nc2[]) {
  struct mg_connection *walker = (struct mg_connection *)malloc(sizeof(struct mg_connection));

  aux_nc2[0] = walker;
  walker->user_data = NULL;

  struct mg_connection *head = walker;
  for(int i = 1; i < length; i++) {
    walker->user_data = (struct mg_connection *)malloc(sizeof(struct mg_connection));
    walker = walker->user_data;
    aux_nc2[i] = walker;
    walker->user_data = NULL;
  }

  return head;
}

void _delete_nc2(struct mg_connection *aux_nc2[], int aux_nc2_size) {
  for(int i = 0; i < aux_nc2_size; i++) 
    if(aux_nc2[i])
      free(aux_nc2[i]);
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
          struct mg_connection * aux_nc1[1];
          struct mg_connection * nc1 = _allocate_nc1(1, aux_nc1);
          struct mg_connection * aux_nc2[1];
          struct mg_connection * nc2 = _allocate_nc2(1, aux_nc2);
          link_conns(nc1,nc2);
          _delete_nc1(aux_nc1, 1);
          _delete_nc2(aux_nc2, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
