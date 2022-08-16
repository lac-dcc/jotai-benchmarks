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
typedef  int zbar_symbol_type_t ;
typedef  int /*<<< orphan*/  zbar_decoder_t ;
typedef  int /*<<< orphan*/  zbar_config_t ;

/* Variables and functions */

__attribute__((used)) static inline int decoder_set_config_int (zbar_decoder_t *dcode,
                                          zbar_symbol_type_t sym,
                                          zbar_config_t cfg,
                                          int val)
{
    switch(sym) {

#ifdef ENABLE_I25
    case ZBAR_I25:
        CFG(dcode->i25, cfg) = val;
        break;
#endif
#ifdef ENABLE_CODABAR
    case ZBAR_CODABAR:
        CFG(dcode->codabar, cfg) = val;
        break;
#endif
#ifdef ENABLE_CODE39
    case ZBAR_CODE39:
        CFG(dcode->code39, cfg) = val;
        break;
#endif
#ifdef ENABLE_CODE93
    case ZBAR_CODE93:
        CFG(dcode->code93, cfg) = val;
        break;
#endif
#ifdef ENABLE_CODE128
    case ZBAR_CODE128:
        CFG(dcode->code128, cfg) = val;
        break;
#endif
#ifdef ENABLE_PDF417
    case ZBAR_PDF417:
        CFG(dcode->pdf417, cfg) = val;
        break;
#endif

    default:
        return(1);
    }
    return(0);
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
          int sym = 100;
          int cfg = 100;
          int val = 100;
          int _len_dcode0 = 1;
          int * dcode = (int *) malloc(_len_dcode0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dcode0; _i0++) {
            dcode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = decoder_set_config_int(dcode,sym,cfg,val);
          printf("%d\n", benchRet); 
          free(dcode);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int sym = 10;
          int cfg = 10;
          int val = 10;
          int _len_dcode0 = 100;
          int * dcode = (int *) malloc(_len_dcode0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dcode0; _i0++) {
            dcode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = decoder_set_config_int(dcode,sym,cfg,val);
          printf("%d\n", benchRet); 
          free(dcode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
