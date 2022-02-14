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
       0            big-arr\n\
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
typedef  size_t u8 ;

/* Variables and functions */
 size_t MAX_SSID_LEN ; 
 int TAG_PARAM_OFFSET ; 

__attribute__((used)) static inline void get_ssid(u8 *data, u8 *ssid, u8 *p_ssid_len)
{
	u8 i, j, len;

	len = data[TAG_PARAM_OFFSET + 1];
	j   = TAG_PARAM_OFFSET + 2;

	if (len >= MAX_SSID_LEN)
		len = 0;

	for (i = 0; i < len; i++, j++)
		ssid[i] = data[j];

	ssid[len] = '\0';

	*p_ssid_len = len;
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

    // big-arr
    case 0:
    {
          int _len_data0 = 65025;
          unsigned long * data = (unsigned long *) malloc(_len_data0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ssid0 = 65025;
          unsigned long * ssid = (unsigned long *) malloc(_len_ssid0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_ssid0; _i0++) {
            ssid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_ssid_len0 = 65025;
          unsigned long * p_ssid_len = (unsigned long *) malloc(_len_p_ssid_len0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_p_ssid_len0; _i0++) {
            p_ssid_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_ssid(data,ssid,p_ssid_len);
          free(data);
          free(ssid);
          free(p_ssid_len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
