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
struct clk {struct clk* parent; } ;

/* Variables and functions */

struct clk *clk_get_parent(struct clk *clk)
{
	return clk->parent;
}


// ------------------------------------------------------------------------- //

struct clk *_allocate_clk(int length, struct clk *aux_clk[]) {
  struct clk *walker = (struct clk *)malloc(sizeof(struct clk));

  aux_clk[0] = walker;
  walker->parent = NULL;

  struct clk *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct clk *)malloc(sizeof(struct clk));
    walker = walker->parent;
    aux_clk[i] = walker;
    walker->parent = NULL;
  }

  return head;
}

void _delete_clk(struct clk *aux_clk[], int aux_clk_size) {
  for(int i = 0; i < aux_clk_size; i++) 
    if(aux_clk[i])
      free(aux_clk[i]);
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
          struct clk * aux_clk[1];
          struct clk * clk = _allocate_clk(1, aux_clk);
          struct clk * benchRet = clk_get_parent(clk);
          _delete_clk(aux_clk, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
