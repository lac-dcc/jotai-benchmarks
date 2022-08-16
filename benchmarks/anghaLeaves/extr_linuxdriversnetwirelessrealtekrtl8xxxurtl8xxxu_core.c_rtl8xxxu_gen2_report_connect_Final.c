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
typedef  int /*<<< orphan*/  u8 ;
struct rtl8xxxu_priv {int dummy; } ;

/* Variables and functions */

void rtl8xxxu_gen2_report_connect(struct rtl8xxxu_priv *priv,
				  u8 macid, bool connect)
{
#ifdef RTL8XXXU_GEN2_REPORT_CONNECT
	/*
	 * Barry Day reports this causes issues with 8192eu and 8723bu
	 * devices reconnecting. The reason for this is unclear, but
	 * until it is better understood, leave the code in place but
	 * disabled, so it is not lost.
	 */
	struct h2c_cmd h2c;

	memset(&h2c, 0, sizeof(struct h2c_cmd));

	h2c.media_status_rpt.cmd = H2C_8723B_MEDIA_STATUS_RPT;
	if (connect)
		h2c.media_status_rpt.parm |= BIT(0);
	else
		h2c.media_status_rpt.parm &= ~BIT(0);

	rtl8xxxu_gen2_h2c_cmd(priv, &h2c, sizeof(h2c.media_status_rpt));
#endif
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
          int macid = 100;
          int connect = 100;
          int _len_priv0 = 1;
          struct rtl8xxxu_priv * priv = (struct rtl8xxxu_priv *) malloc(_len_priv0*sizeof(struct rtl8xxxu_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rtl8xxxu_gen2_report_connect(priv,macid,connect);
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int macid = 10;
          int connect = 10;
          int _len_priv0 = 100;
          struct rtl8xxxu_priv * priv = (struct rtl8xxxu_priv *) malloc(_len_priv0*sizeof(struct rtl8xxxu_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rtl8xxxu_gen2_report_connect(priv,macid,connect);
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
