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
       0            big-arr\n\
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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int uint16_t ;

/* Variables and functions */
 int /*<<< orphan*/  USB_DESC_TYPE_STRING ; 

__attribute__((used)) static void USBH_ParseStringDesc (uint8_t* psrc, 
                                  uint8_t* pdest, 
                                  uint16_t length)
{
  uint16_t strlength;
  uint16_t idx;
  
  /* The UNICODE string descriptor is not NULL-terminated. The string length is
  computed by substracting two from the value of the first byte of the descriptor.
  */
  
  /* Check which is lower size, the Size of string or the length of bytes read 
  from the device */
  
  if ( psrc[1] == USB_DESC_TYPE_STRING)
  { /* Make sure the Descriptor is String Type */
    
    /* psrc[0] contains Size of Descriptor, subtract 2 to get the length of string */      
    strlength = ( ( (psrc[0]-2) <= length) ? (psrc[0]-2) :length); 
    psrc += 2; /* Adjust the offset ignoring the String Len and Descriptor type */
    
    for (idx = 0; idx < strlength; idx+=2 )
    {/* Copy Only the string and ignore the UNICODE ID, hence add the src */
      *pdest =  psrc[idx];
      pdest++;
    }  
    *pdest = 0; /* mark end of string */  
  }
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int length = 255;
        
          int _len_psrc0 = 65025;
          int * psrc = (int *) malloc(_len_psrc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_psrc0; _i0++) {
            psrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pdest0 = 65025;
          int * pdest = (int *) malloc(_len_pdest0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdest0; _i0++) {
            pdest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          USBH_ParseStringDesc(psrc,pdest,length);
          free(psrc);
          free(pdest);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int length = 10;
        
          int _len_psrc0 = 100;
          int * psrc = (int *) malloc(_len_psrc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_psrc0; _i0++) {
            psrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pdest0 = 100;
          int * pdest = (int *) malloc(_len_pdest0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdest0; _i0++) {
            pdest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          USBH_ParseStringDesc(psrc,pdest,length);
          free(psrc);
          free(pdest);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
