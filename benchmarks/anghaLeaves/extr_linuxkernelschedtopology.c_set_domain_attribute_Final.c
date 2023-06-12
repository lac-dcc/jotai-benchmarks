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
struct sched_domain_attr {int relax_domain_level; } ;
struct sched_domain {int level; int flags; } ;

/* Variables and functions */
 int SD_BALANCE_NEWIDLE ; 
 int SD_BALANCE_WAKE ; 
 int default_relax_domain_level ; 

__attribute__((used)) static void set_domain_attribute(struct sched_domain *sd,
				 struct sched_domain_attr *attr)
{
	int request;

	if (!attr || attr->relax_domain_level < 0) {
		if (default_relax_domain_level < 0)
			return;
		else
			request = default_relax_domain_level;
	} else
		request = attr->relax_domain_level;
	if (request < sd->level) {
		/* Turn off idle balance on this domain: */
		sd->flags &= ~(SD_BALANCE_WAKE|SD_BALANCE_NEWIDLE);
	} else {
		/* Turn on idle balance on this domain: */
		sd->flags |= (SD_BALANCE_WAKE|SD_BALANCE_NEWIDLE);
	}
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
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int _len_sd0 = 65025;
          struct sched_domain * sd = (struct sched_domain *) malloc(_len_sd0*sizeof(struct sched_domain));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
              sd[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
          sd[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_attr0 = 65025;
          struct sched_domain_attr * attr = (struct sched_domain_attr *) malloc(_len_attr0*sizeof(struct sched_domain_attr));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
              attr[_i0].relax_domain_level = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          set_domain_attribute(sd,attr);
          free(sd);
          free(attr);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int _len_sd0 = 100;
          struct sched_domain * sd = (struct sched_domain *) malloc(_len_sd0*sizeof(struct sched_domain));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
              sd[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
          sd[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_attr0 = 100;
          struct sched_domain_attr * attr = (struct sched_domain_attr *) malloc(_len_attr0*sizeof(struct sched_domain_attr));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
              attr[_i0].relax_domain_level = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          set_domain_attribute(sd,attr);
          free(sd);
          free(attr);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int _len_sd0 = 1;
          struct sched_domain * sd = (struct sched_domain *) malloc(_len_sd0*sizeof(struct sched_domain));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
              sd[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
          sd[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_attr0 = 1;
          struct sched_domain_attr * attr = (struct sched_domain_attr *) malloc(_len_attr0*sizeof(struct sched_domain_attr));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
              attr[_i0].relax_domain_level = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          set_domain_attribute(sd,attr);
          free(sd);
          free(attr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
