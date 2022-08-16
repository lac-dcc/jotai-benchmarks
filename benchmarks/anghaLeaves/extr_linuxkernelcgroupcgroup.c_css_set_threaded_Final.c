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
struct css_set {struct css_set* dom_cset; } ;

/* Variables and functions */

__attribute__((used)) static bool css_set_threaded(struct css_set *cset)
{
	return cset->dom_cset != cset;
}


// ------------------------------------------------------------------------- //

struct css_set *_allocate_cset(int length, struct css_set *aux_cset[]) {
  struct css_set *walker = (struct css_set *)malloc(sizeof(struct css_set));

  aux_cset[0] = walker;
  walker->dom_cset = NULL;

  struct css_set *head = walker;
  for(int i = 1; i < length; i++) {
    walker->dom_cset = (struct css_set *)malloc(sizeof(struct css_set));
    walker = walker->dom_cset;
    aux_cset[i] = walker;
    walker->dom_cset = NULL;
  }

  return head;
}

void _delete_cset(struct css_set *aux_cset[], int aux_cset_size) {
  for(int i = 0; i < aux_cset_size; i++) 
    if(aux_cset[i])
      free(aux_cset[i]);
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
          struct css_set * aux_cset[1];
          struct css_set * cset = _allocate_cset(1, aux_cset);
          int benchRet = css_set_threaded(cset);
          printf("%d\n", benchRet); 
          _delete_cset(aux_cset, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
