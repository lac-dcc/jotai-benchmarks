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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  int /*<<< orphan*/  user_ssize_t ;
typedef  int /*<<< orphan*/  uint32_t ;
struct uio {int dummy; } ;
struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct proc {int dummy; } ;
typedef  int /*<<< orphan*/  sae_connid_t ;
typedef  int /*<<< orphan*/  sae_associd_t ;

/* Variables and functions */
 int EOPNOTSUPP ; 

int
pru_connectx_notsupp(struct socket *so, struct sockaddr *src,
    struct sockaddr *dst, struct proc *p, uint32_t ifscope,
    sae_associd_t aid, sae_connid_t *pcid, uint32_t flags, void *arg,
    uint32_t arglen, struct uio *uio, user_ssize_t *bytes_written)
{
#pragma unused(so, src, dst, p, ifscope, aid, pcid, flags, arg, arglen, uio, bytes_written)
	return (EOPNOTSUPP);
}

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
          int ifscope = 100;
        
          int aid = 100;
        
          int flags = 100;
        
          int arglen = 100;
        
          int _len_so0 = 1;
          struct socket * so = (struct socket *) malloc(_len_so0*sizeof(struct socket));
          for(int _i0 = 0; _i0 < _len_so0; _i0++) {
              so[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_src0 = 1;
          struct sockaddr * src = (struct sockaddr *) malloc(_len_src0*sizeof(struct sockaddr));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
              src[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_dst0 = 1;
          struct sockaddr * dst = (struct sockaddr *) malloc(_len_dst0*sizeof(struct sockaddr));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
              dst[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_p0 = 1;
          struct proc * p = (struct proc *) malloc(_len_p0*sizeof(struct proc));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              p[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_pcid0 = 1;
          int * pcid = (int *) malloc(_len_pcid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcid0; _i0++) {
            pcid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          void * arg;
        
          int _len_uio0 = 1;
          struct uio * uio = (struct uio *) malloc(_len_uio0*sizeof(struct uio));
          for(int _i0 = 0; _i0 < _len_uio0; _i0++) {
              uio[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_bytes_written0 = 1;
          int * bytes_written = (int *) malloc(_len_bytes_written0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bytes_written0; _i0++) {
            bytes_written[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = pru_connectx_notsupp(so,src,dst,p,ifscope,aid,pcid,flags,arg,arglen,uio,bytes_written);
          printf("%d\n", benchRet); 
          free(so);
          free(src);
          free(dst);
          free(p);
          free(pcid);
          free(uio);
          free(bytes_written);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ifscope = 255;
        
          int aid = 255;
        
          int flags = 255;
        
          int arglen = 255;
        
          int _len_so0 = 65025;
          struct socket * so = (struct socket *) malloc(_len_so0*sizeof(struct socket));
          for(int _i0 = 0; _i0 < _len_so0; _i0++) {
              so[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_src0 = 65025;
          struct sockaddr * src = (struct sockaddr *) malloc(_len_src0*sizeof(struct sockaddr));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
              src[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_dst0 = 65025;
          struct sockaddr * dst = (struct sockaddr *) malloc(_len_dst0*sizeof(struct sockaddr));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
              dst[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_p0 = 65025;
          struct proc * p = (struct proc *) malloc(_len_p0*sizeof(struct proc));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              p[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_pcid0 = 65025;
          int * pcid = (int *) malloc(_len_pcid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcid0; _i0++) {
            pcid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          void * arg;
        
          int _len_uio0 = 65025;
          struct uio * uio = (struct uio *) malloc(_len_uio0*sizeof(struct uio));
          for(int _i0 = 0; _i0 < _len_uio0; _i0++) {
              uio[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_bytes_written0 = 65025;
          int * bytes_written = (int *) malloc(_len_bytes_written0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bytes_written0; _i0++) {
            bytes_written[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = pru_connectx_notsupp(so,src,dst,p,ifscope,aid,pcid,flags,arg,arglen,uio,bytes_written);
          printf("%d\n", benchRet); 
          free(so);
          free(src);
          free(dst);
          free(p);
          free(pcid);
          free(uio);
          free(bytes_written);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ifscope = 10;
        
          int aid = 10;
        
          int flags = 10;
        
          int arglen = 10;
        
          int _len_so0 = 100;
          struct socket * so = (struct socket *) malloc(_len_so0*sizeof(struct socket));
          for(int _i0 = 0; _i0 < _len_so0; _i0++) {
              so[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_src0 = 100;
          struct sockaddr * src = (struct sockaddr *) malloc(_len_src0*sizeof(struct sockaddr));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
              src[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_dst0 = 100;
          struct sockaddr * dst = (struct sockaddr *) malloc(_len_dst0*sizeof(struct sockaddr));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
              dst[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_p0 = 100;
          struct proc * p = (struct proc *) malloc(_len_p0*sizeof(struct proc));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              p[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_pcid0 = 100;
          int * pcid = (int *) malloc(_len_pcid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcid0; _i0++) {
            pcid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          void * arg;
        
          int _len_uio0 = 100;
          struct uio * uio = (struct uio *) malloc(_len_uio0*sizeof(struct uio));
          for(int _i0 = 0; _i0 < _len_uio0; _i0++) {
              uio[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_bytes_written0 = 100;
          int * bytes_written = (int *) malloc(_len_bytes_written0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bytes_written0; _i0++) {
            bytes_written[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = pru_connectx_notsupp(so,src,dst,p,ifscope,aid,pcid,flags,arg,arglen,uio,bytes_written);
          printf("%d\n", benchRet); 
          free(so);
          free(src);
          free(dst);
          free(p);
          free(pcid);
          free(uio);
          free(bytes_written);
        
        break;
    }
    // empty
    case 3:
    {
          int ifscope = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int aid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int arglen = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_so0 = 1;
          struct socket * so = (struct socket *) malloc(_len_so0*sizeof(struct socket));
          for(int _i0 = 0; _i0 < _len_so0; _i0++) {
              so[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_src0 = 1;
          struct sockaddr * src = (struct sockaddr *) malloc(_len_src0*sizeof(struct sockaddr));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
              src[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_dst0 = 1;
          struct sockaddr * dst = (struct sockaddr *) malloc(_len_dst0*sizeof(struct sockaddr));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
              dst[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_p0 = 1;
          struct proc * p = (struct proc *) malloc(_len_p0*sizeof(struct proc));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              p[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_pcid0 = 1;
          int * pcid = (int *) malloc(_len_pcid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcid0; _i0++) {
            pcid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          void * arg;
        
          int _len_uio0 = 1;
          struct uio * uio = (struct uio *) malloc(_len_uio0*sizeof(struct uio));
          for(int _i0 = 0; _i0 < _len_uio0; _i0++) {
              uio[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_bytes_written0 = 1;
          int * bytes_written = (int *) malloc(_len_bytes_written0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bytes_written0; _i0++) {
            bytes_written[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = pru_connectx_notsupp(so,src,dst,p,ifscope,aid,pcid,flags,arg,arglen,uio,bytes_written);
          printf("%d\n", benchRet); 
          free(so);
          free(src);
          free(dst);
          free(p);
          free(pcid);
          free(uio);
          free(bytes_written);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
