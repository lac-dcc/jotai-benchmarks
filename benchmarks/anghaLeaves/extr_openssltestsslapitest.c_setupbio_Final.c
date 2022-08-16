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
typedef  int /*<<< orphan*/  BIO ;

/* Variables and functions */
#define  USE_BIO_1 130 
#define  USE_BIO_2 129 
#define  USE_NULL 128 

__attribute__((used)) static void setupbio(BIO **res, BIO *bio1, BIO *bio2, int type)
{
    switch (type) {
    case USE_NULL:
        *res = NULL;
        break;
    case USE_BIO_1:
        *res = bio1;
        break;
    case USE_BIO_2:
        *res = bio2;
        break;
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
          int type = 100;
          int _len_res0 = 1;
          int ** res = (int **) malloc(_len_res0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            int _len_res1 = 1;
            res[_i0] = (int *) malloc(_len_res1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_res1; _i1++) {
              res[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_bio10 = 1;
          int * bio1 = (int *) malloc(_len_bio10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bio10; _i0++) {
            bio1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bio20 = 1;
          int * bio2 = (int *) malloc(_len_bio20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bio20; _i0++) {
            bio2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setupbio(res,bio1,bio2,type);
          for(int i1 = 0; i1 < _len_res0; i1++) {
            int _len_res1 = 1;
              free(res[i1]);
          }
          free(res);
          free(bio1);
          free(bio2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
