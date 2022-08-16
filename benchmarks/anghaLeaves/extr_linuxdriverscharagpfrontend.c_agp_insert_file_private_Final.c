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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct agp_file_private {struct agp_file_private* next; struct agp_file_private* prev; } ;
struct TYPE_2__ {struct agp_file_private* file_priv_list; } ;

/* Variables and functions */
 TYPE_1__ agp_fe ; 

__attribute__((used)) static void agp_insert_file_private(struct agp_file_private * priv)
{
	struct agp_file_private *prev;

	prev = agp_fe.file_priv_list;

	if (prev != NULL)
		prev->prev = priv;
	priv->next = prev;
	agp_fe.file_priv_list = priv;
}


// ------------------------------------------------------------------------- //

struct agp_file_private *_allocate_priv(int length, struct agp_file_private *aux_priv[]) {
  struct agp_file_private *walker = (struct agp_file_private *)malloc(sizeof(struct agp_file_private));

  aux_priv[0] = walker;
  walker->next = NULL;
  walker->prev = NULL;

  struct agp_file_private *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct agp_file_private *)malloc(sizeof(struct agp_file_private));
    walker = walker->next;
    aux_priv[i] = walker;
    walker->prev = (struct agp_file_private *)malloc(sizeof(struct agp_file_private));
    walker = walker->prev;
    aux_priv[i] = walker;
    walker->next = NULL;
    walker->prev = NULL;
  }

  return head;
}

void _delete_priv(struct agp_file_private *aux_priv[], int aux_priv_size) {
  for(int i = 0; i < aux_priv_size; i++) 
    if(aux_priv[i])
      free(aux_priv[i]);
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
          struct agp_file_private * aux_priv[1];
          struct agp_file_private * priv = _allocate_priv(1, aux_priv);
          agp_insert_file_private(priv);
          _delete_priv(aux_priv, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
