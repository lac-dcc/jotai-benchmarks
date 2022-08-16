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
struct TYPE_3__ {unsigned char ctrlFlags; } ;
typedef  TYPE_1__ unixFile ;

/* Variables and functions */

__attribute__((used)) static void unixModeBit(unixFile *pFile, unsigned char mask, int *pArg){
  if( *pArg<0 ){
    *pArg = (pFile->ctrlFlags & mask)!=0;
  }else if( (*pArg)==0 ){
    pFile->ctrlFlags &= ~mask;
  }else{
    pFile->ctrlFlags |= mask;
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
          unsigned char mask = 100;
          int _len_pFile0 = 1;
          struct TYPE_3__ * pFile = (struct TYPE_3__ *) malloc(_len_pFile0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pFile0; _i0++) {
            pFile[_i0].ctrlFlags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pArg0 = 1;
          int * pArg = (int *) malloc(_len_pArg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pArg0; _i0++) {
            pArg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unixModeBit(pFile,mask,pArg);
          free(pFile);
          free(pArg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
