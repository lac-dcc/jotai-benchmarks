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
struct esp_algorithm {int dummy; } ;

/* Variables and functions */
#define  SADB_EALG_3DESCBC 133 
#define  SADB_EALG_DESCBC 132 
#define  SADB_EALG_NULL 131 
#define  SADB_X_EALG_AES_GCM 130 
#define  SADB_X_EALG_CHACHA20POLY1305 129 
#define  SADB_X_EALG_RIJNDAELCBC 128 
 struct esp_algorithm const aes_cbc ; 
 struct esp_algorithm const aes_gcm ; 
 struct esp_algorithm const chacha_poly ; 
 struct esp_algorithm const des3_cbc ; 
 struct esp_algorithm const des_cbc ; 
 struct esp_algorithm const null_esp ; 

const struct esp_algorithm *
esp_algorithm_lookup(int idx)
{
	switch (idx) {
	case SADB_EALG_DESCBC:
		return &des_cbc;
	case SADB_EALG_3DESCBC:
		return &des3_cbc;
	case SADB_EALG_NULL:
		return &null_esp;
	case SADB_X_EALG_RIJNDAELCBC:
		return &aes_cbc;
	case SADB_X_EALG_AES_GCM:
		return &aes_gcm;
	case SADB_X_EALG_CHACHA20POLY1305:
		return &chacha_poly;
	default:
		return NULL;
	}
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
          int idx = 100;
          const struct esp_algorithm * benchRet = esp_algorithm_lookup(idx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int idx = 255;
          const struct esp_algorithm * benchRet = esp_algorithm_lookup(idx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int idx = 10;
          const struct esp_algorithm * benchRet = esp_algorithm_lookup(idx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
