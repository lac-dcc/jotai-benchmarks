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
struct cpufreq_frequency_table {unsigned int frequency; int /*<<< orphan*/  driver_data; } ;

/* Variables and functions */
 unsigned int CPUFREQ_ENTRY_INVALID ; 

__attribute__((used)) static void freq_table_sort(struct cpufreq_frequency_table *freq_table,
		int count)
{
	int i, j, ind;
	unsigned int freq, max_freq;
	struct cpufreq_frequency_table table;

	for (i = 0; i < count - 1; i++) {
		max_freq = freq_table[i].frequency;
		ind = i;
		for (j = i + 1; j < count; j++) {
			freq = freq_table[j].frequency;
			if (freq == CPUFREQ_ENTRY_INVALID ||
					freq <= max_freq)
				continue;
			ind = j;
			max_freq = freq;
		}

		if (ind != i) {
			/* exchange the frequencies */
			table.driver_data = freq_table[i].driver_data;
			table.frequency = freq_table[i].frequency;
			freq_table[i].driver_data = freq_table[ind].driver_data;
			freq_table[i].frequency = freq_table[ind].frequency;
			freq_table[ind].driver_data = table.driver_data;
			freq_table[ind].frequency = table.frequency;
		}
	}
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
          int count = 255;
        
          int _len_freq_table0 = 65025;
          struct cpufreq_frequency_table * freq_table = (struct cpufreq_frequency_table *) malloc(_len_freq_table0*sizeof(struct cpufreq_frequency_table));
          for(int _i0 = 0; _i0 < _len_freq_table0; _i0++) {
              freq_table[_i0].frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          freq_table[_i0].driver_data = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          freq_table_sort(freq_table,count);
          free(freq_table);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int count = 10;
        
          int _len_freq_table0 = 100;
          struct cpufreq_frequency_table * freq_table = (struct cpufreq_frequency_table *) malloc(_len_freq_table0*sizeof(struct cpufreq_frequency_table));
          for(int _i0 = 0; _i0 < _len_freq_table0; _i0++) {
              freq_table[_i0].frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          freq_table[_i0].driver_data = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          freq_table_sort(freq_table,count);
          free(freq_table);
        
        break;
    }
    // empty
    case 2:
    {
          int count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_freq_table0 = 1;
          struct cpufreq_frequency_table * freq_table = (struct cpufreq_frequency_table *) malloc(_len_freq_table0*sizeof(struct cpufreq_frequency_table));
          for(int _i0 = 0; _i0 < _len_freq_table0; _i0++) {
              freq_table[_i0].frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          freq_table[_i0].driver_data = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          freq_table_sort(freq_table,count);
          free(freq_table);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
