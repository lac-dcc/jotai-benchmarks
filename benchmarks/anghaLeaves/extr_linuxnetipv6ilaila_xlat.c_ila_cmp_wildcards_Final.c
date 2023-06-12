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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int ifindex; } ;
struct ila_map {TYPE_1__ xp; } ;
struct ila_addr {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline int ila_cmp_wildcards(struct ila_map *ila,
				    struct ila_addr *iaddr, int ifindex)
{
	return (ila->xp.ifindex && ila->xp.ifindex != ifindex);
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
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int ifindex = 100;
        
          int _len_ila0 = 1;
          struct ila_map * ila = (struct ila_map *) malloc(_len_ila0*sizeof(struct ila_map));
          for(int _i0 = 0; _i0 < _len_ila0; _i0++) {
              ila[_i0].xp.ifindex = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_iaddr0 = 1;
          struct ila_addr * iaddr = (struct ila_addr *) malloc(_len_iaddr0*sizeof(struct ila_addr));
          for(int _i0 = 0; _i0 < _len_iaddr0; _i0++) {
              iaddr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ila_cmp_wildcards(ila,iaddr,ifindex);
          printf("%d\n", benchRet); 
          free(ila);
          free(iaddr);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int ifindex = 255;
        
          int _len_ila0 = 65025;
          struct ila_map * ila = (struct ila_map *) malloc(_len_ila0*sizeof(struct ila_map));
          for(int _i0 = 0; _i0 < _len_ila0; _i0++) {
              ila[_i0].xp.ifindex = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_iaddr0 = 65025;
          struct ila_addr * iaddr = (struct ila_addr *) malloc(_len_iaddr0*sizeof(struct ila_addr));
          for(int _i0 = 0; _i0 < _len_iaddr0; _i0++) {
              iaddr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ila_cmp_wildcards(ila,iaddr,ifindex);
          printf("%d\n", benchRet); 
          free(ila);
          free(iaddr);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int ifindex = 10;
        
          int _len_ila0 = 100;
          struct ila_map * ila = (struct ila_map *) malloc(_len_ila0*sizeof(struct ila_map));
          for(int _i0 = 0; _i0 < _len_ila0; _i0++) {
              ila[_i0].xp.ifindex = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_iaddr0 = 100;
          struct ila_addr * iaddr = (struct ila_addr *) malloc(_len_iaddr0*sizeof(struct ila_addr));
          for(int _i0 = 0; _i0 < _len_iaddr0; _i0++) {
              iaddr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ila_cmp_wildcards(ila,iaddr,ifindex);
          printf("%d\n", benchRet); 
          free(ila);
          free(iaddr);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int ifindex = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_ila0 = 1;
          struct ila_map * ila = (struct ila_map *) malloc(_len_ila0*sizeof(struct ila_map));
          for(int _i0 = 0; _i0 < _len_ila0; _i0++) {
              ila[_i0].xp.ifindex = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_iaddr0 = 1;
          struct ila_addr * iaddr = (struct ila_addr *) malloc(_len_iaddr0*sizeof(struct ila_addr));
          for(int _i0 = 0; _i0 < _len_iaddr0; _i0++) {
              iaddr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ila_cmp_wildcards(ila,iaddr,ifindex);
          printf("%d\n", benchRet); 
          free(ila);
          free(iaddr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
