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
struct isi_format {unsigned int fourcc; } ;
struct atmel_isi {unsigned int num_user_formats; struct isi_format** user_formats; } ;

/* Variables and functions */

__attribute__((used)) static const struct isi_format *find_format_by_fourcc(struct atmel_isi *isi,
						      unsigned int fourcc)
{
	unsigned int num_formats = isi->num_user_formats;
	const struct isi_format *fmt;
	unsigned int i;

	for (i = 0; i < num_formats; i++) {
		fmt = isi->user_formats[i];
		if (fmt->fourcc == fourcc)
			return fmt;
	}

	return NULL;
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
          unsigned int fourcc = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_isi0 = 1;
          struct atmel_isi * isi = (struct atmel_isi *) malloc(_len_isi0*sizeof(struct atmel_isi));
          for(int _i0 = 0; _i0 < _len_isi0; _i0++) {
              isi[_i0].num_user_formats = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_isi__i0__user_formats0 = 1;
          isi[_i0].user_formats = (struct isi_format **) malloc(_len_isi__i0__user_formats0*sizeof(struct isi_format *));
          for(int _j0 = 0; _j0 < _len_isi__i0__user_formats0; _j0++) {
            int _len_isi__i0__user_formats1 = 1;
            isi[_i0].user_formats[_j0] = (struct isi_format *) malloc(_len_isi__i0__user_formats1*sizeof(struct isi_format));
            for(int _j1 = 0; _j1 < _len_isi__i0__user_formats1; _j1++) {
                isi[_i0].user_formats[_j0]->fourcc = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          const struct isi_format * benchRet = find_format_by_fourcc(isi,fourcc);
          for(int _aux = 0; _aux < _len_isi0; _aux++) {
          free(*(isi[_aux].user_formats));
        free(isi[_aux].user_formats);
          }
          free(isi);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
