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
       0            big-arr\n\
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
typedef  int dword ;
typedef  int byte ;

/* Variables and functions */

__attribute__((used)) static byte chi_to_channel(byte *chi, dword *pchannelmap)
{
	int p;
	int i;
	dword map;
	byte excl;
	byte ofs;
	byte ch;

	if (pchannelmap) *pchannelmap = 0;
	if (!chi[0]) return 0xff;
	excl = 0;

	if (chi[1] & 0x20) {
		if (chi[0] == 1 && chi[1] == 0xac) return 0xfd; /* exclusive d-channel */
		for (i = 1; i < chi[0] && !(chi[i] & 0x80); i++);
		if (i == chi[0] || !(chi[i] & 0x80)) return 0xfe;
		if ((chi[1] | 0xc8) != 0xe9) return 0xfe;
		if (chi[1] & 0x08) excl = 0x40;

		/* int. id present */
		if (chi[1] & 0x40) {
			p = i + 1;
			for (i = p; i < chi[0] && !(chi[i] & 0x80); i++);
			if (i == chi[0] || !(chi[i] & 0x80)) return 0xfe;
		}

		/* coding standard, Number/Map, Channel Type */
		p = i + 1;
		for (i = p; i < chi[0] && !(chi[i] & 0x80); i++);
		if (i == chi[0] || !(chi[i] & 0x80)) return 0xfe;
		if ((chi[p] | 0xd0) != 0xd3) return 0xfe;

		/* Number/Map */
		if (chi[p] & 0x10) {

			/* map */
			if ((chi[0] - p) == 4) ofs = 0;
			else if ((chi[0] - p) == 3) ofs = 1;
			else return 0xfe;
			ch = 0;
			map = 0;
			for (i = 0; i < 4 && p < chi[0]; i++) {
				p++;
				ch += 8;
				map <<= 8;
				if (chi[p]) {
					for (ch = 0; !(chi[p] & (1 << ch)); ch++);
					map |= chi[p];
				}
			}
			ch += ofs;
			map <<= ofs;
		}
		else {

			/* number */
			p = i + 1;
			ch = chi[p] & 0x3f;
			if (pchannelmap) {
				if ((byte)(chi[0] - p) > 30) return 0xfe;
				map = 0;
				for (i = p; i <= chi[0]; i++) {
					if ((chi[i] & 0x7f) > 31) return 0xfe;
					map |= (1L << (chi[i] & 0x7f));
				}
			}
			else {
				if (p != chi[0]) return 0xfe;
				if (ch > 31) return 0xfe;
				map = (1L << ch);
			}
			if (chi[p] & 0x40) return 0xfe;
		}
		if (pchannelmap) *pchannelmap = map;
		else if (map != ((dword)(1L << ch))) return 0xfe;
		return (byte)(excl | ch);
	}
	else {  /* not PRI */
		for (i = 1; i < chi[0] && !(chi[i] & 0x80); i++);
		if (i != chi[0] || !(chi[i] & 0x80)) return 0xfe;
		if (chi[1] & 0x08) excl = 0x40;

		switch (chi[1] | 0x98) {
		case 0x98: return 0;
		case 0x99:
			if (pchannelmap) *pchannelmap = 2;
			return excl | 1;
		case 0x9a:
			if (pchannelmap) *pchannelmap = 4;
			return excl | 2;
		case 0x9b: return 0xff;
		case 0x9c: return 0xfd; /* d-ch */
		default: return 0xfe;
		}
	}
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 37
          // dynamic_instructions_O0 : 37
          // ------------------------------- 
          // static_instructions_O1 : 26
          // dynamic_instructions_O1 : 26
          // ------------------------------- 
          // static_instructions_O2 : 31
          // dynamic_instructions_O2 : 31
          // ------------------------------- 
          // static_instructions_O3 : 31
          // dynamic_instructions_O3 : 31
          // ------------------------------- 
          // static_instructions_Ofast : 31
          // dynamic_instructions_Ofast : 31
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 29
          // ------------------------------- 
          // static_instructions_Oz : 29
          // dynamic_instructions_Oz : 29
          // ------------------------------- 

          int _len_chi0 = 65025;
          int * chi = (int *) malloc(_len_chi0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_chi0; _i0++) {
            chi[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pchannelmap0 = 65025;
          int * pchannelmap = (int *) malloc(_len_pchannelmap0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pchannelmap0; _i0++) {
            pchannelmap[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = chi_to_channel(chi,pchannelmap);
          printf("%d\n", benchRet); 
          free(chi);
          free(pchannelmap);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 37
          // dynamic_instructions_O0 : 37
          // ------------------------------- 
          // static_instructions_O1 : 26
          // dynamic_instructions_O1 : 26
          // ------------------------------- 
          // static_instructions_O2 : 31
          // dynamic_instructions_O2 : 31
          // ------------------------------- 
          // static_instructions_O3 : 31
          // dynamic_instructions_O3 : 31
          // ------------------------------- 
          // static_instructions_Ofast : 31
          // dynamic_instructions_Ofast : 31
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 29
          // ------------------------------- 
          // static_instructions_Oz : 29
          // dynamic_instructions_Oz : 29
          // ------------------------------- 

          int _len_chi0 = 100;
          int * chi = (int *) malloc(_len_chi0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_chi0; _i0++) {
            chi[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pchannelmap0 = 100;
          int * pchannelmap = (int *) malloc(_len_pchannelmap0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pchannelmap0; _i0++) {
            pchannelmap[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = chi_to_channel(chi,pchannelmap);
          printf("%d\n", benchRet); 
          free(chi);
          free(pchannelmap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
