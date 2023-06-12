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
typedef  enum tftp_error { ____Placeholder_tftp_error } tftp_error ;

/* Variables and functions */
#define  tftp_access_violation 136 
#define  tftp_disk_full 135 
#define  tftp_file_already_exists 134 
#define  tftp_file_not_found 133 
#define  tftp_illegal_operation 132 
#define  tftp_no_such_user 131 
#define  tftp_option_negotiation 130 
#define  tftp_undef 129 
#define  tftp_unknown_transfer_id 128 

char *show_error (enum tftp_error e) {
  switch (e) {
    case tftp_undef: return "Not defined";
    case tftp_file_not_found: return "File not found";
    case tftp_access_violation: return "Access violation";
    case tftp_disk_full: return "Disk full or allocation exceeded";
    case tftp_illegal_operation: return "Illegal TFTP operation";
    case tftp_unknown_transfer_id: return "Unknown transfer ID";
    case tftp_file_already_exists: return "File already exists";
    case tftp_no_such_user: return "No such user";
    case tftp_option_negotiation: return "Option negotiation error";
  }
  return "Bad error code";
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
          enum tftp_error e = 0;
        
          char * benchRet = show_error(e);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
