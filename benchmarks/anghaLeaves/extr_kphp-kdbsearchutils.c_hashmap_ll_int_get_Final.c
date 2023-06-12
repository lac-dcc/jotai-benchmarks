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
       0            empty\n\
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
struct hashmap_ll_int {unsigned int size; TYPE_1__* h; } ;
struct TYPE_2__ {long long key; } ;

/* Variables and functions */

int hashmap_ll_int_get (struct hashmap_ll_int *H, long long id, int *p_slot_idx) {
  int h1, h2;
  long long D;
  h1 = ((unsigned int) id) % H->size;
  h2 = 1 + ((unsigned int) (id >> 32)) % (H->size - 1);
  while ((D = H->h[h1].key) != 0) {
    if (D == id) {
      *p_slot_idx = h1;
      return 1;
    }
    h1 += h2;
    if (h1 >= H->size) { h1 -= H->size; }
  }
  *p_slot_idx = h1;
  return 0;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          long long id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_H0 = 1;
          struct hashmap_ll_int * H = (struct hashmap_ll_int *) malloc(_len_H0*sizeof(struct hashmap_ll_int));
          for(int _i0 = 0; _i0 < _len_H0; _i0++) {
              H[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_H__i0__h0 = 1;
          H[_i0].h = (struct TYPE_2__ *) malloc(_len_H__i0__h0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_H__i0__h0; _j0++) {
              H[_i0].h->key = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_p_slot_idx0 = 1;
          int * p_slot_idx = (int *) malloc(_len_p_slot_idx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_slot_idx0; _i0++) {
            p_slot_idx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = hashmap_ll_int_get(H,id,p_slot_idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_H0; _aux++) {
          free(H[_aux].h);
          }
          free(H);
          free(p_slot_idx);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
