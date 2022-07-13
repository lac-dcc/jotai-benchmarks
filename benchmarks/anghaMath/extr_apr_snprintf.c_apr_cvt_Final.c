// ========================================================================= //

// includes
#include <math.h>
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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Variables and functions */
 int NDIG ; 

__attribute__((used)) static char *apr_cvt(double arg, int ndigits, int *decpt, int *sign, 
                     int eflag, char *buf)
{
    register int r2;
    double fi, fj;
    register char *p, *p1;
    
    if (ndigits >= NDIG - 1)
        ndigits = NDIG - 2;
    r2 = 0;
    *sign = 0;
    p = &buf[0];
    if (arg < 0) {
        *sign = 1;
        arg = -arg;
    }
    arg = modf(arg, &fi);
    p1 = &buf[NDIG];
    /*
     * Do integer part
     */
    if (fi != 0) {
        p1 = &buf[NDIG];
        while (p1 > &buf[0] && fi != 0) {
            fj = modf(fi / 10, &fi);
            *--p1 = (int) ((fj + .03) * 10) + '0';
            r2++;
        }
        while (p1 < &buf[NDIG])
            *p++ = *p1++;
    }
    else if (arg > 0) {
        while ((fj = arg * 10) < 1) {
            arg = fj;
            r2--;
        }
    }
    p1 = &buf[ndigits];
    if (eflag == 0)
        p1 += r2;
    if (p1 < &buf[0]) {
        *decpt = -ndigits;
        buf[0] = '\0';
        return (buf);
    }
    *decpt = r2;
    while (p <= p1 && p < &buf[NDIG]) {
        arg *= 10;
        arg = modf(arg, &fj);
        *p++ = (int) fj + '0';
    }
    if (p1 >= &buf[NDIG]) {
        buf[NDIG - 1] = '\0';
        return (buf);
    }
    p = p1;
    *p1 += 5;
    while (*p1 > '9') {
        *p1 = '0';
        if (p1 > buf)
            ++ * --p1;
        else {
            *p1 = '1';
            (*decpt)++;
            if (eflag == 0) {
                if (p > buf)
                    *p = '0';
                p++;
            }
        }
    }
    *p = '\0';
    return (buf);
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
          double arg = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int ndigits = 100;
          int eflag = 100;
          int _len_decpt0 = 1;
          int * decpt = (int *) malloc(_len_decpt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_decpt0; _i0++) {
            decpt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sign0 = 1;
          int * sign = (int *) malloc(_len_sign0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sign0; _i0++) {
            sign[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = apr_cvt(arg,ndigits,decpt,sign,eflag,buf);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(decpt);
          free(sign);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          double arg = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int ndigits = 255;
          int eflag = 255;
          int _len_decpt0 = 65025;
          int * decpt = (int *) malloc(_len_decpt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_decpt0; _i0++) {
            decpt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sign0 = 65025;
          int * sign = (int *) malloc(_len_sign0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sign0; _i0++) {
            sign[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = apr_cvt(arg,ndigits,decpt,sign,eflag,buf);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(decpt);
          free(sign);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          double arg = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int ndigits = 10;
          int eflag = 10;
          int _len_decpt0 = 100;
          int * decpt = (int *) malloc(_len_decpt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_decpt0; _i0++) {
            decpt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sign0 = 100;
          int * sign = (int *) malloc(_len_sign0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sign0; _i0++) {
            sign[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = apr_cvt(arg,ndigits,decpt,sign,eflag,buf);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(decpt);
          free(sign);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
