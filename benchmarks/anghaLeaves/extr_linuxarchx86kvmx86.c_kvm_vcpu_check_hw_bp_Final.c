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
       3            empty\n\
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
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static int kvm_vcpu_check_hw_bp(unsigned long addr, u32 type, u32 dr7,
				unsigned long *db)
{
	u32 dr6 = 0;
	int i;
	u32 enable, rwlen;

	enable = dr7;
	rwlen = dr7 >> 16;
	for (i = 0; i < 4; i++, enable >>= 2, rwlen >>= 4)
		if ((enable & 3) && (rwlen & 15) == type && db[i] == addr)
			dr6 |= (1 << i);
	return dr6;
}

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
          // static_instructions_O0 : 37
          // dynamic_instructions_O0 : 98
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 49
          // ------------------------------- 
          // static_instructions_O2 : 26
          // dynamic_instructions_O2 : 26
          // ------------------------------- 
          // static_instructions_O3 : 26
          // dynamic_instructions_O3 : 26
          // ------------------------------- 
          // static_instructions_Ofast : 26
          // dynamic_instructions_Ofast : 26
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 48
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 54
          // ------------------------------- 

          unsigned long addr = 100;
        
          int type = 100;
        
          int dr7 = 100;
        
          int _len_db0 = 1;
          unsigned long * db = (unsigned long *) malloc(_len_db0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_db0; _i0++) {
            db[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = kvm_vcpu_check_hw_bp(addr,type,dr7,db);
          printf("%d\n", benchRet); 
          free(db);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 37
          // dynamic_instructions_O0 : 102
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 53
          // ------------------------------- 
          // static_instructions_O2 : 31
          // dynamic_instructions_O2 : 31
          // ------------------------------- 
          // static_instructions_O3 : 31
          // dynamic_instructions_O3 : 31
          // ------------------------------- 
          // static_instructions_Ofast : 31
          // dynamic_instructions_Ofast : 31
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 52
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 58
          // ------------------------------- 

          unsigned long addr = 255;
        
          int type = 255;
        
          int dr7 = 255;
        
          int _len_db0 = 65025;
          unsigned long * db = (unsigned long *) malloc(_len_db0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_db0; _i0++) {
            db[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = kvm_vcpu_check_hw_bp(addr,type,dr7,db);
          printf("%d\n", benchRet); 
          free(db);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 37
          // dynamic_instructions_O0 : 94
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 45
          // ------------------------------- 
          // static_instructions_O2 : 23
          // dynamic_instructions_O2 : 23
          // ------------------------------- 
          // static_instructions_O3 : 23
          // dynamic_instructions_O3 : 23
          // ------------------------------- 
          // static_instructions_Ofast : 23
          // dynamic_instructions_Ofast : 23
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 44
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 50
          // ------------------------------- 

          unsigned long addr = 10;
        
          int type = 10;
        
          int dr7 = 10;
        
          int _len_db0 = 100;
          unsigned long * db = (unsigned long *) malloc(_len_db0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_db0; _i0++) {
            db[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = kvm_vcpu_check_hw_bp(addr,type,dr7,db);
          printf("%d\n", benchRet); 
          free(db);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 37
          // dynamic_instructions_O0 : 102
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 53
          // ------------------------------- 
          // static_instructions_O2 : 31
          // dynamic_instructions_O2 : 31
          // ------------------------------- 
          // static_instructions_O3 : 31
          // dynamic_instructions_O3 : 31
          // ------------------------------- 
          // static_instructions_Ofast : 31
          // dynamic_instructions_Ofast : 31
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 52
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 58
          // ------------------------------- 

          unsigned long addr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int dr7 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_db0 = 1;
          unsigned long * db = (unsigned long *) malloc(_len_db0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_db0; _i0++) {
            db[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = kvm_vcpu_check_hw_bp(addr,type,dr7,db);
          printf("%d\n", benchRet); 
          free(db);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
