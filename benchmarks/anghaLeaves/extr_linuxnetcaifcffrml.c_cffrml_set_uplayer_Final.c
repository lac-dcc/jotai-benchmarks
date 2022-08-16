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
struct cflayer {struct cflayer* up; } ;

/* Variables and functions */

void cffrml_set_uplayer(struct cflayer *this, struct cflayer *up)
{
	this->up = up;
}


// ------------------------------------------------------------------------- //

struct cflayer *_allocate_this(int length, struct cflayer *aux_this[]) {
  struct cflayer *walker = (struct cflayer *)malloc(sizeof(struct cflayer));

  aux_this[0] = walker;
  walker->up = NULL;

  struct cflayer *head = walker;
  for(int i = 1; i < length; i++) {
    walker->up = (struct cflayer *)malloc(sizeof(struct cflayer));
    walker = walker->up;
    aux_this[i] = walker;
    walker->up = NULL;
  }

  return head;
}

void _delete_this(struct cflayer *aux_this[], int aux_this_size) {
  for(int i = 0; i < aux_this_size; i++) 
    if(aux_this[i])
      free(aux_this[i]);
}

struct cflayer *_allocate_up(int length, struct cflayer *aux_up[]) {
  struct cflayer *walker = (struct cflayer *)malloc(sizeof(struct cflayer));

  aux_up[0] = walker;
  walker->up = NULL;

  struct cflayer *head = walker;
  for(int i = 1; i < length; i++) {
    walker->up = (struct cflayer *)malloc(sizeof(struct cflayer));
    walker = walker->up;
    aux_up[i] = walker;
    walker->up = NULL;
  }

  return head;
}

void _delete_up(struct cflayer *aux_up[], int aux_up_size) {
  for(int i = 0; i < aux_up_size; i++) 
    if(aux_up[i])
      free(aux_up[i]);
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
          struct cflayer * aux_this[1];
          struct cflayer * this = _allocate_this(1, aux_this);
          struct cflayer * aux_up[1];
          struct cflayer * up = _allocate_up(1, aux_up);
          cffrml_set_uplayer(this,up);
          _delete_this(aux_this, 1);
          _delete_up(aux_up, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
