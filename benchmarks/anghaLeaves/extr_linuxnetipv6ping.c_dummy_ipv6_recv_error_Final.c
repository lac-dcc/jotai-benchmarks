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
struct sock {int dummy; } ;
struct msghdr {int dummy; } ;

/* Variables and functions */
 int EAFNOSUPPORT ; 

__attribute__((used)) static int dummy_ipv6_recv_error(struct sock *sk, struct msghdr *msg, int len,
				 int *addr_len)
{
	return -EAFNOSUPPORT;
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
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int len = 100;
        
          int _len_sk0 = 1;
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
              sk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_msg0 = 1;
          struct msghdr * msg = (struct msghdr *) malloc(_len_msg0*sizeof(struct msghdr));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
              msg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_addr_len0 = 1;
          int * addr_len = (int *) malloc(_len_addr_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addr_len0; _i0++) {
            addr_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = dummy_ipv6_recv_error(sk,msg,len,addr_len);
          printf("%d\n", benchRet); 
          free(sk);
          free(msg);
          free(addr_len);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int len = 255;
        
          int _len_sk0 = 65025;
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
              sk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_msg0 = 65025;
          struct msghdr * msg = (struct msghdr *) malloc(_len_msg0*sizeof(struct msghdr));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
              msg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_addr_len0 = 65025;
          int * addr_len = (int *) malloc(_len_addr_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addr_len0; _i0++) {
            addr_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = dummy_ipv6_recv_error(sk,msg,len,addr_len);
          printf("%d\n", benchRet); 
          free(sk);
          free(msg);
          free(addr_len);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int len = 10;
        
          int _len_sk0 = 100;
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
              sk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_msg0 = 100;
          struct msghdr * msg = (struct msghdr *) malloc(_len_msg0*sizeof(struct msghdr));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
              msg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_addr_len0 = 100;
          int * addr_len = (int *) malloc(_len_addr_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addr_len0; _i0++) {
            addr_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = dummy_ipv6_recv_error(sk,msg,len,addr_len);
          printf("%d\n", benchRet); 
          free(sk);
          free(msg);
          free(addr_len);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_sk0 = 1;
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
              sk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_msg0 = 1;
          struct msghdr * msg = (struct msghdr *) malloc(_len_msg0*sizeof(struct msghdr));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
              msg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_addr_len0 = 1;
          int * addr_len = (int *) malloc(_len_addr_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addr_len0; _i0++) {
            addr_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = dummy_ipv6_recv_error(sk,msg,len,addr_len);
          printf("%d\n", benchRet); 
          free(sk);
          free(msg);
          free(addr_len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
