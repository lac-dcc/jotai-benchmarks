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
typedef  void* u_int8_t ;
typedef  int /*<<< orphan*/  u_int32_t ;
struct necp_packet_header {int /*<<< orphan*/  message_id; void* flags; void* packet_type; } ;

/* Variables and functions */

__attribute__((used)) static u_int8_t *
necp_buffer_write_packet_header(u_int8_t *buffer, u_int8_t packet_type, u_int8_t flags, u_int32_t message_id)
{
	((struct necp_packet_header *)(void *)buffer)->packet_type = packet_type;
	((struct necp_packet_header *)(void *)buffer)->flags = flags;
	((struct necp_packet_header *)(void *)buffer)->message_id = message_id;
	return (buffer + sizeof(struct necp_packet_header));
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
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int message_id = 255;
        
          int _len_buffer0 = 65025;
          void ** buffer = (void **) malloc(_len_buffer0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
          }
        
          void * packet_type;
        
          void * flags;
        
          void ** benchRet = necp_buffer_write_packet_header(buffer,packet_type,flags,message_id);
          for(int i1 = 0; i1 < _len_buffer0; i1++) {
              }
          free(buffer);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int message_id = 10;
        
          int _len_buffer0 = 100;
          void ** buffer = (void **) malloc(_len_buffer0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
          }
        
          void * packet_type;
        
          void * flags;
        
          void ** benchRet = necp_buffer_write_packet_header(buffer,packet_type,flags,message_id);
          for(int i1 = 0; i1 < _len_buffer0; i1++) {
              }
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
