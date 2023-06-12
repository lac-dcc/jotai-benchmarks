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
       0            empty\n\
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
struct usb_usbvision {int /*<<< orphan*/ * compr_block_types; } ;

/* Variables and functions */

__attribute__((used)) static int usbvision_decompress(struct usb_usbvision *usbvision, unsigned char *compressed,
								unsigned char *decompressed, int *start_pos,
								int *block_typestart_pos, int len)
{
	int rest_pixel, idx, pos, extra_pos, block_len, block_type_pos, block_type_len;
	unsigned char block_byte, block_code, block_type, block_type_byte, integrator;

	integrator = 0;
	pos = *start_pos;
	block_type_pos = *block_typestart_pos;
	extra_pos = pos;
	block_len = 0;
	block_byte = 0;
	block_code = 0;
	block_type = 0;
	block_type_byte = 0;
	block_type_len = 0;
	rest_pixel = len;

	for (idx = 0; idx < len; idx++) {
		if (block_len == 0) {
			if (block_type_len == 0) {
				block_type_byte = compressed[block_type_pos];
				block_type_pos++;
				block_type_len = 4;
			}
			block_type = (block_type_byte & 0xC0) >> 6;

			/* statistic: */
			usbvision->compr_block_types[block_type]++;

			pos = extra_pos;
			if (block_type == 0) {
				if (rest_pixel >= 24) {
					idx += 23;
					rest_pixel -= 24;
					integrator = decompressed[idx];
				} else {
					idx += rest_pixel - 1;
					rest_pixel = 0;
				}
			} else {
				block_code = compressed[pos];
				pos++;
				if (rest_pixel >= 24)
					block_len  = 24;
				else
					block_len = rest_pixel;
				rest_pixel -= block_len;
				extra_pos = pos + (block_len / 4);
			}
			block_type_byte <<= 2;
			block_type_len -= 1;
		}
		if (block_len > 0) {
			if ((block_len % 4) == 0) {
				block_byte = compressed[pos];
				pos++;
			}
			if (block_type == 1) /* inter Block */
				integrator = decompressed[idx];
			switch (block_byte & 0xC0) {
			case 0x03 << 6:
				integrator += compressed[extra_pos];
				extra_pos++;
				break;
			case 0x02 << 6:
				integrator += block_code;
				break;
			case 0x00:
				integrator -= block_code;
				break;
			}
			decompressed[idx] = integrator;
			block_byte <<= 2;
			block_len -= 1;
		}
	}
	*start_pos = extra_pos;
	*block_typestart_pos = block_type_pos;
	return idx;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          int len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_usbvision0 = 1;
          struct usb_usbvision * usbvision = (struct usb_usbvision *) malloc(_len_usbvision0*sizeof(struct usb_usbvision));
          for(int _i0 = 0; _i0 < _len_usbvision0; _i0++) {
              int _len_usbvision__i0__compr_block_types0 = 1;
          usbvision[_i0].compr_block_types = (int *) malloc(_len_usbvision__i0__compr_block_types0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_usbvision__i0__compr_block_types0; _j0++) {
            usbvision[_i0].compr_block_types[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_compressed0 = 1;
          unsigned char * compressed = (unsigned char *) malloc(_len_compressed0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_compressed0; _i0++) {
            compressed[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_decompressed0 = 1;
          unsigned char * decompressed = (unsigned char *) malloc(_len_decompressed0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_decompressed0; _i0++) {
            decompressed[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_start_pos0 = 1;
          int * start_pos = (int *) malloc(_len_start_pos0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_start_pos0; _i0++) {
            start_pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_block_typestart_pos0 = 1;
          int * block_typestart_pos = (int *) malloc(_len_block_typestart_pos0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_block_typestart_pos0; _i0++) {
            block_typestart_pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = usbvision_decompress(usbvision,compressed,decompressed,start_pos,block_typestart_pos,len);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_usbvision0; _aux++) {
          free(usbvision[_aux].compr_block_types);
          }
          free(usbvision);
          free(compressed);
          free(decompressed);
          free(start_pos);
          free(block_typestart_pos);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
