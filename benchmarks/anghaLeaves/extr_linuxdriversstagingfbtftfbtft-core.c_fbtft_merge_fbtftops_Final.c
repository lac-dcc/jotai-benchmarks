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

/* Type definitions */
struct fbtft_ops {scalar_t__ set_gamma; scalar_t__ set_var; scalar_t__ unregister_backlight; scalar_t__ register_backlight; scalar_t__ verify_gpios; scalar_t__ request_gpios; scalar_t__ request_gpios_match; scalar_t__ blank; scalar_t__ init_display; scalar_t__ update_display; scalar_t__ mkdirty; scalar_t__ reset; scalar_t__ set_addr_win; scalar_t__ write_register; scalar_t__ write_vmem; scalar_t__ read; scalar_t__ write; } ;

/* Variables and functions */

__attribute__((used)) static void fbtft_merge_fbtftops(struct fbtft_ops *dst, struct fbtft_ops *src)
{
	if (src->write)
		dst->write = src->write;
	if (src->read)
		dst->read = src->read;
	if (src->write_vmem)
		dst->write_vmem = src->write_vmem;
	if (src->write_register)
		dst->write_register = src->write_register;
	if (src->set_addr_win)
		dst->set_addr_win = src->set_addr_win;
	if (src->reset)
		dst->reset = src->reset;
	if (src->mkdirty)
		dst->mkdirty = src->mkdirty;
	if (src->update_display)
		dst->update_display = src->update_display;
	if (src->init_display)
		dst->init_display = src->init_display;
	if (src->blank)
		dst->blank = src->blank;
	if (src->request_gpios_match)
		dst->request_gpios_match = src->request_gpios_match;
	if (src->request_gpios)
		dst->request_gpios = src->request_gpios;
	if (src->verify_gpios)
		dst->verify_gpios = src->verify_gpios;
	if (src->register_backlight)
		dst->register_backlight = src->register_backlight;
	if (src->unregister_backlight)
		dst->unregister_backlight = src->unregister_backlight;
	if (src->set_var)
		dst->set_var = src->set_var;
	if (src->set_gamma)
		dst->set_gamma = src->set_gamma;
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
          int _len_dst0 = 1;
          struct fbtft_ops * dst = (struct fbtft_ops *) malloc(_len_dst0*sizeof(struct fbtft_ops));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].set_gamma = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].set_var = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].unregister_backlight = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].register_backlight = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].verify_gpios = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].request_gpios = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].request_gpios_match = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].blank = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].init_display = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].update_display = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].mkdirty = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].reset = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].set_addr_win = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].write_register = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].write_vmem = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].read = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].write = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          struct fbtft_ops * src = (struct fbtft_ops *) malloc(_len_src0*sizeof(struct fbtft_ops));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].set_gamma = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].set_var = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].unregister_backlight = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].register_backlight = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].verify_gpios = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].request_gpios = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].request_gpios_match = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].blank = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].init_display = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].update_display = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].mkdirty = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].reset = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].set_addr_win = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].write_register = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].write_vmem = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].read = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].write = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fbtft_merge_fbtftops(dst,src);
          free(dst);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
