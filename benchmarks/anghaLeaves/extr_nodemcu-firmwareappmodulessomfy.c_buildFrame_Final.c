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
       0            big-arr\n\
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

/* Type definitions */
typedef  int uint8_t ;
typedef  int uint64_t ;
typedef  int uint16_t ;

/* Variables and functions */

void buildFrame(uint8_t *frame, uint64_t remote, uint8_t button, uint16_t code) {
    // NODE_DBG("remote: %x\n", remote);
    // NODE_DBG("button: %x\n", button);
    // NODE_DBG("rolling code: %x\n", code);
    frame[0] = 0xA7; // Encryption key. Doesn't matter much
    frame[1] = button << 4; // Which button did you press? The 4 LSB will be the checksum
    frame[2] = code >> 8; // Rolling code (big endian)
    frame[3] = code;         // Rolling code
    frame[4] = remote >> 16; // Remote address
    frame[5] = remote >> 8; // Remote address
    frame[6] = remote;         // Remote address
    // frame[7] = 0x80;
    // frame[8] = 0x0;
    // frame[9] = 0x0;

    // NODE_DBG("Frame:\t\t\t%02x %02x %02x %02x %02x %02x %02x\n", frame[0], frame[1], frame[2], frame[3], frame[4], frame[5], frame[6]);
    // Checksum calculation: a XOR of all the nibbles
    uint8_t checksum = 0;
    for(uint8_t i = 0; i < 7; i++) {
        checksum = checksum ^ frame[i] ^ (frame[i] >> 4);
    }
    checksum &= 0b1111; // We keep the last 4 bits only

    //Checksum integration
    frame[1] |= checksum; //    If a XOR of all the nibbles is equal to 0, the blinds will consider the checksum ok.
    // NODE_DBG("With checksum:\t%02x %02x %02x %02x %02x %02x %02x\n", frame[0], frame[1], frame[2], frame[3], frame[4], frame[5], frame[6]);

    // Obfuscation: a XOR of all the uint8_ts
    for(uint8_t i = 1; i < 7; i++) {
        frame[i] ^= frame[i-1];
    }
    // NODE_DBG("Obfuscated:\t\t%02x %02x %02x %02x %02x %02x %02x\n", frame[0], frame[1], frame[2], frame[3], frame[4], frame[5], frame[6]);
}

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
          int remote = 255;
        
          int button = 255;
        
          int code = 255;
        
          int _len_frame0 = 65025;
          int * frame = (int *) malloc(_len_frame0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
            frame[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          buildFrame(frame,remote,button,code);
          free(frame);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int remote = 10;
        
          int button = 10;
        
          int code = 10;
        
          int _len_frame0 = 100;
          int * frame = (int *) malloc(_len_frame0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
            frame[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          buildFrame(frame,remote,button,code);
          free(frame);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
