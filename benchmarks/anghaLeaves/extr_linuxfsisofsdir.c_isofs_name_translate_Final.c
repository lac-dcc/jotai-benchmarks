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
struct iso_directory_record {char* name; int* name_len; } ;
struct inode {int dummy; } ;

/* Variables and functions */

int isofs_name_translate(struct iso_directory_record *de, char *new, struct inode *inode)
{
	char * old = de->name;
	int len = de->name_len[0];
	int i;

	for (i = 0; i < len; i++) {
		unsigned char c = old[i];
		if (!c)
			break;

		if (c >= 'A' && c <= 'Z')
			c |= 0x20;	/* lower case */

		/* Drop trailing '.;1' (ISO 9660:1988 7.5.1 requires period) */
		if (c == '.' && i == len - 3 && old[i + 1] == ';' && old[i + 2] == '1')
			break;

		/* Drop trailing ';1' */
		if (c == ';' && i == len - 2 && old[i + 1] == '1')
			break;

		/* Convert remaining ';' to '.' */
		/* Also '/' to '.' (broken Acorn-generated ISO9660 images) */
		if (c == ';' || c == '/')
			c = '.';

		new[i] = c;
	}
	return i;
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
          int _len_de0 = 1;
          struct iso_directory_record * de = (struct iso_directory_record *) malloc(_len_de0*sizeof(struct iso_directory_record));
          for(int _i0 = 0; _i0 < _len_de0; _i0++) {
              int _len_de__i0__name0 = 1;
          de[_i0].name = (char *) malloc(_len_de__i0__name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_de__i0__name0; _j0++) {
            de[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_de__i0__name_len0 = 1;
          de[_i0].name_len = (int *) malloc(_len_de__i0__name_len0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_de__i0__name_len0; _j0++) {
            de[_i0].name_len[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_new0 = 1;
          char * new = (char *) malloc(_len_new0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_new0; _i0++) {
            new[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inode0 = 1;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
            inode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = isofs_name_translate(de,new,inode);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_de0; _aux++) {
          free(de[_aux].name);
          }
          for(int _aux = 0; _aux < _len_de0; _aux++) {
          free(de[_aux].name_len);
          }
          free(de);
          free(new);
          free(inode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}