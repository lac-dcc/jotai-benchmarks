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

/* Type definitions */
typedef  int u32 ;
struct udmaspec {int tdh; int tli; int tsr; int tack; scalar_t__ tzah; scalar_t__ trp; scalar_t__ trfs; scalar_t__ tss; scalar_t__ tenv; scalar_t__ taz; scalar_t__ tmli; scalar_t__ tfs; scalar_t__ tdvh; scalar_t__ tdvs; scalar_t__ tds; scalar_t__ tcyc; scalar_t__ t2cyc; } ;
struct mpc52xx_ata_timings {int udma1; int udma2; int udma3; int udma4; int udma5; int using_udma; } ;
struct mpc52xx_ata_priv {struct udmaspec* udmaspec; struct mpc52xx_ata_timings* timings; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int
mpc52xx_ata_compute_udma_timings(struct mpc52xx_ata_priv *priv, int dev,
				 int speed)
{
	struct mpc52xx_ata_timings *t = &priv->timings[dev];
	const struct udmaspec *s = &priv->udmaspec[speed];

	if (speed < 0 || speed > 2)
		return -EINVAL;

	t->udma1 = ((u32)s->t2cyc << 24) | ((u32)s->tcyc << 16) | ((u32)s->tds << 8) | s->tdh;
	t->udma2 = ((u32)s->tdvs << 24) | ((u32)s->tdvh << 16) | ((u32)s->tfs << 8) | s->tli;
	t->udma3 = ((u32)s->tmli << 24) | ((u32)s->taz << 16) | ((u32)s->tenv << 8) | s->tsr;
	t->udma4 = ((u32)s->tss << 24) | ((u32)s->trfs << 16) | ((u32)s->trp << 8) | s->tack;
	t->udma5 = (u32)s->tzah << 24;
	t->using_udma = 1;

	return 0;
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
          int dev = 100;
        
          int speed = 100;
        
          int _len_priv0 = 1;
          struct mpc52xx_ata_priv * priv = (struct mpc52xx_ata_priv *) malloc(_len_priv0*sizeof(struct mpc52xx_ata_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__udmaspec0 = 1;
          priv[_i0].udmaspec = (struct udmaspec *) malloc(_len_priv__i0__udmaspec0*sizeof(struct udmaspec));
          for(int _j0 = 0; _j0 < _len_priv__i0__udmaspec0; _j0++) {
              priv[_i0].udmaspec->tdh = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tli = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tsr = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tack = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tzah = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->trp = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->trfs = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tss = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tenv = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->taz = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tmli = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tfs = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tdvh = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tdvs = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tds = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tcyc = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->t2cyc = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_priv__i0__timings0 = 1;
          priv[_i0].timings = (struct mpc52xx_ata_timings *) malloc(_len_priv__i0__timings0*sizeof(struct mpc52xx_ata_timings));
          for(int _j0 = 0; _j0 < _len_priv__i0__timings0; _j0++) {
              priv[_i0].timings->udma1 = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].timings->udma2 = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].timings->udma3 = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].timings->udma4 = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].timings->udma5 = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].timings->using_udma = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = mpc52xx_ata_compute_udma_timings(priv,dev,speed);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].udmaspec);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].timings);
          }
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int dev = 255;
        
          int speed = 255;
        
          int _len_priv0 = 65025;
          struct mpc52xx_ata_priv * priv = (struct mpc52xx_ata_priv *) malloc(_len_priv0*sizeof(struct mpc52xx_ata_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__udmaspec0 = 1;
          priv[_i0].udmaspec = (struct udmaspec *) malloc(_len_priv__i0__udmaspec0*sizeof(struct udmaspec));
          for(int _j0 = 0; _j0 < _len_priv__i0__udmaspec0; _j0++) {
              priv[_i0].udmaspec->tdh = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tli = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tsr = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tack = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tzah = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->trp = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->trfs = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tss = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tenv = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->taz = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tmli = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tfs = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tdvh = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tdvs = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tds = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tcyc = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->t2cyc = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_priv__i0__timings0 = 1;
          priv[_i0].timings = (struct mpc52xx_ata_timings *) malloc(_len_priv__i0__timings0*sizeof(struct mpc52xx_ata_timings));
          for(int _j0 = 0; _j0 < _len_priv__i0__timings0; _j0++) {
              priv[_i0].timings->udma1 = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].timings->udma2 = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].timings->udma3 = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].timings->udma4 = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].timings->udma5 = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].timings->using_udma = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = mpc52xx_ata_compute_udma_timings(priv,dev,speed);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].udmaspec);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].timings);
          }
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dev = 10;
        
          int speed = 10;
        
          int _len_priv0 = 100;
          struct mpc52xx_ata_priv * priv = (struct mpc52xx_ata_priv *) malloc(_len_priv0*sizeof(struct mpc52xx_ata_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__udmaspec0 = 1;
          priv[_i0].udmaspec = (struct udmaspec *) malloc(_len_priv__i0__udmaspec0*sizeof(struct udmaspec));
          for(int _j0 = 0; _j0 < _len_priv__i0__udmaspec0; _j0++) {
              priv[_i0].udmaspec->tdh = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tli = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tsr = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tack = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tzah = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->trp = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->trfs = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tss = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tenv = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->taz = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tmli = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tfs = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tdvh = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tdvs = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tds = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tcyc = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->t2cyc = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_priv__i0__timings0 = 1;
          priv[_i0].timings = (struct mpc52xx_ata_timings *) malloc(_len_priv__i0__timings0*sizeof(struct mpc52xx_ata_timings));
          for(int _j0 = 0; _j0 < _len_priv__i0__timings0; _j0++) {
              priv[_i0].timings->udma1 = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].timings->udma2 = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].timings->udma3 = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].timings->udma4 = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].timings->udma5 = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].timings->using_udma = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = mpc52xx_ata_compute_udma_timings(priv,dev,speed);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].udmaspec);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].timings);
          }
          free(priv);
        
        break;
    }
    // empty
    case 3:
    {
          int dev = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int speed = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_priv0 = 1;
          struct mpc52xx_ata_priv * priv = (struct mpc52xx_ata_priv *) malloc(_len_priv0*sizeof(struct mpc52xx_ata_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__udmaspec0 = 1;
          priv[_i0].udmaspec = (struct udmaspec *) malloc(_len_priv__i0__udmaspec0*sizeof(struct udmaspec));
          for(int _j0 = 0; _j0 < _len_priv__i0__udmaspec0; _j0++) {
              priv[_i0].udmaspec->tdh = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tli = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tsr = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tack = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tzah = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->trp = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->trfs = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tss = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tenv = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->taz = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tmli = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tfs = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tdvh = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tdvs = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tds = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->tcyc = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].udmaspec->t2cyc = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_priv__i0__timings0 = 1;
          priv[_i0].timings = (struct mpc52xx_ata_timings *) malloc(_len_priv__i0__timings0*sizeof(struct mpc52xx_ata_timings));
          for(int _j0 = 0; _j0 < _len_priv__i0__timings0; _j0++) {
              priv[_i0].timings->udma1 = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].timings->udma2 = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].timings->udma3 = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].timings->udma4 = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].timings->udma5 = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].timings->using_udma = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = mpc52xx_ata_compute_udma_timings(priv,dev,speed);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].udmaspec);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].timings);
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
