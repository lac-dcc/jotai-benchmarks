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
typedef  int u32 ;
struct cx231xx {int dummy; } ;

/* Variables and functions */
 int MCI_MEMORY_ADDRESS_BYTE0 ; 
 int MCI_MEMORY_ADDRESS_BYTE1 ; 
 int MCI_MEMORY_ADDRESS_BYTE2 ; 
 int MCI_MEMORY_DATA_BYTE0 ; 
 int MCI_MEMORY_DATA_BYTE1 ; 
 int MCI_MEMORY_DATA_BYTE2 ; 
 int MCI_MEMORY_DATA_BYTE3 ; 
 int MCI_MODE_MEMORY_WRITE ; 

__attribute__((used)) static void mci_write_memory_to_gpio(struct cx231xx *dev, u32 address, u32 value,
		u32 *p_fw_image)
{
	u32 temp = 0;
	int i = 0;

	temp = 0x82 | MCI_MEMORY_DATA_BYTE0 | ((value & 0x000000FF) << 8);
	temp = temp << 10;
	*p_fw_image = temp;
	p_fw_image++;
	temp = temp | (0x05 << 10);
	*p_fw_image = temp;
	p_fw_image++;

	/*write data byte 1;*/
	temp = 0x82 | MCI_MEMORY_DATA_BYTE1 | (value & 0x0000FF00);
	temp = temp << 10;
	*p_fw_image = temp;
	p_fw_image++;
	temp = temp | (0x05 << 10);
	*p_fw_image = temp;
	p_fw_image++;

	/*write data byte 2;*/
	temp = 0x82 | MCI_MEMORY_DATA_BYTE2 | ((value & 0x00FF0000) >> 8);
	temp = temp << 10;
	*p_fw_image = temp;
	p_fw_image++;
	temp = temp | (0x05 << 10);
	*p_fw_image = temp;
	p_fw_image++;

	/*write data byte 3;*/
	temp = 0x82 | MCI_MEMORY_DATA_BYTE3 | ((value & 0xFF000000) >> 16);
	temp = temp << 10;
	*p_fw_image = temp;
	p_fw_image++;
	temp = temp | (0x05 << 10);
	*p_fw_image = temp;
	p_fw_image++;

	/* write address byte 2;*/
	temp = 0x82 | MCI_MEMORY_ADDRESS_BYTE2 | MCI_MODE_MEMORY_WRITE |
		((address & 0x003F0000) >> 8);
	temp = temp << 10;
	*p_fw_image = temp;
	p_fw_image++;
	temp = temp | (0x05 << 10);
	*p_fw_image = temp;
	p_fw_image++;

	/* write address byte 1;*/
	temp = 0x82 | MCI_MEMORY_ADDRESS_BYTE1 | (address & 0xFF00);
	temp = temp << 10;
	*p_fw_image = temp;
	p_fw_image++;
	temp = temp | (0x05 << 10);
	*p_fw_image = temp;
	p_fw_image++;

	/* write address byte 0;*/
	temp = 0x82 | MCI_MEMORY_ADDRESS_BYTE0 | ((address & 0x00FF) << 8);
	temp = temp << 10;
	*p_fw_image = temp;
	p_fw_image++;
	temp = temp | (0x05 << 10);
	*p_fw_image = temp;
	p_fw_image++;

	for (i = 0; i < 6; i++) {
		*p_fw_image = 0xFFFFFFFF;
		p_fw_image++;
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
          // static_instructions_O0 : 196
          // dynamic_instructions_O0 : 253
          // ------------------------------- 
          // static_instructions_O1 : 74
          // dynamic_instructions_O1 : 74
          // ------------------------------- 
          // static_instructions_O2 : 66
          // dynamic_instructions_O2 : 66
          // ------------------------------- 
          // static_instructions_O3 : 66
          // dynamic_instructions_O3 : 66
          // ------------------------------- 
          // static_instructions_Ofast : 66
          // dynamic_instructions_Ofast : 66
          // ------------------------------- 
          // static_instructions_Os : 67
          // dynamic_instructions_Os : 67
          // ------------------------------- 
          // static_instructions_Oz : 70
          // dynamic_instructions_Oz : 97
          // ------------------------------- 

          int address = 255;
        
          int value = 255;
        
          int _len_dev0 = 65025;
          struct cx231xx * dev = (struct cx231xx *) malloc(_len_dev0*sizeof(struct cx231xx));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_p_fw_image0 = 65025;
          int * p_fw_image = (int *) malloc(_len_p_fw_image0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_fw_image0; _i0++) {
            p_fw_image[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          mci_write_memory_to_gpio(dev,address,value,p_fw_image);
          free(dev);
          free(p_fw_image);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 196
          // dynamic_instructions_O0 : 253
          // ------------------------------- 
          // static_instructions_O1 : 74
          // dynamic_instructions_O1 : 74
          // ------------------------------- 
          // static_instructions_O2 : 66
          // dynamic_instructions_O2 : 66
          // ------------------------------- 
          // static_instructions_O3 : 66
          // dynamic_instructions_O3 : 66
          // ------------------------------- 
          // static_instructions_Ofast : 66
          // dynamic_instructions_Ofast : 66
          // ------------------------------- 
          // static_instructions_Os : 67
          // dynamic_instructions_Os : 67
          // ------------------------------- 
          // static_instructions_Oz : 70
          // dynamic_instructions_Oz : 97
          // ------------------------------- 

          int address = 10;
        
          int value = 10;
        
          int _len_dev0 = 100;
          struct cx231xx * dev = (struct cx231xx *) malloc(_len_dev0*sizeof(struct cx231xx));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_p_fw_image0 = 100;
          int * p_fw_image = (int *) malloc(_len_p_fw_image0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_fw_image0; _i0++) {
            p_fw_image[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          mci_write_memory_to_gpio(dev,address,value,p_fw_image);
          free(dev);
          free(p_fw_image);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
