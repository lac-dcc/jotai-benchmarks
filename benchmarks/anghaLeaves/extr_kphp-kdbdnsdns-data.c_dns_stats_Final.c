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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {double percent_label_buff; double percent_record_buff; double percent_nodes; double percent_edges; } ;
typedef  TYPE_1__ dns_stat_t ;

/* Variables and functions */
 double DNS_LABELS_BUFFSIZE ; 
 double DNS_MAX_TRIE_EDGES ; 
 double DNS_MAX_TRIE_NODES ; 
 double DNS_RECORDS_BUFFSIZE ; 
 double labels_saved_bytes ; 
 double labels_wptr ; 
 double records_wptr ; 
 double trie_edges ; 
 double trie_nodes ; 

void dns_stats (dns_stat_t *S) {
  S->percent_label_buff = (labels_wptr * 100.0) / DNS_LABELS_BUFFSIZE;
  S->percent_label_buff = (labels_saved_bytes * 100.0) / DNS_LABELS_BUFFSIZE;
  S->percent_record_buff = (records_wptr * 100.0) / DNS_RECORDS_BUFFSIZE;
  S->percent_nodes = (trie_nodes * 100.0) / DNS_MAX_TRIE_NODES;
  S->percent_edges = (trie_edges * 100.0) / DNS_MAX_TRIE_EDGES;
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
          int _len_S0 = 1;
          struct TYPE_3__ * S = (struct TYPE_3__ *) malloc(_len_S0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_S0; _i0++) {
            S[_i0].percent_label_buff = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        S[_i0].percent_record_buff = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        S[_i0].percent_nodes = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        S[_i0].percent_edges = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          dns_stats(S);
          free(S);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_S0 = 65025;
          struct TYPE_3__ * S = (struct TYPE_3__ *) malloc(_len_S0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_S0; _i0++) {
            S[_i0].percent_label_buff = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        S[_i0].percent_record_buff = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        S[_i0].percent_nodes = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        S[_i0].percent_edges = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          dns_stats(S);
          free(S);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_S0 = 100;
          struct TYPE_3__ * S = (struct TYPE_3__ *) malloc(_len_S0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_S0; _i0++) {
            S[_i0].percent_label_buff = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        S[_i0].percent_record_buff = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        S[_i0].percent_nodes = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        S[_i0].percent_edges = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          dns_stats(S);
          free(S);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
