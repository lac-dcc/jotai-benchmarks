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
struct sbg_string {char* s; char* e; } ;
struct sbg_parser {char* cursor; char* end; } ;

/* Variables and functions */

__attribute__((used)) static int lex_name(struct sbg_parser *p, struct sbg_string *rs)
{
    char *s = p->cursor, *c = s;

    while (c < p->end && ((*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z')
           || (*c >= '0' && *c <= '9') || *c == '_' || *c == '-'))
        c++;
    if (c == s)
        return 0;
    rs->s = s;
    rs->e = p->cursor = c;
    return 1;
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
          int _len_p0 = 65025;
          struct sbg_parser * p = (struct sbg_parser *) malloc(_len_p0*sizeof(struct sbg_parser));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__cursor0 = 1;
          p[_i0].cursor = (char *) malloc(_len_p__i0__cursor0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_p__i0__cursor0; _j0++) {
            p[_i0].cursor[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__end0 = 1;
          p[_i0].end = (char *) malloc(_len_p__i0__end0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_p__i0__end0; _j0++) {
            p[_i0].end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_rs0 = 65025;
          struct sbg_string * rs = (struct sbg_string *) malloc(_len_rs0*sizeof(struct sbg_string));
          for(int _i0 = 0; _i0 < _len_rs0; _i0++) {
              int _len_rs__i0__s0 = 1;
          rs[_i0].s = (char *) malloc(_len_rs__i0__s0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_rs__i0__s0; _j0++) {
            rs[_i0].s[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rs__i0__e0 = 1;
          rs[_i0].e = (char *) malloc(_len_rs__i0__e0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_rs__i0__e0; _j0++) {
            rs[_i0].e[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = lex_name(p,rs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].cursor);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].end);
          }
          free(p);
          for(int _aux = 0; _aux < _len_rs0; _aux++) {
          free(rs[_aux].s);
          }
          for(int _aux = 0; _aux < _len_rs0; _aux++) {
          free(rs[_aux].e);
          }
          free(rs);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_p0 = 100;
          struct sbg_parser * p = (struct sbg_parser *) malloc(_len_p0*sizeof(struct sbg_parser));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__cursor0 = 1;
          p[_i0].cursor = (char *) malloc(_len_p__i0__cursor0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_p__i0__cursor0; _j0++) {
            p[_i0].cursor[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__end0 = 1;
          p[_i0].end = (char *) malloc(_len_p__i0__end0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_p__i0__end0; _j0++) {
            p[_i0].end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_rs0 = 100;
          struct sbg_string * rs = (struct sbg_string *) malloc(_len_rs0*sizeof(struct sbg_string));
          for(int _i0 = 0; _i0 < _len_rs0; _i0++) {
              int _len_rs__i0__s0 = 1;
          rs[_i0].s = (char *) malloc(_len_rs__i0__s0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_rs__i0__s0; _j0++) {
            rs[_i0].s[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rs__i0__e0 = 1;
          rs[_i0].e = (char *) malloc(_len_rs__i0__e0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_rs__i0__e0; _j0++) {
            rs[_i0].e[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = lex_name(p,rs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].cursor);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].end);
          }
          free(p);
          for(int _aux = 0; _aux < _len_rs0; _aux++) {
          free(rs[_aux].s);
          }
          for(int _aux = 0; _aux < _len_rs0; _aux++) {
          free(rs[_aux].e);
          }
          free(rs);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_p0 = 1;
          struct sbg_parser * p = (struct sbg_parser *) malloc(_len_p0*sizeof(struct sbg_parser));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__cursor0 = 1;
          p[_i0].cursor = (char *) malloc(_len_p__i0__cursor0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_p__i0__cursor0; _j0++) {
            p[_i0].cursor[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__end0 = 1;
          p[_i0].end = (char *) malloc(_len_p__i0__end0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_p__i0__end0; _j0++) {
            p[_i0].end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_rs0 = 1;
          struct sbg_string * rs = (struct sbg_string *) malloc(_len_rs0*sizeof(struct sbg_string));
          for(int _i0 = 0; _i0 < _len_rs0; _i0++) {
              int _len_rs__i0__s0 = 1;
          rs[_i0].s = (char *) malloc(_len_rs__i0__s0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_rs__i0__s0; _j0++) {
            rs[_i0].s[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rs__i0__e0 = 1;
          rs[_i0].e = (char *) malloc(_len_rs__i0__e0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_rs__i0__e0; _j0++) {
            rs[_i0].e[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = lex_name(p,rs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].cursor);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].end);
          }
          free(p);
          for(int _aux = 0; _aux < _len_rs0; _aux++) {
          free(rs[_aux].s);
          }
          for(int _aux = 0; _aux < _len_rs0; _aux++) {
          free(rs[_aux].e);
          }
          free(rs);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
