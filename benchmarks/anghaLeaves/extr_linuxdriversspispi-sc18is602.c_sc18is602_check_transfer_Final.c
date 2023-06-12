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
       3            empty\n\
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
struct spi_transfer {scalar_t__ len; } ;
struct spi_device {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ SC18IS602_BUFSIZ ; 

__attribute__((used)) static int sc18is602_check_transfer(struct spi_device *spi,
				    struct spi_transfer *t, int tlen)
{
	if (t && t->len + tlen > SC18IS602_BUFSIZ)
		return -EINVAL;

	return 0;
}

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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int tlen = 100;
        
          int _len_spi0 = 1;
          struct spi_device * spi = (struct spi_device *) malloc(_len_spi0*sizeof(struct spi_device));
          for(int _i0 = 0; _i0 < _len_spi0; _i0++) {
              spi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_t0 = 1;
          struct spi_transfer * t = (struct spi_transfer *) malloc(_len_t0*sizeof(struct spi_transfer));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              t[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = sc18is602_check_transfer(spi,t,tlen);
          printf("%d\n", benchRet); 
          free(spi);
          free(t);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int tlen = 255;
        
          int _len_spi0 = 65025;
          struct spi_device * spi = (struct spi_device *) malloc(_len_spi0*sizeof(struct spi_device));
          for(int _i0 = 0; _i0 < _len_spi0; _i0++) {
              spi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_t0 = 65025;
          struct spi_transfer * t = (struct spi_transfer *) malloc(_len_t0*sizeof(struct spi_transfer));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              t[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = sc18is602_check_transfer(spi,t,tlen);
          printf("%d\n", benchRet); 
          free(spi);
          free(t);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int tlen = 10;
        
          int _len_spi0 = 100;
          struct spi_device * spi = (struct spi_device *) malloc(_len_spi0*sizeof(struct spi_device));
          for(int _i0 = 0; _i0 < _len_spi0; _i0++) {
              spi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_t0 = 100;
          struct spi_transfer * t = (struct spi_transfer *) malloc(_len_t0*sizeof(struct spi_transfer));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              t[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = sc18is602_check_transfer(spi,t,tlen);
          printf("%d\n", benchRet); 
          free(spi);
          free(t);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int tlen = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_spi0 = 1;
          struct spi_device * spi = (struct spi_device *) malloc(_len_spi0*sizeof(struct spi_device));
          for(int _i0 = 0; _i0 < _len_spi0; _i0++) {
              spi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_t0 = 1;
          struct spi_transfer * t = (struct spi_transfer *) malloc(_len_t0*sizeof(struct spi_transfer));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              t[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = sc18is602_check_transfer(spi,t,tlen);
          printf("%d\n", benchRet); 
          free(spi);
          free(t);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
