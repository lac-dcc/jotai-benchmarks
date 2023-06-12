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
struct pt_regs {int dummy; } ;

/* Variables and functions */

int kgdb_arch_handle_exception(int vector, int signo, int err_code,
			       char *remcom_in_buffer, char *remcom_out_buffer,
			       struct pt_regs *linux_regs)
{
	switch (remcom_in_buffer[0]) {
	case 's':
	case 'c':
		return 0;
	}
	/* Stay in the debugger. */
	return -1;
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
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
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

          int vector = 100;
        
          int signo = 100;
        
          int err_code = 100;
        
          int _len_remcom_in_buffer0 = 1;
          char * remcom_in_buffer = (char *) malloc(_len_remcom_in_buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_remcom_in_buffer0; _i0++) {
            remcom_in_buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_remcom_out_buffer0 = 1;
          char * remcom_out_buffer = (char *) malloc(_len_remcom_out_buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_remcom_out_buffer0; _i0++) {
            remcom_out_buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_linux_regs0 = 1;
          struct pt_regs * linux_regs = (struct pt_regs *) malloc(_len_linux_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_linux_regs0; _i0++) {
              linux_regs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = kgdb_arch_handle_exception(vector,signo,err_code,remcom_in_buffer,remcom_out_buffer,linux_regs);
          printf("%d\n", benchRet); 
          free(remcom_in_buffer);
          free(remcom_out_buffer);
          free(linux_regs);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
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

          int vector = 255;
        
          int signo = 255;
        
          int err_code = 255;
        
          int _len_remcom_in_buffer0 = 65025;
          char * remcom_in_buffer = (char *) malloc(_len_remcom_in_buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_remcom_in_buffer0; _i0++) {
            remcom_in_buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_remcom_out_buffer0 = 65025;
          char * remcom_out_buffer = (char *) malloc(_len_remcom_out_buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_remcom_out_buffer0; _i0++) {
            remcom_out_buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_linux_regs0 = 65025;
          struct pt_regs * linux_regs = (struct pt_regs *) malloc(_len_linux_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_linux_regs0; _i0++) {
              linux_regs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = kgdb_arch_handle_exception(vector,signo,err_code,remcom_in_buffer,remcom_out_buffer,linux_regs);
          printf("%d\n", benchRet); 
          free(remcom_in_buffer);
          free(remcom_out_buffer);
          free(linux_regs);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
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

          int vector = 10;
        
          int signo = 10;
        
          int err_code = 10;
        
          int _len_remcom_in_buffer0 = 100;
          char * remcom_in_buffer = (char *) malloc(_len_remcom_in_buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_remcom_in_buffer0; _i0++) {
            remcom_in_buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_remcom_out_buffer0 = 100;
          char * remcom_out_buffer = (char *) malloc(_len_remcom_out_buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_remcom_out_buffer0; _i0++) {
            remcom_out_buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_linux_regs0 = 100;
          struct pt_regs * linux_regs = (struct pt_regs *) malloc(_len_linux_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_linux_regs0; _i0++) {
              linux_regs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = kgdb_arch_handle_exception(vector,signo,err_code,remcom_in_buffer,remcom_out_buffer,linux_regs);
          printf("%d\n", benchRet); 
          free(remcom_in_buffer);
          free(remcom_out_buffer);
          free(linux_regs);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
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

          int vector = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int signo = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int err_code = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_remcom_in_buffer0 = 1;
          char * remcom_in_buffer = (char *) malloc(_len_remcom_in_buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_remcom_in_buffer0; _i0++) {
            remcom_in_buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_remcom_out_buffer0 = 1;
          char * remcom_out_buffer = (char *) malloc(_len_remcom_out_buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_remcom_out_buffer0; _i0++) {
            remcom_out_buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_linux_regs0 = 1;
          struct pt_regs * linux_regs = (struct pt_regs *) malloc(_len_linux_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_linux_regs0; _i0++) {
              linux_regs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = kgdb_arch_handle_exception(vector,signo,err_code,remcom_in_buffer,remcom_out_buffer,linux_regs);
          printf("%d\n", benchRet); 
          free(remcom_in_buffer);
          free(remcom_out_buffer);
          free(linux_regs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
