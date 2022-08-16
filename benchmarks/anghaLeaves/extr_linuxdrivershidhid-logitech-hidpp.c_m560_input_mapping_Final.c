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

/* Type definitions */
struct hid_usage {int dummy; } ;
struct hid_input {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int m560_input_mapping(struct hid_device *hdev, struct hid_input *hi,
		struct hid_field *field, struct hid_usage *usage,
		unsigned long **bit, int *max)
{
	return -1;
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
          int _len_hdev0 = 1;
          struct hid_device * hdev = (struct hid_device *) malloc(_len_hdev0*sizeof(struct hid_device));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hi0 = 1;
          struct hid_input * hi = (struct hid_input *) malloc(_len_hi0*sizeof(struct hid_input));
          for(int _i0 = 0; _i0 < _len_hi0; _i0++) {
            hi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_field0 = 1;
          struct hid_field * field = (struct hid_field *) malloc(_len_field0*sizeof(struct hid_field));
          for(int _i0 = 0; _i0 < _len_field0; _i0++) {
            field[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_usage0 = 1;
          struct hid_usage * usage = (struct hid_usage *) malloc(_len_usage0*sizeof(struct hid_usage));
          for(int _i0 = 0; _i0 < _len_usage0; _i0++) {
            usage[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bit0 = 1;
          unsigned long ** bit = (unsigned long **) malloc(_len_bit0*sizeof(unsigned long *));
          for(int _i0 = 0; _i0 < _len_bit0; _i0++) {
            int _len_bit1 = 1;
            bit[_i0] = (unsigned long *) malloc(_len_bit1*sizeof(unsigned long));
            for(int _i1 = 0; _i1 < _len_bit1; _i1++) {
              bit[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_max0 = 1;
          int * max = (int *) malloc(_len_max0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_max0; _i0++) {
            max[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = m560_input_mapping(hdev,hi,field,usage,bit,max);
          printf("%d\n", benchRet); 
          free(hdev);
          free(hi);
          free(field);
          free(usage);
          for(int i1 = 0; i1 < _len_bit0; i1++) {
            int _len_bit1 = 1;
              free(bit[i1]);
          }
          free(bit);
          free(max);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
