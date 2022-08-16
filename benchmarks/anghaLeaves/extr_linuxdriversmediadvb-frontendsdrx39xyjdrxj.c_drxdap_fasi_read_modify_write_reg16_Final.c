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
typedef  int /*<<< orphan*/  u32 ;
typedef  int /*<<< orphan*/  u16 ;
struct i2c_device_addr {int dummy; } ;

/* Variables and functions */
 int EIO ; 

__attribute__((used)) static int drxdap_fasi_read_modify_write_reg16(struct i2c_device_addr *dev_addr,
						    u32 waddr,
						    u32 raddr,
						    u16 wdata, u16 *rdata)
{
	int rc = -EIO;

#if (DRXDAPFASI_LONG_ADDR_ALLOWED == 1)
	if (rdata == NULL)
		return -EINVAL;

	rc = drxdap_fasi_write_reg16(dev_addr, waddr, wdata, DRXDAP_FASI_RMW);
	if (rc == 0)
		rc = drxdap_fasi_read_reg16(dev_addr, raddr, rdata, 0);
#endif

	return rc;
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
          int waddr = 100;
          int raddr = 100;
          int wdata = 100;
          int _len_dev_addr0 = 1;
          struct i2c_device_addr * dev_addr = (struct i2c_device_addr *) malloc(_len_dev_addr0*sizeof(struct i2c_device_addr));
          for(int _i0 = 0; _i0 < _len_dev_addr0; _i0++) {
            dev_addr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rdata0 = 1;
          int * rdata = (int *) malloc(_len_rdata0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rdata0; _i0++) {
            rdata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = drxdap_fasi_read_modify_write_reg16(dev_addr,waddr,raddr,wdata,rdata);
          printf("%d\n", benchRet); 
          free(dev_addr);
          free(rdata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
