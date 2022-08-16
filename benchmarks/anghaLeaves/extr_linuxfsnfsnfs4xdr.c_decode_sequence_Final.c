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
struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs4_sequence_res {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int decode_sequence(struct xdr_stream *xdr,
			   struct nfs4_sequence_res *res,
			   struct rpc_rqst *rqstp)
{
#if defined(CONFIG_NFS_V4_1)
	struct nfs4_session *session;
	struct nfs4_sessionid id;
	u32 dummy;
	int status;
	__be32 *p;

	if (res->sr_slot == NULL)
		return 0;
	if (!res->sr_slot->table->session)
		return 0;

	status = decode_op_hdr(xdr, OP_SEQUENCE);
	if (!status)
		status = decode_sessionid(xdr, &id);
	if (unlikely(status))
		goto out_err;

	/*
	 * If the server returns different values for sessionID, slotID or
	 * sequence number, the server is looney tunes.
	 */
	status = -EREMOTEIO;
	session = res->sr_slot->table->session;

	if (memcmp(id.data, session->sess_id.data,
		   NFS4_MAX_SESSIONID_LEN)) {
		dprintk("%s Invalid session id\n", __func__);
		goto out_err;
	}

	p = xdr_inline_decode(xdr, 20);
	if (unlikely(!p))
		goto out_overflow;

	/* seqid */
	dummy = be32_to_cpup(p++);
	if (dummy != res->sr_slot->seq_nr) {
		dprintk("%s Invalid sequence number\n", __func__);
		goto out_err;
	}
	/* slot id */
	dummy = be32_to_cpup(p++);
	if (dummy != res->sr_slot->slot_nr) {
		dprintk("%s Invalid slot id\n", __func__);
		goto out_err;
	}
	/* highest slot id */
	res->sr_highest_slotid = be32_to_cpup(p++);
	/* target highest slot id */
	res->sr_target_highest_slotid = be32_to_cpup(p++);
	/* result flags */
	res->sr_status_flags = be32_to_cpup(p);
	status = 0;
out_err:
	res->sr_status = status;
	return status;
out_overflow:
	print_overflow_msg(__func__, xdr);
	status = -EIO;
	goto out_err;
#else  /* CONFIG_NFS_V4_1 */
	return 0;
#endif /* CONFIG_NFS_V4_1 */
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
          int _len_xdr0 = 1;
          struct xdr_stream * xdr = (struct xdr_stream *) malloc(_len_xdr0*sizeof(struct xdr_stream));
          for(int _i0 = 0; _i0 < _len_xdr0; _i0++) {
            xdr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res0 = 1;
          struct nfs4_sequence_res * res = (struct nfs4_sequence_res *) malloc(_len_res0*sizeof(struct nfs4_sequence_res));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rqstp0 = 1;
          struct rpc_rqst * rqstp = (struct rpc_rqst *) malloc(_len_rqstp0*sizeof(struct rpc_rqst));
          for(int _i0 = 0; _i0 < _len_rqstp0; _i0++) {
            rqstp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = decode_sequence(xdr,res,rqstp);
          printf("%d\n", benchRet); 
          free(xdr);
          free(res);
          free(rqstp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
