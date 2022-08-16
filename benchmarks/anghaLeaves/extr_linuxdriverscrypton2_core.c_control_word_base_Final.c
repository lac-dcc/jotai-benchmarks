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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int u64 ;

/* Variables and functions */
 int CONTROL_AUTH_TYPE_SHIFT ; 
 int CONTROL_ENCRYPT ; 
 int CONTROL_ENC_TYPE_SHIFT ; 
 int CONTROL_END_OF_BLOCK ; 
 int CONTROL_HASH_LEN_SHIFT ; 
 int CONTROL_HMAC_KEY_LEN_SHIFT ; 
 unsigned int CONTROL_LEN ; 
 int CONTROL_OPCODE_SHIFT ; 
 int CONTROL_START_OF_BLOCK ; 
 int CONTROL_STORE_FINAL_AUTH_STATE ; 

__attribute__((used)) static u64 control_word_base(unsigned int len, unsigned int hmac_key_len,
			     int enc_type, int auth_type,
			     unsigned int hash_len,
			     bool sfas, bool sob, bool eob, bool encrypt,
			     int opcode)
{
	u64 word = (len - 1) & CONTROL_LEN;

	word |= ((u64) opcode << CONTROL_OPCODE_SHIFT);
	word |= ((u64) enc_type << CONTROL_ENC_TYPE_SHIFT);
	word |= ((u64) auth_type << CONTROL_AUTH_TYPE_SHIFT);
	if (sfas)
		word |= CONTROL_STORE_FINAL_AUTH_STATE;
	if (sob)
		word |= CONTROL_START_OF_BLOCK;
	if (eob)
		word |= CONTROL_END_OF_BLOCK;
	if (encrypt)
		word |= CONTROL_ENCRYPT;
	if (hmac_key_len)
		word |= ((u64) (hmac_key_len - 1)) << CONTROL_HMAC_KEY_LEN_SHIFT;
	if (hash_len)
		word |= ((u64) (hash_len - 1)) << CONTROL_HASH_LEN_SHIFT;

	return word;
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
          unsigned int len = 100;
          unsigned int hmac_key_len = 100;
          int enc_type = 100;
          int auth_type = 100;
          unsigned int hash_len = 100;
          int sfas = 100;
          int sob = 100;
          int eob = 100;
          int encrypt = 100;
          int opcode = 100;
          int benchRet = control_word_base(len,hmac_key_len,enc_type,auth_type,hash_len,sfas,sob,eob,encrypt,opcode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int len = 255;
          unsigned int hmac_key_len = 255;
          int enc_type = 255;
          int auth_type = 255;
          unsigned int hash_len = 255;
          int sfas = 255;
          int sob = 255;
          int eob = 255;
          int encrypt = 255;
          int opcode = 255;
          int benchRet = control_word_base(len,hmac_key_len,enc_type,auth_type,hash_len,sfas,sob,eob,encrypt,opcode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int len = 10;
          unsigned int hmac_key_len = 10;
          int enc_type = 10;
          int auth_type = 10;
          unsigned int hash_len = 10;
          int sfas = 10;
          int sob = 10;
          int eob = 10;
          int encrypt = 10;
          int opcode = 10;
          int benchRet = control_word_base(len,hmac_key_len,enc_type,auth_type,hash_len,sfas,sob,eob,encrypt,opcode);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
