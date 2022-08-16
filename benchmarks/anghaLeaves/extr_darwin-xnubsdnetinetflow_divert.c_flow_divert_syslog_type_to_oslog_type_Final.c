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
typedef  int /*<<< orphan*/  uint8_t ;

/* Variables and functions */
#define  LOG_DEBUG 130 
#define  LOG_ERR 129 
#define  LOG_INFO 128 
 int /*<<< orphan*/  OS_LOG_TYPE_DEBUG ; 
 int /*<<< orphan*/  OS_LOG_TYPE_DEFAULT ; 
 int /*<<< orphan*/  OS_LOG_TYPE_ERROR ; 
 int /*<<< orphan*/  OS_LOG_TYPE_INFO ; 

__attribute__((used)) static inline uint8_t
flow_divert_syslog_type_to_oslog_type(int syslog_type)
{
	switch (syslog_type) {
		case LOG_ERR: return OS_LOG_TYPE_ERROR;
		case LOG_INFO: return OS_LOG_TYPE_INFO;
		case LOG_DEBUG: return OS_LOG_TYPE_DEBUG;
		default: return OS_LOG_TYPE_DEFAULT;
	}
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
          int syslog_type = 100;
          int benchRet = flow_divert_syslog_type_to_oslog_type(syslog_type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int syslog_type = 255;
          int benchRet = flow_divert_syslog_type_to_oslog_type(syslog_type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int syslog_type = 10;
          int benchRet = flow_divert_syslog_type_to_oslog_type(syslog_type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
