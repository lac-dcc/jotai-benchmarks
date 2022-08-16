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
       1            big-arr-10x\n\
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
struct msg {int type; } ;

/* Variables and functions */
#define  MSG_REQ_REDIS_GETRANGE 148 
#define  MSG_REQ_REDIS_HINCRBY 147 
#define  MSG_REQ_REDIS_HINCRBYFLOAT 146 
#define  MSG_REQ_REDIS_HSET 145 
#define  MSG_REQ_REDIS_HSETNX 144 
#define  MSG_REQ_REDIS_LRANGE 143 
#define  MSG_REQ_REDIS_LREM 142 
#define  MSG_REQ_REDIS_LSET 141 
#define  MSG_REQ_REDIS_LTRIM 140 
#define  MSG_REQ_REDIS_PSETEX 139 
#define  MSG_REQ_REDIS_RESTORE 138 
#define  MSG_REQ_REDIS_SETBIT 137 
#define  MSG_REQ_REDIS_SETEX 136 
#define  MSG_REQ_REDIS_SETRANGE 135 
#define  MSG_REQ_REDIS_SMOVE 134 
#define  MSG_REQ_REDIS_ZCOUNT 133 
#define  MSG_REQ_REDIS_ZINCRBY 132 
#define  MSG_REQ_REDIS_ZLEXCOUNT 131 
#define  MSG_REQ_REDIS_ZREMRANGEBYLEX 130 
#define  MSG_REQ_REDIS_ZREMRANGEBYRANK 129 
#define  MSG_REQ_REDIS_ZREMRANGEBYSCORE 128 

__attribute__((used)) static bool
redis_arg2(struct msg *r)
{
    switch (r->type) {
    case MSG_REQ_REDIS_GETRANGE:
    case MSG_REQ_REDIS_PSETEX:
    case MSG_REQ_REDIS_SETBIT:
    case MSG_REQ_REDIS_SETEX:
    case MSG_REQ_REDIS_SETRANGE:

    case MSG_REQ_REDIS_HINCRBY:
    case MSG_REQ_REDIS_HINCRBYFLOAT:
    case MSG_REQ_REDIS_HSET:
    case MSG_REQ_REDIS_HSETNX:

    case MSG_REQ_REDIS_LRANGE:
    case MSG_REQ_REDIS_LREM:
    case MSG_REQ_REDIS_LSET:
    case MSG_REQ_REDIS_LTRIM:

    case MSG_REQ_REDIS_SMOVE:

    case MSG_REQ_REDIS_ZCOUNT:
    case MSG_REQ_REDIS_ZLEXCOUNT:
    case MSG_REQ_REDIS_ZINCRBY:
    case MSG_REQ_REDIS_ZREMRANGEBYLEX:
    case MSG_REQ_REDIS_ZREMRANGEBYRANK:
    case MSG_REQ_REDIS_ZREMRANGEBYSCORE:

    case MSG_REQ_REDIS_RESTORE:
        return true;

    default:
        break;
    }

    return false;
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
          int _len_r0 = 1;
          struct msg * r = (struct msg *) malloc(_len_r0*sizeof(struct msg));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = redis_arg2(r);
          printf("%d\n", benchRet); 
          free(r);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_r0 = 100;
          struct msg * r = (struct msg *) malloc(_len_r0*sizeof(struct msg));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = redis_arg2(r);
          printf("%d\n", benchRet); 
          free(r);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
