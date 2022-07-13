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
struct msg {int type; } ;

/* Variables and functions */
#define  MSG_RSP_REDIS_ERROR 141 
#define  MSG_RSP_REDIS_ERROR_BUSY 140 
#define  MSG_RSP_REDIS_ERROR_BUSYKEY 139 
#define  MSG_RSP_REDIS_ERROR_ERR 138 
#define  MSG_RSP_REDIS_ERROR_EXECABORT 137 
#define  MSG_RSP_REDIS_ERROR_LOADING 136 
#define  MSG_RSP_REDIS_ERROR_MASTERDOWN 135 
#define  MSG_RSP_REDIS_ERROR_MISCONF 134 
#define  MSG_RSP_REDIS_ERROR_NOAUTH 133 
#define  MSG_RSP_REDIS_ERROR_NOREPLICAS 132 
#define  MSG_RSP_REDIS_ERROR_NOSCRIPT 131 
#define  MSG_RSP_REDIS_ERROR_OOM 130 
#define  MSG_RSP_REDIS_ERROR_READONLY 129 
#define  MSG_RSP_REDIS_ERROR_WRONGTYPE 128 

__attribute__((used)) static bool
redis_error(struct msg *r)
{
    switch (r->type) {
    case MSG_RSP_REDIS_ERROR:
    case MSG_RSP_REDIS_ERROR_ERR:
    case MSG_RSP_REDIS_ERROR_OOM:
    case MSG_RSP_REDIS_ERROR_BUSY:
    case MSG_RSP_REDIS_ERROR_NOAUTH:
    case MSG_RSP_REDIS_ERROR_LOADING:
    case MSG_RSP_REDIS_ERROR_BUSYKEY:
    case MSG_RSP_REDIS_ERROR_MISCONF:
    case MSG_RSP_REDIS_ERROR_NOSCRIPT:
    case MSG_RSP_REDIS_ERROR_READONLY:
    case MSG_RSP_REDIS_ERROR_WRONGTYPE:
    case MSG_RSP_REDIS_ERROR_EXECABORT:
    case MSG_RSP_REDIS_ERROR_MASTERDOWN:
    case MSG_RSP_REDIS_ERROR_NOREPLICAS:
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
          int benchRet = redis_error(r);
          printf("%d\n", benchRet); 
          free(r);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_r0 = 65025;
          struct msg * r = (struct msg *) malloc(_len_r0*sizeof(struct msg));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = redis_error(r);
          printf("%d\n", benchRet); 
          free(r);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_r0 = 100;
          struct msg * r = (struct msg *) malloc(_len_r0*sizeof(struct msg));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = redis_error(r);
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
