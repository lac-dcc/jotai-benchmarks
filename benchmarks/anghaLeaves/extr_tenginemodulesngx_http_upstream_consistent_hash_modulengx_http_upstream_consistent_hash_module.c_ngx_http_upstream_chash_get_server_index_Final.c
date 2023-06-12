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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint32_t ;
struct TYPE_3__ {int hash; } ;
typedef  TYPE_1__ ngx_http_upstream_chash_server_t ;

/* Variables and functions */

__attribute__((used)) static uint32_t
ngx_http_upstream_chash_get_server_index(
    ngx_http_upstream_chash_server_t *servers, uint32_t n, uint32_t hash)
{
    uint32_t  low, hight, mid;

    low = 1;
    hight = n;

    while (low < hight) {
        mid = (low + hight) >> 1;
        if (servers[mid].hash == hash) {
            return mid;

        } else if (servers[mid].hash < hash) {
            low = mid + 1;

        } else {
            hight = mid;
        }
    }

    if (low == n && servers[low].hash < hash) {
      return 1;
    }

    return low;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 44
          // dynamic_instructions_O0 : 185
          // ------------------------------- 
          // static_instructions_O1 : 28
          // dynamic_instructions_O1 : 100
          // ------------------------------- 
          // static_instructions_O2 : 28
          // dynamic_instructions_O2 : 100
          // ------------------------------- 
          // static_instructions_O3 : 28
          // dynamic_instructions_O3 : 100
          // ------------------------------- 
          // static_instructions_Ofast : 28
          // dynamic_instructions_Ofast : 100
          // ------------------------------- 
          // static_instructions_Os : 27
          // dynamic_instructions_Os : 99
          // ------------------------------- 
          // static_instructions_Oz : 26
          // dynamic_instructions_Oz : 106
          // ------------------------------- 

          int n = 255;
        
          int hash = 255;
        
          int _len_servers0 = 65025;
          struct TYPE_3__ * servers = (struct TYPE_3__ *) malloc(_len_servers0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_servers0; _i0++) {
              servers[_i0].hash = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ngx_http_upstream_chash_get_server_index(servers,n,hash);
          printf("%d\n", benchRet); 
          free(servers);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 44
          // dynamic_instructions_O0 : 93
          // ------------------------------- 
          // static_instructions_O1 : 28
          // dynamic_instructions_O1 : 52
          // ------------------------------- 
          // static_instructions_O2 : 28
          // dynamic_instructions_O2 : 52
          // ------------------------------- 
          // static_instructions_O3 : 28
          // dynamic_instructions_O3 : 52
          // ------------------------------- 
          // static_instructions_Ofast : 28
          // dynamic_instructions_Ofast : 52
          // ------------------------------- 
          // static_instructions_Os : 27
          // dynamic_instructions_Os : 51
          // ------------------------------- 
          // static_instructions_Oz : 26
          // dynamic_instructions_Oz : 54
          // ------------------------------- 

          int n = 10;
        
          int hash = 10;
        
          int _len_servers0 = 100;
          struct TYPE_3__ * servers = (struct TYPE_3__ *) malloc(_len_servers0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_servers0; _i0++) {
              servers[_i0].hash = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ngx_http_upstream_chash_get_server_index(servers,n,hash);
          printf("%d\n", benchRet); 
          free(servers);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int hash = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_servers0 = 1;
          struct TYPE_3__ * servers = (struct TYPE_3__ *) malloc(_len_servers0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_servers0; _i0++) {
              servers[_i0].hash = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ngx_http_upstream_chash_get_server_index(servers,n,hash);
          printf("%d\n", benchRet); 
          free(servers);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
