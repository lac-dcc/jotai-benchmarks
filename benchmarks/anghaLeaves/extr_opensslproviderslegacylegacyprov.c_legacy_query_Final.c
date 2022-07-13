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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Type definitions */
typedef  int /*<<< orphan*/  OSSL_PROVIDER ;
typedef  int /*<<< orphan*/  OSSL_ALGORITHM ;

/* Variables and functions */
#define  OSSL_OP_DIGEST 128 
 int /*<<< orphan*/  const* legacy_digests ; 

__attribute__((used)) static const OSSL_ALGORITHM *legacy_query(OSSL_PROVIDER *prov,
                                          int operation_id,
                                          int *no_cache)
{
    *no_cache = 0;
    switch (operation_id) {
    case OSSL_OP_DIGEST:
        return legacy_digests;
    }
    return NULL;
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
          int operation_id = 100;
          int _len_prov0 = 1;
          int * prov = (int *) malloc(_len_prov0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_prov0; _i0++) {
            prov[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_no_cache0 = 1;
          int * no_cache = (int *) malloc(_len_no_cache0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_no_cache0; _i0++) {
            no_cache[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = legacy_query(prov,operation_id,no_cache);
          printf("{{other_type}} %p\n", &benchRet); 
          free(prov);
          free(no_cache);
        
        break;
    }
    // big-arr
    case 1:
    {
          int operation_id = 255;
          int _len_prov0 = 65025;
          int * prov = (int *) malloc(_len_prov0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_prov0; _i0++) {
            prov[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_no_cache0 = 65025;
          int * no_cache = (int *) malloc(_len_no_cache0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_no_cache0; _i0++) {
            no_cache[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = legacy_query(prov,operation_id,no_cache);
          printf("{{other_type}} %p\n", &benchRet); 
          free(prov);
          free(no_cache);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int operation_id = 10;
          int _len_prov0 = 100;
          int * prov = (int *) malloc(_len_prov0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_prov0; _i0++) {
            prov[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_no_cache0 = 100;
          int * no_cache = (int *) malloc(_len_no_cache0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_no_cache0; _i0++) {
            no_cache[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = legacy_query(prov,operation_id,no_cache);
          printf("{{other_type}} %p\n", &benchRet); 
          free(prov);
          free(no_cache);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
