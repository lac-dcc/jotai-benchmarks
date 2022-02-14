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
       0            big-arr\n\
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

/* Type definitions */
typedef  int u8 ;
typedef  scalar_t__ u32 ;

/* Variables and functions */

bool GetFractionValueFromString(
	char *szStr, u8 *pInteger, u8 *pFraction, u32 *pu4bMove
)
{
	char *szScan = szStr;

	/*  Initialize output. */
	*pu4bMove = 0;
	*pInteger = 0;
	*pFraction = 0;

	/*  Skip leading space. */
	while (*szScan != '\0' &&	(*szScan == ' ' || *szScan == '\t')) {
		++szScan;
		++(*pu4bMove);
	}

	/*  Parse each digit. */
	do {
		(*pInteger) *= 10;
		*pInteger += (*szScan - '0');

		++szScan;
		++(*pu4bMove);

		if (*szScan == '.') {
			++szScan;
			++(*pu4bMove);

			if (*szScan < '0' || *szScan > '9')
				return false;
			else {
				*pFraction = *szScan - '0';
				++szScan;
				++(*pu4bMove);
				return true;
			}
		}
	} while (*szScan >= '0' && *szScan <= '9');

	return true;
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

    // big-arr
    case 0:
    {
          int _len_szStr0 = 65025;
          char * szStr = (char *) malloc(_len_szStr0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_szStr0; _i0++) {
            szStr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pInteger0 = 65025;
          int * pInteger = (int *) malloc(_len_pInteger0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pInteger0; _i0++) {
            pInteger[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pFraction0 = 65025;
          int * pFraction = (int *) malloc(_len_pFraction0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pFraction0; _i0++) {
            pFraction[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pu4bMove0 = 65025;
          long * pu4bMove = (long *) malloc(_len_pu4bMove0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pu4bMove0; _i0++) {
            pu4bMove[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = GetFractionValueFromString(szStr,pInteger,pFraction,pu4bMove);
          printf("%d\n", benchRet); 
          free(szStr);
          free(pInteger);
          free(pFraction);
          free(pu4bMove);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
