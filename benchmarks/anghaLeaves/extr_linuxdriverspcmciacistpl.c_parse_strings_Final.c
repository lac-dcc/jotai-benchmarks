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
       0            empty\n\
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
typedef  int u_char ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int parse_strings(u_char *p, u_char *q, int max,
			 char *s, u_char *ofs, u_char *found)
{
	int i, j, ns;

	if (p == q)
		return -EINVAL;
	ns = 0; j = 0;
	for (i = 0; i < max; i++) {
		if (*p == 0xff)
			break;
		ofs[i] = j;
		ns++;
		for (;;) {
			s[j++] = (*p == 0xff) ? '\0' : *p;
			if ((*p == '\0') || (*p == 0xff))
				break;
			if (++p == q)
				return -EINVAL;
		}
		if ((*p == 0xff) || (++p == q))
			break;
	}
	if (found) {
		*found = ns;
		return 0;
	}

	return (ns == max) ? 0 : -EINVAL;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          int max = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_p0 = 1;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_q0 = 1;
          int * q = (int *) malloc(_len_q0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_s0 = 1;
          char * s = (char *) malloc(_len_s0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_ofs0 = 1;
          int * ofs = (int *) malloc(_len_ofs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ofs0; _i0++) {
            ofs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_found0 = 1;
          int * found = (int *) malloc(_len_found0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_found0; _i0++) {
            found[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = parse_strings(p,q,max,s,ofs,found);
          printf("%d\n", benchRet); 
          free(p);
          free(q);
          free(s);
          free(ofs);
          free(found);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
