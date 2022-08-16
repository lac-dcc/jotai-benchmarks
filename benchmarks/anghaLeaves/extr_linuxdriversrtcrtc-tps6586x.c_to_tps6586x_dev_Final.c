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
struct device {struct device* parent; } ;

/* Variables and functions */

__attribute__((used)) static inline struct device *to_tps6586x_dev(struct device *dev)
{
	return dev->parent;
}


// ------------------------------------------------------------------------- //

struct device *_allocate_dev(int length, struct device *aux_dev[]) {
  struct device *walker = (struct device *)malloc(sizeof(struct device));

  aux_dev[0] = walker;
  walker->parent = NULL;

  struct device *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct device *)malloc(sizeof(struct device));
    walker = walker->parent;
    aux_dev[i] = walker;
    walker->parent = NULL;
  }

  return head;
}

void _delete_dev(struct device *aux_dev[], int aux_dev_size) {
  for(int i = 0; i < aux_dev_size; i++) 
    if(aux_dev[i])
      free(aux_dev[i]);
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
          struct device * aux_dev[1];
          struct device * dev = _allocate_dev(1, aux_dev);
          struct device * benchRet = to_tps6586x_dev(dev);
          _delete_dev(aux_dev, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
