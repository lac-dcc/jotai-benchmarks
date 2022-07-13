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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int /*<<< orphan*/  filter; } ;
struct priv {double audio_speed; int resampling_forced; TYPE_1__ sub; } ;
struct mp_filter_command {scalar_t__ type; double speed; int is_active; } ;
struct mp_filter {struct priv* priv; } ;

/* Variables and functions */
 scalar_t__ MP_FILTER_COMMAND_IS_ACTIVE ; 
 scalar_t__ MP_FILTER_COMMAND_SET_SPEED_RESAMPLE ; 

__attribute__((used)) static bool command(struct mp_filter *f, struct mp_filter_command *cmd)
{
    struct priv *p = f->priv;

    if (cmd->type == MP_FILTER_COMMAND_SET_SPEED_RESAMPLE) {
        p->audio_speed = cmd->speed;
        // If we needed resampling once, keep forcing resampling, as it might be
        // quickly changing between 1.0 and other values for A/V compensation.
        if (p->audio_speed != 1.0)
            p->resampling_forced = true;
        return true;
    }

    if (cmd->type == MP_FILTER_COMMAND_IS_ACTIVE) {
        cmd->is_active = !!p->sub.filter;
        return true;
    }

    return false;
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
          int _len_f0 = 1;
          struct mp_filter * f = (struct mp_filter *) malloc(_len_f0*sizeof(struct mp_filter));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
              int _len_f__i0__priv0 = 1;
          f[_i0].priv = (struct priv *) malloc(_len_f__i0__priv0*sizeof(struct priv));
          for(int _j0 = 0; _j0 < _len_f__i0__priv0; _j0++) {
            f[_i0].priv->audio_speed = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        f[_i0].priv->resampling_forced = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].priv->sub.filter = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cmd0 = 1;
          struct mp_filter_command * cmd = (struct mp_filter_command *) malloc(_len_cmd0*sizeof(struct mp_filter_command));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].speed = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        cmd[_i0].is_active = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = command(f,cmd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(f[_aux].priv);
          }
          free(f);
          free(cmd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_f0 = 65025;
          struct mp_filter * f = (struct mp_filter *) malloc(_len_f0*sizeof(struct mp_filter));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
              int _len_f__i0__priv0 = 1;
          f[_i0].priv = (struct priv *) malloc(_len_f__i0__priv0*sizeof(struct priv));
          for(int _j0 = 0; _j0 < _len_f__i0__priv0; _j0++) {
            f[_i0].priv->audio_speed = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        f[_i0].priv->resampling_forced = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].priv->sub.filter = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cmd0 = 65025;
          struct mp_filter_command * cmd = (struct mp_filter_command *) malloc(_len_cmd0*sizeof(struct mp_filter_command));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].speed = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        cmd[_i0].is_active = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = command(f,cmd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(f[_aux].priv);
          }
          free(f);
          free(cmd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_f0 = 100;
          struct mp_filter * f = (struct mp_filter *) malloc(_len_f0*sizeof(struct mp_filter));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
              int _len_f__i0__priv0 = 1;
          f[_i0].priv = (struct priv *) malloc(_len_f__i0__priv0*sizeof(struct priv));
          for(int _j0 = 0; _j0 < _len_f__i0__priv0; _j0++) {
            f[_i0].priv->audio_speed = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        f[_i0].priv->resampling_forced = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].priv->sub.filter = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cmd0 = 100;
          struct mp_filter_command * cmd = (struct mp_filter_command *) malloc(_len_cmd0*sizeof(struct mp_filter_command));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].speed = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        cmd[_i0].is_active = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = command(f,cmd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(f[_aux].priv);
          }
          free(f);
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
