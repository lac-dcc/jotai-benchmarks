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
#define  MSG_REQ_REDIS_BITCOUNT 160 
#define  MSG_REQ_REDIS_BITPOS 159 
#define  MSG_REQ_REDIS_HDEL 158 
#define  MSG_REQ_REDIS_HMGET 157 
#define  MSG_REQ_REDIS_HMSET 156 
#define  MSG_REQ_REDIS_HSCAN 155 
#define  MSG_REQ_REDIS_LPUSH 154 
#define  MSG_REQ_REDIS_PFADD 153 
#define  MSG_REQ_REDIS_PFMERGE 152 
#define  MSG_REQ_REDIS_RPUSH 151 
#define  MSG_REQ_REDIS_SADD 150 
#define  MSG_REQ_REDIS_SDIFF 149 
#define  MSG_REQ_REDIS_SDIFFSTORE 148 
#define  MSG_REQ_REDIS_SET 147 
#define  MSG_REQ_REDIS_SINTER 146 
#define  MSG_REQ_REDIS_SINTERSTORE 145 
#define  MSG_REQ_REDIS_SORT 144 
#define  MSG_REQ_REDIS_SPOP 143 
#define  MSG_REQ_REDIS_SRANDMEMBER 142 
#define  MSG_REQ_REDIS_SREM 141 
#define  MSG_REQ_REDIS_SSCAN 140 
#define  MSG_REQ_REDIS_SUNION 139 
#define  MSG_REQ_REDIS_SUNIONSTORE 138 
#define  MSG_REQ_REDIS_ZADD 137 
#define  MSG_REQ_REDIS_ZINTERSTORE 136 
#define  MSG_REQ_REDIS_ZRANGE 135 
#define  MSG_REQ_REDIS_ZRANGEBYLEX 134 
#define  MSG_REQ_REDIS_ZRANGEBYSCORE 133 
#define  MSG_REQ_REDIS_ZREM 132 
#define  MSG_REQ_REDIS_ZREVRANGE 131 
#define  MSG_REQ_REDIS_ZREVRANGEBYSCORE 130 
#define  MSG_REQ_REDIS_ZSCAN 129 
#define  MSG_REQ_REDIS_ZUNIONSTORE 128 

__attribute__((used)) static bool
redis_argn(struct msg *r)
{
    switch (r->type) {
    case MSG_REQ_REDIS_SORT:

    case MSG_REQ_REDIS_BITCOUNT:
    case MSG_REQ_REDIS_BITPOS:

    case MSG_REQ_REDIS_SET:
    case MSG_REQ_REDIS_HDEL:
    case MSG_REQ_REDIS_HMGET:
    case MSG_REQ_REDIS_HMSET:
    case MSG_REQ_REDIS_HSCAN:

    case MSG_REQ_REDIS_LPUSH:
    case MSG_REQ_REDIS_RPUSH:

    case MSG_REQ_REDIS_SADD:
    case MSG_REQ_REDIS_SDIFF:
    case MSG_REQ_REDIS_SDIFFSTORE:
    case MSG_REQ_REDIS_SINTER:
    case MSG_REQ_REDIS_SINTERSTORE:
    case MSG_REQ_REDIS_SREM:
    case MSG_REQ_REDIS_SUNION:
    case MSG_REQ_REDIS_SUNIONSTORE:
    case MSG_REQ_REDIS_SRANDMEMBER:
    case MSG_REQ_REDIS_SSCAN:
    case MSG_REQ_REDIS_SPOP:

    case MSG_REQ_REDIS_PFADD:
    case MSG_REQ_REDIS_PFMERGE:

    case MSG_REQ_REDIS_ZADD:
    case MSG_REQ_REDIS_ZINTERSTORE:
    case MSG_REQ_REDIS_ZRANGE:
    case MSG_REQ_REDIS_ZRANGEBYSCORE:
    case MSG_REQ_REDIS_ZREM:
    case MSG_REQ_REDIS_ZREVRANGE:
    case MSG_REQ_REDIS_ZRANGEBYLEX:
    case MSG_REQ_REDIS_ZREVRANGEBYSCORE:
    case MSG_REQ_REDIS_ZUNIONSTORE:
    case MSG_REQ_REDIS_ZSCAN:
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
          int benchRet = redis_argn(r);
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
          int benchRet = redis_argn(r);
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
