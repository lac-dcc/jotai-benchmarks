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
struct cifs_dirent {char* name; int namelen; } ;
typedef  scalar_t__ __le16 ;

/* Variables and functions */
 scalar_t__ UNICODE_DOT ; 

__attribute__((used)) static int cifs_entry_is_dot(struct cifs_dirent *de, bool is_unicode)
{
	int rc = 0;

	if (!de->name)
		return 0;

	if (is_unicode) {
		__le16 *ufilename = (__le16 *)de->name;
		if (de->namelen == 2) {
			/* check for . */
			if (ufilename[0] == UNICODE_DOT)
				rc = 1;
		} else if (de->namelen == 4) {
			/* check for .. */
			if (ufilename[0] == UNICODE_DOT &&
			    ufilename[1] == UNICODE_DOT)
				rc = 2;
		}
	} else /* ASCII */ {
		if (de->namelen == 1) {
			if (de->name[0] == '.')
				rc = 1;
		} else if (de->namelen == 2) {
			if (de->name[0] == '.' && de->name[1] == '.')
				rc = 2;
		}
	}

	return rc;
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
          int is_unicode = 100;
          int _len_de0 = 1;
          struct cifs_dirent * de = (struct cifs_dirent *) malloc(_len_de0*sizeof(struct cifs_dirent));
          for(int _i0 = 0; _i0 < _len_de0; _i0++) {
              int _len_de__i0__name0 = 1;
          de[_i0].name = (char *) malloc(_len_de__i0__name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_de__i0__name0; _j0++) {
            de[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        de[_i0].namelen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cifs_entry_is_dot(de,is_unicode);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_de0; _aux++) {
          free(de[_aux].name);
          }
          free(de);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
