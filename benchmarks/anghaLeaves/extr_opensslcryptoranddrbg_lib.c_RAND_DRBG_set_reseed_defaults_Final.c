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
typedef  scalar_t__ time_t ;

/* Variables and functions */
 unsigned int MAX_RESEED_INTERVAL ; 
 scalar_t__ MAX_RESEED_TIME_INTERVAL ; 
 unsigned int master_reseed_interval ; 
 scalar_t__ master_reseed_time_interval ; 
 unsigned int slave_reseed_interval ; 
 scalar_t__ slave_reseed_time_interval ; 

int RAND_DRBG_set_reseed_defaults(
                                  unsigned int _master_reseed_interval,
                                  unsigned int _slave_reseed_interval,
                                  time_t _master_reseed_time_interval,
                                  time_t _slave_reseed_time_interval
                                  )
{
    if (_master_reseed_interval > MAX_RESEED_INTERVAL
        || _slave_reseed_interval > MAX_RESEED_INTERVAL)
        return 0;

    if (_master_reseed_time_interval > MAX_RESEED_TIME_INTERVAL
        || _slave_reseed_time_interval > MAX_RESEED_TIME_INTERVAL)
        return 0;

    master_reseed_interval = _master_reseed_interval;
    slave_reseed_interval = _slave_reseed_interval;

    master_reseed_time_interval = _master_reseed_time_interval;
    slave_reseed_time_interval = _slave_reseed_time_interval;

    return 1;
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
          unsigned int _master_reseed_interval = 100;
        
          unsigned int _slave_reseed_interval = 100;
        
          long _master_reseed_time_interval = 100;
        
          long _slave_reseed_time_interval = 100;
        
          int benchRet = RAND_DRBG_set_reseed_defaults(_master_reseed_interval,_slave_reseed_interval,_master_reseed_time_interval,_slave_reseed_time_interval);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int _master_reseed_interval = 255;
        
          unsigned int _slave_reseed_interval = 255;
        
          long _master_reseed_time_interval = 255;
        
          long _slave_reseed_time_interval = 255;
        
          int benchRet = RAND_DRBG_set_reseed_defaults(_master_reseed_interval,_slave_reseed_interval,_master_reseed_time_interval,_slave_reseed_time_interval);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int _master_reseed_interval = 10;
        
          unsigned int _slave_reseed_interval = 10;
        
          long _master_reseed_time_interval = 10;
        
          long _slave_reseed_time_interval = 10;
        
          int benchRet = RAND_DRBG_set_reseed_defaults(_master_reseed_interval,_slave_reseed_interval,_master_reseed_time_interval,_slave_reseed_time_interval);
          printf("%d\n", benchRet); 
        
        break;
    }
    // empty
    case 3:
    {
          unsigned int _master_reseed_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned int _slave_reseed_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long _master_reseed_time_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long _slave_reseed_time_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = RAND_DRBG_set_reseed_defaults(_master_reseed_interval,_slave_reseed_interval,_master_reseed_time_interval,_slave_reseed_time_interval);
          printf("%d\n", benchRet); 
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
