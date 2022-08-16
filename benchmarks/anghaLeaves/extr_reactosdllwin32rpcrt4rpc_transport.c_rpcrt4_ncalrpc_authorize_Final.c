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
typedef  int /*<<< orphan*/  RpcConnection ;
typedef  int /*<<< orphan*/  RPC_STATUS ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
 int /*<<< orphan*/  RPC_S_OK ; 

__attribute__((used)) static RPC_STATUS rpcrt4_ncalrpc_authorize(RpcConnection *conn, BOOL first_time,
                                           unsigned char *in_buffer,
                                           unsigned int in_size,
                                           unsigned char *out_buffer,
                                           unsigned int *out_size)
{
    /* since this protocol is local to the machine there is no need to
     * authenticate the caller */
    *out_size = 0;
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
          int first_time = 100;
          unsigned int in_size = 100;
          int _len_conn0 = 1;
          int * conn = (int *) malloc(_len_conn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
            conn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in_buffer0 = 1;
          unsigned char * in_buffer = (unsigned char *) malloc(_len_in_buffer0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_in_buffer0; _i0++) {
            in_buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_buffer0 = 1;
          unsigned char * out_buffer = (unsigned char *) malloc(_len_out_buffer0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_out_buffer0; _i0++) {
            out_buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_size0 = 1;
          unsigned int * out_size = (unsigned int *) malloc(_len_out_size0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_out_size0; _i0++) {
            out_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rpcrt4_ncalrpc_authorize(conn,first_time,in_buffer,in_size,out_buffer,out_size);
          printf("%d\n", benchRet); 
          free(conn);
          free(in_buffer);
          free(out_buffer);
          free(out_size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
