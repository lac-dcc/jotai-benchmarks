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

/* Variables and functions */

__attribute__((used)) static int computesizes(int nums[],int*narray){
int i;
int twotoi;
int a=0;
int na=0;
int n=0;
for(i=0,twotoi=1;twotoi/2<*narray;i++,twotoi*=2){
if(nums[i]>0){
a+=nums[i];
if(a>twotoi/2){
n=twotoi;
na=a;
}
}
if(a==*narray)break;
}
*narray=n;
return na;
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
          int _len_nums0 = 1;
          int * nums = (int *) malloc(_len_nums0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nums0; _i0++) {
            nums[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_narray0 = 1;
          int * narray = (int *) malloc(_len_narray0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_narray0; _i0++) {
            narray[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = computesizes(nums,narray);
          printf("%d\n", benchRet); 
          free(nums);
          free(narray);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
