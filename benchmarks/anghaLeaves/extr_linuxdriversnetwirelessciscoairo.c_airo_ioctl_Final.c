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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct net_device {struct airo_info* ml_priv; } ;
struct ifreq {int dummy; } ;
struct TYPE_2__ {scalar_t__ event; } ;
struct airo_info {TYPE_1__ power; } ;

/* Variables and functions */
 int EOPNOTSUPP ; 

__attribute__((used)) static int airo_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
{
	int rc = 0;
	struct airo_info *ai = dev->ml_priv;

	if (ai->power.event)
		return 0;

	switch (cmd) {
#ifdef CISCO_EXT
	case AIROIDIFC:
#ifdef AIROOLDIDIFC
	case AIROOLDIDIFC:
#endif
	{
		int val = AIROMAGIC;
		aironet_ioctl com;
		if (copy_from_user(&com,rq->ifr_data,sizeof(com)))
			rc = -EFAULT;
		else if (copy_to_user(com.data,(char *)&val,sizeof(val)))
			rc = -EFAULT;
	}
	break;

	case AIROIOCTL:
#ifdef AIROOLDIOCTL
	case AIROOLDIOCTL:
#endif
		/* Get the command struct and hand it off for evaluation by
		 * the proper subfunction
		 */
	{
		aironet_ioctl com;
		if (copy_from_user(&com,rq->ifr_data,sizeof(com))) {
			rc = -EFAULT;
			break;
		}

		/* Separate R/W functions bracket legality here
		 */
		if ( com.command == AIRORSWVERSION ) {
			if (copy_to_user(com.data, swversion, sizeof(swversion)))
				rc = -EFAULT;
			else
				rc = 0;
		}
		else if ( com.command <= AIRORRID)
			rc = readrids(dev,&com);
		else if ( com.command >= AIROPCAP && com.command <= (AIROPLEAPUSR+2) )
			rc = writerids(dev,&com);
		else if ( com.command >= AIROFLSHRST && com.command <= AIRORESTART )
			rc = flashcard(dev,&com);
		else
			rc = -EINVAL;      /* Bad command in ioctl */
	}
	break;
#endif /* CISCO_EXT */

	// All other calls are currently unsupported
	default:
		rc = -EOPNOTSUPP;
	}
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
          int cmd = 100;
          int _len_dev0 = 1;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__ml_priv0 = 1;
          dev[_i0].ml_priv = (struct airo_info *) malloc(_len_dev__i0__ml_priv0*sizeof(struct airo_info));
          for(int _j0 = 0; _j0 < _len_dev__i0__ml_priv0; _j0++) {
            dev[_i0].ml_priv->power.event = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rq0 = 1;
          struct ifreq * rq = (struct ifreq *) malloc(_len_rq0*sizeof(struct ifreq));
          for(int _i0 = 0; _i0 < _len_rq0; _i0++) {
            rq[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = airo_ioctl(dev,rq,cmd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].ml_priv);
          }
          free(dev);
          free(rq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
