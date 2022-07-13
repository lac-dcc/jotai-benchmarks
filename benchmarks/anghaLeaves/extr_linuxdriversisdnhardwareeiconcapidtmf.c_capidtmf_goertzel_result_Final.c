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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
 int CAPIDTMF_RECV_TOTAL_FREQUENCY_COUNT ; 

__attribute__((used)) static void capidtmf_goertzel_result(long *buffer, long *coeffs)
{
	int i;
	long d, e, q1, q2, lo, mid, hi;
	dword k;

	for (i = 0; i < CAPIDTMF_RECV_TOTAL_FREQUENCY_COUNT; i++)
	{
		q1 = buffer[i];
		q2 = buffer[i + CAPIDTMF_RECV_TOTAL_FREQUENCY_COUNT];
		d = coeffs[i] >> 1;
		if (d >= 0)
			d = ((d << 1) * (-q1 >> 16)) + (((dword)(((dword) d) * ((dword)(-q1 & 0xffff)))) >> 15);
		else
			d = ((-d << 1) * (-q1 >> 16)) + (((dword)(((dword) -d) * ((dword)(-q1 & 0xffff)))) >> 15);
		e = (q2 >= 0) ? q2 : -q2;
		if (d >= 0)
		{
			k = ((dword)(d & 0xffff)) * ((dword)(e & 0xffff));
			lo = k & 0xffff;
			mid = k >> 16;
			k = ((dword)(d >> 16)) * ((dword)(e & 0xffff));
			mid += k & 0xffff;
			hi = k >> 16;
			k = ((dword)(d & 0xffff)) * ((dword)(e >> 16));
			mid += k & 0xffff;
			hi += k >> 16;
			hi += ((dword)(d >> 16)) * ((dword)(e >> 16));
		}
		else
		{
			d = -d;
			k = ((dword)(d & 0xffff)) * ((dword)(e & 0xffff));
			lo = -((long)(k & 0xffff));
			mid = -((long)(k >> 16));
			k = ((dword)(d >> 16)) * ((dword)(e & 0xffff));
			mid -= k & 0xffff;
			hi = -((long)(k >> 16));
			k = ((dword)(d & 0xffff)) * ((dword)(e >> 16));
			mid -= k & 0xffff;
			hi -= k >> 16;
			hi -= ((dword)(d >> 16)) * ((dword)(e >> 16));
		}
		if (q2 < 0)
		{
			lo = -lo;
			mid = -mid;
			hi = -hi;
		}
		d = (q1 >= 0) ? q1 : -q1;
		k = ((dword)(d & 0xffff)) * ((dword)(d & 0xffff));
		lo += k & 0xffff;
		mid += k >> 16;
		k = ((dword)(d >> 16)) * ((dword)(d & 0xffff));
		mid += (k & 0xffff) << 1;
		hi += (k >> 16) << 1;
		hi += ((dword)(d >> 16)) * ((dword)(d >> 16));
		d = (q2 >= 0) ? q2 : -q2;
		k = ((dword)(d & 0xffff)) * ((dword)(d & 0xffff));
		lo += k & 0xffff;
		mid += k >> 16;
		k = ((dword)(d >> 16)) * ((dword)(d & 0xffff));
		mid += (k & 0xffff) << 1;
		hi += (k >> 16) << 1;
		hi += ((dword)(d >> 16)) * ((dword)(d >> 16));
		mid += lo >> 16;
		hi += mid >> 16;
		buffer[i] = (lo & 0xffff) | (mid << 16);
		buffer[i + CAPIDTMF_RECV_TOTAL_FREQUENCY_COUNT] = hi;
	}
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
          int _len_buffer0 = 1;
          long * buffer = (long *) malloc(_len_buffer0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_coeffs0 = 1;
          long * coeffs = (long *) malloc(_len_coeffs0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_coeffs0; _i0++) {
            coeffs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          capidtmf_goertzel_result(buffer,coeffs);
          free(buffer);
          free(coeffs);
        
        break;
    }
    // big-arr
    case 1:
    {
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
          capidtmf_goertzel_result(buffer,coeffs);
          free(buffer);
          free(coeffs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
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
          capidtmf_goertzel_result(buffer,coeffs);
          free(buffer);
          free(coeffs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
