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
struct sk_buff {int dummy; } ;
struct netns_ipvs {int dummy; } ;
struct ip_vs_proto_data {int dummy; } ;
struct ip_vs_iphdr {int dummy; } ;
struct ip_vs_conn {int dummy; } ;

/* Variables and functions */
 int NF_ACCEPT ; 

__attribute__((used)) static int
ah_esp_conn_schedule(struct netns_ipvs *ipvs, int af, struct sk_buff *skb,
		     struct ip_vs_proto_data *pd,
		     int *verdict, struct ip_vs_conn **cpp,
		     struct ip_vs_iphdr *iph)
{
	/*
	 * AH/ESP is only related traffic. Pass the packet to IP stack.
	 */
	*verdict = NF_ACCEPT;
	return 0;
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
          int af = 100;
          int _len_ipvs0 = 1;
          struct netns_ipvs * ipvs = (struct netns_ipvs *) malloc(_len_ipvs0*sizeof(struct netns_ipvs));
          for(int _i0 = 0; _i0 < _len_ipvs0; _i0++) {
            ipvs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pd0 = 1;
          struct ip_vs_proto_data * pd = (struct ip_vs_proto_data *) malloc(_len_pd0*sizeof(struct ip_vs_proto_data));
          for(int _i0 = 0; _i0 < _len_pd0; _i0++) {
            pd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_verdict0 = 1;
          int * verdict = (int *) malloc(_len_verdict0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_verdict0; _i0++) {
            verdict[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cpp0 = 1;
          struct ip_vs_conn ** cpp = (struct ip_vs_conn **) malloc(_len_cpp0*sizeof(struct ip_vs_conn *));
          for(int _i0 = 0; _i0 < _len_cpp0; _i0++) {
            int _len_cpp1 = 1;
            cpp[_i0] = (struct ip_vs_conn *) malloc(_len_cpp1*sizeof(struct ip_vs_conn));
            for(int _i1 = 0; _i1 < _len_cpp1; _i1++) {
              cpp[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_iph0 = 1;
          struct ip_vs_iphdr * iph = (struct ip_vs_iphdr *) malloc(_len_iph0*sizeof(struct ip_vs_iphdr));
          for(int _i0 = 0; _i0 < _len_iph0; _i0++) {
            iph[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ah_esp_conn_schedule(ipvs,af,skb,pd,verdict,cpp,iph);
          printf("%d\n", benchRet); 
          free(ipvs);
          free(skb);
          free(pd);
          free(verdict);
          for(int i1 = 0; i1 < _len_cpp0; i1++) {
            int _len_cpp1 = 1;
              free(cpp[i1]);
          }
          free(cpp);
          free(iph);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
