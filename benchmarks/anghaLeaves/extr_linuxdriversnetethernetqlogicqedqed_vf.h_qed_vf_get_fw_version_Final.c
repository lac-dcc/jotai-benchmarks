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

/* Type definitions */
typedef  int /*<<< orphan*/  u16 ;
struct qed_hwfn {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline void qed_vf_get_fw_version(struct qed_hwfn *p_hwfn,
					 u16 *fw_major, u16 *fw_minor,
					 u16 *fw_rev, u16 *fw_eng)
{
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
          int _len_p_hwfn0 = 1;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
            p_hwfn[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fw_major0 = 1;
          int * fw_major = (int *) malloc(_len_fw_major0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fw_major0; _i0++) {
            fw_major[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fw_minor0 = 1;
          int * fw_minor = (int *) malloc(_len_fw_minor0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fw_minor0; _i0++) {
            fw_minor[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fw_rev0 = 1;
          int * fw_rev = (int *) malloc(_len_fw_rev0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fw_rev0; _i0++) {
            fw_rev[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fw_eng0 = 1;
          int * fw_eng = (int *) malloc(_len_fw_eng0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fw_eng0; _i0++) {
            fw_eng[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_vf_get_fw_version(p_hwfn,fw_major,fw_minor,fw_rev,fw_eng);
          free(p_hwfn);
          free(fw_major);
          free(fw_minor);
          free(fw_rev);
          free(fw_eng);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
