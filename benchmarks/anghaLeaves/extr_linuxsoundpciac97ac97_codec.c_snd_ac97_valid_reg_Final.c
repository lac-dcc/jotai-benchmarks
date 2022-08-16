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
struct snd_ac97 {int id; } ;

/* Variables and functions */
#define  AC97_ID_AD1819 145 
#define  AC97_ID_AD1881 144 
#define  AC97_ID_AD1881A 143 
#define  AC97_ID_AD1885 142 
#define  AC97_ID_AD1886 141 
#define  AC97_ID_AD1886A 140 
#define  AC97_ID_AD1887 139 
#define  AC97_ID_AK4540 138 
#define  AC97_ID_AK4542 137 
#define  AC97_ID_ST7597 136 
#define  AC97_ID_STAC9700 135 
#define  AC97_ID_STAC9704 134 
#define  AC97_ID_STAC9705 133 
#define  AC97_ID_STAC9708 132 
#define  AC97_ID_STAC9721 131 
#define  AC97_ID_STAC9744 130 
#define  AC97_ID_STAC9756 129 
#define  AC97_ID_ST_AC97_ID4 128 

__attribute__((used)) static int snd_ac97_valid_reg(struct snd_ac97 *ac97, unsigned short reg)
{
	/* filter some registers for buggy codecs */
	switch (ac97->id) {
	case AC97_ID_ST_AC97_ID4:
		if (reg == 0x08)
			return 0;
		/* fall through */
	case AC97_ID_ST7597:
		if (reg == 0x22 || reg == 0x7a)
			return 1;
		/* fall through */
	case AC97_ID_AK4540:
	case AC97_ID_AK4542:
		if (reg <= 0x1c || reg == 0x20 || reg == 0x26 || reg >= 0x7c)
			return 1;
		return 0;
	case AC97_ID_AD1819:	/* AD1819 */
	case AC97_ID_AD1881:	/* AD1881 */
	case AC97_ID_AD1881A:	/* AD1881A */
		if (reg >= 0x3a && reg <= 0x6e)	/* 0x59 */
			return 0;
		return 1;
	case AC97_ID_AD1885:	/* AD1885 */
	case AC97_ID_AD1886:	/* AD1886 */
	case AC97_ID_AD1886A:	/* AD1886A - !!verify!! --jk */
	case AC97_ID_AD1887:	/* AD1887 - !!verify!! --jk */
		if (reg == 0x5a)
			return 1;
		if (reg >= 0x3c && reg <= 0x6e)	/* 0x59 */
			return 0;
		return 1;
	case AC97_ID_STAC9700:
	case AC97_ID_STAC9704:
	case AC97_ID_STAC9705:
	case AC97_ID_STAC9708:
	case AC97_ID_STAC9721:
	case AC97_ID_STAC9744:
	case AC97_ID_STAC9756:
		if (reg <= 0x3a || reg >= 0x5a)
			return 1;
		return 0;
	}
	return 1;
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
          unsigned short reg = 100;
          int _len_ac970 = 1;
          struct snd_ac97 * ac97 = (struct snd_ac97 *) malloc(_len_ac970*sizeof(struct snd_ac97));
          for(int _i0 = 0; _i0 < _len_ac970; _i0++) {
            ac97[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = snd_ac97_valid_reg(ac97,reg);
          printf("%d\n", benchRet); 
          free(ac97);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned short reg = 10;
          int _len_ac970 = 100;
          struct snd_ac97 * ac97 = (struct snd_ac97 *) malloc(_len_ac970*sizeof(struct snd_ac97));
          for(int _i0 = 0; _i0 < _len_ac970; _i0++) {
            ac97[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = snd_ac97_valid_reg(ac97,reg);
          printf("%d\n", benchRet); 
          free(ac97);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
