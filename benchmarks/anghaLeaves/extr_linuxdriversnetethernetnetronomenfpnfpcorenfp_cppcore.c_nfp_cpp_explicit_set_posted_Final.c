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
typedef  void* u8 ;
struct TYPE_2__ {int posted; int siga_mode; int sigb_mode; void* sigb; void* siga; } ;
struct nfp_cpp_explicit {TYPE_1__ cmd; } ;
typedef  enum nfp_cpp_explicit_signal_mode { ____Placeholder_nfp_cpp_explicit_signal_mode } nfp_cpp_explicit_signal_mode ;

/* Variables and functions */

int nfp_cpp_explicit_set_posted(struct nfp_cpp_explicit *expl, int posted,
				u8 siga,
				enum nfp_cpp_explicit_signal_mode siga_mode,
				u8 sigb,
				enum nfp_cpp_explicit_signal_mode sigb_mode)
{
	expl->cmd.posted = posted;
	expl->cmd.siga = siga;
	expl->cmd.sigb = sigb;
	expl->cmd.siga_mode = siga_mode;
	expl->cmd.sigb_mode = sigb_mode;

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


    // int-bounds
    case 0:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
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

          int posted = 100;
        
          enum nfp_cpp_explicit_signal_mode siga_mode = 0;
        
          enum nfp_cpp_explicit_signal_mode sigb_mode = 0;
        
          int _len_expl0 = 1;
          struct nfp_cpp_explicit * expl = (struct nfp_cpp_explicit *) malloc(_len_expl0*sizeof(struct nfp_cpp_explicit));
          for(int _i0 = 0; _i0 < _len_expl0; _i0++) {
              expl[_i0].cmd.posted = ((-2 * (next_i()%2)) + 1) * next_i();
          expl[_i0].cmd.siga_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          expl[_i0].cmd.sigb_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          void * siga;
        
          void * sigb;
        
          int benchRet = nfp_cpp_explicit_set_posted(expl,posted,siga,siga_mode,sigb,sigb_mode);
          printf("%d\n", benchRet); 
          free(expl);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
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

          int posted = 255;
        
          enum nfp_cpp_explicit_signal_mode siga_mode = 0;
        
          enum nfp_cpp_explicit_signal_mode sigb_mode = 0;
        
          int _len_expl0 = 65025;
          struct nfp_cpp_explicit * expl = (struct nfp_cpp_explicit *) malloc(_len_expl0*sizeof(struct nfp_cpp_explicit));
          for(int _i0 = 0; _i0 < _len_expl0; _i0++) {
              expl[_i0].cmd.posted = ((-2 * (next_i()%2)) + 1) * next_i();
          expl[_i0].cmd.siga_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          expl[_i0].cmd.sigb_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          void * siga;
        
          void * sigb;
        
          int benchRet = nfp_cpp_explicit_set_posted(expl,posted,siga,siga_mode,sigb,sigb_mode);
          printf("%d\n", benchRet); 
          free(expl);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
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

          int posted = 10;
        
          enum nfp_cpp_explicit_signal_mode siga_mode = 0;
        
          enum nfp_cpp_explicit_signal_mode sigb_mode = 0;
        
          int _len_expl0 = 100;
          struct nfp_cpp_explicit * expl = (struct nfp_cpp_explicit *) malloc(_len_expl0*sizeof(struct nfp_cpp_explicit));
          for(int _i0 = 0; _i0 < _len_expl0; _i0++) {
              expl[_i0].cmd.posted = ((-2 * (next_i()%2)) + 1) * next_i();
          expl[_i0].cmd.siga_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          expl[_i0].cmd.sigb_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          void * siga;
        
          void * sigb;
        
          int benchRet = nfp_cpp_explicit_set_posted(expl,posted,siga,siga_mode,sigb,sigb_mode);
          printf("%d\n", benchRet); 
          free(expl);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
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

          int posted = ((-2 * (next_i()%2)) + 1) * next_i();
        
          enum nfp_cpp_explicit_signal_mode siga_mode = 0;
        
          enum nfp_cpp_explicit_signal_mode sigb_mode = 0;
        
          int _len_expl0 = 1;
          struct nfp_cpp_explicit * expl = (struct nfp_cpp_explicit *) malloc(_len_expl0*sizeof(struct nfp_cpp_explicit));
          for(int _i0 = 0; _i0 < _len_expl0; _i0++) {
              expl[_i0].cmd.posted = ((-2 * (next_i()%2)) + 1) * next_i();
          expl[_i0].cmd.siga_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          expl[_i0].cmd.sigb_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          void * siga;
        
          void * sigb;
        
          int benchRet = nfp_cpp_explicit_set_posted(expl,posted,siga,siga_mode,sigb,sigb_mode);
          printf("%d\n", benchRet); 
          free(expl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
