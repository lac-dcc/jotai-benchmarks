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

/* Type definitions */
struct ip6_fw {int fw_flg; unsigned int* fw_icmp6types; } ;
struct icmp6_hdr {int icmp6_type; } ;

/* Variables and functions */
 int IPV6_FW_F_ICMPBIT ; 
 int IPV6_FW_ICMPTYPES_DIM ; 

__attribute__((used)) static int
icmp6type_match(struct icmp6_hdr *icmp6, struct ip6_fw *f)
{
	int type;

	if (!(f->fw_flg & IPV6_FW_F_ICMPBIT))
		return(1);

	type = icmp6->icmp6_type;

	/* check for matching type in the bitmap */
	if (type < IPV6_FW_ICMPTYPES_DIM * sizeof(unsigned) * 8 &&
		(f->fw_icmp6types[type / (sizeof(unsigned) * 8)] &
		(1U << (type % (8 * sizeof(unsigned))))))
		return(1);

	return(0); /* no match */
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
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_icmp60 = 65025;
          struct icmp6_hdr * icmp6 = (struct icmp6_hdr *) malloc(_len_icmp60*sizeof(struct icmp6_hdr));
          for(int _i0 = 0; _i0 < _len_icmp60; _i0++) {
              icmp6[_i0].icmp6_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_f0 = 65025;
          struct ip6_fw * f = (struct ip6_fw *) malloc(_len_f0*sizeof(struct ip6_fw));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
              f[_i0].fw_flg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_f__i0__fw_icmp6types0 = 1;
          f[_i0].fw_icmp6types = (unsigned int *) malloc(_len_f__i0__fw_icmp6types0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_f__i0__fw_icmp6types0; _j0++) {
            f[_i0].fw_icmp6types[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = icmp6type_match(icmp6,f);
          printf("%d\n", benchRet); 
          free(icmp6);
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(f[_aux].fw_icmp6types);
          }
          free(f);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_icmp60 = 100;
          struct icmp6_hdr * icmp6 = (struct icmp6_hdr *) malloc(_len_icmp60*sizeof(struct icmp6_hdr));
          for(int _i0 = 0; _i0 < _len_icmp60; _i0++) {
              icmp6[_i0].icmp6_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_f0 = 100;
          struct ip6_fw * f = (struct ip6_fw *) malloc(_len_f0*sizeof(struct ip6_fw));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
              f[_i0].fw_flg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_f__i0__fw_icmp6types0 = 1;
          f[_i0].fw_icmp6types = (unsigned int *) malloc(_len_f__i0__fw_icmp6types0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_f__i0__fw_icmp6types0; _j0++) {
            f[_i0].fw_icmp6types[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = icmp6type_match(icmp6,f);
          printf("%d\n", benchRet); 
          free(icmp6);
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(f[_aux].fw_icmp6types);
          }
          free(f);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_icmp60 = 1;
          struct icmp6_hdr * icmp6 = (struct icmp6_hdr *) malloc(_len_icmp60*sizeof(struct icmp6_hdr));
          for(int _i0 = 0; _i0 < _len_icmp60; _i0++) {
              icmp6[_i0].icmp6_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_f0 = 1;
          struct ip6_fw * f = (struct ip6_fw *) malloc(_len_f0*sizeof(struct ip6_fw));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
              f[_i0].fw_flg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_f__i0__fw_icmp6types0 = 1;
          f[_i0].fw_icmp6types = (unsigned int *) malloc(_len_f__i0__fw_icmp6types0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_f__i0__fw_icmp6types0; _j0++) {
            f[_i0].fw_icmp6types[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = icmp6type_match(icmp6,f);
          printf("%d\n", benchRet); 
          free(icmp6);
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(f[_aux].fw_icmp6types);
          }
          free(f);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
