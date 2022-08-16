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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int en; scalar_t__* edges; } ;
typedef  TYPE_1__ trie_arr_node ;
typedef  scalar_t__ CHAR ;

/* Variables and functions */

int trie_arr_getc (trie_arr_node *v, CHAR c) {
  int n = v->en;
  if (n > 5) {  // n MUST be > 0
    int l = 0, r = n;

    while (l + 1 < r) {
      int cc = (l + r) / 2;
      if (v->edges[cc * 2 + 1] <= c) {
        l = cc;
      } else {
        r = cc;
      }
    }

    return v->edges[l * 2 + 1] == c ? v->edges[l * 2] : 0;
  }

  int i;

  for (i = 0; i < n; i++) {
    if (v->edges[2 * i + 1] == c) {
      return v->edges[2 * i];
    }
  }
  return 0;
}


// ------------------------------------------------------------------------- //




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
          long c = 100;
          int _len_v0 = 1;
          struct TYPE_3__ * v = (struct TYPE_3__ *) malloc(_len_v0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0].en = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_v__i0__edges0 = 1;
          v[_i0].edges = (long *) malloc(_len_v__i0__edges0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_v__i0__edges0; _j0++) {
            v[_i0].edges[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = trie_arr_getc(v,c);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_v0; _aux++) {
          free(v[_aux].edges);
          }
          free(v);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
