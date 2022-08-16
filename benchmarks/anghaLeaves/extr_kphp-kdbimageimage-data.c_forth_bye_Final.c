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
struct forth_stack {int dummy; } ;

/* Variables and functions */
 void* FORTH_PASS ; 

__attribute__((used)) static void *forth_bye (void **IP __attribute__((__unused__)), struct forth_stack *st __attribute__((__unused__))) {
  return FORTH_PASS;
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
          int _len_IP0 = 1;
          void ** IP = (void **) malloc(_len_IP0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_IP0; _i0++) {
          }
          int _len_st0 = 1;
          struct forth_stack * st = (struct forth_stack *) malloc(_len_st0*sizeof(struct forth_stack));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = forth_bye(IP,st);
          for(int i1 = 0; i1 < _len_IP0; i1++) {
            int _len_IP1 = 1;
              }
          free(IP);
          free(st);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
