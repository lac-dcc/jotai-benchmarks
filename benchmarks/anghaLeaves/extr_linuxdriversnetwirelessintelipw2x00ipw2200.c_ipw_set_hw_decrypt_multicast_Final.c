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
struct TYPE_4__ {int disable_multicast_decryption; } ;
struct ipw_priv {TYPE_2__ sys_config; TYPE_1__* ieee; } ;
struct TYPE_3__ {scalar_t__ host_encrypt; } ;

/* Variables and functions */
#define  SEC_LEVEL_0 131 
#define  SEC_LEVEL_1 130 
#define  SEC_LEVEL_2 129 
#define  SEC_LEVEL_3 128 

__attribute__((used)) static void ipw_set_hw_decrypt_multicast(struct ipw_priv *priv, int level)
{
	if (priv->ieee->host_encrypt)
		return;

	switch (level) {
	case SEC_LEVEL_3:
		priv->sys_config.disable_multicast_decryption = 0;
		break;
	case SEC_LEVEL_2:
		priv->sys_config.disable_multicast_decryption = 1;
		break;
	case SEC_LEVEL_1:
		priv->sys_config.disable_multicast_decryption = 0;
		break;
	case SEC_LEVEL_0:
		priv->sys_config.disable_multicast_decryption = 1;
		break;
	default:
		break;
	}
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
          int level = 100;
          int _len_priv0 = 1;
          struct ipw_priv * priv = (struct ipw_priv *) malloc(_len_priv0*sizeof(struct ipw_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].sys_config.disable_multicast_decryption = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__ieee0 = 1;
          priv[_i0].ieee = (struct TYPE_3__ *) malloc(_len_priv__i0__ieee0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_priv__i0__ieee0; _j0++) {
            priv[_i0].ieee->host_encrypt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ipw_set_hw_decrypt_multicast(priv,level);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].ieee);
          }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
