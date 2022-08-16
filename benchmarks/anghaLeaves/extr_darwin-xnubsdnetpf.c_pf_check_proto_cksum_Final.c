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
typedef  struct TYPE_9__   TYPE_5__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  int u_int8_t ;
typedef  scalar_t__ u_int16_t ;
struct udphdr {int dummy; } ;
struct ip {int dummy; } ;
typedef  int sa_family_t ;
struct TYPE_6__ {int* pb_csum_flags; int* pb_csum_data; unsigned int pb_packet_len; } ;
typedef  TYPE_1__ pbuf_t ;
struct TYPE_9__ {int /*<<< orphan*/  icps_checksum; } ;
struct TYPE_8__ {int /*<<< orphan*/  tcps_rcvbadsum; } ;
struct TYPE_7__ {int /*<<< orphan*/  udps_badsum; } ;

/* Variables and functions */
 int CSUM_DATA_VALID ; 
 int CSUM_PSEUDO_HDR ; 
#define  IPPROTO_ICMP 130 
#define  IPPROTO_TCP 129 
#define  IPPROTO_UDP 128 
 TYPE_5__ icmpstat ; 
 TYPE_3__ tcpstat ; 
 TYPE_2__ udpstat ; 

__attribute__((used)) static int
pf_check_proto_cksum(pbuf_t *pbuf, int off, int len, u_int8_t p,
    sa_family_t af)
{
	u_int16_t sum;

	switch (p) {
	case IPPROTO_TCP:
	case IPPROTO_UDP:
		/*
		 * Optimize for the common case; if the hardware calculated
		 * value doesn't include pseudo-header checksum, or if it
		 * is partially-computed (only 16-bit summation), do it in
		 * software below.
		 */
		if ((*pbuf->pb_csum_flags &
		    (CSUM_DATA_VALID | CSUM_PSEUDO_HDR)) ==
		    (CSUM_DATA_VALID | CSUM_PSEUDO_HDR) &&
		    (*pbuf->pb_csum_data ^ 0xffff) == 0) {
			return (0);
		}
		break;
	case IPPROTO_ICMP:
#if INET6
	case IPPROTO_ICMPV6:
#endif /* INET6 */
		break;
	default:
		return (1);
	}
	if (off < (int)sizeof (struct ip) || len < (int)sizeof (struct udphdr))
		return (1);
	if (pbuf->pb_packet_len < (unsigned)(off + len))
		return (1);
	switch (af) {
#if INET
	case AF_INET:
		if (p == IPPROTO_ICMP) {
#if 0
			if (m->m_len < off)
				return (1);
			m->m_data += off;
			m->m_len -= off;
			sum = in_cksum(m, len);
			m->m_data -= off;
			m->m_len += off;
#else
			if (pbuf->pb_contig_len < (unsigned)off)
				return (1);
			sum = pbuf_inet_cksum(pbuf, 0, off, len);
#endif
		} else {
			if (pbuf->pb_contig_len < (int)sizeof (struct ip))
				return (1);
			sum = pbuf_inet_cksum(pbuf, p, off, len);
		}
		break;
#endif /* INET */
#if INET6
	case AF_INET6:
		if (pbuf->pb_contig_len < (int)sizeof (struct ip6_hdr))
			return (1);
		sum = pbuf_inet6_cksum(pbuf, p, off, len);
		break;
#endif /* INET6 */
	default:
		return (1);
	}
	if (sum) {
		switch (p) {
		case IPPROTO_TCP:
			tcpstat.tcps_rcvbadsum++;
			break;
		case IPPROTO_UDP:
			udpstat.udps_badsum++;
			break;
		case IPPROTO_ICMP:
			icmpstat.icps_checksum++;
			break;
#if INET6
		case IPPROTO_ICMPV6:
			icmp6stat.icp6s_checksum++;
			break;
#endif /* INET6 */
		}
		return (1);
	}
	return (0);
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
          int off = 100;
          int len = 100;
          int p = 100;
          int af = 100;
          int _len_pbuf0 = 1;
          struct TYPE_6__ * pbuf = (struct TYPE_6__ *) malloc(_len_pbuf0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_pbuf0; _i0++) {
              int _len_pbuf__i0__pb_csum_flags0 = 1;
          pbuf[_i0].pb_csum_flags = (int *) malloc(_len_pbuf__i0__pb_csum_flags0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pbuf__i0__pb_csum_flags0; _j0++) {
            pbuf[_i0].pb_csum_flags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pbuf__i0__pb_csum_data0 = 1;
          pbuf[_i0].pb_csum_data = (int *) malloc(_len_pbuf__i0__pb_csum_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pbuf__i0__pb_csum_data0; _j0++) {
            pbuf[_i0].pb_csum_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pbuf[_i0].pb_packet_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pf_check_proto_cksum(pbuf,off,len,p,af);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pbuf0; _aux++) {
          free(pbuf[_aux].pb_csum_flags);
          }
          for(int _aux = 0; _aux < _len_pbuf0; _aux++) {
          free(pbuf[_aux].pb_csum_data);
          }
          free(pbuf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
