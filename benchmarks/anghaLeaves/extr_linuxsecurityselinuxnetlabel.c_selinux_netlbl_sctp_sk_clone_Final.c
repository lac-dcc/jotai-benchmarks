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
struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int /*<<< orphan*/  nlbl_state; } ;

/* Variables and functions */

void selinux_netlbl_sctp_sk_clone(struct sock *sk, struct sock *newsk)
{
	struct sk_security_struct *sksec = sk->sk_security;
	struct sk_security_struct *newsksec = newsk->sk_security;

	newsksec->nlbl_state = sksec->nlbl_state;
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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
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

          int _len_sk0 = 65025;
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
              int _len_sk__i0__sk_security0 = 1;
          sk[_i0].sk_security = (struct sk_security_struct *) malloc(_len_sk__i0__sk_security0*sizeof(struct sk_security_struct));
          for(int _j0 = 0; _j0 < _len_sk__i0__sk_security0; _j0++) {
              sk[_i0].sk_security->nlbl_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_newsk0 = 65025;
          struct sock * newsk = (struct sock *) malloc(_len_newsk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_newsk0; _i0++) {
              int _len_newsk__i0__sk_security0 = 1;
          newsk[_i0].sk_security = (struct sk_security_struct *) malloc(_len_newsk__i0__sk_security0*sizeof(struct sk_security_struct));
          for(int _j0 = 0; _j0 < _len_newsk__i0__sk_security0; _j0++) {
              newsk[_i0].sk_security->nlbl_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          selinux_netlbl_sctp_sk_clone(sk,newsk);
          for(int _aux = 0; _aux < _len_sk0; _aux++) {
          free(sk[_aux].sk_security);
          }
          free(sk);
          for(int _aux = 0; _aux < _len_newsk0; _aux++) {
          free(newsk[_aux].sk_security);
          }
          free(newsk);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
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

          int _len_sk0 = 100;
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
              int _len_sk__i0__sk_security0 = 1;
          sk[_i0].sk_security = (struct sk_security_struct *) malloc(_len_sk__i0__sk_security0*sizeof(struct sk_security_struct));
          for(int _j0 = 0; _j0 < _len_sk__i0__sk_security0; _j0++) {
              sk[_i0].sk_security->nlbl_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_newsk0 = 100;
          struct sock * newsk = (struct sock *) malloc(_len_newsk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_newsk0; _i0++) {
              int _len_newsk__i0__sk_security0 = 1;
          newsk[_i0].sk_security = (struct sk_security_struct *) malloc(_len_newsk__i0__sk_security0*sizeof(struct sk_security_struct));
          for(int _j0 = 0; _j0 < _len_newsk__i0__sk_security0; _j0++) {
              newsk[_i0].sk_security->nlbl_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          selinux_netlbl_sctp_sk_clone(sk,newsk);
          for(int _aux = 0; _aux < _len_sk0; _aux++) {
          free(sk[_aux].sk_security);
          }
          free(sk);
          for(int _aux = 0; _aux < _len_newsk0; _aux++) {
          free(newsk[_aux].sk_security);
          }
          free(newsk);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
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

          int _len_sk0 = 1;
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
              int _len_sk__i0__sk_security0 = 1;
          sk[_i0].sk_security = (struct sk_security_struct *) malloc(_len_sk__i0__sk_security0*sizeof(struct sk_security_struct));
          for(int _j0 = 0; _j0 < _len_sk__i0__sk_security0; _j0++) {
              sk[_i0].sk_security->nlbl_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_newsk0 = 1;
          struct sock * newsk = (struct sock *) malloc(_len_newsk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_newsk0; _i0++) {
              int _len_newsk__i0__sk_security0 = 1;
          newsk[_i0].sk_security = (struct sk_security_struct *) malloc(_len_newsk__i0__sk_security0*sizeof(struct sk_security_struct));
          for(int _j0 = 0; _j0 < _len_newsk__i0__sk_security0; _j0++) {
              newsk[_i0].sk_security->nlbl_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          selinux_netlbl_sctp_sk_clone(sk,newsk);
          for(int _aux = 0; _aux < _len_sk0; _aux++) {
          free(sk[_aux].sk_security);
          }
          free(sk);
          for(int _aux = 0; _aux < _len_newsk0; _aux++) {
          free(newsk[_aux].sk_security);
          }
          free(newsk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
