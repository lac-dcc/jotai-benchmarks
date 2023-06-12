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
struct tep_handle {int cmdline_count; struct cmdline* cmdlines; } ;
struct cmdline_list {int pid; } ;
struct cmdline {int pid; } ;

/* Variables and functions */

int tep_cmdline_pid(struct tep_handle *pevent, struct cmdline *cmdline)
{
	struct cmdline_list *cmdlist = (struct cmdline_list *)cmdline;

	if (!cmdline)
		return -1;

	/*
	 * If cmdlines have not been created yet, or cmdline is
	 * not part of the array, then treat it as a cmdlist instead.
	 */
	if (!pevent->cmdlines ||
	    cmdline < pevent->cmdlines ||
	    cmdline >= pevent->cmdlines + pevent->cmdline_count)
		return cmdlist->pid;

	return cmdline->pid;
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
          int _len_pevent0 = 65025;
          struct tep_handle * pevent = (struct tep_handle *) malloc(_len_pevent0*sizeof(struct tep_handle));
          for(int _i0 = 0; _i0 < _len_pevent0; _i0++) {
              pevent[_i0].cmdline_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pevent__i0__cmdlines0 = 1;
          pevent[_i0].cmdlines = (struct cmdline *) malloc(_len_pevent__i0__cmdlines0*sizeof(struct cmdline));
          for(int _j0 = 0; _j0 < _len_pevent__i0__cmdlines0; _j0++) {
              pevent[_i0].cmdlines->pid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_cmdline0 = 65025;
          struct cmdline * cmdline = (struct cmdline *) malloc(_len_cmdline0*sizeof(struct cmdline));
          for(int _i0 = 0; _i0 < _len_cmdline0; _i0++) {
              cmdline[_i0].pid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = tep_cmdline_pid(pevent,cmdline);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pevent0; _aux++) {
          free(pevent[_aux].cmdlines);
          }
          free(pevent);
          free(cmdline);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_pevent0 = 100;
          struct tep_handle * pevent = (struct tep_handle *) malloc(_len_pevent0*sizeof(struct tep_handle));
          for(int _i0 = 0; _i0 < _len_pevent0; _i0++) {
              pevent[_i0].cmdline_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pevent__i0__cmdlines0 = 1;
          pevent[_i0].cmdlines = (struct cmdline *) malloc(_len_pevent__i0__cmdlines0*sizeof(struct cmdline));
          for(int _j0 = 0; _j0 < _len_pevent__i0__cmdlines0; _j0++) {
              pevent[_i0].cmdlines->pid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_cmdline0 = 100;
          struct cmdline * cmdline = (struct cmdline *) malloc(_len_cmdline0*sizeof(struct cmdline));
          for(int _i0 = 0; _i0 < _len_cmdline0; _i0++) {
              cmdline[_i0].pid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = tep_cmdline_pid(pevent,cmdline);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pevent0; _aux++) {
          free(pevent[_aux].cmdlines);
          }
          free(pevent);
          free(cmdline);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_pevent0 = 1;
          struct tep_handle * pevent = (struct tep_handle *) malloc(_len_pevent0*sizeof(struct tep_handle));
          for(int _i0 = 0; _i0 < _len_pevent0; _i0++) {
              pevent[_i0].cmdline_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pevent__i0__cmdlines0 = 1;
          pevent[_i0].cmdlines = (struct cmdline *) malloc(_len_pevent__i0__cmdlines0*sizeof(struct cmdline));
          for(int _j0 = 0; _j0 < _len_pevent__i0__cmdlines0; _j0++) {
              pevent[_i0].cmdlines->pid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_cmdline0 = 1;
          struct cmdline * cmdline = (struct cmdline *) malloc(_len_cmdline0*sizeof(struct cmdline));
          for(int _i0 = 0; _i0 < _len_cmdline0; _i0++) {
              cmdline[_i0].pid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = tep_cmdline_pid(pevent,cmdline);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pevent0; _aux++) {
          free(pevent[_aux].cmdlines);
          }
          free(pevent);
          free(cmdline);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
