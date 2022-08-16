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
typedef  int uint8_t ;
typedef  int uint32_t ;
struct TYPE_3__ {int* data; int shift; int physical_min; int physical_max; scalar_t__ count; int size; int resolution; } ;
typedef  TYPE_1__ HID_Report_ItemTypedef ;

/* Variables and functions */

uint32_t HID_WriteItem(HID_Report_ItemTypedef *ri, uint32_t value, uint8_t ndx)
{
  uint32_t x;
  uint32_t mask;
  uint32_t bofs;
  uint8_t *data=ri->data;
  uint8_t shift=ri->shift;
  
  if (value < ri->physical_min || value > ri->physical_max)  
  {
    return(1);
  }
  
    /* if this is an array, wee may need to offset ri->data.*/
  if (ri->count > 0)
  { 
    /* If app tries to read outside of the array. */
    if (ri->count >= ndx)
    {
      return(0);
    }
    /* calculate bit offset */
    bofs = ndx*ri->size;
    bofs += shift;
    /* calculate byte offset + shift pair from bit offset. */    
    data+=bofs/8;
    shift=(uint8_t)(bofs%8);

  }

  /* Convert physical value to logical value. */  
  if (ri->resolution != 1)
  {
    value=value/ri->resolution;
  }

  /* Write logical value to report in little endian order. */
  mask=(uint32_t)((1<<ri->size)-1);
  value = (value & mask) << shift;
  
  for(x=0; x < ((ri->size & 0x7) ? (ri->size/8)+1 : (ri->size/8)); x++)
  {
    *(ri->data+x)=(uint8_t)((*(ri->data+x) & ~(mask>>(x*8))) | ((value>>(x*8)) & (mask>>(x*8))));
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
          int value = 100;
          int ndx = 100;
          int _len_ri0 = 1;
          struct TYPE_3__ * ri = (struct TYPE_3__ *) malloc(_len_ri0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ri0; _i0++) {
              int _len_ri__i0__data0 = 1;
          ri[_i0].data = (int *) malloc(_len_ri__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ri__i0__data0; _j0++) {
            ri[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ri[_i0].shift = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].physical_min = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].physical_max = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].resolution = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = HID_WriteItem(ri,value,ndx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ri0; _aux++) {
          free(ri[_aux].data);
          }
          free(ri);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
