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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct hfi_profile_level {int /*<<< orphan*/  level; int /*<<< orphan*/  profile; } ;
struct TYPE_3__ {int size; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
struct hfi_msg_session_property_info_pkt {int /*<<< orphan*/ * data; TYPE_2__ shdr; } ;

/* Variables and functions */
 unsigned int HFI_ERR_NONE ; 
 unsigned int HFI_ERR_SESSION_INVALID_PARAMETER ; 

__attribute__((used)) static unsigned int
session_get_prop_profile_level(struct hfi_msg_session_property_info_pkt *pkt,
			       struct hfi_profile_level *profile_level)
{
	struct hfi_profile_level *hfi;
	u32 req_bytes;

	req_bytes = pkt->shdr.hdr.size - sizeof(*pkt);

	if (!req_bytes || req_bytes % sizeof(struct hfi_profile_level))
		/* bad packet */
		return HFI_ERR_SESSION_INVALID_PARAMETER;

	hfi = (struct hfi_profile_level *)&pkt->data[1];
	profile_level->profile = hfi->profile;
	profile_level->level = hfi->level;

	return HFI_ERR_NONE;
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
          int _len_pkt0 = 1;
          struct hfi_msg_session_property_info_pkt * pkt = (struct hfi_msg_session_property_info_pkt *) malloc(_len_pkt0*sizeof(struct hfi_msg_session_property_info_pkt));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
              int _len_pkt__i0__data0 = 1;
          pkt[_i0].data = (int *) malloc(_len_pkt__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pkt__i0__data0; _j0++) {
            pkt[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pkt[_i0].shdr.hdr.size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_profile_level0 = 1;
          struct hfi_profile_level * profile_level = (struct hfi_profile_level *) malloc(_len_profile_level0*sizeof(struct hfi_profile_level));
          for(int _i0 = 0; _i0 < _len_profile_level0; _i0++) {
            profile_level[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
        profile_level[_i0].profile = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = session_get_prop_profile_level(pkt,profile_level);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_pkt0; _aux++) {
          free(pkt[_aux].data);
          }
          free(pkt);
          free(profile_level);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
