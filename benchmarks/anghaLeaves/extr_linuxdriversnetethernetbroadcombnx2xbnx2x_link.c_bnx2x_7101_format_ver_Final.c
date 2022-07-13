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
       1            big-arr-10x\n\
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
typedef  char u8 ;
typedef  int u32 ;
typedef  int u16 ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int bnx2x_7101_format_ver(u32 spirom_ver, u8 *str, u16 *len)
{
	if (*len < 5)
		return -EINVAL;
	str[0] = (spirom_ver & 0xFF);
	str[1] = (spirom_ver & 0xFF00) >> 8;
	str[2] = (spirom_ver & 0xFF0000) >> 16;
	str[3] = (spirom_ver & 0xFF000000) >> 24;
	str[4] = '\0';
	*len -= 5;
	return 0;
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
          int spirom_ver = 255;
          int _len_str0 = 65025;
          char * str = (char *) malloc(_len_str0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_len0 = 65025;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bnx2x_7101_format_ver(spirom_ver,str,len);
          printf("%d\n", benchRet); 
          free(str);
          free(len);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int spirom_ver = 10;
          int _len_str0 = 100;
          char * str = (char *) malloc(_len_str0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_len0 = 100;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bnx2x_7101_format_ver(spirom_ver,str,len);
          printf("%d\n", benchRet); 
          free(str);
          free(len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
