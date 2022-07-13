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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int endbit; int storage; int endbyte; unsigned char* buf; } ;
typedef  TYPE_1__ qr_pack_buf ;

/* Variables and functions */

__attribute__((used)) static int qr_pack_buf_read(qr_pack_buf *_b,int _bits){
  const unsigned char *p;
  unsigned             ret;
  int                  m;
  int                  d;
  m=16-_bits;
  _bits+=_b->endbit;
  d=_b->storage-_b->endbyte;
  if(d<=2){
    /*Not the main path.*/
    if(d*8<_bits){
      _b->endbyte+=_bits>>3;
      _b->endbit=_bits&7;
      return -1;
    }
    /*Special case to avoid reading p[0] below, which might be past the end of
       the buffer; also skips some useless accounting.*/
    else if(!_bits)return 0;
  }
  p=_b->buf+_b->endbyte;
  ret=p[0]<<8+_b->endbit;
  if(_bits>8){
    ret|=p[1]<<_b->endbit;
    if(_bits>16)ret|=p[2]>>8-_b->endbit;
  }
  _b->endbyte+=_bits>>3;
  _b->endbit=_bits&7;
  return (ret&0xFFFF)>>m;
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
          int _bits = 100;
          int _len__b0 = 1;
          struct TYPE_3__ * _b = (struct TYPE_3__ *) malloc(_len__b0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len__b0; _i0++) {
            _b[_i0].endbit = ((-2 * (next_i()%2)) + 1) * next_i();
        _b[_i0].storage = ((-2 * (next_i()%2)) + 1) * next_i();
        _b[_i0].endbyte = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len__b__i0__buf0 = 1;
          _b[_i0].buf = (unsigned char *) malloc(_len__b__i0__buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len__b__i0__buf0; _j0++) {
            _b[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = qr_pack_buf_read(_b,_bits);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len__b0; _aux++) {
          free(_b[_aux].buf);
          }
          free(_b);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _bits = 255;
          int _len__b0 = 65025;
          struct TYPE_3__ * _b = (struct TYPE_3__ *) malloc(_len__b0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len__b0; _i0++) {
            _b[_i0].endbit = ((-2 * (next_i()%2)) + 1) * next_i();
        _b[_i0].storage = ((-2 * (next_i()%2)) + 1) * next_i();
        _b[_i0].endbyte = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len__b__i0__buf0 = 1;
          _b[_i0].buf = (unsigned char *) malloc(_len__b__i0__buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len__b__i0__buf0; _j0++) {
            _b[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = qr_pack_buf_read(_b,_bits);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len__b0; _aux++) {
          free(_b[_aux].buf);
          }
          free(_b);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _bits = 10;
          int _len__b0 = 100;
          struct TYPE_3__ * _b = (struct TYPE_3__ *) malloc(_len__b0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len__b0; _i0++) {
            _b[_i0].endbit = ((-2 * (next_i()%2)) + 1) * next_i();
        _b[_i0].storage = ((-2 * (next_i()%2)) + 1) * next_i();
        _b[_i0].endbyte = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len__b__i0__buf0 = 1;
          _b[_i0].buf = (unsigned char *) malloc(_len__b__i0__buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len__b__i0__buf0; _j0++) {
            _b[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = qr_pack_buf_read(_b,_bits);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len__b0; _aux++) {
          free(_b[_aux].buf);
          }
          free(_b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
