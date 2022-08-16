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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int uint32_t ;
struct lpfc_hba {int dummy; } ;

/* Variables and functions */
#define  LPFC_ASYNC_LINK_SPEED_100MBPS 146 
#define  LPFC_ASYNC_LINK_SPEED_10GBPS 145 
#define  LPFC_ASYNC_LINK_SPEED_10MBPS 144 
#define  LPFC_ASYNC_LINK_SPEED_1GBPS 143 
#define  LPFC_ASYNC_LINK_SPEED_20GBPS 142 
#define  LPFC_ASYNC_LINK_SPEED_25GBPS 141 
#define  LPFC_ASYNC_LINK_SPEED_40GBPS 140 
#define  LPFC_ASYNC_LINK_SPEED_ZERO 139 
#define  LPFC_FC_LA_SPEED_10G 138 
#define  LPFC_FC_LA_SPEED_16G 137 
#define  LPFC_FC_LA_SPEED_1G 136 
#define  LPFC_FC_LA_SPEED_2G 135 
#define  LPFC_FC_LA_SPEED_32G 134 
#define  LPFC_FC_LA_SPEED_4G 133 
#define  LPFC_FC_LA_SPEED_64G 132 
#define  LPFC_FC_LA_SPEED_8G 131 
#define  LPFC_FC_LA_SPEED_UNKNOWN 130 
#define  LPFC_TRAILER_CODE_FC 129 
#define  LPFC_TRAILER_CODE_LINK 128 

__attribute__((used)) static uint32_t
lpfc_sli4_port_speed_parse(struct lpfc_hba *phba, uint32_t evt_code,
			   uint8_t speed_code)
{
	uint32_t port_speed;

	switch (evt_code) {
	case LPFC_TRAILER_CODE_LINK:
		switch (speed_code) {
		case LPFC_ASYNC_LINK_SPEED_ZERO:
			port_speed = 0;
			break;
		case LPFC_ASYNC_LINK_SPEED_10MBPS:
			port_speed = 10;
			break;
		case LPFC_ASYNC_LINK_SPEED_100MBPS:
			port_speed = 100;
			break;
		case LPFC_ASYNC_LINK_SPEED_1GBPS:
			port_speed = 1000;
			break;
		case LPFC_ASYNC_LINK_SPEED_10GBPS:
			port_speed = 10000;
			break;
		case LPFC_ASYNC_LINK_SPEED_20GBPS:
			port_speed = 20000;
			break;
		case LPFC_ASYNC_LINK_SPEED_25GBPS:
			port_speed = 25000;
			break;
		case LPFC_ASYNC_LINK_SPEED_40GBPS:
			port_speed = 40000;
			break;
		default:
			port_speed = 0;
		}
		break;
	case LPFC_TRAILER_CODE_FC:
		switch (speed_code) {
		case LPFC_FC_LA_SPEED_UNKNOWN:
			port_speed = 0;
			break;
		case LPFC_FC_LA_SPEED_1G:
			port_speed = 1000;
			break;
		case LPFC_FC_LA_SPEED_2G:
			port_speed = 2000;
			break;
		case LPFC_FC_LA_SPEED_4G:
			port_speed = 4000;
			break;
		case LPFC_FC_LA_SPEED_8G:
			port_speed = 8000;
			break;
		case LPFC_FC_LA_SPEED_10G:
			port_speed = 10000;
			break;
		case LPFC_FC_LA_SPEED_16G:
			port_speed = 16000;
			break;
		case LPFC_FC_LA_SPEED_32G:
			port_speed = 32000;
			break;
		case LPFC_FC_LA_SPEED_64G:
			port_speed = 64000;
			break;
		default:
			port_speed = 0;
		}
		break;
	default:
		port_speed = 0;
	}
	return port_speed;
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
          int evt_code = 100;
          int speed_code = 100;
          int _len_phba0 = 1;
          struct lpfc_hba * phba = (struct lpfc_hba *) malloc(_len_phba0*sizeof(struct lpfc_hba));
          for(int _i0 = 0; _i0 < _len_phba0; _i0++) {
            phba[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lpfc_sli4_port_speed_parse(phba,evt_code,speed_code);
          printf("%d\n", benchRet); 
          free(phba);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int evt_code = 10;
          int speed_code = 10;
          int _len_phba0 = 100;
          struct lpfc_hba * phba = (struct lpfc_hba *) malloc(_len_phba0*sizeof(struct lpfc_hba));
          for(int _i0 = 0; _i0 < _len_phba0; _i0++) {
            phba[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lpfc_sli4_port_speed_parse(phba,evt_code,speed_code);
          printf("%d\n", benchRet); 
          free(phba);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
