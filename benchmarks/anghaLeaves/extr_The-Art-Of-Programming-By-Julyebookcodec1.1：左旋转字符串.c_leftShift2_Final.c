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
       1            big-arr-10x\n\
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

void leftShift2(char * arr, int len, int n)
{
    int i;
    size_t tmpLen = len;
    int p0 = 0;
    int p1 = n;
    char tmpChar;
    /*  O(m - n - k)  k is the last section*/
    while (p1 + n - 1 < tmpLen)
    {
        tmpChar = *(arr + p0);
        *(arr + p0) = *(arr + p1);
        *(arr + p1) = tmpChar;
        p0++;
        p1++;
    }
    /*
     *  not good O(k * (n + k)) k = tmpLen - p1
     for(i = 0;i < tmpLen - p1;i++){ //移动后面剩下的
     tmpChar = *(arr + tmpLen - 1);
     for(j = tmpLen - 1;j > p0;j--){
     *(arr + j) = *(arr + j -1);
     }
     *(arr + p0) = tmpChar;
     }
     */
    /* good O(k * n) */
    while (p1 < tmpLen)
    {
        tmpChar = *(arr + p1);
        for (i = p1; i > p0; i--)
        {
            *(arr + i) = *(arr + i - 1);
        }
        *(arr + p0) = tmpChar;
        p0++;
        p1++;
    }
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
          int len = 100;
          int n = 100;
          int _len_arr0 = 1;
          char * arr = (char *) malloc(_len_arr0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_arr0; _i0++) {
            arr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          leftShift2(arr,len,n);
          free(arr);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int len = 10;
          int n = 10;
          int _len_arr0 = 100;
          char * arr = (char *) malloc(_len_arr0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_arr0; _i0++) {
            arr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          leftShift2(arr,len,n);
          free(arr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
