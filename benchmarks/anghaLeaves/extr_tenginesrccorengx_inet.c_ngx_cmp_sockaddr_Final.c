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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int /*<<< orphan*/  s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int /*<<< orphan*/  sin_port; } ;
struct sockaddr {int sa_family; } ;
typedef  int /*<<< orphan*/  socklen_t ;
typedef  int /*<<< orphan*/  ngx_uint_t ;
typedef  int /*<<< orphan*/  ngx_int_t ;

/* Variables and functions */
 int /*<<< orphan*/  NGX_DECLINED ; 
 int /*<<< orphan*/  NGX_OK ; 

ngx_int_t
ngx_cmp_sockaddr(struct sockaddr *sa1, socklen_t slen1,
    struct sockaddr *sa2, socklen_t slen2, ngx_uint_t cmp_port)
{
    struct sockaddr_in   *sin1, *sin2;
#if (NGX_HAVE_INET6)
    struct sockaddr_in6  *sin61, *sin62;
#endif
#if (NGX_HAVE_UNIX_DOMAIN)
    size_t                len;
    struct sockaddr_un   *saun1, *saun2;
#endif

    if (sa1->sa_family != sa2->sa_family) {
        return NGX_DECLINED;
    }

    switch (sa1->sa_family) {

#if (NGX_HAVE_INET6)
    case AF_INET6:

        sin61 = (struct sockaddr_in6 *) sa1;
        sin62 = (struct sockaddr_in6 *) sa2;

        if (cmp_port && sin61->sin6_port != sin62->sin6_port) {
            return NGX_DECLINED;
        }

        if (ngx_memcmp(&sin61->sin6_addr, &sin62->sin6_addr, 16) != 0) {
            return NGX_DECLINED;
        }

        break;
#endif

#if (NGX_HAVE_UNIX_DOMAIN)
    case AF_UNIX:

        saun1 = (struct sockaddr_un *) sa1;
        saun2 = (struct sockaddr_un *) sa2;

        if (slen1 < slen2) {
            len = slen1 - offsetof(struct sockaddr_un, sun_path);

        } else {
            len = slen2 - offsetof(struct sockaddr_un, sun_path);
        }

        if (len > sizeof(saun1->sun_path)) {
            len = sizeof(saun1->sun_path);
        }

        if (ngx_memcmp(&saun1->sun_path, &saun2->sun_path, len) != 0) {
            return NGX_DECLINED;
        }

        break;
#endif

    default: /* AF_INET */

        sin1 = (struct sockaddr_in *) sa1;
        sin2 = (struct sockaddr_in *) sa2;

        if (cmp_port && sin1->sin_port != sin2->sin_port) {
            return NGX_DECLINED;
        }

        if (sin1->sin_addr.s_addr != sin2->sin_addr.s_addr) {
            return NGX_DECLINED;
        }

        break;
    }

    return NGX_OK;
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
          int slen1 = 100;
          int slen2 = 100;
          int cmp_port = 100;
          int _len_sa10 = 1;
          struct sockaddr * sa1 = (struct sockaddr *) malloc(_len_sa10*sizeof(struct sockaddr));
          for(int _i0 = 0; _i0 < _len_sa10; _i0++) {
            sa1[_i0].sa_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sa20 = 1;
          struct sockaddr * sa2 = (struct sockaddr *) malloc(_len_sa20*sizeof(struct sockaddr));
          for(int _i0 = 0; _i0 < _len_sa20; _i0++) {
            sa2[_i0].sa_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_cmp_sockaddr(sa1,slen1,sa2,slen2,cmp_port);
          printf("%d\n", benchRet); 
          free(sa1);
          free(sa2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int slen1 = 255;
          int slen2 = 255;
          int cmp_port = 255;
          int _len_sa10 = 65025;
          struct sockaddr * sa1 = (struct sockaddr *) malloc(_len_sa10*sizeof(struct sockaddr));
          for(int _i0 = 0; _i0 < _len_sa10; _i0++) {
            sa1[_i0].sa_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sa20 = 65025;
          struct sockaddr * sa2 = (struct sockaddr *) malloc(_len_sa20*sizeof(struct sockaddr));
          for(int _i0 = 0; _i0 < _len_sa20; _i0++) {
            sa2[_i0].sa_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_cmp_sockaddr(sa1,slen1,sa2,slen2,cmp_port);
          printf("%d\n", benchRet); 
          free(sa1);
          free(sa2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int slen1 = 10;
          int slen2 = 10;
          int cmp_port = 10;
          int _len_sa10 = 100;
          struct sockaddr * sa1 = (struct sockaddr *) malloc(_len_sa10*sizeof(struct sockaddr));
          for(int _i0 = 0; _i0 < _len_sa10; _i0++) {
            sa1[_i0].sa_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sa20 = 100;
          struct sockaddr * sa2 = (struct sockaddr *) malloc(_len_sa20*sizeof(struct sockaddr));
          for(int _i0 = 0; _i0 < _len_sa20; _i0++) {
            sa2[_i0].sa_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_cmp_sockaddr(sa1,slen1,sa2,slen2,cmp_port);
          printf("%d\n", benchRet); 
          free(sa1);
          free(sa2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
