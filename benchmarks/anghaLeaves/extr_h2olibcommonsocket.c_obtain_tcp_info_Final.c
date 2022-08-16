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
typedef  int /*<<< orphan*/  uint32_t ;

/* Variables and functions */

__attribute__((used)) static int obtain_tcp_info(int fd, uint32_t *rtt, uint32_t *mss, uint32_t *cwnd_size, uint32_t *cwnd_avail)
{
#define CALC_CWND_PAIR_FROM_BYTE_UNITS(cwnd_bytes, inflight_bytes)                                                                 \
    do {                                                                                                                           \
        *cwnd_size = (cwnd_bytes + *mss / 2) / *mss;                                                                               \
        *cwnd_avail = cwnd_bytes > inflight_bytes ? (cwnd_bytes - inflight_bytes) / *mss + 2 : 2;                                  \
    } while (0)

#if defined(__linux__) && defined(TCP_INFO)

    struct tcp_info tcpi;
    socklen_t tcpisz = sizeof(tcpi);
    if (getsockopt(fd, IPPROTO_TCP, TCP_INFO, &tcpi, &tcpisz) != 0)
        return -1;
    *rtt = tcpi.tcpi_rtt;
    *mss = tcpi.tcpi_snd_mss;
    *cwnd_size = tcpi.tcpi_snd_cwnd;
    *cwnd_avail = tcpi.tcpi_snd_cwnd > tcpi.tcpi_unacked ? tcpi.tcpi_snd_cwnd - tcpi.tcpi_unacked + 2 : 2;
    return 0;

#elif defined(__FreeBSD__) && defined(TCP_INFO) && 0 /* disabled since we wouldn't use it anyways; OS lacks TCP_NOTSENT_LOWAT */

    struct tcp_info tcpi;
    socklen_t tcpisz = sizeof(tcpi);
    int bytes_inflight;
    if (getsockopt(fd, IPPROTO_TCP, TCP_INFO, &tcpi, &tcpisz) != 0 || ioctl(fd, FIONWRITE, &bytes_inflight) == -1)
        return -1;
    *rtt = tcpi.tcpi_rtt;
    *mss = tcpi.tcpi_snd_mss;
    CALC_CWND_PAIR_FROM_BYTE_UNITS(tcpi.tcpi_snd_cwnd, bytes_inflight);
    return 0;

#elif defined(__APPLE__) && defined(TCP_CONNECTION_INFO)

    struct tcp_connection_info tcpi;
    socklen_t tcpisz = sizeof(tcpi);
    if (getsockopt(fd, IPPROTO_TCP, TCP_CONNECTION_INFO, &tcpi, &tcpisz) != 0 || tcpi.tcpi_maxseg == 0)
        return -1;
    *rtt = tcpi.tcpi_srtt * 1000;
    *mss = tcpi.tcpi_maxseg;
    CALC_CWND_PAIR_FROM_BYTE_UNITS(tcpi.tcpi_snd_cwnd, tcpi.tcpi_snd_sbbytes);
    return 0;

#else
    /* TODO add support for NetBSD; note that the OS returns the number of packets for tcpi_snd_cwnd; see
     * http://twitter.com/n_soda/status/740719125878575105
     */
    return -1;
#endif

#undef CALC_CWND_PAIR_FROM_BYTE_UNITS
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
          int fd = 100;
          int _len_rtt0 = 1;
          int * rtt = (int *) malloc(_len_rtt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rtt0; _i0++) {
            rtt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mss0 = 1;
          int * mss = (int *) malloc(_len_mss0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mss0; _i0++) {
            mss[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cwnd_size0 = 1;
          int * cwnd_size = (int *) malloc(_len_cwnd_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cwnd_size0; _i0++) {
            cwnd_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cwnd_avail0 = 1;
          int * cwnd_avail = (int *) malloc(_len_cwnd_avail0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cwnd_avail0; _i0++) {
            cwnd_avail[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = obtain_tcp_info(fd,rtt,mss,cwnd_size,cwnd_avail);
          printf("%d\n", benchRet); 
          free(rtt);
          free(mss);
          free(cwnd_size);
          free(cwnd_avail);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
