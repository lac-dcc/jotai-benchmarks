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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/  assume_utf8; } ;
typedef  TYPE_1__ pdo_odbc_stmt ;
typedef  int SWORD ;

/* Variables and functions */

__attribute__((used)) static int pdo_odbc_sqltype_is_unicode(pdo_odbc_stmt *S, SWORD sqltype)
{
	if (!S->assume_utf8) return 0;
	switch (sqltype) {
#ifdef SQL_WCHAR
		case SQL_WCHAR:
			return 1;
#endif
#ifdef SQL_WLONGVARCHAR
		case SQL_WLONGVARCHAR:
			return 1;
#endif
#ifdef SQL_WVARCHAR
		case SQL_WVARCHAR:
			return 1;
#endif
		default:
			return 0;
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
          int sqltype = 100;
          int _len_S0 = 1;
          struct TYPE_3__ * S = (struct TYPE_3__ *) malloc(_len_S0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_S0; _i0++) {
            S[_i0].assume_utf8 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pdo_odbc_sqltype_is_unicode(S,sqltype);
          printf("%d\n", benchRet); 
          free(S);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int sqltype = 10;
          int _len_S0 = 100;
          struct TYPE_3__ * S = (struct TYPE_3__ *) malloc(_len_S0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_S0; _i0++) {
            S[_i0].assume_utf8 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pdo_odbc_sqltype_is_unicode(S,sqltype);
          printf("%d\n", benchRet); 
          free(S);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
