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
typedef  int yrmcds_error ;

/* Variables and functions */
#define  YRMCDS_BAD_ARGUMENT 139 
#define  YRMCDS_BAD_KEY 138 
#define  YRMCDS_COMPRESS_FAILED 137 
#define  YRMCDS_DISCONNECTED 136 
#define  YRMCDS_IN_BINARY 135 
#define  YRMCDS_NOT_IMPLEMENTED 134 
#define  YRMCDS_NOT_RESOLVED 133 
#define  YRMCDS_OK 132 
#define  YRMCDS_OUT_OF_MEMORY 131 
#define  YRMCDS_PROTOCOL_ERROR 130 
#define  YRMCDS_SYSTEM_ERROR 129 
#define  YRMCDS_TIMEOUT 128 

const char* yrmcds_strerror(yrmcds_error e) {
    switch( e ) {
    case YRMCDS_OK:
        return "OK";
    case YRMCDS_SYSTEM_ERROR:
        return "Check errno for details";
    case YRMCDS_BAD_ARGUMENT:
        return "Bad argument";
    case YRMCDS_NOT_RESOLVED:
        return "Host not found";
    case YRMCDS_TIMEOUT:
        return "Timeout";
    case YRMCDS_DISCONNECTED:
        return "Connection was reset by peer";
    case YRMCDS_OUT_OF_MEMORY:
        return "Failed to allocate memory";
    case YRMCDS_COMPRESS_FAILED:
        return "Failed to compress data";
    case YRMCDS_PROTOCOL_ERROR:
        return "Received malformed packet";
    case YRMCDS_NOT_IMPLEMENTED:
        return "Not implemented";
    case YRMCDS_IN_BINARY:
        return "Connection is fixed for binary protocol";
    case YRMCDS_BAD_KEY:
        return "Bad key";
    default:
        return "Unknown error";
    };
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
          int e = 100;
          const char * benchRet = yrmcds_strerror(e);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int e = 255;
          const char * benchRet = yrmcds_strerror(e);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int e = 10;
          const char * benchRet = yrmcds_strerror(e);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
