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
struct sr6_tlv {int len; } ;
struct ipv6_sr_hdr {scalar_t__ type; int hdrlen; int segments_left; int first_segment; } ;

/* Variables and functions */
 scalar_t__ IPV6_SRCRT_TYPE_4 ; 

bool seg6_validate_srh(struct ipv6_sr_hdr *srh, int len)
{
	int trailing;
	unsigned int tlv_offset;

	if (srh->type != IPV6_SRCRT_TYPE_4)
		return false;

	if (((srh->hdrlen + 1) << 3) != len)
		return false;

	if (srh->segments_left > srh->first_segment)
		return false;

	tlv_offset = sizeof(*srh) + ((srh->first_segment + 1) << 4);

	trailing = len - tlv_offset;
	if (trailing < 0)
		return false;

	while (trailing) {
		struct sr6_tlv *tlv;
		unsigned int tlv_len;

		if (trailing < sizeof(*tlv))
			return false;

		tlv = (struct sr6_tlv *)((unsigned char *)srh + tlv_offset);
		tlv_len = sizeof(*tlv) + tlv->len;

		trailing -= tlv_len;
		if (trailing < 0)
			return false;

		tlv_offset += tlv_len;
	}

	return true;
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
          int len = 100;
          int _len_srh0 = 1;
          struct ipv6_sr_hdr * srh = (struct ipv6_sr_hdr *) malloc(_len_srh0*sizeof(struct ipv6_sr_hdr));
          for(int _i0 = 0; _i0 < _len_srh0; _i0++) {
            srh[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        srh[_i0].hdrlen = ((-2 * (next_i()%2)) + 1) * next_i();
        srh[_i0].segments_left = ((-2 * (next_i()%2)) + 1) * next_i();
        srh[_i0].first_segment = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = seg6_validate_srh(srh,len);
          printf("%d\n", benchRet); 
          free(srh);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
          int _len_srh0 = 65025;
          struct ipv6_sr_hdr * srh = (struct ipv6_sr_hdr *) malloc(_len_srh0*sizeof(struct ipv6_sr_hdr));
          for(int _i0 = 0; _i0 < _len_srh0; _i0++) {
            srh[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        srh[_i0].hdrlen = ((-2 * (next_i()%2)) + 1) * next_i();
        srh[_i0].segments_left = ((-2 * (next_i()%2)) + 1) * next_i();
        srh[_i0].first_segment = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = seg6_validate_srh(srh,len);
          printf("%d\n", benchRet); 
          free(srh);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
          int _len_srh0 = 100;
          struct ipv6_sr_hdr * srh = (struct ipv6_sr_hdr *) malloc(_len_srh0*sizeof(struct ipv6_sr_hdr));
          for(int _i0 = 0; _i0 < _len_srh0; _i0++) {
            srh[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        srh[_i0].hdrlen = ((-2 * (next_i()%2)) + 1) * next_i();
        srh[_i0].segments_left = ((-2 * (next_i()%2)) + 1) * next_i();
        srh[_i0].first_segment = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = seg6_validate_srh(srh,len);
          printf("%d\n", benchRet); 
          free(srh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
