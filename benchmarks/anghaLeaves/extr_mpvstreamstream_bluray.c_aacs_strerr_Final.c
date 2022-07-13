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

/* Variables and functions */
#define  AACS_ERROR_CERT_REVOKED 135 
#define  AACS_ERROR_CORRUPTED_DISC 134 
#define  AACS_ERROR_MMC_FAILURE 133 
#define  AACS_ERROR_MMC_OPEN 132 
#define  AACS_ERROR_NO_CERT 131 
#define  AACS_ERROR_NO_CONFIG 130 
#define  AACS_ERROR_NO_DK 129 
#define  AACS_ERROR_NO_PK 128 

__attribute__((used)) static const char *aacs_strerr(int err)
{
    switch (err) {
    case AACS_ERROR_CORRUPTED_DISC: return "opening or reading of AACS files failed";
    case AACS_ERROR_NO_CONFIG:      return "missing config file";
    case AACS_ERROR_NO_PK:          return "no matching processing key";
    case AACS_ERROR_NO_CERT:        return "no valid certificate";
    case AACS_ERROR_CERT_REVOKED:   return "certificate has been revoked";
    case AACS_ERROR_MMC_OPEN:       return "MMC open failed (maybe no MMC drive?)";
    case AACS_ERROR_MMC_FAILURE:    return "MMC failed";
    case AACS_ERROR_NO_DK:          return "no matching device key";
    default:                        return "unknown error";
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
          int err = 100;
          const char * benchRet = aacs_strerr(err);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int err = 255;
          const char * benchRet = aacs_strerr(err);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int err = 10;
          const char * benchRet = aacs_strerr(err);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
