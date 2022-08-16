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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int* v; } ;
typedef  TYPE_1__ AVInteger ;

/* Variables and functions */
 int AV_INTEGER_SIZE ; 

AVInteger av_shr_i(AVInteger a, int s){
    AVInteger out;
    int i;

    for(i=0; i<AV_INTEGER_SIZE; i++){
        unsigned int index= i + (s>>4);
        unsigned int v=0;
        if(index+1<AV_INTEGER_SIZE) v = a.v[index+1]<<16;
        if(index  <AV_INTEGER_SIZE) v+= a.v[index  ];
        out.v[i]= v >> (s&15);
    }
    return out;
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
          int s = 100;
          struct TYPE_4__ a;
          int _len_a_v0 = 1;
          a.v = (int *) malloc(_len_a_v0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_a_v0; _j0++) {
            a.v[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_4__ benchRet = av_shr_i(a,s);
          free(a.v);
        
        break;
    }
    // big-arr
    case 1:
    {
          int s = 255;
          struct TYPE_4__ a;
          int _len_a_v0 = 1;
          a.v = (int *) malloc(_len_a_v0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_a_v0; _j0++) {
            a.v[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_4__ benchRet = av_shr_i(a,s);
          free(a.v);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int s = 10;
          struct TYPE_4__ a;
          int _len_a_v0 = 1;
          a.v = (int *) malloc(_len_a_v0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_a_v0; _j0++) {
            a.v[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_4__ benchRet = av_shr_i(a,s);
          free(a.v);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
