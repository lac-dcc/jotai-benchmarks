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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ magic; char* title; void* process_send_error; void* process_error_msg; void* process_msg; } ;
typedef  TYPE_1__ udp_type_t ;

/* Variables and functions */
 scalar_t__ UDP_FUNC_MAGIC ; 
 void* process_msg_noop ; 

int check_udp_functions (udp_type_t *type) {
  if (type->magic != UDP_FUNC_MAGIC) {
    return -1;
  }
  if (!type->title) {
    type->title = "(unknown)";
  }
  if (!type->process_msg) {
    type->process_msg = process_msg_noop;
  }
  if (!type->process_error_msg) {
    type->process_error_msg = process_msg_noop;
  }
  if (!type->process_send_error) {
    type->process_send_error= process_msg_noop;
  }
  /*
  if (!type->run) {
    type->run = server_read_write;
  }
  */
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
          int _len_type0 = 1;
          struct TYPE_3__ * type = (struct TYPE_3__ *) malloc(_len_type0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0].magic = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_type__i0__title0 = 1;
          type[_i0].title = (char *) malloc(_len_type__i0__title0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_type__i0__title0; _j0++) {
            type[_i0].title[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = check_udp_functions(type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_type0; _aux++) {
          free(type[_aux].title);
          }
          free(type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
