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
struct bfa_plog_rec_s {scalar_t__ log_type; scalar_t__ log_num_ints; } ;

/* Variables and functions */
 scalar_t__ BFA_PL_INT_LOG_SZ ; 
 scalar_t__ BFA_PL_LOG_TYPE_INT ; 
 scalar_t__ BFA_PL_LOG_TYPE_STRING ; 

__attribute__((used)) static int
plkd_validate_logrec(struct bfa_plog_rec_s *pl_rec)
{
	if ((pl_rec->log_type != BFA_PL_LOG_TYPE_INT) &&
		(pl_rec->log_type != BFA_PL_LOG_TYPE_STRING))
		return 1;

	if ((pl_rec->log_type != BFA_PL_LOG_TYPE_INT) &&
		(pl_rec->log_num_ints > BFA_PL_INT_LOG_SZ))
		return 1;

	return 0;
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

          int _len_pl_rec0 = 65025;
          struct bfa_plog_rec_s * pl_rec = (struct bfa_plog_rec_s *) malloc(_len_pl_rec0*sizeof(struct bfa_plog_rec_s));
          for(int _i0 = 0; _i0 < _len_pl_rec0; _i0++) {
              pl_rec[_i0].log_type = ((-2 * (next_i()%2)) + 1) * next_i();
          pl_rec[_i0].log_num_ints = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = plkd_validate_logrec(pl_rec);
          printf("%d\n", benchRet); 
          free(pl_rec);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
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

          int _len_pl_rec0 = 100;
          struct bfa_plog_rec_s * pl_rec = (struct bfa_plog_rec_s *) malloc(_len_pl_rec0*sizeof(struct bfa_plog_rec_s));
          for(int _i0 = 0; _i0 < _len_pl_rec0; _i0++) {
              pl_rec[_i0].log_type = ((-2 * (next_i()%2)) + 1) * next_i();
          pl_rec[_i0].log_num_ints = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = plkd_validate_logrec(pl_rec);
          printf("%d\n", benchRet); 
          free(pl_rec);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
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

          int _len_pl_rec0 = 1;
          struct bfa_plog_rec_s * pl_rec = (struct bfa_plog_rec_s *) malloc(_len_pl_rec0*sizeof(struct bfa_plog_rec_s));
          for(int _i0 = 0; _i0 < _len_pl_rec0; _i0++) {
              pl_rec[_i0].log_type = ((-2 * (next_i()%2)) + 1) * next_i();
          pl_rec[_i0].log_num_ints = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = plkd_validate_logrec(pl_rec);
          printf("%d\n", benchRet); 
          free(pl_rec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
