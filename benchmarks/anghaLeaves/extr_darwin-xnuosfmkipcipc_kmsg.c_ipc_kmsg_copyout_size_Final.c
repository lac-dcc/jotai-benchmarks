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
typedef  struct TYPE_14__   TYPE_6__ ;
typedef  struct TYPE_13__   TYPE_5__ ;
typedef  struct TYPE_12__   TYPE_4__ ;
typedef  struct TYPE_11__   TYPE_3__ ;
typedef  struct TYPE_10__   TYPE_2__ ;
typedef  struct TYPE_9__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_3__* vm_map_t ;
typedef  int /*<<< orphan*/  mach_msg_size_t ;
struct TYPE_9__ {int type; } ;
struct TYPE_12__ {TYPE_1__ type; } ;
typedef  TYPE_4__ mach_msg_descriptor_t ;
struct TYPE_13__ {int msgh_descriptor_count; } ;
typedef  TYPE_5__ mach_msg_body_t ;
typedef  TYPE_6__* ipc_kmsg_t ;
typedef  int boolean_t ;
struct TYPE_14__ {TYPE_2__* ikm_header; } ;
struct TYPE_11__ {scalar_t__ max_offset; } ;
struct TYPE_10__ {int msgh_bits; int /*<<< orphan*/  msgh_size; } ;

/* Variables and functions */
 int /*<<< orphan*/  DESC_SIZE_ADJUSTMENT ; 
 scalar_t__ LEGACY_HEADER_SIZE_DELTA ; 
 int MACH_MSGH_BITS_COMPLEX ; 
#define  MACH_MSG_OOL_DESCRIPTOR 131 
#define  MACH_MSG_OOL_PORTS_DESCRIPTOR 130 
#define  MACH_MSG_OOL_VOLATILE_DESCRIPTOR 129 
#define  MACH_MSG_PORT_DESCRIPTOR 128 
 scalar_t__ VM_MAX_ADDRESS ; 

mach_msg_size_t
ipc_kmsg_copyout_size(
	ipc_kmsg_t		kmsg,
	vm_map_t		map)
{
    mach_msg_size_t		send_size;

    send_size = kmsg->ikm_header->msgh_size;

    boolean_t is_task_64bit = (map->max_offset > VM_MAX_ADDRESS);

#if defined(__LP64__)
	send_size -= LEGACY_HEADER_SIZE_DELTA;
#endif

    if (kmsg->ikm_header->msgh_bits & MACH_MSGH_BITS_COMPLEX) {

        mach_msg_body_t *body;
        mach_msg_descriptor_t *saddr, *eaddr;

        body = (mach_msg_body_t *) (kmsg->ikm_header + 1);
        saddr = (mach_msg_descriptor_t *) (body + 1);
        eaddr = saddr + body->msgh_descriptor_count;

        for ( ; saddr < eaddr; saddr++ ) {
            switch (saddr->type.type) {
                case MACH_MSG_OOL_DESCRIPTOR:
                case MACH_MSG_OOL_VOLATILE_DESCRIPTOR:
                case MACH_MSG_OOL_PORTS_DESCRIPTOR:
                    if(!is_task_64bit)
                        send_size -= DESC_SIZE_ADJUSTMENT;
                    break;
                case MACH_MSG_PORT_DESCRIPTOR:
                    send_size -= DESC_SIZE_ADJUSTMENT;
                    break;
                default:
                    break;
            }
        }
    }
    return send_size;
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
          int _len_kmsg0 = 1;
          struct TYPE_14__ * kmsg = (struct TYPE_14__ *) malloc(_len_kmsg0*sizeof(struct TYPE_14__));
          for(int _i0 = 0; _i0 < _len_kmsg0; _i0++) {
              int _len_kmsg__i0__ikm_header0 = 1;
          kmsg[_i0].ikm_header = (struct TYPE_10__ *) malloc(_len_kmsg__i0__ikm_header0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_kmsg__i0__ikm_header0; _j0++) {
            kmsg[_i0].ikm_header->msgh_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        kmsg[_i0].ikm_header->msgh_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_map0 = 1;
          struct TYPE_11__ * map = (struct TYPE_11__ *) malloc(_len_map0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
            map[_i0].max_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ipc_kmsg_copyout_size(kmsg,map);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_kmsg0; _aux++) {
          free(kmsg[_aux].ikm_header);
          }
          free(kmsg);
          free(map);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
