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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int TupleDataLen; int* TupleData; } ;
typedef  TYPE_1__ tuple_t ;
struct pcmcia_device {int dummy; } ;
struct net_device {int* dev_addr; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int pcmcia_osi_mac(struct pcmcia_device *p_dev,
			  tuple_t *tuple,
			  void *priv)
{
	struct net_device *dev = priv;
	int i;

	if (tuple->TupleDataLen < 8)
		return -EINVAL;
	if (tuple->TupleData[0] != 0x04)
		return -EINVAL;
	for (i = 0; i < 6; i++)
		dev->dev_addr[i] = tuple->TupleData[i+2];
	return 0;
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
          int _len_p_dev0 = 1;
          struct pcmcia_device * p_dev = (struct pcmcia_device *) malloc(_len_p_dev0*sizeof(struct pcmcia_device));
          for(int _i0 = 0; _i0 < _len_p_dev0; _i0++) {
            p_dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tuple0 = 1;
          struct TYPE_3__ * tuple = (struct TYPE_3__ *) malloc(_len_tuple0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_tuple0; _i0++) {
            tuple[_i0].TupleDataLen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tuple__i0__TupleData0 = 1;
          tuple[_i0].TupleData = (int *) malloc(_len_tuple__i0__TupleData0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tuple__i0__TupleData0; _j0++) {
            tuple[_i0].TupleData[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * priv;
          int benchRet = pcmcia_osi_mac(p_dev,tuple,priv);
          printf("%d\n", benchRet); 
          free(p_dev);
          for(int _aux = 0; _aux < _len_tuple0; _aux++) {
          free(tuple[_aux].TupleData);
          }
          free(tuple);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p_dev0 = 65025;
          struct pcmcia_device * p_dev = (struct pcmcia_device *) malloc(_len_p_dev0*sizeof(struct pcmcia_device));
          for(int _i0 = 0; _i0 < _len_p_dev0; _i0++) {
            p_dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tuple0 = 65025;
          struct TYPE_3__ * tuple = (struct TYPE_3__ *) malloc(_len_tuple0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_tuple0; _i0++) {
            tuple[_i0].TupleDataLen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tuple__i0__TupleData0 = 1;
          tuple[_i0].TupleData = (int *) malloc(_len_tuple__i0__TupleData0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tuple__i0__TupleData0; _j0++) {
            tuple[_i0].TupleData[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * priv;
          int benchRet = pcmcia_osi_mac(p_dev,tuple,priv);
          printf("%d\n", benchRet); 
          free(p_dev);
          for(int _aux = 0; _aux < _len_tuple0; _aux++) {
          free(tuple[_aux].TupleData);
          }
          free(tuple);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p_dev0 = 100;
          struct pcmcia_device * p_dev = (struct pcmcia_device *) malloc(_len_p_dev0*sizeof(struct pcmcia_device));
          for(int _i0 = 0; _i0 < _len_p_dev0; _i0++) {
            p_dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tuple0 = 100;
          struct TYPE_3__ * tuple = (struct TYPE_3__ *) malloc(_len_tuple0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_tuple0; _i0++) {
            tuple[_i0].TupleDataLen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tuple__i0__TupleData0 = 1;
          tuple[_i0].TupleData = (int *) malloc(_len_tuple__i0__TupleData0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tuple__i0__TupleData0; _j0++) {
            tuple[_i0].TupleData[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * priv;
          int benchRet = pcmcia_osi_mac(p_dev,tuple,priv);
          printf("%d\n", benchRet); 
          free(p_dev);
          for(int _aux = 0; _aux < _len_tuple0; _aux++) {
          free(tuple[_aux].TupleData);
          }
          free(tuple);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
