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
typedef  void* u_int32_t ;
struct netagent_message_header {void* message_payload_length; void* message_error; void* message_id; void* message_flags; void* message_type; } ;

/* Variables and functions */

__attribute__((used)) static u_int8_t *
netagent_buffer_write_message_header(u_int8_t *buffer, u_int8_t message_type, u_int8_t flags,
									 u_int32_t message_id, u_int32_t error, u_int32_t payload_length)
{
	((struct netagent_message_header *)(void *)buffer)->message_type = message_type;
	((struct netagent_message_header *)(void *)buffer)->message_flags = flags;
	((struct netagent_message_header *)(void *)buffer)->message_id = message_id;
	((struct netagent_message_header *)(void *)buffer)->message_error = error;
	((struct netagent_message_header *)(void *)buffer)->message_payload_length = payload_length;
	return (buffer + sizeof(struct netagent_message_header));
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
          int _len_buffer0 = 65025;
          void ** buffer = (void **) malloc(_len_buffer0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
          }
        
          void * message_type;
        
          void * flags;
        
          void * message_id;
        
          void * error;
        
          void * payload_length;
        
          void ** benchRet = netagent_buffer_write_message_header(buffer,message_type,flags,message_id,error,payload_length);
          for(int i1 = 0; i1 < _len_buffer0; i1++) {
              }
          free(buffer);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_buffer0 = 100;
          void ** buffer = (void **) malloc(_len_buffer0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
          }
        
          void * message_type;
        
          void * flags;
        
          void * message_id;
        
          void * error;
        
          void * payload_length;
        
          void ** benchRet = netagent_buffer_write_message_header(buffer,message_type,flags,message_id,error,payload_length);
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
