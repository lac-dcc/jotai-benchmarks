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
struct src {struct src* intlv; } ;

/* Variables and functions */

__attribute__((used)) static struct src *src_next_interleave(struct src *src)
{
	return src->intlv;
}


// ------------------------------------------------------------------------- //

struct src *_allocate_src(int length, struct src *aux_src[]) {
  struct src *walker = (struct src *)malloc(sizeof(struct src));

  aux_src[0] = walker;
  walker->intlv = NULL;

  struct src *head = walker;
  for(int i = 1; i < length; i++) {
    walker->intlv = (struct src *)malloc(sizeof(struct src));
    walker = walker->intlv;
    aux_src[i] = walker;
    walker->intlv = NULL;
  }

  return head;
}

void _delete_src(struct src *aux_src[], int aux_src_size) {
  for(int i = 0; i < aux_src_size; i++) 
    if(aux_src[i])
      free(aux_src[i]);
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
          struct src * aux_src[1];
          struct src * src = _allocate_src(1, aux_src);
          struct src * benchRet = src_next_interleave(src);
          _delete_src(aux_src, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
