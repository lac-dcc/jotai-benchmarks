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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {char* buffer; int line; scalar_t__ position; scalar_t__ column; int /*<<< orphan*/  state; scalar_t__ buffer_pos; void* data; int /*<<< orphan*/  get; } ;
typedef  TYPE_1__ stream_t ;
typedef  int /*<<< orphan*/  get_func ;

/* Variables and functions */
 int /*<<< orphan*/  STREAM_STATE_OK ; 

__attribute__((used)) static void
stream_init(stream_t *stream, get_func get, void *data)
{
    stream->get = get;
    stream->data = data;
    stream->buffer[0] = '\0';
    stream->buffer_pos = 0;

    stream->state = STREAM_STATE_OK;
    stream->line = 1;
    stream->column = 0;
    stream->position = 0;
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
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 27
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int get = 100;
        
          int _len_stream0 = 1;
          struct TYPE_3__ * stream = (struct TYPE_3__ *) malloc(_len_stream0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              int _len_stream__i0__buffer0 = 1;
          stream[_i0].buffer = (char *) malloc(_len_stream__i0__buffer0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_stream__i0__buffer0; _j0++) {
            stream[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stream[_i0].line = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].position = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].column = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].buffer_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].get = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * data;
        
          stream_init(stream,get,data);
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].buffer);
          }
          free(stream);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 27
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int get = 255;
        
          int _len_stream0 = 65025;
          struct TYPE_3__ * stream = (struct TYPE_3__ *) malloc(_len_stream0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              int _len_stream__i0__buffer0 = 1;
          stream[_i0].buffer = (char *) malloc(_len_stream__i0__buffer0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_stream__i0__buffer0; _j0++) {
            stream[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stream[_i0].line = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].position = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].column = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].buffer_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].get = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * data;
        
          stream_init(stream,get,data);
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].buffer);
          }
          free(stream);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 27
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int get = 10;
        
          int _len_stream0 = 100;
          struct TYPE_3__ * stream = (struct TYPE_3__ *) malloc(_len_stream0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              int _len_stream__i0__buffer0 = 1;
          stream[_i0].buffer = (char *) malloc(_len_stream__i0__buffer0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_stream__i0__buffer0; _j0++) {
            stream[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stream[_i0].line = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].position = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].column = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].buffer_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].get = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * data;
        
          stream_init(stream,get,data);
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].buffer);
          }
          free(stream);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 27
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int get = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_stream0 = 1;
          struct TYPE_3__ * stream = (struct TYPE_3__ *) malloc(_len_stream0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              int _len_stream__i0__buffer0 = 1;
          stream[_i0].buffer = (char *) malloc(_len_stream__i0__buffer0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_stream__i0__buffer0; _j0++) {
            stream[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stream[_i0].line = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].position = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].column = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].buffer_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].get = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * data;
        
          stream_init(stream,get,data);
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].buffer);
          }
          free(stream);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
