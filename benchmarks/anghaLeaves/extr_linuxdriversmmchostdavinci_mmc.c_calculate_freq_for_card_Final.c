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
       0            empty\n\
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
struct mmc_davinci_host {unsigned int mmc_input_clk; int ns_in_one_cycle; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int calculate_freq_for_card(struct mmc_davinci_host *host,
	unsigned int mmc_req_freq)
{
	unsigned int mmc_freq = 0, mmc_pclk = 0, mmc_push_pull_divisor = 0;

	mmc_pclk = host->mmc_input_clk;
	if (mmc_req_freq && mmc_pclk > (2 * mmc_req_freq))
		mmc_push_pull_divisor = ((unsigned int)mmc_pclk
				/ (2 * mmc_req_freq)) - 1;
	else
		mmc_push_pull_divisor = 0;

	mmc_freq = (unsigned int)mmc_pclk
		/ (2 * (mmc_push_pull_divisor + 1));

	if (mmc_freq > mmc_req_freq)
		mmc_push_pull_divisor = mmc_push_pull_divisor + 1;
	/* Convert ns to clock cycles */
	if (mmc_req_freq <= 400000)
		host->ns_in_one_cycle = (1000000) / (((mmc_pclk
				/ (2 * (mmc_push_pull_divisor + 1)))/1000));
	else
		host->ns_in_one_cycle = (1000000) / (((mmc_pclk
				/ (2 * (mmc_push_pull_divisor + 1)))/1000000));

	return mmc_push_pull_divisor;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 56
          // dynamic_instructions_O0 : 56
          // ------------------------------- 
          // static_instructions_O1 : 41
          // dynamic_instructions_O1 : 41
          // ------------------------------- 
          // static_instructions_O2 : 41
          // dynamic_instructions_O2 : 41
          // ------------------------------- 
          // static_instructions_O3 : 41
          // dynamic_instructions_O3 : 41
          // ------------------------------- 
          // static_instructions_Ofast : 41
          // dynamic_instructions_Ofast : 41
          // ------------------------------- 
          // static_instructions_Os : 41
          // dynamic_instructions_Os : 41
          // ------------------------------- 
          // static_instructions_Oz : 41
          // dynamic_instructions_Oz : 41
          // ------------------------------- 

          unsigned int mmc_req_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_host0 = 1;
          struct mmc_davinci_host * host = (struct mmc_davinci_host *) malloc(_len_host0*sizeof(struct mmc_davinci_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              host[_i0].mmc_input_clk = ((-2 * (next_i()%2)) + 1) * next_i();
          host[_i0].ns_in_one_cycle = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned int benchRet = calculate_freq_for_card(host,mmc_req_freq);
          printf("%u\n", benchRet); 
          free(host);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
