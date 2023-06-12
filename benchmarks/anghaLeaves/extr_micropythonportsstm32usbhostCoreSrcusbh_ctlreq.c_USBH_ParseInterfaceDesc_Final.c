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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  void* uint8_t ;
struct TYPE_3__ {void* iInterface; void* bInterfaceProtocol; void* bInterfaceSubClass; void* bInterfaceClass; void* bNumEndpoints; void* bAlternateSetting; void* bInterfaceNumber; void* bDescriptorType; void* bLength; } ;
typedef  TYPE_1__ USBH_InterfaceDescTypeDef ;

/* Variables and functions */

__attribute__((used)) static void  USBH_ParseInterfaceDesc (USBH_InterfaceDescTypeDef *if_descriptor, 
                                      uint8_t *buf)
{
  if_descriptor->bLength            = *(uint8_t  *) (buf + 0);
  if_descriptor->bDescriptorType    = *(uint8_t  *) (buf + 1);
  if_descriptor->bInterfaceNumber   = *(uint8_t  *) (buf + 2);
  if_descriptor->bAlternateSetting  = *(uint8_t  *) (buf + 3);
  if_descriptor->bNumEndpoints      = *(uint8_t  *) (buf + 4);
  if_descriptor->bInterfaceClass    = *(uint8_t  *) (buf + 5);
  if_descriptor->bInterfaceSubClass = *(uint8_t  *) (buf + 6);
  if_descriptor->bInterfaceProtocol = *(uint8_t  *) (buf + 7);
  if_descriptor->iInterface         = *(uint8_t  *) (buf + 8);
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
          // static_instructions_O0 : 42
          // dynamic_instructions_O0 : 42
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 22
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 22
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 22
          // ------------------------------- 
          // static_instructions_Ofast : 22
          // dynamic_instructions_Ofast : 22
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 22
          // ------------------------------- 

          int _len_if_descriptor0 = 65025;
          struct TYPE_3__ * if_descriptor = (struct TYPE_3__ *) malloc(_len_if_descriptor0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_if_descriptor0; _i0++) {
            
          }
        
          int _len_buf0 = 65025;
          void ** buf = (void **) malloc(_len_buf0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
          }
        
          USBH_ParseInterfaceDesc(if_descriptor,buf);
          free(if_descriptor);
          for(int i1 = 0; i1 < _len_buf0; i1++) {
              }
          free(buf);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 42
          // dynamic_instructions_O0 : 42
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 22
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 22
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 22
          // ------------------------------- 
          // static_instructions_Ofast : 22
          // dynamic_instructions_Ofast : 22
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 22
          // ------------------------------- 

          int _len_if_descriptor0 = 100;
          struct TYPE_3__ * if_descriptor = (struct TYPE_3__ *) malloc(_len_if_descriptor0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_if_descriptor0; _i0++) {
            
          }
        
          int _len_buf0 = 100;
          void ** buf = (void **) malloc(_len_buf0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
          }
        
          USBH_ParseInterfaceDesc(if_descriptor,buf);
          free(if_descriptor);
          for(int i1 = 0; i1 < _len_buf0; i1++) {
              }
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
