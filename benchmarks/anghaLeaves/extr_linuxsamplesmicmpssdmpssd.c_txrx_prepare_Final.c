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
struct virtio_net_hdr {int dummy; } ;
struct mic_vring {int dummy; } ;
struct mic_copy_desc {int vr_idx; int update_used; TYPE_1__* iov; } ;
typedef  void* ssize_t ;
struct TYPE_2__ {void* iov_len; } ;

/* Variables and functions */
 int VIRTIO_ID_NET ; 

__attribute__((used)) static inline void txrx_prepare(int type, bool tx, struct mic_vring *vr,
				struct mic_copy_desc *copy, ssize_t len)
{
	copy->vr_idx = tx ? 0 : 1;
	copy->update_used = true;
	if (type == VIRTIO_ID_NET)
		copy->iov[1].iov_len = len - sizeof(struct virtio_net_hdr);
	else
		copy->iov[0].iov_len = len;
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
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int type = 100;
        
          int tx = 100;
        
          int _len_vr0 = 1;
          struct mic_vring * vr = (struct mic_vring *) malloc(_len_vr0*sizeof(struct mic_vring));
          for(int _i0 = 0; _i0 < _len_vr0; _i0++) {
              vr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_copy0 = 1;
          struct mic_copy_desc * copy = (struct mic_copy_desc *) malloc(_len_copy0*sizeof(struct mic_copy_desc));
          for(int _i0 = 0; _i0 < _len_copy0; _i0++) {
              copy[_i0].vr_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          copy[_i0].update_used = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_copy__i0__iov0 = 1;
          copy[_i0].iov = (struct TYPE_2__ *) malloc(_len_copy__i0__iov0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_copy__i0__iov0; _j0++) {
            
          }
        
          }
        
          void * len;
        
          txrx_prepare(type,tx,vr,copy,len);
          free(vr);
          for(int _aux = 0; _aux < _len_copy0; _aux++) {
          free(copy[_aux].iov);
          }
          free(copy);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int type = 255;
        
          int tx = 255;
        
          int _len_vr0 = 65025;
          struct mic_vring * vr = (struct mic_vring *) malloc(_len_vr0*sizeof(struct mic_vring));
          for(int _i0 = 0; _i0 < _len_vr0; _i0++) {
              vr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_copy0 = 65025;
          struct mic_copy_desc * copy = (struct mic_copy_desc *) malloc(_len_copy0*sizeof(struct mic_copy_desc));
          for(int _i0 = 0; _i0 < _len_copy0; _i0++) {
              copy[_i0].vr_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          copy[_i0].update_used = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_copy__i0__iov0 = 1;
          copy[_i0].iov = (struct TYPE_2__ *) malloc(_len_copy__i0__iov0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_copy__i0__iov0; _j0++) {
            
          }
        
          }
        
          void * len;
        
          txrx_prepare(type,tx,vr,copy,len);
          free(vr);
          for(int _aux = 0; _aux < _len_copy0; _aux++) {
          free(copy[_aux].iov);
          }
          free(copy);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int type = 10;
        
          int tx = 10;
        
          int _len_vr0 = 100;
          struct mic_vring * vr = (struct mic_vring *) malloc(_len_vr0*sizeof(struct mic_vring));
          for(int _i0 = 0; _i0 < _len_vr0; _i0++) {
              vr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_copy0 = 100;
          struct mic_copy_desc * copy = (struct mic_copy_desc *) malloc(_len_copy0*sizeof(struct mic_copy_desc));
          for(int _i0 = 0; _i0 < _len_copy0; _i0++) {
              copy[_i0].vr_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          copy[_i0].update_used = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_copy__i0__iov0 = 1;
          copy[_i0].iov = (struct TYPE_2__ *) malloc(_len_copy__i0__iov0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_copy__i0__iov0; _j0++) {
            
          }
        
          }
        
          void * len;
        
          txrx_prepare(type,tx,vr,copy,len);
          free(vr);
          for(int _aux = 0; _aux < _len_copy0; _aux++) {
          free(copy[_aux].iov);
          }
          free(copy);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int tx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_vr0 = 1;
          struct mic_vring * vr = (struct mic_vring *) malloc(_len_vr0*sizeof(struct mic_vring));
          for(int _i0 = 0; _i0 < _len_vr0; _i0++) {
              vr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_copy0 = 1;
          struct mic_copy_desc * copy = (struct mic_copy_desc *) malloc(_len_copy0*sizeof(struct mic_copy_desc));
          for(int _i0 = 0; _i0 < _len_copy0; _i0++) {
              copy[_i0].vr_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          copy[_i0].update_used = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_copy__i0__iov0 = 1;
          copy[_i0].iov = (struct TYPE_2__ *) malloc(_len_copy__i0__iov0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_copy__i0__iov0; _j0++) {
            
          }
        
          }
        
          void * len;
        
          txrx_prepare(type,tx,vr,copy,len);
          free(vr);
          for(int _aux = 0; _aux < _len_copy0; _aux++) {
          free(copy[_aux].iov);
          }
          free(copy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
