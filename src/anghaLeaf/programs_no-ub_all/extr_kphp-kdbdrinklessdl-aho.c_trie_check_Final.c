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
       0            big-arr\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ code; int is_end; struct TYPE_3__* v; struct TYPE_3__* h; } ;
typedef  TYPE_1__ trie_node ;
typedef  scalar_t__ CHAR ;

/* Variables and functions */

int trie_check (trie_node *v, CHAR *s) {
  while (1) {
    while (v && v->code != *s) {
      v = v->h;
    }
    if (v == NULL) {
      return 0;
    }
    s++;
    if (*s == 0) {
      return v->is_end;
    }
    v = v->v;
  }
}


// ------------------------------------------------------------------------- //

struct TYPE_3__ *_allocate_v(int length) {
  struct TYPE_3__ *head = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  head->code = rand();
  head->is_end = rand();
  head->v = NULL;
  head->h = NULL;

  struct TYPE_3__ *walker = head;
  for(int i = 1; i < length; i++) {
    walker->v = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->v;
    walker->h = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->h;
    walker->code = rand();
    walker->is_end = rand();
    walker->v = NULL;
    walker->h = NULL;
  }

  return head;
}

void _delete_v(struct TYPE_3__ * head) {
  if(head->v != NULL) _delete_v(head->v);
  if(head->h != NULL) _delete_v(head->h);
  free(head);
}




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          struct TYPE_3__ * v = _allocate_v(1);
          int _len_s0 = 65025;
          long * s = (long *) malloc(_len_s0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = trie_check(v,s);
          printf("%d\n", benchRet); 
          _delete_v(v);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
