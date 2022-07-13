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
       1            big-arr-10x\n\
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
typedef  int dword ;

/* Variables and functions */
 scalar_t__ CAPIDTMF_RECV_FUNDAMENTAL_DECREMENT ; 
 int CAPIDTMF_RECV_TOTAL_FREQUENCY_COUNT ; 

__attribute__((used)) static void capidtmf_goertzel_loop(long *buffer, long *coeffs, short *sample, long count)
{
	int i, j;
	long c, d, q0, q1, q2;

	for (i = 0; i < CAPIDTMF_RECV_TOTAL_FREQUENCY_COUNT - 1; i++)
	{
		q1 = buffer[i];
		q2 = buffer[i + CAPIDTMF_RECV_TOTAL_FREQUENCY_COUNT];
		d = coeffs[i] >> 1;
		c = d << 1;
		if (c >= 0)
		{
			for (j = 0; j < count; j++)
			{
				q0 = sample[j] - q2 + (c * (q1 >> 16)) + (((dword)(((dword) d) * ((dword)(q1 & 0xffff)))) >> 15);
				q2 = q1;
				q1 = q0;
			}
		}
		else
		{
			c = -c;
			d = -d;
			for (j = 0; j < count; j++)
			{
				q0 = sample[j] - q2 - ((c * (q1 >> 16)) + (((dword)(((dword) d) * ((dword)(q1 & 0xffff)))) >> 15));
				q2 = q1;
				q1 = q0;
			}
		}
		buffer[i] = q1;
		buffer[i + CAPIDTMF_RECV_TOTAL_FREQUENCY_COUNT] = q2;
	}
	q1 = buffer[i];
	q2 = buffer[i + CAPIDTMF_RECV_TOTAL_FREQUENCY_COUNT];
	c = (coeffs[i] >> 1) << 1;
	if (c >= 0)
	{
		for (j = 0; j < count; j++)
		{
			q0 = sample[j] - q2 + (c * (q1 >> 16)) + (((dword)(((dword)(c >> 1)) * ((dword)(q1 & 0xffff)))) >> 15);
			q2 = q1;
			q1 = q0;
			c -= CAPIDTMF_RECV_FUNDAMENTAL_DECREMENT;
		}
	}
	else
	{
		c = -c;
		for (j = 0; j < count; j++)
		{
			q0 = sample[j] - q2 - ((c * (q1 >> 16)) + (((dword)(((dword)(c >> 1)) * ((dword)(q1 & 0xffff)))) >> 15));
			q2 = q1;
			q1 = q0;
			c += CAPIDTMF_RECV_FUNDAMENTAL_DECREMENT;
		}
	}
	coeffs[i] = c;
	buffer[i] = q1;
	buffer[i + CAPIDTMF_RECV_TOTAL_FREQUENCY_COUNT] = q2;
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
          long count = 255;
          int _len_buffer0 = 65025;
          long * buffer = (long *) malloc(_len_buffer0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_coeffs0 = 65025;
          long * coeffs = (long *) malloc(_len_coeffs0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_coeffs0; _i0++) {
            coeffs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sample0 = 65025;
          short * sample = (short *) malloc(_len_sample0*sizeof(short));
          for(int _i0 = 0; _i0 < _len_sample0; _i0++) {
            sample[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          capidtmf_goertzel_loop(buffer,coeffs,sample,count);
          free(buffer);
          free(coeffs);
          free(sample);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long count = 10;
          int _len_buffer0 = 100;
          long * buffer = (long *) malloc(_len_buffer0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_coeffs0 = 100;
          long * coeffs = (long *) malloc(_len_coeffs0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_coeffs0; _i0++) {
            coeffs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sample0 = 100;
          short * sample = (short *) malloc(_len_sample0*sizeof(short));
          for(int _i0 = 0; _i0 < _len_sample0; _i0++) {
            sample[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          capidtmf_goertzel_loop(buffer,coeffs,sample,count);
          free(buffer);
          free(coeffs);
          free(sample);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
