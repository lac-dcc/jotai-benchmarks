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
struct libipw_device {int modulation; int freq_band; } ;

/* Variables and functions */
 int IEEE_A ; 
 int IEEE_B ; 
 int IEEE_G ; 
 int LIBIPW_24GHZ_BAND ; 
 int LIBIPW_52GHZ_BAND ; 
 int LIBIPW_CCK_MODULATION ; 
 int LIBIPW_OFDM_MODULATION ; 

__attribute__((used)) static inline int libipw_is_valid_mode(struct libipw_device *ieee,
					  int mode)
{
	/*
	 * It is possible for both access points and our device to support
	 * combinations of modes, so as long as there is one valid combination
	 * of ap/device supported modes, then return success
	 *
	 */
	if ((mode & IEEE_A) &&
	    (ieee->modulation & LIBIPW_OFDM_MODULATION) &&
	    (ieee->freq_band & LIBIPW_52GHZ_BAND))
		return 1;

	if ((mode & IEEE_G) &&
	    (ieee->modulation & LIBIPW_OFDM_MODULATION) &&
	    (ieee->freq_band & LIBIPW_24GHZ_BAND))
		return 1;

	if ((mode & IEEE_B) &&
	    (ieee->modulation & LIBIPW_CCK_MODULATION) &&
	    (ieee->freq_band & LIBIPW_24GHZ_BAND))
		return 1;

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
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
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
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int mode = 100;
        
          int _len_ieee0 = 1;
          struct libipw_device * ieee = (struct libipw_device *) malloc(_len_ieee0*sizeof(struct libipw_device));
          for(int _i0 = 0; _i0 < _len_ieee0; _i0++) {
              ieee[_i0].modulation = ((-2 * (next_i()%2)) + 1) * next_i();
          ieee[_i0].freq_band = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = libipw_is_valid_mode(ieee,mode);
          printf("%d\n", benchRet); 
          free(ieee);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
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
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int mode = 255;
        
          int _len_ieee0 = 65025;
          struct libipw_device * ieee = (struct libipw_device *) malloc(_len_ieee0*sizeof(struct libipw_device));
          for(int _i0 = 0; _i0 < _len_ieee0; _i0++) {
              ieee[_i0].modulation = ((-2 * (next_i()%2)) + 1) * next_i();
          ieee[_i0].freq_band = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = libipw_is_valid_mode(ieee,mode);
          printf("%d\n", benchRet); 
          free(ieee);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
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
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int mode = 10;
        
          int _len_ieee0 = 100;
          struct libipw_device * ieee = (struct libipw_device *) malloc(_len_ieee0*sizeof(struct libipw_device));
          for(int _i0 = 0; _i0 < _len_ieee0; _i0++) {
              ieee[_i0].modulation = ((-2 * (next_i()%2)) + 1) * next_i();
          ieee[_i0].freq_band = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = libipw_is_valid_mode(ieee,mode);
          printf("%d\n", benchRet); 
          free(ieee);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
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
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int mode = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_ieee0 = 1;
          struct libipw_device * ieee = (struct libipw_device *) malloc(_len_ieee0*sizeof(struct libipw_device));
          for(int _i0 = 0; _i0 < _len_ieee0; _i0++) {
              ieee[_i0].modulation = ((-2 * (next_i()%2)) + 1) * next_i();
          ieee[_i0].freq_band = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = libipw_is_valid_mode(ieee,mode);
          printf("%d\n", benchRet); 
          free(ieee);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
