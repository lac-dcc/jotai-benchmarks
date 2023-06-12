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
struct thread {int dummy; } ;
struct symbol {int dummy; } ;
struct sample {struct symbol* sym; struct map* map; struct thread* thread; } ;
struct map {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int find_sample(struct sample *samples, size_t nr_samples,
		       struct thread *t, struct map *m, struct symbol *s)
{
	while (nr_samples--) {
		if (samples->thread == t && samples->map == m &&
		    samples->sym == s)
			return 1;
		samples++;
	}
	return 0;
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
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 3587
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 1539
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 1539
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 1539
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 1539
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 1538
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 1539
          // ------------------------------- 

          unsigned long nr_samples = 255;
        
          int _len_samples0 = 65025;
          struct sample * samples = (struct sample *) malloc(_len_samples0*sizeof(struct sample));
          for(int _i0 = 0; _i0 < _len_samples0; _i0++) {
              int _len_samples__i0__sym0 = 1;
          samples[_i0].sym = (struct symbol *) malloc(_len_samples__i0__sym0*sizeof(struct symbol));
          for(int _j0 = 0; _j0 < _len_samples__i0__sym0; _j0++) {
              samples[_i0].sym->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_samples__i0__map0 = 1;
          samples[_i0].map = (struct map *) malloc(_len_samples__i0__map0*sizeof(struct map));
          for(int _j0 = 0; _j0 < _len_samples__i0__map0; _j0++) {
              samples[_i0].map->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_samples__i0__thread0 = 1;
          samples[_i0].thread = (struct thread *) malloc(_len_samples__i0__thread0*sizeof(struct thread));
          for(int _j0 = 0; _j0 < _len_samples__i0__thread0; _j0++) {
              samples[_i0].thread->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_t0 = 65025;
          struct thread * t = (struct thread *) malloc(_len_t0*sizeof(struct thread));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              t[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_m0 = 65025;
          struct map * m = (struct map *) malloc(_len_m0*sizeof(struct map));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              m[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_s0 = 65025;
          struct symbol * s = (struct symbol *) malloc(_len_s0*sizeof(struct symbol));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              s[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = find_sample(samples,nr_samples,t,m,s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_samples0; _aux++) {
          free(samples[_aux].sym);
          }
          for(int _aux = 0; _aux < _len_samples0; _aux++) {
          free(samples[_aux].map);
          }
          for(int _aux = 0; _aux < _len_samples0; _aux++) {
          free(samples[_aux].thread);
          }
          free(samples);
          free(t);
          free(m);
          free(s);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 157
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 69
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 69
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 69
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 69
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 68
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 69
          // ------------------------------- 

          unsigned long nr_samples = 10;
        
          int _len_samples0 = 100;
          struct sample * samples = (struct sample *) malloc(_len_samples0*sizeof(struct sample));
          for(int _i0 = 0; _i0 < _len_samples0; _i0++) {
              int _len_samples__i0__sym0 = 1;
          samples[_i0].sym = (struct symbol *) malloc(_len_samples__i0__sym0*sizeof(struct symbol));
          for(int _j0 = 0; _j0 < _len_samples__i0__sym0; _j0++) {
              samples[_i0].sym->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_samples__i0__map0 = 1;
          samples[_i0].map = (struct map *) malloc(_len_samples__i0__map0*sizeof(struct map));
          for(int _j0 = 0; _j0 < _len_samples__i0__map0; _j0++) {
              samples[_i0].map->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_samples__i0__thread0 = 1;
          samples[_i0].thread = (struct thread *) malloc(_len_samples__i0__thread0*sizeof(struct thread));
          for(int _j0 = 0; _j0 < _len_samples__i0__thread0; _j0++) {
              samples[_i0].thread->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_t0 = 100;
          struct thread * t = (struct thread *) malloc(_len_t0*sizeof(struct thread));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              t[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_m0 = 100;
          struct map * m = (struct map *) malloc(_len_m0*sizeof(struct map));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              m[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_s0 = 100;
          struct symbol * s = (struct symbol *) malloc(_len_s0*sizeof(struct symbol));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              s[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = find_sample(samples,nr_samples,t,m,s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_samples0; _aux++) {
          free(samples[_aux].sym);
          }
          for(int _aux = 0; _aux < _len_samples0; _aux++) {
          free(samples[_aux].map);
          }
          for(int _aux = 0; _aux < _len_samples0; _aux++) {
          free(samples[_aux].thread);
          }
          free(samples);
          free(t);
          free(m);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
