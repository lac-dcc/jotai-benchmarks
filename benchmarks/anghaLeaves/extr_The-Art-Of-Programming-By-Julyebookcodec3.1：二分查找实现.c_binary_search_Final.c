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
       2            empty\n\
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

/* Variables and functions */

int binary_search(int array[], int n, int value)
{
	int left = 0;
	int right = n - 1;
	//如果这里是int right = n 的话，那么下面有两处地方需要修改，以保证一一对应：
	//1、下面循环的条件则是while(left < right)
	//2、循环内当 array[middle] > value 的时候，right = mid

	while (left <= right)  //循环条件，适时而变
	{
		int middle = left + ((right - left) >> 1);  //防止溢出，移位也更高效。同时，每次循环都需要更新。

		if (array[middle] > value)
		{
			right = middle - 1;  //right赋值，适时而变
		}
		else if(array[middle] < value)
		{
			left = middle + 1;
		}
		else
			return middle;
		//可能会有读者认为刚开始时就要判断相等，但毕竟数组中不相等的情况更多
		//如果每次循环都判断一下是否相等，将耗费时间
	}
	return -1;
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
          // static_instructions_O0 : 38
          // dynamic_instructions_O0 : 216
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 147
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 106
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 106
          // ------------------------------- 
          // static_instructions_Ofast : 22
          // dynamic_instructions_Ofast : 106
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 106
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 106
          // ------------------------------- 

          int n = 255;
        
          int value = 255;
        
          int _len_array0 = 65025;
          int * array = (int *) malloc(_len_array0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_array0; _i0++) {
            array[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = binary_search(array,n,value);
          printf("%d\n", benchRet); 
          free(array);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 38
          // dynamic_instructions_O0 : 116
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 79
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 58
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 58
          // ------------------------------- 
          // static_instructions_Ofast : 22
          // dynamic_instructions_Ofast : 58
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 58
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 58
          // ------------------------------- 

          int n = 10;
        
          int value = 10;
        
          int _len_array0 = 100;
          int * array = (int *) malloc(_len_array0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_array0; _i0++) {
            array[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = binary_search(array,n,value);
          printf("%d\n", benchRet); 
          free(array);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int value = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_array0 = 1;
          int * array = (int *) malloc(_len_array0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_array0; _i0++) {
            array[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = binary_search(array,n,value);
          printf("%d\n", benchRet); 
          free(array);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
