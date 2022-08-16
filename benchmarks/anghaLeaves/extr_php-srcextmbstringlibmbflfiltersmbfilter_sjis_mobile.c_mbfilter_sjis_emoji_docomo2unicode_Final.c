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

/* Variables and functions */
 int* mb_tbl_code2uni_docomo1 ; 
 int mb_tbl_code2uni_docomo1_max ; 
 int mb_tbl_code2uni_docomo1_min ; 

int
mbfilter_sjis_emoji_docomo2unicode(int s, int *snd)
{
	int w = s;
	if (s >= mb_tbl_code2uni_docomo1_min && s <= mb_tbl_code2uni_docomo1_max) {
		if (s >= mb_tbl_code2uni_docomo1_min + 0x00a2 &&
			s <= mb_tbl_code2uni_docomo1_min + 0x00ad &&
			s != mb_tbl_code2uni_docomo1_min + 0x00a3) {
			w =  0x20E3;
			*snd = mb_tbl_code2uni_docomo1[s - mb_tbl_code2uni_docomo1_min];
			if (*snd > 0xf000) {
				*snd += 0x10000;
			}
		} else {
			w = mb_tbl_code2uni_docomo1[s - mb_tbl_code2uni_docomo1_min];
			if (w > 0xf000) {
				w += 0x10000;
			} else if (w > 0xe000) { /* unsupported by Unicode 6.0 */
				w += 0xf0000;
			}
			*snd = 0;
			if (!w) {
				w = s;
			}
		}
	}

	return w;
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
          int s = 100;
          int _len_snd0 = 1;
          int * snd = (int *) malloc(_len_snd0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_snd0; _i0++) {
            snd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mbfilter_sjis_emoji_docomo2unicode(s,snd);
          printf("%d\n", benchRet); 
          free(snd);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int s = 10;
          int _len_snd0 = 100;
          int * snd = (int *) malloc(_len_snd0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_snd0; _i0++) {
            snd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mbfilter_sjis_emoji_docomo2unicode(s,snd);
          printf("%d\n", benchRet); 
          free(snd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
