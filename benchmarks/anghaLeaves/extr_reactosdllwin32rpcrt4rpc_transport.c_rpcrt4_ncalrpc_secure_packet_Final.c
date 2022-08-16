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
typedef  enum secure_packet_direction { ____Placeholder_secure_packet_direction } secure_packet_direction ;
typedef  int /*<<< orphan*/  RpcPktHdr ;
typedef  int /*<<< orphan*/  RpcConnection ;
typedef  int /*<<< orphan*/  RpcAuthVerifier ;
typedef  int /*<<< orphan*/  RPC_STATUS ;

/* Variables and functions */
 int /*<<< orphan*/  RPC_S_OK ; 

__attribute__((used)) static RPC_STATUS rpcrt4_ncalrpc_secure_packet(RpcConnection *conn,
    enum secure_packet_direction dir,
    RpcPktHdr *hdr, unsigned int hdr_size,
    unsigned char *stub_data, unsigned int stub_data_size,
    RpcAuthVerifier *auth_hdr,
    unsigned char *auth_value, unsigned int auth_value_size)
{
    /* since this protocol is local to the machine there is no need to secure
     * the packet */
    return RPC_S_OK;
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
          enum secure_packet_direction dir = 0;
          unsigned int hdr_size = 100;
          unsigned int stub_data_size = 100;
          unsigned int auth_value_size = 100;
          int _len_conn0 = 1;
          int * conn = (int *) malloc(_len_conn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
            conn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hdr0 = 1;
          int * hdr = (int *) malloc(_len_hdr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stub_data0 = 1;
          unsigned char * stub_data = (unsigned char *) malloc(_len_stub_data0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_stub_data0; _i0++) {
            stub_data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_auth_hdr0 = 1;
          int * auth_hdr = (int *) malloc(_len_auth_hdr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_auth_hdr0; _i0++) {
            auth_hdr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_auth_value0 = 1;
          unsigned char * auth_value = (unsigned char *) malloc(_len_auth_value0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_auth_value0; _i0++) {
            auth_value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rpcrt4_ncalrpc_secure_packet(conn,dir,hdr,hdr_size,stub_data,stub_data_size,auth_hdr,auth_value,auth_value_size);
          printf("%d\n", benchRet); 
          free(conn);
          free(hdr);
          free(stub_data);
          free(auth_hdr);
          free(auth_value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
