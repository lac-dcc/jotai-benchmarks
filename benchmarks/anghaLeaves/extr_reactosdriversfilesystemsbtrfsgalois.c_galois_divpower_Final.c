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

/* Type definitions */
typedef  size_t UINT8 ;
typedef  scalar_t__ UINT32 ;

/* Variables and functions */
 size_t* gilog ; 
 size_t* glog ; 

void galois_divpower(UINT8* data, UINT8 div, UINT32 len) {
    while (len > 0) {
        if (data[0] != 0) {
            if (gilog[data[0]] <= div)
                data[0] = glog[(gilog[data[0]] + (255 - div)) % 255];
            else
                data[0] = glog[(gilog[data[0]] - div) % 255];
        }

        data++;
        len--;
    }
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
          unsigned long div = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_data0 = 1;
          unsigned long * data = (unsigned long *) malloc(_len_data0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          galois_divpower(data,div,len);
          free(data);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
